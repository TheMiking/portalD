// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeResourceSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceSubsystem();
PORTALDEFENSE_API UClass* Z_Construct_UClass_UResourceSubsystem_NoRegister();
PORTALDEFENSE_API UEnum* Z_Construct_UEnum_PortalDefense_EResourceType();
PORTALDEFENSE_API UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature();
PORTALDEFENSE_API UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature();
PORTALDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FResourceData();
UPackage* Z_Construct_UPackage__Script_PortalDefense();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnResourceChanged ****************************************************
struct Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics
{
	struct _Script_PortalDefense_eventOnResourceChanged_Parms
	{
		FName ResourceType;
		float NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declarations\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declarations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PortalDefense_eventOnResourceChanged_Parms, ResourceType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PortalDefense_eventOnResourceChanged_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PortalDefense, nullptr, "OnResourceChanged__DelegateSignature", Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::_Script_PortalDefense_eventOnResourceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::_Script_PortalDefense_eventOnResourceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResourceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChanged, FName ResourceType, float NewAmount)
{
	struct _Script_PortalDefense_eventOnResourceChanged_Parms
	{
		FName ResourceType;
		float NewAmount;
	};
	_Script_PortalDefense_eventOnResourceChanged_Parms Parms;
	Parms.ResourceType=ResourceType;
	Parms.NewAmount=NewAmount;
	OnResourceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnResourceChanged ******************************************************

// ********** Begin Delegate FOnResourceOperationFailed ********************************************
struct Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics
{
	struct _Script_PortalDefense_eventOnResourceOperationFailed_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PortalDefense_eventOnResourceOperationFailed_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PortalDefense, nullptr, "OnResourceOperationFailed__DelegateSignature", Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::_Script_PortalDefense_eventOnResourceOperationFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::_Script_PortalDefense_eventOnResourceOperationFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResourceOperationFailed_DelegateWrapper(const FMulticastScriptDelegate& OnResourceOperationFailed, const FString& ErrorMessage)
{
	struct _Script_PortalDefense_eventOnResourceOperationFailed_Parms
	{
		FString ErrorMessage;
	};
	_Script_PortalDefense_eventOnResourceOperationFailed_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnResourceOperationFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnResourceOperationFailed **********************************************

// ********** Begin Enum EResourceType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
static UEnum* EResourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PortalDefense_EResourceType, (UObject*)Z_Construct_UPackage__Script_PortalDefense(), TEXT("EResourceType"));
	}
	return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
}
template<> PORTALDEFENSE_API UEnum* StaticEnum<EResourceType>()
{
	return EResourceType_StaticEnum();
}
struct Z_Construct_UEnum_PortalDefense_EResourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Biomass.Name", "EResourceType::Biomass" },
		{ "BlueprintType", "true" },
		{ "Bones.Name", "EResourceType::Bones" },
		{ "Carapace.Name", "EResourceType::Carapace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Resource types for the incremental game\n */" },
#endif
		{ "Hide.Name", "EResourceType::Hide" },
		{ "Keratin.Name", "EResourceType::Keratin" },
		{ "MAX.Comment", "// Add more resource types as needed\n" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EResourceType::MAX" },
		{ "MAX.ToolTip", "Add more resource types as needed" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
		{ "None.Name", "EResourceType::None" },
		{ "Organs.Name", "EResourceType::Organs" },
		{ "Scales.Name", "EResourceType::Scales" },
		{ "Tendons.Name", "EResourceType::Tendons" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resource types for the incremental game" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResourceType::None", (int64)EResourceType::None },
		{ "EResourceType::Biomass", (int64)EResourceType::Biomass },
		{ "EResourceType::Hide", (int64)EResourceType::Hide },
		{ "EResourceType::Bones", (int64)EResourceType::Bones },
		{ "EResourceType::Tendons", (int64)EResourceType::Tendons },
		{ "EResourceType::Carapace", (int64)EResourceType::Carapace },
		{ "EResourceType::Organs", (int64)EResourceType::Organs },
		{ "EResourceType::Scales", (int64)EResourceType::Scales },
		{ "EResourceType::Keratin", (int64)EResourceType::Keratin },
		{ "EResourceType::MAX", (int64)EResourceType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PortalDefense_EResourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PortalDefense,
	nullptr,
	"EResourceType",
	"EResourceType",
	Z_Construct_UEnum_PortalDefense_EResourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PortalDefense_EResourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PortalDefense_EResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PortalDefense_EResourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PortalDefense_EResourceType()
{
	if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_PortalDefense_EResourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
}
// ********** End Enum EResourceType ***************************************************************

// ********** Begin ScriptStruct FResourceData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FResourceData;
class UScriptStruct* FResourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FResourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FResourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceData, (UObject*)Z_Construct_UPackage__Script_PortalDefense(), TEXT("ResourceData"));
	}
	return Z_Registration_Info_UScriptStruct_FResourceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FResourceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Resource data structure for tracking individual resources\n */" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resource data structure for tracking individual resources" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmount_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGoNegative_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmount;
	static void NewProp_bCanGoNegative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGoNegative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_MaxAmount = { "MaxAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceData, MaxAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmount_MetaData), NewProp_MaxAmount_MetaData) };
void Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_bCanGoNegative_SetBit(void* Obj)
{
	((FResourceData*)Obj)->bCanGoNegative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_bCanGoNegative = { "bCanGoNegative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FResourceData), &Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_bCanGoNegative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGoNegative_MetaData), NewProp_bCanGoNegative_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_MaxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceData_Statics::NewProp_bCanGoNegative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PortalDefense,
	nullptr,
	&NewStructOps,
	"ResourceData",
	Z_Construct_UScriptStruct_FResourceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceData_Statics::PropPointers),
	sizeof(FResourceData),
	alignof(FResourceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResourceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResourceData()
{
	if (!Z_Registration_Info_UScriptStruct_FResourceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FResourceData.InnerSingleton, Z_Construct_UScriptStruct_FResourceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FResourceData.InnerSingleton;
}
// ********** End ScriptStruct FResourceData *******************************************************

// ********** Begin Class UResourceSubsystem Function AddResource **********************************
struct Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics
{
	struct ResourceSubsystem_eventAddResource_Parms
	{
		EResourceType ResourceType;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resource Management Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resource Management Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventAddResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventAddResource_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "AddResource", Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::ResourceSubsystem_eventAddResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::ResourceSubsystem_eventAddResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_AddResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_AddResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execAddResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddResource(EResourceType(Z_Param_ResourceType),Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function AddResource ************************************

// ********** Begin Class UResourceSubsystem Function AddResources *********************************
struct Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics
{
	struct ResourceSubsystem_eventAddResources_Parms
	{
		TMap<EResourceType,float> ResourcesToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourcesToAdd_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourcesToAdd_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourcesToAdd_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ResourcesToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_ValueProp = { "ResourcesToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_Key_KeyProp = { "ResourcesToAdd_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd = { "ResourcesToAdd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventAddResources_Parms, ResourcesToAdd), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourcesToAdd_MetaData), NewProp_ResourcesToAdd_MetaData) }; // 3612306028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::NewProp_ResourcesToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "AddResources", Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::ResourceSubsystem_eventAddResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::ResourceSubsystem_eventAddResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_AddResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_AddResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execAddResources)
{
	P_GET_TMAP_REF(EResourceType,float,Z_Param_Out_ResourcesToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddResources(Z_Param_Out_ResourcesToAdd);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function AddResources ***********************************

// ********** Begin Class UResourceSubsystem Function CanAffordResources ***************************
struct Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics
{
	struct ResourceSubsystem_eventCanAffordResources_Parms
	{
		TMap<EResourceType,float> RequiredResources;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredResources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredResources_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredResources_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredResources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredResources;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_ValueProp = { "RequiredResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_Key_KeyProp = { "RequiredResources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources = { "RequiredResources", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventCanAffordResources_Parms, RequiredResources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredResources_MetaData), NewProp_RequiredResources_MetaData) }; // 3612306028
void Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceSubsystem_eventCanAffordResources_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventCanAffordResources_Parms), &Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_RequiredResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "CanAffordResources", Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::ResourceSubsystem_eventCanAffordResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::ResourceSubsystem_eventCanAffordResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_CanAffordResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_CanAffordResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execCanAffordResources)
{
	P_GET_TMAP_REF(EResourceType,float,Z_Param_Out_RequiredResources);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAffordResources(Z_Param_Out_RequiredResources);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function CanAffordResources *****************************

// ********** Begin Class UResourceSubsystem Function GetAllResourceAmounts ************************
struct Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics
{
	struct ResourceSubsystem_eventGetAllResourceAmounts_Parms
	{
		TMap<EResourceType,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventGetAllResourceAmounts_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "GetAllResourceAmounts", Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::ResourceSubsystem_eventGetAllResourceAmounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::ResourceSubsystem_eventGetAllResourceAmounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execGetAllResourceAmounts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<EResourceType,float>*)Z_Param__Result=P_THIS->GetAllResourceAmounts();
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function GetAllResourceAmounts **************************

// ********** Begin Class UResourceSubsystem Function GetAllResourceTypes **************************
struct Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics
{
	struct ResourceSubsystem_eventGetAllResourceTypes_Parms
	{
		TArray<EResourceType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventGetAllResourceTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "GetAllResourceTypes", Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::ResourceSubsystem_eventGetAllResourceTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::ResourceSubsystem_eventGetAllResourceTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execGetAllResourceTypes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EResourceType>*)Z_Param__Result=P_THIS->GetAllResourceTypes();
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function GetAllResourceTypes ****************************

// ********** Begin Class UResourceSubsystem Function GetResourceAmount ****************************
struct Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics
{
	struct ResourceSubsystem_eventGetResourceAmount_Parms
	{
		EResourceType ResourceType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventGetResourceAmount_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventGetResourceAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "GetResourceAmount", Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::ResourceSubsystem_eventGetResourceAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::ResourceSubsystem_eventGetResourceAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execGetResourceAmount)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetResourceAmount(EResourceType(Z_Param_ResourceType));
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function GetResourceAmount ******************************

// ********** Begin Class UResourceSubsystem Function HasEnoughResource ****************************
struct Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics
{
	struct ResourceSubsystem_eventHasEnoughResource_Parms
	{
		EResourceType ResourceType;
		float RequiredAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventHasEnoughResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventHasEnoughResource_Parms, RequiredAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceSubsystem_eventHasEnoughResource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventHasEnoughResource_Parms), &Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_RequiredAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "HasEnoughResource", Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::ResourceSubsystem_eventHasEnoughResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::ResourceSubsystem_eventHasEnoughResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execHasEnoughResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequiredAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughResource(EResourceType(Z_Param_ResourceType),Z_Param_RequiredAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function HasEnoughResource ******************************

// ********** Begin Class UResourceSubsystem Function InitializeResource ***************************
struct Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics
{
	struct ResourceSubsystem_eventInitializeResource_Parms
	{
		EResourceType ResourceType;
		float InitialAmount;
		float MaxAmount;
		bool bCanGoNegative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Configuration" },
		{ "CPP_Default_bCanGoNegative", "false" },
		{ "CPP_Default_InitialAmount", "0.000000" },
		{ "CPP_Default_MaxAmount", "999999.000000" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmount;
	static void NewProp_bCanGoNegative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGoNegative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventInitializeResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_InitialAmount = { "InitialAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventInitializeResource_Parms, InitialAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_MaxAmount = { "MaxAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventInitializeResource_Parms, MaxAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_bCanGoNegative_SetBit(void* Obj)
{
	((ResourceSubsystem_eventInitializeResource_Parms*)Obj)->bCanGoNegative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_bCanGoNegative = { "bCanGoNegative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventInitializeResource_Parms), &Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_bCanGoNegative_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_InitialAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_MaxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::NewProp_bCanGoNegative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "InitializeResource", Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::ResourceSubsystem_eventInitializeResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::ResourceSubsystem_eventInitializeResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_InitializeResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_InitializeResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execInitializeResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InitialAmount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAmount);
	P_GET_UBOOL(Z_Param_bCanGoNegative);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeResource(EResourceType(Z_Param_ResourceType),Z_Param_InitialAmount,Z_Param_MaxAmount,Z_Param_bCanGoNegative);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function InitializeResource *****************************

// ********** Begin Class UResourceSubsystem Function PrintAllResources ****************************
struct Z_Construct_UFunction_UResourceSubsystem_PrintAllResources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_PrintAllResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "PrintAllResources", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_PrintAllResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_PrintAllResources_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UResourceSubsystem_PrintAllResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_PrintAllResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execPrintAllResources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintAllResources();
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function PrintAllResources ******************************

// ********** Begin Class UResourceSubsystem Function ResetAllResources ****************************
struct Z_Construct_UFunction_UResourceSubsystem_ResetAllResources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_ResetAllResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "ResetAllResources", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_ResetAllResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_ResetAllResources_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UResourceSubsystem_ResetAllResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_ResetAllResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execResetAllResources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllResources();
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function ResetAllResources ******************************

// ********** Begin Class UResourceSubsystem Function ResetResource ********************************
struct Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics
{
	struct ResourceSubsystem_eventResetResource_Parms
	{
		EResourceType ResourceType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Utility" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventResetResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::NewProp_ResourceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "ResetResource", Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::ResourceSubsystem_eventResetResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::ResourceSubsystem_eventResetResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_ResetResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_ResetResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execResetResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetResource(EResourceType(Z_Param_ResourceType));
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function ResetResource **********************************

// ********** Begin Class UResourceSubsystem Function SetResource **********************************
struct Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics
{
	struct ResourceSubsystem_eventSetResource_Parms
	{
		EResourceType ResourceType;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventSetResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventSetResource_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "SetResource", Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::ResourceSubsystem_eventSetResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::ResourceSubsystem_eventSetResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_SetResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_SetResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execSetResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResource(EResourceType(Z_Param_ResourceType),Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function SetResource ************************************

// ********** Begin Class UResourceSubsystem Function SetResourceCanGoNegative *********************
struct Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics
{
	struct ResourceSubsystem_eventSetResourceCanGoNegative_Parms
	{
		EResourceType ResourceType;
		bool bCanGoNegative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Configuration" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static void NewProp_bCanGoNegative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGoNegative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventSetResourceCanGoNegative_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
void Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_bCanGoNegative_SetBit(void* Obj)
{
	((ResourceSubsystem_eventSetResourceCanGoNegative_Parms*)Obj)->bCanGoNegative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_bCanGoNegative = { "bCanGoNegative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventSetResourceCanGoNegative_Parms), &Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_bCanGoNegative_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::NewProp_bCanGoNegative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "SetResourceCanGoNegative", Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::ResourceSubsystem_eventSetResourceCanGoNegative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::ResourceSubsystem_eventSetResourceCanGoNegative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execSetResourceCanGoNegative)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_UBOOL(Z_Param_bCanGoNegative);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResourceCanGoNegative(EResourceType(Z_Param_ResourceType),Z_Param_bCanGoNegative);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function SetResourceCanGoNegative ***********************

// ********** Begin Class UResourceSubsystem Function SetResourceMaxAmount *************************
struct Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics
{
	struct ResourceSubsystem_eventSetResourceMaxAmount_Parms
	{
		EResourceType ResourceType;
		float MaxAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resource Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resource Configuration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventSetResourceMaxAmount_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_MaxAmount = { "MaxAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventSetResourceMaxAmount_Parms, MaxAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::NewProp_MaxAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "SetResourceMaxAmount", Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::ResourceSubsystem_eventSetResourceMaxAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::ResourceSubsystem_eventSetResourceMaxAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execSetResourceMaxAmount)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResourceMaxAmount(EResourceType(Z_Param_ResourceType),Z_Param_MaxAmount);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function SetResourceMaxAmount ***************************

// ********** Begin Class UResourceSubsystem Function TrySpendResources ****************************
struct Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics
{
	struct ResourceSubsystem_eventTrySpendResources_Parms
	{
		TMap<EResourceType,float> RequiredResources;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredResources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredResources_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredResources_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredResources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredResources;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_ValueProp = { "RequiredResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_Key_KeyProp = { "RequiredResources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources = { "RequiredResources", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventTrySpendResources_Parms, RequiredResources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredResources_MetaData), NewProp_RequiredResources_MetaData) }; // 3612306028
void Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceSubsystem_eventTrySpendResources_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventTrySpendResources_Parms), &Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_RequiredResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "TrySpendResources", Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::ResourceSubsystem_eventTrySpendResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::ResourceSubsystem_eventTrySpendResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_TrySpendResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_TrySpendResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execTrySpendResources)
{
	P_GET_TMAP_REF(EResourceType,float,Z_Param_Out_RequiredResources);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySpendResources(Z_Param_Out_RequiredResources);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function TrySpendResources ******************************

// ********** Begin Class UResourceSubsystem Function TrySubtractResource **************************
struct Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics
{
	struct ResourceSubsystem_eventTrySubtractResource_Parms
	{
		EResourceType ResourceType;
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Resource Management" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventTrySubtractResource_Parms, ResourceType), Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceSubsystem_eventTrySubtractResource_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ResourceSubsystem_eventTrySubtractResource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ResourceSubsystem_eventTrySubtractResource_Parms), &Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceSubsystem, nullptr, "TrySubtractResource", Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::ResourceSubsystem_eventTrySubtractResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::ResourceSubsystem_eventTrySubtractResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UResourceSubsystem::execTrySubtractResource)
{
	P_GET_ENUM(EResourceType,Z_Param_ResourceType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySubtractResource(EResourceType(Z_Param_ResourceType),Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UResourceSubsystem Function TrySubtractResource ****************************

// ********** Begin Class UResourceSubsystem *******************************************************
void UResourceSubsystem::StaticRegisterNativesUResourceSubsystem()
{
	UClass* Class = UResourceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddResource", &UResourceSubsystem::execAddResource },
		{ "AddResources", &UResourceSubsystem::execAddResources },
		{ "CanAffordResources", &UResourceSubsystem::execCanAffordResources },
		{ "GetAllResourceAmounts", &UResourceSubsystem::execGetAllResourceAmounts },
		{ "GetAllResourceTypes", &UResourceSubsystem::execGetAllResourceTypes },
		{ "GetResourceAmount", &UResourceSubsystem::execGetResourceAmount },
		{ "HasEnoughResource", &UResourceSubsystem::execHasEnoughResource },
		{ "InitializeResource", &UResourceSubsystem::execInitializeResource },
		{ "PrintAllResources", &UResourceSubsystem::execPrintAllResources },
		{ "ResetAllResources", &UResourceSubsystem::execResetAllResources },
		{ "ResetResource", &UResourceSubsystem::execResetResource },
		{ "SetResource", &UResourceSubsystem::execSetResource },
		{ "SetResourceCanGoNegative", &UResourceSubsystem::execSetResourceCanGoNegative },
		{ "SetResourceMaxAmount", &UResourceSubsystem::execSetResourceMaxAmount },
		{ "TrySpendResources", &UResourceSubsystem::execTrySpendResources },
		{ "TrySubtractResource", &UResourceSubsystem::execTrySubtractResource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UResourceSubsystem;
UClass* UResourceSubsystem::GetPrivateStaticClass()
{
	using TClass = UResourceSubsystem;
	if (!Z_Registration_Info_UClass_UResourceSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ResourceSubsystem"),
			Z_Registration_Info_UClass_UResourceSubsystem.InnerSingleton,
			StaticRegisterNativesUResourceSubsystem,
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
	return Z_Registration_Info_UClass_UResourceSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UResourceSubsystem_NoRegister()
{
	return UResourceSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UResourceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World subsystem for managing game resources in an incremental game\n * Optimized for Blueprint usage with comprehensive resource tracking\n */" },
#endif
		{ "IncludePath", "ResourceSubsystem.h" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World subsystem for managing game resources in an incremental game\nOptimized for Blueprint usage with comprehensive resource tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceChanged_MetaData[] = {
		{ "Category", "Resource Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events for Blueprint binding\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events for Blueprint binding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceOperationFailed_MetaData[] = {
		{ "Category", "Resource Events" },
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal resource storage\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal resource storage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceOperationFailed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResourceMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ResourceMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResourceSubsystem_AddResource, "AddResource" }, // 2968327086
		{ &Z_Construct_UFunction_UResourceSubsystem_AddResources, "AddResources" }, // 426034692
		{ &Z_Construct_UFunction_UResourceSubsystem_CanAffordResources, "CanAffordResources" }, // 4204713775
		{ &Z_Construct_UFunction_UResourceSubsystem_GetAllResourceAmounts, "GetAllResourceAmounts" }, // 3793312680
		{ &Z_Construct_UFunction_UResourceSubsystem_GetAllResourceTypes, "GetAllResourceTypes" }, // 2797102633
		{ &Z_Construct_UFunction_UResourceSubsystem_GetResourceAmount, "GetResourceAmount" }, // 4122852613
		{ &Z_Construct_UFunction_UResourceSubsystem_HasEnoughResource, "HasEnoughResource" }, // 679508471
		{ &Z_Construct_UFunction_UResourceSubsystem_InitializeResource, "InitializeResource" }, // 2629901623
		{ &Z_Construct_UFunction_UResourceSubsystem_PrintAllResources, "PrintAllResources" }, // 1594939544
		{ &Z_Construct_UFunction_UResourceSubsystem_ResetAllResources, "ResetAllResources" }, // 1168463206
		{ &Z_Construct_UFunction_UResourceSubsystem_ResetResource, "ResetResource" }, // 58581742
		{ &Z_Construct_UFunction_UResourceSubsystem_SetResource, "SetResource" }, // 2863171814
		{ &Z_Construct_UFunction_UResourceSubsystem_SetResourceCanGoNegative, "SetResourceCanGoNegative" }, // 3088747620
		{ &Z_Construct_UFunction_UResourceSubsystem_SetResourceMaxAmount, "SetResourceMaxAmount" }, // 1019099447
		{ &Z_Construct_UFunction_UResourceSubsystem_TrySpendResources, "TrySpendResources" }, // 1091839933
		{ &Z_Construct_UFunction_UResourceSubsystem_TrySubtractResource, "TrySubtractResource" }, // 4114955857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_OnResourceChanged = { "OnResourceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceSubsystem, OnResourceChanged), Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResourceChanged_MetaData), NewProp_OnResourceChanged_MetaData) }; // 1632290956
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_OnResourceOperationFailed = { "OnResourceOperationFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceSubsystem, OnResourceOperationFailed), Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResourceOperationFailed_MetaData), NewProp_OnResourceOperationFailed_MetaData) }; // 290974435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_ValueProp = { "ResourceMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FResourceData, METADATA_PARAMS(0, nullptr) }; // 3520006126
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_Key_KeyProp = { "ResourceMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PortalDefense_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3612306028
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap = { "ResourceMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceSubsystem, ResourceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceMap_MetaData), NewProp_ResourceMap_MetaData) }; // 3612306028 3520006126
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResourceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_OnResourceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_OnResourceOperationFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceSubsystem_Statics::NewProp_ResourceMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResourceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceSubsystem_Statics::ClassParams = {
	&UResourceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UResourceSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UResourceSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResourceSubsystem()
{
	if (!Z_Registration_Info_UClass_UResourceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceSubsystem.OuterSingleton, Z_Construct_UClass_UResourceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResourceSubsystem.OuterSingleton;
}
UResourceSubsystem::UResourceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceSubsystem);
UResourceSubsystem::~UResourceSubsystem() {}
// ********** End Class UResourceSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3612306028U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FResourceData::StaticStruct, Z_Construct_UScriptStruct_FResourceData_Statics::NewStructOps, TEXT("ResourceData"), &Z_Registration_Info_UScriptStruct_FResourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceData), 3520006126U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResourceSubsystem, UResourceSubsystem::StaticClass, TEXT("UResourceSubsystem"), &Z_Registration_Info_UClass_UResourceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceSubsystem), 1474445977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_3772250567(TEXT("/Script/PortalDefense"),
	Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortalDefense_Source_PortalDefense_Public_ResourceSubsystem_h__Script_PortalDefense_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
