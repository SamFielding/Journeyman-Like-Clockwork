// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerTimeComponent/Public/SF_CPP_TIMEPICKUP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSF_CPP_TIMEPICKUP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PLAYERTIMECOMPONENT_API UClass* Z_Construct_UClass_ASF_CPP_TIMEPICKUP();
PLAYERTIMECOMPONENT_API UClass* Z_Construct_UClass_ASF_CPP_TIMEPICKUP_NoRegister();
PLAYERTIMECOMPONENT_API UClass* Z_Construct_UClass_USF_CPP_PLAYERTIME_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayerTimeComponent();
// End Cross Module References

// Begin Class ASF_CPP_TIMEPICKUP Function CollectTime
struct Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics
{
	struct SF_CPP_TIMEPICKUP_eventCollectTime_Parms
	{
		USF_CPP_PLAYERTIME* SF_CPP_PLAYERTIMEComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SF_CPP_PLAYERTIMEComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SF_CPP_PLAYERTIMEComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::NewProp_SF_CPP_PLAYERTIMEComponent = { "SF_CPP_PLAYERTIMEComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_TIMEPICKUP_eventCollectTime_Parms, SF_CPP_PLAYERTIMEComponent), Z_Construct_UClass_USF_CPP_PLAYERTIME_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SF_CPP_PLAYERTIMEComponent_MetaData), NewProp_SF_CPP_PLAYERTIMEComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::NewProp_SF_CPP_PLAYERTIMEComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASF_CPP_TIMEPICKUP, nullptr, "CollectTime", nullptr, nullptr, Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::SF_CPP_TIMEPICKUP_eventCollectTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::SF_CPP_TIMEPICKUP_eventCollectTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASF_CPP_TIMEPICKUP::execCollectTime)
{
	P_GET_OBJECT(USF_CPP_PLAYERTIME,Z_Param_SF_CPP_PLAYERTIMEComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectTime(Z_Param_SF_CPP_PLAYERTIMEComponent);
	P_NATIVE_END;
}
// End Class ASF_CPP_TIMEPICKUP Function CollectTime

// Begin Class ASF_CPP_TIMEPICKUP
void ASF_CPP_TIMEPICKUP::StaticRegisterNativesASF_CPP_TIMEPICKUP()
{
	UClass* Class = ASF_CPP_TIMEPICKUP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectTime", &ASF_CPP_TIMEPICKUP::execCollectTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASF_CPP_TIMEPICKUP);
UClass* Z_Construct_UClass_ASF_CPP_TIMEPICKUP_NoRegister()
{
	return ASF_CPP_TIMEPICKUP::StaticClass();
}
struct Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SF_CPP_TIMEPICKUP.h" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeValue_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscillationFrequency_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscillationAmplitude_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttractionStrength_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "Category", "Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "ModuleRelativePath", "Public/SF_CPP_TIMEPICKUP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationAmplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttractionStrength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASF_CPP_TIMEPICKUP_CollectTime, "CollectTime" }, // 911767734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASF_CPP_TIMEPICKUP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_TimeValue = { "TimeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, TimeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeValue_MetaData), NewProp_TimeValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_OscillationFrequency = { "OscillationFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, OscillationFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscillationFrequency_MetaData), NewProp_OscillationFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_OscillationAmplitude = { "OscillationAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, OscillationAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscillationAmplitude_MetaData), NewProp_OscillationAmplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_AttractionStrength = { "AttractionStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, AttractionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttractionStrength_MetaData), NewProp_AttractionStrength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, Collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASF_CPP_TIMEPICKUP, Target), Z_Construct_UClass_USF_CPP_PLAYERTIME_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((ASF_CPP_TIMEPICKUP*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASF_CPP_TIMEPICKUP), &Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_TimeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_OscillationFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_OscillationAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_AttractionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Collider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::NewProp_bIsMoving,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerTimeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::ClassParams = {
	&ASF_CPP_TIMEPICKUP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::Class_MetaDataParams), Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASF_CPP_TIMEPICKUP()
{
	if (!Z_Registration_Info_UClass_ASF_CPP_TIMEPICKUP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASF_CPP_TIMEPICKUP.OuterSingleton, Z_Construct_UClass_ASF_CPP_TIMEPICKUP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASF_CPP_TIMEPICKUP.OuterSingleton;
}
template<> PLAYERTIMECOMPONENT_API UClass* StaticClass<ASF_CPP_TIMEPICKUP>()
{
	return ASF_CPP_TIMEPICKUP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASF_CPP_TIMEPICKUP);
ASF_CPP_TIMEPICKUP::~ASF_CPP_TIMEPICKUP() {}
// End Class ASF_CPP_TIMEPICKUP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_TIMEPICKUP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASF_CPP_TIMEPICKUP, ASF_CPP_TIMEPICKUP::StaticClass, TEXT("ASF_CPP_TIMEPICKUP"), &Z_Registration_Info_UClass_ASF_CPP_TIMEPICKUP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASF_CPP_TIMEPICKUP), 2909491925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_TIMEPICKUP_h_2878106547(TEXT("/Script/PlayerTimeComponent"),
	Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_TIMEPICKUP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_TIMEPICKUP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
