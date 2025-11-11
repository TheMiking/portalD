// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeResourceBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceBlueprintLibrary();
PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceBlueprintLibrary_NoRegister();
PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UResourceBlueprintLibrary Function AddBiomass ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics
{
	struct ResourceBlueprintLibrary_eventAddBiomass_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience functions for common operations\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience functions for common operations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddBiomass_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddBiomass_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddBiomass", Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::ResourceBlueprintLibrary_eventAddBiomass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::ResourceBlueprintLibrary_eventAddBiomass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddBiomass)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddBiomass(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddBiomass ******************************

// ********** Begin Class UResourceBlueprintLibrary Function AddBones ******************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics
{
	struct ResourceBlueprintLibrary_eventAddBones_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddBones_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddBones_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddBones", Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::ResourceBlueprintLibrary_eventAddBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::ResourceBlueprintLibrary_eventAddBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddBones)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddBones(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddBones ********************************

// ********** Begin Class UResourceBlueprintLibrary Function AddCarapace ***************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics
{
	struct ResourceBlueprintLibrary_eventAddCarapace_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddCarapace_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddCarapace_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddCarapace", Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::ResourceBlueprintLibrary_eventAddCarapace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::ResourceBlueprintLibrary_eventAddCarapace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddCarapace)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddCarapace(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddCarapace *****************************

// ********** Begin Class UResourceBlueprintLibrary Function AddHide *******************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics
{
	struct ResourceBlueprintLibrary_eventAddHide_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddHide_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddHide_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddHide", Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::ResourceBlueprintLibrary_eventAddHide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::ResourceBlueprintLibrary_eventAddHide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddHide)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddHide(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddHide *********************************

// ********** Begin Class UResourceBlueprintLibrary Function AddKeratin ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics
{
	struct ResourceBlueprintLibrary_eventAddKeratin_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddKeratin_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddKeratin_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddKeratin", Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::ResourceBlueprintLibrary_eventAddKeratin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::ResourceBlueprintLibrary_eventAddKeratin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddKeratin)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddKeratin(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddKeratin ******************************

// ********** Begin Class UResourceBlueprintLibrary Function AddOrgans *****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics
{
	struct ResourceBlueprintLibrary_eventAddOrgans_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddOrgans_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddOrgans_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddOrgans", Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::ResourceBlueprintLibrary_eventAddOrgans_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::ResourceBlueprintLibrary_eventAddOrgans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddOrgans)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddOrgans(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddOrgans *******************************

// ********** Begin Class UResourceBlueprintLibrary Function AddScales *****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics
{
	struct ResourceBlueprintLibrary_eventAddScales_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddScales_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddScales_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddScales", Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::ResourceBlueprintLibrary_eventAddScales_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::ResourceBlueprintLibrary_eventAddScales_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddScales)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddScales(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddScales *******************************

// ********** Begin Class UResourceBlueprintLibrary Function AddTendons ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics
{
	struct ResourceBlueprintLibrary_eventAddTendons_Parms
	{
		UWorld* World;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddTendons_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventAddTendons_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "AddTendons", Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::ResourceBlueprintLibrary_eventAddTendons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::ResourceBlueprintLibrary_eventAddTendons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execAddTendons)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::AddTendons(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function AddTendons ******************************

// ********** Begin Class UResourceBlueprintLibrary Function GetBiomass ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics
{
	struct ResourceBlueprintLibrary_eventGetBiomass_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter convenience functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter convenience functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetBiomass_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetBiomass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetBiomass", Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::ResourceBlueprintLibrary_eventGetBiomass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::ResourceBlueprintLibrary_eventGetBiomass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetBiomass)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetBiomass(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetBiomass ******************************

// ********** Begin Class UResourceBlueprintLibrary Function GetBones ******************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics
{
	struct ResourceBlueprintLibrary_eventGetBones_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetBones_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetBones_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetBones", Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::ResourceBlueprintLibrary_eventGetBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::ResourceBlueprintLibrary_eventGetBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetBones)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetBones(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetBones ********************************

// ********** Begin Class UResourceBlueprintLibrary Function GetCarapace ***************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics
{
	struct ResourceBlueprintLibrary_eventGetCarapace_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetCarapace_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetCarapace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetCarapace", Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::ResourceBlueprintLibrary_eventGetCarapace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::ResourceBlueprintLibrary_eventGetCarapace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetCarapace)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetCarapace(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetCarapace *****************************

// ********** Begin Class UResourceBlueprintLibrary Function GetHide *******************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics
{
	struct ResourceBlueprintLibrary_eventGetHide_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetHide_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetHide_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetHide", Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::ResourceBlueprintLibrary_eventGetHide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::ResourceBlueprintLibrary_eventGetHide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetHide)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetHide(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetHide *********************************

// ********** Begin Class UResourceBlueprintLibrary Function GetKeratin ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics
{
	struct ResourceBlueprintLibrary_eventGetKeratin_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetKeratin_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetKeratin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetKeratin", Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::ResourceBlueprintLibrary_eventGetKeratin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::ResourceBlueprintLibrary_eventGetKeratin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetKeratin)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetKeratin(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetKeratin ******************************

// ********** Begin Class UResourceBlueprintLibrary Function GetOrgans *****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics
{
	struct ResourceBlueprintLibrary_eventGetOrgans_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetOrgans_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetOrgans_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetOrgans", Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::ResourceBlueprintLibrary_eventGetOrgans_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::ResourceBlueprintLibrary_eventGetOrgans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetOrgans)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetOrgans(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetOrgans *******************************

// ********** Begin Class UResourceBlueprintLibrary Function GetResourceSubsystem ******************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics
{
	struct ResourceBlueprintLibrary_eventGetResourceSubsystem_Parms
	{
		UWorld* World;
		UResourceSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetResourceSubsystem_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetResourceSubsystem_Parms, ReturnValue), Z_Construct_UClass_UResourceSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetResourceSubsystem", Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::ResourceBlueprintLibrary_eventGetResourceSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::ResourceBlueprintLibrary_eventGetResourceSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetResourceSubsystem)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UResourceSubsystem**)Z_Param__Result=UResourceBlueprintLibrary::GetResourceSubsystem(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetResourceSubsystem ********************

// ********** Begin Class UResourceBlueprintLibrary Function GetScales *****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics
{
	struct ResourceBlueprintLibrary_eventGetScales_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetScales_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetScales_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetScales", Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::ResourceBlueprintLibrary_eventGetScales_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::ResourceBlueprintLibrary_eventGetScales_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetScales)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetScales(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetScales *******************************

// ********** Begin Class UResourceBlueprintLibrary Function GetTendons ****************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics
{
	struct ResourceBlueprintLibrary_eventGetTendons_Parms
	{
		UWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetTendons_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventGetTendons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "GetTendons", Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::ResourceBlueprintLibrary_eventGetTendons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::ResourceBlueprintLibrary_eventGetTendons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execGetTendons)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UResourceBlueprintLibrary::GetTendons(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function GetTendons ******************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughBiomass **********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughBiomass", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::ResourceBlueprintLibrary_eventHasEnoughBiomass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughBiomass)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughBiomass(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughBiomass ************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughBones ************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughBones_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughBones_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughBones_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughBones_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughBones_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughBones", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::ResourceBlueprintLibrary_eventHasEnoughBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::ResourceBlueprintLibrary_eventHasEnoughBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughBones)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughBones(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughBones **************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughCarapace *********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughCarapace", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::ResourceBlueprintLibrary_eventHasEnoughCarapace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughCarapace)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughCarapace(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughCarapace ***********************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughHide *************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughHide_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughHide_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughHide_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughHide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughHide_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughHide", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::ResourceBlueprintLibrary_eventHasEnoughHide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::ResourceBlueprintLibrary_eventHasEnoughHide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughHide)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughHide(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughHide ***************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughKeratin **********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughKeratin", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::ResourceBlueprintLibrary_eventHasEnoughKeratin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughKeratin)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughKeratin(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughKeratin ************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughOrgans ***********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughOrgans", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::ResourceBlueprintLibrary_eventHasEnoughOrgans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughOrgans)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughOrgans(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughOrgans *************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughScales ***********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughScales_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughScales_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughScales_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughScales_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughScales_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughScales", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::ResourceBlueprintLibrary_eventHasEnoughScales_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::ResourceBlueprintLibrary_eventHasEnoughScales_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughScales)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughScales(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughScales *************************

// ********** Begin Class UResourceBlueprintLibrary Function HasEnoughTendons **********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics
{
	struct ResourceBlueprintLibrary_eventHasEnoughTendons_Parms
	{
		UWorld* World;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughTendons_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventHasEnoughTendons_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventHasEnoughTendons_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventHasEnoughTendons_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "HasEnoughTendons", Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::ResourceBlueprintLibrary_eventHasEnoughTendons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::ResourceBlueprintLibrary_eventHasEnoughTendons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execHasEnoughTendons)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::HasEnoughTendons(Z_Param_World,Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function HasEnoughTendons ************************

// ********** Begin Class UResourceBlueprintLibrary Function PrintAllResources *********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics
{
	struct ResourceBlueprintLibrary_eventPrintAllResources_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventPrintAllResources_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "PrintAllResources", Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::ResourceBlueprintLibrary_eventPrintAllResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::ResourceBlueprintLibrary_eventPrintAllResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execPrintAllResources)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UResourceBlueprintLibrary::PrintAllResources(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function PrintAllResources ***********************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendBiomass ***********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendBiomass_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spend functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spend functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendBiomass_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendBiomass_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendBiomass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendBiomass_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendBiomass", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::ResourceBlueprintLibrary_eventTrySpendBiomass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::ResourceBlueprintLibrary_eventTrySpendBiomass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendBiomass)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendBiomass(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendBiomass *************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendBones *************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendBones_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendBones_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendBones_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendBones_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendBones_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendBones", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::ResourceBlueprintLibrary_eventTrySpendBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::ResourceBlueprintLibrary_eventTrySpendBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendBones)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendBones(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendBones ***************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendCarapace **********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendCarapace_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendCarapace_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendCarapace_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendCarapace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendCarapace_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendCarapace", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::ResourceBlueprintLibrary_eventTrySpendCarapace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::ResourceBlueprintLibrary_eventTrySpendCarapace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendCarapace)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendCarapace(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendCarapace ************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendHide **************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendHide_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendHide_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendHide_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendHide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendHide_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendHide", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::ResourceBlueprintLibrary_eventTrySpendHide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::ResourceBlueprintLibrary_eventTrySpendHide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendHide)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendHide(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendHide ****************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendKeratin ***********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendKeratin_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendKeratin_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendKeratin_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendKeratin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendKeratin_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendKeratin", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::ResourceBlueprintLibrary_eventTrySpendKeratin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::ResourceBlueprintLibrary_eventTrySpendKeratin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendKeratin)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendKeratin(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendKeratin *************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendOrgans ************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendOrgans_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendOrgans_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendOrgans_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendOrgans_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendOrgans_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendOrgans", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::ResourceBlueprintLibrary_eventTrySpendOrgans_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::ResourceBlueprintLibrary_eventTrySpendOrgans_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendOrgans)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendOrgans(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendOrgans **************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendScales ************************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendScales_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendScales_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendScales_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendScales_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendScales_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendScales", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::ResourceBlueprintLibrary_eventTrySpendScales_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::ResourceBlueprintLibrary_eventTrySpendScales_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendScales)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendScales(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendScales **************************

// ********** Begin Class UResourceBlueprintLibrary Function TrySpendTendons ***********************
struct Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics
{
	struct ResourceBlueprintLibrary_eventTrySpendTendons_Parms
	{
		UWorld* World;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendTendons_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceBlueprintLibrary_eventTrySpendTendons_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceBlueprintLibrary_eventTrySpendTendons_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceBlueprintLibrary_eventTrySpendTendons_Parms), &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceBlueprintLibrary, nullptr, "TrySpendTendons", Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::ResourceBlueprintLibrary_eventTrySpendTendons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::ResourceBlueprintLibrary_eventTrySpendTendons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceBlueprintLibrary::execTrySpendTendons)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UResourceBlueprintLibrary::TrySpendTendons(Z_Param_World,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceBlueprintLibrary Function TrySpendTendons *************************

// ********** Begin Class UResourceBlueprintLibrary ************************************************
void UResourceBlueprintLibrary::StaticRegisterNativesUResourceBlueprintLibrary()
{
	UClass* Class = UResourceBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBiomass", &UResourceBlueprintLibrary::execAddBiomass },
		{ "AddBones", &UResourceBlueprintLibrary::execAddBones },
		{ "AddCarapace", &UResourceBlueprintLibrary::execAddCarapace },
		{ "AddHide", &UResourceBlueprintLibrary::execAddHide },
		{ "AddKeratin", &UResourceBlueprintLibrary::execAddKeratin },
		{ "AddOrgans", &UResourceBlueprintLibrary::execAddOrgans },
		{ "AddScales", &UResourceBlueprintLibrary::execAddScales },
		{ "AddTendons", &UResourceBlueprintLibrary::execAddTendons },
		{ "GetBiomass", &UResourceBlueprintLibrary::execGetBiomass },
		{ "GetBones", &UResourceBlueprintLibrary::execGetBones },
		{ "GetCarapace", &UResourceBlueprintLibrary::execGetCarapace },
		{ "GetHide", &UResourceBlueprintLibrary::execGetHide },
		{ "GetKeratin", &UResourceBlueprintLibrary::execGetKeratin },
		{ "GetOrgans", &UResourceBlueprintLibrary::execGetOrgans },
		{ "GetResourceSubsystem", &UResourceBlueprintLibrary::execGetResourceSubsystem },
		{ "GetScales", &UResourceBlueprintLibrary::execGetScales },
		{ "GetTendons", &UResourceBlueprintLibrary::execGetTendons },
		{ "HasEnoughBiomass", &UResourceBlueprintLibrary::execHasEnoughBiomass },
		{ "HasEnoughBones", &UResourceBlueprintLibrary::execHasEnoughBones },
		{ "HasEnoughCarapace", &UResourceBlueprintLibrary::execHasEnoughCarapace },
		{ "HasEnoughHide", &UResourceBlueprintLibrary::execHasEnoughHide },
		{ "HasEnoughKeratin", &UResourceBlueprintLibrary::execHasEnoughKeratin },
		{ "HasEnoughOrgans", &UResourceBlueprintLibrary::execHasEnoughOrgans },
		{ "HasEnoughScales", &UResourceBlueprintLibrary::execHasEnoughScales },
		{ "HasEnoughTendons", &UResourceBlueprintLibrary::execHasEnoughTendons },
		{ "PrintAllResources", &UResourceBlueprintLibrary::execPrintAllResources },
		{ "TrySpendBiomass", &UResourceBlueprintLibrary::execTrySpendBiomass },
		{ "TrySpendBones", &UResourceBlueprintLibrary::execTrySpendBones },
		{ "TrySpendCarapace", &UResourceBlueprintLibrary::execTrySpendCarapace },
		{ "TrySpendHide", &UResourceBlueprintLibrary::execTrySpendHide },
		{ "TrySpendKeratin", &UResourceBlueprintLibrary::execTrySpendKeratin },
		{ "TrySpendOrgans", &UResourceBlueprintLibrary::execTrySpendOrgans },
		{ "TrySpendScales", &UResourceBlueprintLibrary::execTrySpendScales },
		{ "TrySpendTendons", &UResourceBlueprintLibrary::execTrySpendTendons },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UResourceBlueprintLibrary;
UClass* UResourceBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UResourceBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UResourceBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ResourceBlueprintLibrary"),
			Z_Registration_Info_UClass_UResourceBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUResourceBlueprintLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UResourceBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UResourceBlueprintLibrary_NoRegister()
{
	return UResourceBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UResourceBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint function library for easy access to ResourceSubsystem functions\n * This makes it even easier to use the resource system from Blueprints\n */" },
#endif
		{ "IncludePath", "ResourceBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ResourceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint function library for easy access to ResourceSubsystem functions\nThis makes it even easier to use the resource system from Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddBiomass, "AddBiomass" }, // 1440639333
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddBones, "AddBones" }, // 3727844160
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddCarapace, "AddCarapace" }, // 1215755481
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddHide, "AddHide" }, // 107337165
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddKeratin, "AddKeratin" }, // 422527549
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddOrgans, "AddOrgans" }, // 2094325880
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddScales, "AddScales" }, // 1917133940
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_AddTendons, "AddTendons" }, // 3553813074
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetBiomass, "GetBiomass" }, // 1222957279
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetBones, "GetBones" }, // 171488126
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetCarapace, "GetCarapace" }, // 2984752640
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetHide, "GetHide" }, // 4059654449
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetKeratin, "GetKeratin" }, // 3918276791
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetOrgans, "GetOrgans" }, // 964785735
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetResourceSubsystem, "GetResourceSubsystem" }, // 933186382
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetScales, "GetScales" }, // 1344022207
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_GetTendons, "GetTendons" }, // 2665809734
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBiomass, "HasEnoughBiomass" }, // 2090016718
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughBones, "HasEnoughBones" }, // 2086306305
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughCarapace, "HasEnoughCarapace" }, // 811793227
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughHide, "HasEnoughHide" }, // 2036334335
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughKeratin, "HasEnoughKeratin" }, // 3592939438
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughOrgans, "HasEnoughOrgans" }, // 2750165196
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughScales, "HasEnoughScales" }, // 4245848819
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_HasEnoughTendons, "HasEnoughTendons" }, // 1759243845
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_PrintAllResources, "PrintAllResources" }, // 2800577766
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBiomass, "TrySpendBiomass" }, // 2983989927
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendBones, "TrySpendBones" }, // 107984224
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendCarapace, "TrySpendCarapace" }, // 3028546582
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendHide, "TrySpendHide" }, // 1610930739
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendKeratin, "TrySpendKeratin" }, // 1597566398
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendOrgans, "TrySpendOrgans" }, // 536679068
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendScales, "TrySpendScales" }, // 1391293933
		{ &Z_Construct_UFunction_UResourceBlueprintLibrary_TrySpendTendons, "TrySpendTendons" }, // 1670360962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResourceBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceBlueprintLibrary_Statics::ClassParams = {
	&UResourceBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResourceBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UResourceBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UResourceBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResourceBlueprintLibrary.OuterSingleton;
}
UResourceBlueprintLibrary::UResourceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceBlueprintLibrary);
UResourceBlueprintLibrary::~UResourceBlueprintLibrary() {}
// ********** End Class UResourceBlueprintLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h__Script_PortalDefense_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResourceBlueprintLibrary, UResourceBlueprintLibrary::StaticClass, TEXT("UResourceBlueprintLibrary"), &Z_Registration_Info_UClass_UResourceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceBlueprintLibrary), 2141204550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h__Script_PortalDefense_1151545568(TEXT("/Script/PortalDefense"),
	Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h__Script_PortalDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceBlueprintLibrary_h__Script_PortalDefense_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
