// Fill out your copyright notice in the Description page of Project Settings.

#include "ResourceBlueprintLibrary.h"
#include "Engine/World.h"

void UResourceBlueprintLibrary::AddBiomass(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Biomass, Amount);
	}
}

void UResourceBlueprintLibrary::AddHide(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Hide, Amount);
	}
}

void UResourceBlueprintLibrary::AddBones(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Bones, Amount);
	}
}

void UResourceBlueprintLibrary::AddTendons(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Tendons, Amount);
	}
}

void UResourceBlueprintLibrary::AddCarapace(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Carapace, Amount);
	}
}

void UResourceBlueprintLibrary::AddOrgans(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Organs, Amount);
	}
}

void UResourceBlueprintLibrary::AddScales(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Scales, Amount);
	}
}

void UResourceBlueprintLibrary::AddKeratin(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->AddResource(EResourceType::Keratin, Amount);
	}
}

float UResourceBlueprintLibrary::GetBiomass(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Biomass);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetHide(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Hide);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetBones(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Bones);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetTendons(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Tendons);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetCarapace(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Carapace);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetOrgans(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Organs);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetScales(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Scales);
	}
	return 0.0f;
}

float UResourceBlueprintLibrary::GetKeratin(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->GetResourceAmount(EResourceType::Keratin);
	}
	return 0.0f;
}

bool UResourceBlueprintLibrary::HasEnoughBiomass(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Biomass, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughHide(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Hide, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughBones(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Bones, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughTendons(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Tendons, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughCarapace(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Carapace, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughOrgans(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Organs, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughScales(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Scales, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::HasEnoughKeratin(UWorld* World, float RequiredAmount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->HasEnoughResource(EResourceType::Keratin, RequiredAmount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendBiomass(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Biomass, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendHide(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Hide, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendBones(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Bones, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendTendons(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Tendons, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendCarapace(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Carapace, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendOrgans(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Organs, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendScales(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Scales, Amount);
	}
	return false;
}

bool UResourceBlueprintLibrary::TrySpendKeratin(UWorld* World, float Amount)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		return ResourceSubsystem->TrySubtractResource(EResourceType::Keratin, Amount);
	}
	return false;
}

UResourceSubsystem* UResourceBlueprintLibrary::GetResourceSubsystem(UWorld* World)
{
	return GetResourceSubsystemInternal(World);
}

void UResourceBlueprintLibrary::PrintAllResources(UWorld* World)
{
	if (UResourceSubsystem* ResourceSubsystem = GetResourceSubsystemInternal(World))
	{
		ResourceSubsystem->PrintAllResources();
	}
}

UResourceSubsystem* UResourceBlueprintLibrary::GetResourceSubsystemInternal(UWorld* World)
{
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null in ResourceBlueprintLibrary"));
		return nullptr;
	}

	return World->GetSubsystem<UResourceSubsystem>();
}
