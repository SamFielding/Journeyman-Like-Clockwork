// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerTimeComponent/Public/SF_CPP_PLAYERTIME.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSF_CPP_PLAYERTIME() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PLAYERTIMECOMPONENT_API UClass* Z_Construct_UClass_USF_CPP_PLAYERTIME();
PLAYERTIMECOMPONENT_API UClass* Z_Construct_UClass_USF_CPP_PLAYERTIME_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayerTimeComponent();
// End Cross Module References

// Begin Class USF_CPP_PLAYERTIME Function AddTime
struct Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics
{
	struct SF_CPP_PLAYERTIME_eventAddTime_Parms
	{
		float timeAdded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeAdded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::NewProp_timeAdded = { "timeAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventAddTime_Parms, timeAdded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::NewProp_timeAdded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USF_CPP_PLAYERTIME, nullptr, "AddTime", nullptr, nullptr, Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::SF_CPP_PLAYERTIME_eventAddTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::SF_CPP_PLAYERTIME_eventAddTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USF_CPP_PLAYERTIME::execAddTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_timeAdded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTime(Z_Param_timeAdded);
	P_NATIVE_END;
}
// End Class USF_CPP_PLAYERTIME Function AddTime

// Begin Class USF_CPP_PLAYERTIME Function OnBeginOverlap
struct Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics
{
	struct SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USF_CPP_PLAYERTIME, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::SF_CPP_PLAYERTIME_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USF_CPP_PLAYERTIME::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class USF_CPP_PLAYERTIME Function OnBeginOverlap

// Begin Class USF_CPP_PLAYERTIME Function OutOfTimeCheck
struct Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics
{
	struct SF_CPP_PLAYERTIME_eventOutOfTimeCheck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SF_CPP_PLAYERTIME_eventOutOfTimeCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SF_CPP_PLAYERTIME_eventOutOfTimeCheck_Parms), &Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USF_CPP_PLAYERTIME, nullptr, "OutOfTimeCheck", nullptr, nullptr, Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::SF_CPP_PLAYERTIME_eventOutOfTimeCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::SF_CPP_PLAYERTIME_eventOutOfTimeCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USF_CPP_PLAYERTIME::execOutOfTimeCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OutOfTimeCheck();
	P_NATIVE_END;
}
// End Class USF_CPP_PLAYERTIME Function OutOfTimeCheck

// Begin Class USF_CPP_PLAYERTIME Function RemoveTime
struct Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics
{
	struct SF_CPP_PLAYERTIME_eventRemoveTime_Parms
	{
		float damageDone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::NewProp_damageDone = { "damageDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SF_CPP_PLAYERTIME_eventRemoveTime_Parms, damageDone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::NewProp_damageDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USF_CPP_PLAYERTIME, nullptr, "RemoveTime", nullptr, nullptr, Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::SF_CPP_PLAYERTIME_eventRemoveTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::SF_CPP_PLAYERTIME_eventRemoveTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USF_CPP_PLAYERTIME::execRemoveTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damageDone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTime(Z_Param_damageDone);
	P_NATIVE_END;
}
// End Class USF_CPP_PLAYERTIME Function RemoveTime

// Begin Class USF_CPP_PLAYERTIME Function TimeTickDown
struct Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USF_CPP_PLAYERTIME, nullptr, "TimeTickDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USF_CPP_PLAYERTIME::execTimeTickDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimeTickDown();
	P_NATIVE_END;
}
// End Class USF_CPP_PLAYERTIME Function TimeTickDown

// Begin Class USF_CPP_PLAYERTIME
void USF_CPP_PLAYERTIME::StaticRegisterNativesUSF_CPP_PLAYERTIME()
{
	UClass* Class = USF_CPP_PLAYERTIME::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTime", &USF_CPP_PLAYERTIME::execAddTime },
		{ "OnBeginOverlap", &USF_CPP_PLAYERTIME::execOnBeginOverlap },
		{ "OutOfTimeCheck", &USF_CPP_PLAYERTIME::execOutOfTimeCheck },
		{ "RemoveTime", &USF_CPP_PLAYERTIME::execRemoveTime },
		{ "TimeTickDown", &USF_CPP_PLAYERTIME::execTimeTickDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USF_CPP_PLAYERTIME);
UClass* Z_Construct_UClass_USF_CPP_PLAYERTIME_NoRegister()
{
	return USF_CPP_PLAYERTIME::StaticClass();
}
struct Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "SF_CPP_PLAYERTIME.h" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxPlayerTime_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCurrentTime_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tickDownRate_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/SF_CPP_PLAYERTIME.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxPlayerTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerCurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tickDownRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USF_CPP_PLAYERTIME_AddTime, "AddTime" }, // 4275334934
		{ &Z_Construct_UFunction_USF_CPP_PLAYERTIME_OnBeginOverlap, "OnBeginOverlap" }, // 757233219
		{ &Z_Construct_UFunction_USF_CPP_PLAYERTIME_OutOfTimeCheck, "OutOfTimeCheck" }, // 2221078066
		{ &Z_Construct_UFunction_USF_CPP_PLAYERTIME_RemoveTime, "RemoveTime" }, // 2257730681
		{ &Z_Construct_UFunction_USF_CPP_PLAYERTIME_TimeTickDown, "TimeTickDown" }, // 2628020497
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USF_CPP_PLAYERTIME>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_maxPlayerTime = { "maxPlayerTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USF_CPP_PLAYERTIME, maxPlayerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxPlayerTime_MetaData), NewProp_maxPlayerTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_playerCurrentTime = { "playerCurrentTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USF_CPP_PLAYERTIME, playerCurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCurrentTime_MetaData), NewProp_playerCurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_tickDownRate = { "tickDownRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USF_CPP_PLAYERTIME, tickDownRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tickDownRate_MetaData), NewProp_tickDownRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_maxPlayerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_playerCurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::NewProp_tickDownRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerTimeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::ClassParams = {
	&USF_CPP_PLAYERTIME::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::Class_MetaDataParams), Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USF_CPP_PLAYERTIME()
{
	if (!Z_Registration_Info_UClass_USF_CPP_PLAYERTIME.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USF_CPP_PLAYERTIME.OuterSingleton, Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USF_CPP_PLAYERTIME.OuterSingleton;
}
template<> PLAYERTIMECOMPONENT_API UClass* StaticClass<USF_CPP_PLAYERTIME>()
{
	return USF_CPP_PLAYERTIME::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USF_CPP_PLAYERTIME);
USF_CPP_PLAYERTIME::~USF_CPP_PLAYERTIME() {}
// End Class USF_CPP_PLAYERTIME

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USF_CPP_PLAYERTIME, USF_CPP_PLAYERTIME::StaticClass, TEXT("USF_CPP_PLAYERTIME"), &Z_Registration_Info_UClass_USF_CPP_PLAYERTIME, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USF_CPP_PLAYERTIME), 16572853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_769266510(TEXT("/Script/PlayerTimeComponent"),
	Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
