// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceSubsystem.h"

#ifdef PORTALDEFENSE_ResourceSubsystem_generated_h
#error "ResourceSubsystem.generated.h already included, missing '#pragma once' in ResourceSubsystem.h"
#endif
#define PORTALDEFENSE_ResourceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EResourceType : uint8;
enum class EResourceType : uint8; 

// ********** Begin Delegate FOnResourceChanged ****************************************************
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_12_DELEGATE \
PORTALDEFENSE_API void FOnResourceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChanged, FName ResourceType, float NewAmount);


// ********** End Delegate FOnResourceChanged ******************************************************

// ********** Begin Delegate FOnResourceOperationFailed ********************************************
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_13_DELEGATE \
PORTALDEFENSE_API void FOnResourceOperationFailed_DelegateWrapper(const FMulticastScriptDelegate& OnResourceOperationFailed, const FString& ErrorMessage);


// ********** End Delegate FOnResourceOperationFailed **********************************************

// ********** Begin ScriptStruct FResourceData *****************************************************
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResourceData_Statics; \
	PORTALDEFENSE_API static class UScriptStruct* StaticStruct();


struct FResourceData;
// ********** End ScriptStruct FResourceData *******************************************************

// ********** Begin Class UResourceSubsystem *******************************************************
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrintAllResources); \
	DECLARE_FUNCTION(execResetResource); \
	DECLARE_FUNCTION(execResetAllResources); \
	DECLARE_FUNCTION(execGetAllResourceAmounts); \
	DECLARE_FUNCTION(execGetAllResourceTypes); \
	DECLARE_FUNCTION(execInitializeResource); \
	DECLARE_FUNCTION(execSetResourceCanGoNegative); \
	DECLARE_FUNCTION(execSetResourceMaxAmount); \
	DECLARE_FUNCTION(execAddResources); \
	DECLARE_FUNCTION(execTrySpendResources); \
	DECLARE_FUNCTION(execCanAffordResources); \
	DECLARE_FUNCTION(execHasEnoughResource); \
	DECLARE_FUNCTION(execGetResourceAmount); \
	DECLARE_FUNCTION(execSetResource); \
	DECLARE_FUNCTION(execTrySubtractResource); \
	DECLARE_FUNCTION(execAddResource);


PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceSubsystem_NoRegister();

#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResourceSubsystem(); \
	friend struct Z_Construct_UClass_UResourceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UResourceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PortalDefense"), Z_Construct_UClass_UResourceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UResourceSubsystem)


#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResourceSubsystem(UResourceSubsystem&&) = delete; \
	UResourceSubsystem(const UResourceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResourceSubsystem) \
	NO_API virtual ~UResourceSubsystem();


#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_68_PROLOG
#define FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_INCLASS_NO_PURE_DECLS \
	FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResourceSubsystem;

// ********** End Class UResourceSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h

// ********** Begin Enum EResourceType *************************************************************
#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::None) \
	op(EResourceType::Biomass) \
	op(EResourceType::Hide) \
	op(EResourceType::Bones) \
	op(EResourceType::Tendons) \
	op(EResourceType::Carapace) \
	op(EResourceType::Organs) \
	op(EResourceType::Scales) \
	op(EResourceType::Keratin) 

enum class EResourceType : uint8;
template<> struct TIsUEnumClass<EResourceType> { enum { Value = true }; };
template<> PORTALDEFENSE_API UEnum* StaticEnum<EResourceType>();
// ********** End Enum EResourceType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
