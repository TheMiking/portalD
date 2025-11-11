// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalDefense_init() {}
	PORTALDEFENSE_API UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature();
	PORTALDEFENSE_API UFunction* Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortalDefense;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortalDefense()
	{
		if (!Z_Registration_Info_UPackage__Script_PortalDefense.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalDefense_OnResourceChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalDefense_OnResourceOperationFailed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PortalDefense",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x269ECB4B,
				0xDED5FDCE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortalDefense.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PortalDefense.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortalDefense(Z_Construct_UPackage__Script_PortalDefense, TEXT("/Script/PortalDefense"), Z_Registration_Info_UPackage__Script_PortalDefense, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x269ECB4B, 0xDED5FDCE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
