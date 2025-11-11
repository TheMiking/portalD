// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "ResourceSubsystem.generated.h"

// Forward declarations
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceChanged, FName, ResourceType, float, NewAmount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceOperationFailed, FString, ErrorMessage);

/**
 * Resource types for the incremental game
 */
UENUM(BlueprintType)
enum class EResourceType : uint8
{
	None = 0,
	Biomass = 1,
	Hide = 2,
	Bones = 3,
	Tendons = 4,
	Carapace = 5,
	Organs = 6,
	Scales = 7,
	Keratin = 8,
	// Add more resource types as needed
	MAX UMETA(Hidden)
};

/**
 * Resource data structure for tracking individual resources
 */
USTRUCT(BlueprintType)
struct FResourceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	float Amount = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	float MaxAmount = 999999.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	bool bCanGoNegative = false;

	FResourceData()
	{
		Amount = 0.0f;
		MaxAmount = 999999.0f;
		bCanGoNegative = false;
	}

	FResourceData(float InAmount, float InMaxAmount = 999999.0f, bool bInCanGoNegative = false)
		: Amount(InAmount), MaxAmount(InMaxAmount), bCanGoNegative(bInCanGoNegative)
	{
	}
};

/**
 * World subsystem for managing game resources in an incremental game
 * Optimized for Blueprint usage with comprehensive resource tracking
 */
UCLASS(BlueprintType)
class PORTALDEFENSE_API UResourceSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem

	// Events for Blueprint binding
	UPROPERTY(BlueprintAssignable, Category = "Resource Events")
	FOnResourceChanged OnResourceChanged;

	UPROPERTY(BlueprintAssignable, Category = "Resource Events")
	FOnResourceOperationFailed OnResourceOperationFailed;

	// Resource Management Functions
	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	void AddResource(EResourceType ResourceType, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	bool TrySubtractResource(EResourceType ResourceType, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	void SetResource(EResourceType ResourceType, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	float GetResourceAmount(EResourceType ResourceType) const;

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	bool HasEnoughResource(EResourceType ResourceType, float RequiredAmount) const;

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	bool CanAffordResources(const TMap<EResourceType, float>& RequiredResources) const;

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	bool TrySpendResources(const TMap<EResourceType, float>& RequiredResources);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	void AddResources(const TMap<EResourceType, float>& ResourcesToAdd);

	// Resource Configuration
	UFUNCTION(BlueprintCallable, Category = "Resource Configuration", CallInEditor)
	void SetResourceMaxAmount(EResourceType ResourceType, float MaxAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Configuration", CallInEditor)
	void SetResourceCanGoNegative(EResourceType ResourceType, bool bCanGoNegative);

	UFUNCTION(BlueprintCallable, Category = "Resource Configuration", CallInEditor)
	void InitializeResource(EResourceType ResourceType, float InitialAmount = 0.0f, float MaxAmount = 999999.0f, bool bCanGoNegative = false);

	// Utility Functions
	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	TArray<EResourceType> GetAllResourceTypes() const;

	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	TMap<EResourceType, float> GetAllResourceAmounts() const;

	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	void ResetAllResources();

	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	void ResetResource(EResourceType ResourceType);

	// Debug Functions
	UFUNCTION(BlueprintCallable, Category = "Debug", CallInEditor)
	void PrintAllResources() const;

private:
	// Internal resource storage
	UPROPERTY()
	TMap<EResourceType, FResourceData> ResourceMap;

	// Helper functions
	void ClampResourceAmount(EResourceType ResourceType);
	bool IsValidResourceType(EResourceType ResourceType) const;
	FString GetResourceTypeName(EResourceType ResourceType) const;
};