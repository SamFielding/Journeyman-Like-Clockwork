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
CURRENCYSYSTEM_API UClass* Z_Construct_UClass_UCurrencyManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CurrencySystem();
// End Cross Module References

// Begin Class ACurrencyPickup Function CollectCurrency
struct Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics
{
	struct CurrencyPickup_eventCollectCurrency_Parms
	{
		UCurrencyManager* CurrencyManagerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrencyManagerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::NewProp_CurrencyManagerComponent = { "CurrencyManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrencyPickup_eventCollectCurrency_Parms, CurrencyManagerComponent), Z_Construct_UClass_UCurrencyManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyManagerComponent_MetaData), NewProp_CurrencyManagerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::NewProp_CurrencyManagerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACurrencyPickup, nullptr, "CollectCurrency", nullptr, nullptr, Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::CurrencyPickup_eventCollectCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::CurrencyPickup_eventCollectCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACurrencyPickup_CollectCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACurrencyPickup_CollectCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACurrencyPickup::execCollectCurrency)
{
	P_GET_OBJECT(UCurrencyManager,Z_Param_CurrencyManagerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectCurrency(Z_Param_CurrencyManagerComponent);
	P_NATIVE_END;
}
// End Class ACurrencyPickup Function CollectCurrency

// Begin Class ACurrencyPickup
void ACurrencyPickup::StaticRegisterNativesACurrencyPickup()
{
	UClass* Class = ACurrencyPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectCurrency", &ACurrencyPickup::execCollectCurrency },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Category", "Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscillationFrequency_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscillationAmplitude_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttractionStrength_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Currency Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurrencyPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrencyValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationAmplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttractionStrength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACurrencyPickup_CollectCurrency, "CollectCurrency" }, // 2812509254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACurrencyPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_CurrencyValue = { "CurrencyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, CurrencyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyValue_MetaData), NewProp_CurrencyValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_OscillationFrequency = { "OscillationFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, OscillationFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscillationFrequency_MetaData), NewProp_OscillationFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_OscillationAmplitude = { "OscillationAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, OscillationAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscillationAmplitude_MetaData), NewProp_OscillationAmplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_AttractionStrength = { "AttractionStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, AttractionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttractionStrength_MetaData), NewProp_AttractionStrength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACurrencyPickup, Target), Z_Construct_UClass_UCurrencyManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ACurrencyPickup*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACurrencyPickup), &Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_CurrencyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_OscillationFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_OscillationAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_AttractionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyPickup_Statics::NewProp_bIsMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACurrencyPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CurrencySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACurrencyPickup_Statics::ClassParams = {
	&ACurrencyPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACurrencyPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACurrencyPickup, ACurrencyPickup::StaticClass, TEXT("ACurrencyPickup"), &Z_Registration_Info_UClass_ACurrencyPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACurrencyPickup), 3751496577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_1758410706(TEXT("/Script/CurrencySystem"),
	Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
