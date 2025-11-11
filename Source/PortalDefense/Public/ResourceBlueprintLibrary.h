// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResourceSubsystem.h"
#include "ResourceBlueprintLibrary.generated.h"

/**
 * Blueprint function library for easy access to ResourceSubsystem functions
 * This makes it even easier to use the resource system from Blueprints
 */
UCLASS()
class PORTALDEFENSE_API UResourceBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Convenience functions for common operations
	
	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddBiomass(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddHide(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddBones(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddTendons(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddCarapace(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddOrgans(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddScales(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static void AddKeratin(UWorld* World, float Amount);

	// Getter convenience functions
	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetBiomass(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetHide(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetBones(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetTendons(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetCarapace(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetOrgans(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetScales(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static float GetKeratin(UWorld* World);

	// Check functions
	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughBiomass(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughHide(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughBones(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughTendons(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughCarapace(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughOrgans(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughScales(UWorld* World, float RequiredAmount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool HasEnoughKeratin(UWorld* World, float RequiredAmount);

	// Spend functions
	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendBiomass(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendHide(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendBones(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendTendons(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendCarapace(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendOrgans(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendScales(UWorld* World, float Amount);

	UFUNCTION(BlueprintCallable, Category = "Resource Management", CallInEditor)
	static bool TrySpendKeratin(UWorld* World, float Amount);

	// Utility functions
	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	static UResourceSubsystem* GetResourceSubsystem(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = "Resource Utility", CallInEditor)
	static void PrintAllResources(UWorld* World);

private:
	// Helper function to get the resource subsystem
	static UResourceSubsystem* GetResourceSubsystemInternal(UWorld* World);
};
