// Fill out your copyright notice in the Description page of Project Settings.

#include "ResourceSubsystem.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

void UResourceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	// Initialize all resource types with default values
	for (int32 i = 1; i < (int32)EResourceType::MAX; ++i)
	{
		EResourceType ResourceType = (EResourceType)i;
		InitializeResource(ResourceType, 0.0f, 999999.0f, false);
	}
	
	UE_LOG(LogTemp, Log, TEXT("ResourceSubsystem initialized with %d resource types"), (int32)EResourceType::MAX - 1);
}

void UResourceSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Log, TEXT("ResourceSubsystem deinitialized"));
}

void UResourceSubsystem::AddResource(EResourceType ResourceType, float Amount)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	if (Amount <= 0.0f)
	{
		FString ErrorMsg = FString::Printf(TEXT("Cannot add non-positive amount: %f"), Amount);
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	// Get or create resource data
	FResourceData& ResourceData = ResourceMap.FindOrAdd(ResourceType);
	
	// Add the amount
	ResourceData.Amount += Amount;
	
	// Clamp to max amount
	ClampResourceAmount(ResourceType);
	
	// Broadcast the change
	OnResourceChanged.Broadcast(FName(*GetResourceTypeName(ResourceType)), ResourceData.Amount);
	
	UE_LOG(LogTemp, Log, TEXT("Added %f %s. New amount: %f"), Amount, *GetResourceTypeName(ResourceType), ResourceData.Amount);
}

bool UResourceSubsystem::TrySubtractResource(EResourceType ResourceType, float Amount)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return false;
	}

	if (Amount <= 0.0f)
	{
		FString ErrorMsg = FString::Printf(TEXT("Cannot subtract non-positive amount: %f"), Amount);
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return false;
	}

	// Get resource data
	FResourceData* ResourceData = ResourceMap.Find(ResourceType);
	if (!ResourceData)
	{
		FString ErrorMsg = FString::Printf(TEXT("Resource %s not found"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return false;
	}

	// Check if we have enough resources
	if (!ResourceData->bCanGoNegative && ResourceData->Amount < Amount)
	{
		FString ErrorMsg = FString::Printf(TEXT("Insufficient %s. Required: %f, Available: %f"), 
			*GetResourceTypeName(ResourceType), Amount, ResourceData->Amount);
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return false;
	}

	// Subtract the amount
	ResourceData->Amount -= Amount;
	
	// Clamp to max amount (in case of negative values)
	ClampResourceAmount(ResourceType);
	
	// Broadcast the change
	OnResourceChanged.Broadcast(FName(*GetResourceTypeName(ResourceType)), ResourceData->Amount);
	
	UE_LOG(LogTemp, Log, TEXT("Subtracted %f %s. New amount: %f"), Amount, *GetResourceTypeName(ResourceType), ResourceData->Amount);
	return true;
}

void UResourceSubsystem::SetResource(EResourceType ResourceType, float Amount)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	// Get or create resource data
	FResourceData& ResourceData = ResourceMap.FindOrAdd(ResourceType);
	
	// Set the amount
	ResourceData.Amount = Amount;
	
	// Clamp to max amount
	ClampResourceAmount(ResourceType);
	
	// Broadcast the change
	OnResourceChanged.Broadcast(FName(*GetResourceTypeName(ResourceType)), ResourceData.Amount);
	
	UE_LOG(LogTemp, Log, TEXT("Set %s to %f"), *GetResourceTypeName(ResourceType), ResourceData.Amount);
}

float UResourceSubsystem::GetResourceAmount(EResourceType ResourceType) const
{
	if (!IsValidResourceType(ResourceType))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		return 0.0f;
	}

	const FResourceData* ResourceData = ResourceMap.Find(ResourceType);
	return ResourceData ? ResourceData->Amount : 0.0f;
}

bool UResourceSubsystem::HasEnoughResource(EResourceType ResourceType, float RequiredAmount) const
{
	if (!IsValidResourceType(ResourceType))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		return false;
	}

	if (RequiredAmount <= 0.0f)
	{
		return true; // Always have enough of nothing
	}

	const FResourceData* ResourceData = ResourceMap.Find(ResourceType);
	return ResourceData ? ResourceData->Amount >= RequiredAmount : false;
}

bool UResourceSubsystem::CanAffordResources(const TMap<EResourceType, float>& RequiredResources) const
{
	for (const auto& Pair : RequiredResources)
	{
		if (!HasEnoughResource(Pair.Key, Pair.Value))
		{
			return false;
		}
	}
	return true;
}

