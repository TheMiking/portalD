// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceBlueprintLibrary.h"

#ifdef PORTALDEFENSE_ResourceBlueprintLibrary_generated_h
#error "ResourceBlueprintLibrary.generated.h already included, missing '#pragma once' in ResourceBlueprintLibrary.h"
#endif
#define PORTALDEFENSE_ResourceBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UResourceSubsystem;
class UWorld;

// ********** Begin Class UResourceBlueprintLibrary ************************************************
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrintAllResources); \
	DECLARE_FUNCTION(execGetResourceSubsystem); \
	DECLARE_FUNCTION(execTrySpendKeratin); \
	DECLARE_FUNCTION(execTrySpendScales); \
	DECLARE_FUNCTION(execTrySpendOrgans); \
	DECLARE_FUNCTION(execTrySpendCarapace); \
	DECLARE_FUNCTION(execTrySpendTendons); \
	DECLARE_FUNCTION(execTrySpendBones); \
	DECLARE_FUNCTION(execTrySpendHide); \
	DECLARE_FUNCTION(execTrySpendBiomass); \
	DECLARE_FUNCTION(execHasEnoughKeratin); \
	DECLARE_FUNCTION(execHasEnoughScales); \
	DECLARE_FUNCTION(execHasEnoughOrgans); \
	DECLARE_FUNCTION(execHasEnoughCarapace); \
	DECLARE_FUNCTION(execHasEnoughTendons); \
	DECLARE_FUNCTION(execHasEnoughBones); \
	DECLARE_FUNCTION(execHasEnoughHide); \
	DECLARE_FUNCTION(execHasEnoughBiomass); \
	DECLARE_FUNCTION(execGetKeratin); \
	DECLARE_FUNCTION(execGetScales); \
	DECLARE_FUNCTION(execGetOrgans); \
	DECLARE_FUNCTION(execGetCarapace); \
	DECLARE_FUNCTION(execGetTendons); \
	DECLARE_FUNCTION(execGetBones); \
	DECLARE_FUNCTION(execGetHide); \
	DECLARE_FUNCTION(execGetBiomass); \
	DECLARE_FUNCTION(execAddKeratin); \
	DECLARE_FUNCTION(execAddScales); \
	DECLARE_FUNCTION(execAddOrgans); \
	DECLARE_FUNCTION(execAddCarapace); \
	DECLARE_FUNCTION(execAddTendons); \
	DECLARE_FUNCTION(execAddBones); \
	DECLARE_FUNCTION(execAddHide); \
	DECLARE_FUNCTION(execAddBiomass);


PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceBlueprintLibrary_NoRegister();

#define FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResourceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UResourceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UResourceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PortalDefense"), Z_Construct_UClass_UResourceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UResourceBlueprintLibrary)


#define FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResourceBlueprintLibrary(UResourceBlueprintLibrary&&) = delete; \
	UResourceBlueprintLibrary(const UResourceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceBlueprintLibrary) \
	NO_API virtual ~UResourceBlueprintLibrary();


#define FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_14_PROLOG
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResourceBlueprintLibrary;

// ********** End Class UResourceBlueprintLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
