// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTimeComponent_init() {}
	PLAYERTIMECOMPONENT_API UFunction* Z_Construct_UDelegateFunction_PlayerTimeComponent_OnPlayerTimeOut__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlayerTimeComponent;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlayerTimeComponent()
	{
		if (!Z_Registration_Info_UPackage__Script_PlayerTimeComponent.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PlayerTimeComponent_OnPlayerTimeOut__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlayerTimeComponent",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFEEC33D7,
				0xA4C1AE9C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlayerTimeComponent.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlayerTimeComponent.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlayerTimeComponent(Z_Construct_UPackage__Script_PlayerTimeComponent, TEXT("/Script/PlayerTimeComponent"), Z_Registration_Info_UPackage__Script_PlayerTimeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEEC33D7, 0xA4C1AE9C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