bool UResourceSubsystem::TrySpendResources(const TMap<EResourceType, float>& RequiredResources)
{
	// First check if we can afford all resources
	if (!CanAffordResources(RequiredResources))
	{
		FString ErrorMsg = TEXT("Cannot afford required resources");
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return false;
	}

	// If we can afford them, spend them
	for (const auto& Pair : RequiredResources)
	{
		if (!TrySubtractResource(Pair.Key, Pair.Value))
		{
			// This shouldn't happen since we checked CanAffordResources first
			// But if it does, we need to rollback any changes made so far
			UE_LOG(LogTemp, Error, TEXT("Failed to subtract resource %s during batch operation"), *GetResourceTypeName(Pair.Key));
			return false;
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Successfully spent batch resources"));
	return true;
}

void UResourceSubsystem::AddResources(const TMap<EResourceType, float>& ResourcesToAdd)
{
	for (const auto& Pair : ResourcesToAdd)
	{
		AddResource(Pair.Key, Pair.Value);
	}
}

void UResourceSubsystem::SetResourceMaxAmount(EResourceType ResourceType, float MaxAmount)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	if (MaxAmount < 0.0f)
	{
		FString ErrorMsg = FString::Printf(TEXT("Max amount cannot be negative: %f"), MaxAmount);
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	FResourceData& ResourceData = ResourceMap.FindOrAdd(ResourceType);
	ResourceData.MaxAmount = MaxAmount;
	
	// Clamp current amount to new max
	ClampResourceAmount(ResourceType);
	
	UE_LOG(LogTemp, Log, TEXT("Set max amount for %s to %f"), *GetResourceTypeName(ResourceType), MaxAmount);
}

void UResourceSubsystem::SetResourceCanGoNegative(EResourceType ResourceType, bool bCanGoNegative)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	FResourceData& ResourceData = ResourceMap.FindOrAdd(ResourceType);
	ResourceData.bCanGoNegative = bCanGoNegative;
	
	UE_LOG(LogTemp, Log, TEXT("Set %s can go negative to %s"), *GetResourceTypeName(ResourceType), bCanGoNegative ? TEXT("true") : TEXT("false"));
}

void UResourceSubsystem::InitializeResource(EResourceType ResourceType, float InitialAmount, float MaxAmount, bool bCanGoNegative)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	FResourceData& ResourceData = ResourceMap.FindOrAdd(ResourceType);
	ResourceData.Amount = FMath::Max(0.0f, InitialAmount);
	ResourceData.MaxAmount = FMath::Max(0.0f, MaxAmount);
	ResourceData.bCanGoNegative = bCanGoNegative;
	
	// Clamp to max amount
	ClampResourceAmount(ResourceType);
	
	UE_LOG(LogTemp, Log, TEXT("Initialized %s: Amount=%f, Max=%f, CanGoNegative=%s"), 
		*GetResourceTypeName(ResourceType), ResourceData.Amount, ResourceData.MaxAmount, 
		bCanGoNegative ? TEXT("true") : TEXT("false"));
}

TArray<EResourceType> UResourceSubsystem::GetAllResourceTypes() const
{
	TArray<EResourceType> ResourceTypes;
	for (int32 i = 1; i < (int32)EResourceType::MAX; ++i)
	{
		ResourceTypes.Add((EResourceType)i);
	}
	return ResourceTypes;
}

TMap<EResourceType, float> UResourceSubsystem::GetAllResourceAmounts() const
{
	TMap<EResourceType, float> ResourceAmounts;
	for (const auto& Pair : ResourceMap)
	{
		ResourceAmounts.Add(Pair.Key, Pair.Value.Amount);
	}
	return ResourceAmounts;
}

void UResourceSubsystem::ResetAllResources()
{
	for (auto& Pair : ResourceMap)
	{
		Pair.Value.Amount = 0.0f;
		OnResourceChanged.Broadcast(FName(*GetResourceTypeName(Pair.Key)), 0.0f);
	}
	
	UE_LOG(LogTemp, Log, TEXT("Reset all resources"));
}

void UResourceSubsystem::ResetResource(EResourceType ResourceType)
{
	if (!IsValidResourceType(ResourceType))
	{
		FString ErrorMsg = FString::Printf(TEXT("Invalid resource type: %s"), *GetResourceTypeName(ResourceType));
		OnResourceOperationFailed.Broadcast(ErrorMsg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ErrorMsg);
		return;
	}

	FResourceData* ResourceData = ResourceMap.Find(ResourceType);
	if (ResourceData)
	{
		ResourceData->Amount = 0.0f;
		OnResourceChanged.Broadcast(FName(*GetResourceTypeName(ResourceType)), 0.0f);
		UE_LOG(LogTemp, Log, TEXT("Reset %s to 0"), *GetResourceTypeName(ResourceType));
	}
}

void UResourceSubsystem::PrintAllResources() const
{
	UE_LOG(LogTemp, Log, TEXT("=== Current Resources ==="));
	for (const auto& Pair : ResourceMap)
	{
		UE_LOG(LogTemp, Log, TEXT("%s: %f (Max: %f, CanGoNegative: %s)"), 
			*GetResourceTypeName(Pair.Key), 
			Pair.Value.Amount, 
			Pair.Value.MaxAmount,
			Pair.Value.bCanGoNegative ? TEXT("true") : TEXT("false"));
	}
	UE_LOG(LogTemp, Log, TEXT("========================"));
}

void UResourceSubsystem::ClampResourceAmount(EResourceType ResourceType)
{
	FResourceData* ResourceData = ResourceMap.Find(ResourceType);
	if (ResourceData)
	{
		ResourceData->Amount = FMath::Clamp(ResourceData->Amount, 
			ResourceData->bCanGoNegative ? -ResourceData->MaxAmount : 0.0f, 
			ResourceData->MaxAmount);
	}
}

bool UResourceSubsystem::IsValidResourceType(EResourceType ResourceType) const
{
	return ResourceType != EResourceType::None && ResourceType < EResourceType::MAX;
}

FString UResourceSubsystem::GetResourceTypeName(EResourceType ResourceType) const
{
	switch (ResourceType)
	{
	case EResourceType::None:
		return TEXT("None");
	case EResourceType::Biomass:
		return TEXT("Biomass");
	case EResourceType::Hide:
		return TEXT("Hide");
	case EResourceType::Bones:
		return TEXT("Bones");
	case EResourceType::Tendons:
		return TEXT("Tendons");
	case EResourceType::Carapace:
		return TEXT("Carapace");
	case EResourceType::Organs:
		return TEXT("Organs");
	case EResourceType::Scales:
		return TEXT("Scales");
	case EResourceType::Keratin:
		return TEXT("Keratin");
	default:
		return TEXT("Unknown");
	}
}

