// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurrencySystem/Public/DropCurrencyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropCurrencyComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_ACurrencyPickup_NoRegister();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UDropCurrencyComponent();
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UDropCurrencyComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CurrencySystem();
// End Cross Module References

// Begin Class UDropCurrencyComponent Function DropCurrency
struct Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics
{
	struct DropCurrencyComponent_eventDropCurrency_Parms
	{
		FTransform SpawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency Dropping" },
		{ "ModuleRelativePath", "Public/DropCurrencyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropCurrencyComponent_eventDropCurrency_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::NewProp_SpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropCurrencyComponent, nullptr, "DropCurrency", nullptr, nullptr, Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::DropCurrencyComponent_eventDropCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::DropCurrencyComponent_eventDropCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDropCurrencyComponent::execDropCurrency)
{
	P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropCurrency(Z_Param_SpawnTransform);
	P_NATIVE_END;
}
// End Class UDropCurrencyComponent Function DropCurrency

// Begin Class UDropCurrencyComponent
void UDropCurrencyComponent::StaticRegisterNativesUDropCurrencyComponent()
{
	UClass* Class = UDropCurrencyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCurrency", &UDropCurrencyComponent::execDropCurrency },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropCurrencyComponent);
UClass* Z_Construct_UClass_UDropCurrencyComponent_NoRegister()
{
	return UDropCurrencyComponent::StaticClass();
}
struct Z_Construct_UClass_UDropCurrencyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DropCurrencyComponent.h" },
		{ "ModuleRelativePath", "Public/DropCurrencyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Drops_MetaData[] = {
		{ "Category", "Currency Dropping" },
		{ "ModuleRelativePath", "Public/DropCurrencyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Drops_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Drops;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropCurrencyComponent_DropCurrency, "DropCurrency" }, // 198898852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropCurrencyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDropCurrencyComponent_Statics::NewProp_Drops_Inner = { "Drops", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ACurrencyPickup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDropCurrencyComponent_Statics::NewProp_Drops = { "Drops", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropCurrencyComponent, Drops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Drops_MetaData), NewProp_Drops_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropCurrencyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropCurrencyComponent_Statics::NewProp_Drops_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropCurrencyComponent_Statics::NewProp_Drops,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropCurrencyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDropCurrencyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CurrencySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropCurrencyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropCurrencyComponent_Statics::ClassParams = {
	&UDropCurrencyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDropCurrencyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDropCurrencyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropCurrencyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropCurrencyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDropCurrencyComponent()
{
	if (!Z_Registration_Info_UClass_UDropCurrencyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropCurrencyComponent.OuterSingleton, Z_Construct_UClass_UDropCurrencyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDropCurrencyComponent.OuterSingleton;
}
template<> CURRENCYSYSTEM_API UClass* StaticClass<UDropCurrencyComponent>()
{
	return UDropCurrencyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDropCurrencyComponent);
UDropCurrencyComponent::~UDropCurrencyComponent() {}
// End Class UDropCurrencyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_DropCurrencyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDropCurrencyComponent, UDropCurrencyComponent::StaticClass, TEXT("UDropCurrencyComponent"), &Z_Registration_Info_UClass_UDropCurrencyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropCurrencyComponent), 1004103478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_DropCurrencyComponent_h_2552527308(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_DropCurrencyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_DropCurrencyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
