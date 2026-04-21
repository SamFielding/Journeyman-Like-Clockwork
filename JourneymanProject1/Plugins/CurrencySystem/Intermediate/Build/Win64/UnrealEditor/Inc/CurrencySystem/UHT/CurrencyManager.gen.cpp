// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurrencySystem/Public/CurrencyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyManager() {}

// Begin Cross Module References
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UCurrencyManager();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UCurrencyManager_NoRegister();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UPickupManager();
UPackage* Z_Construct_UPackage__Script_CurrencySystem();
// End Cross Module References

// Begin Class UCurrencyManager Function AddCurrency
struct Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics
{
	struct CurrencyManager_eventAddCurrency_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/CurrencyManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrencyManager_eventAddCurrency_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrencyManager, nullptr, "AddCurrency", nullptr, nullptr, Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::CurrencyManager_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::CurrencyManager_eventAddCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrencyManager_AddCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrencyManager_AddCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrencyManager::execAddCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCurrency(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCurrencyManager Function AddCurrency

// Begin Class UCurrencyManager Function RemoveCurrency
struct Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics
{
	struct CurrencyManager_eventRemoveCurrency_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/CurrencyManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrencyManager_eventRemoveCurrency_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrencyManager, nullptr, "RemoveCurrency", nullptr, nullptr, Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::CurrencyManager_eventRemoveCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::CurrencyManager_eventRemoveCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrencyManager_RemoveCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrencyManager_RemoveCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrencyManager::execRemoveCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCurrency(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCurrencyManager Function RemoveCurrency

// Begin Class UCurrencyManager
void UCurrencyManager::StaticRegisterNativesUCurrencyManager()
{
	UClass* Class = UCurrencyManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCurrency", &UCurrencyManager::execAddCurrency },
		{ "RemoveCurrency", &UCurrencyManager::execRemoveCurrency },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurrencyManager);
UClass* Z_Construct_UClass_UCurrencyManager_NoRegister()
{
	return UCurrencyManager::StaticClass();
}
struct Z_Construct_UClass_UCurrencyManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "CurrencyManager.h" },
		{ "ModuleRelativePath", "Public/CurrencyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmount_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/CurrencyManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrencyAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrencyManager_AddCurrency, "AddCurrency" }, // 1792521336
		{ &Z_Construct_UFunction_UCurrencyManager_RemoveCurrency, "RemoveCurrency" }, // 2692329842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurrencyManager_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyManager, CurrencyAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyAmount_MetaData), NewProp_CurrencyAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrencyManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyManager_Statics::NewProp_CurrencyAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurrencyManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPickupManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CurrencySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyManager_Statics::ClassParams = {
	&UCurrencyManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurrencyManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyManager_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurrencyManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurrencyManager()
{
	if (!Z_Registration_Info_UClass_UCurrencyManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurrencyManager.OuterSingleton, Z_Construct_UClass_UCurrencyManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurrencyManager.OuterSingleton;
}
template<> CURRENCYSYSTEM_API UClass* StaticClass<UCurrencyManager>()
{
	return UCurrencyManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyManager);
UCurrencyManager::~UCurrencyManager() {}
// End Class UCurrencyManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_joecu_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurrencyManager, UCurrencyManager::StaticClass, TEXT("UCurrencyManager"), &Z_Registration_Info_UClass_UCurrencyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurrencyManager), 2314637022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joecu_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyManager_h_3494251881(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_joecu_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joecu_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
