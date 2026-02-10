// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth_init() {}
	HEALTH_API UFunction* Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Health;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Health()
	{
		if (!Z_Registration_Info_UPackage__Script_Health.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Health",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF2621B37,
				0x6BFE2CAE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Health.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Health.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Health(Z_Construct_UPackage__Script_Health, TEXT("/Script/Health"), Z_Registration_Info_UPackage__Script_Health, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2621B37, 0x6BFE2CAE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
