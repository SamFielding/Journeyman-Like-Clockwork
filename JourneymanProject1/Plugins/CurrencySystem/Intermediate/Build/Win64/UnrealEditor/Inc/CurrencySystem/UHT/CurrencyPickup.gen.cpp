// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurrencySystem/Public/CurrencyPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyPickup() {}

// Begin Cross Module References
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_ACurrencyPickup();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_ACurrencyPickup_NoRegister();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_APickupBase();
UPackage* Z_Construct_UPackage__Script_CurrencySystem();
// End Cross Module References

// Begin Class ACurrencyPickup
void ACurrencyPickup::StaticRegisterNativesACurrencyPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACurrencyPickup);
UClass* Z_Construct_UClass_ACurrencyPickup_NoRegister()
{
	return ACurrencyPickup::StaticClass();
}
struct Z_Construct_UClass_ACurrencyPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CurrencyPickup.h" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyValue_MetaData[] = {
		{ "Category", "Pickup|Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrencyValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACurrencyPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_CurrencyValue = { "CurrencyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, CurrencyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyValue_MetaData), NewProp_CurrencyValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_CurrencyValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACurrencyPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CurrencySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACurrencyPickup_Statics::ClassParams = {
	&ACurrencyPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ACurrencyPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACurrencyPickup()
{
	if (!Z_Registration_Info_UClass_ACurrencyPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACurrencyPickup.OuterSingleton, Z_Construct_UClass_ACurrencyPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACurrencyPickup.OuterSingleton;
}
template<> CURRENCYSYSTEM_API UClass* StaticClass<ACurrencyPickup>()
{
	return ACurrencyPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACurrencyPickup);
ACurrencyPickup::~ACurrencyPickup() {}
// End Class ACurrencyPickup

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
=======
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_e4125334_Source_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
=======
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_E4155025_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
=======
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_kathr_OneDrive_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_E4089830_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
>>>>>>> main
>>>>>>> main
>>>>>>> main
>>>>>>> main
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACurrencyPickup, ACurrencyPickup::StaticClass, TEXT("ACurrencyPickup"), &Z_Registration_Info_UClass_ACurrencyPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACurrencyPickup), 1606659507U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_3333820061(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
=======
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_e4125334_Source_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_3333820061(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_e4125334_Source_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_e4125334_Source_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
=======
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4155025_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_3333820061(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_E4155025_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4155025_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
=======
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kathr_OneDrive_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_3333820061(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_kathr_OneDrive_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kathr_OneDrive_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4089830_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_3333820061(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_E4089830_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4089830_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
>>>>>>> main
>>>>>>> main
>>>>>>> main
>>>>>>> main
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
