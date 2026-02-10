// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnCamera/Public/LockOnCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnCameraComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
LOCKONCAMERA_API UClass* Z_Construct_UClass_ULockOnCameraComponent();
LOCKONCAMERA_API UClass* Z_Construct_UClass_ULockOnCameraComponent_NoRegister();
LOCKONCAMERA_API UClass* Z_Construct_UClass_ULockOnTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LockOnCamera();
// End Cross Module References

// Begin Class ULockOnCameraComponent Function FindNearbyTargets
struct Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "FindNearbyTargets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execFindNearbyTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindNearbyTargets();
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function FindNearbyTargets

// Begin Class ULockOnCameraComponent Function LockOff
struct Z_Construct_UFunction_ULockOnCameraComponent_LockOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_LockOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "LockOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_LockOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_LockOff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_LockOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_LockOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execLockOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockOff();
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function LockOff

// Begin Class ULockOnCameraComponent Function LockOn
struct Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics
{
	struct LockOnCameraComponent_eventLockOn_Parms
	{
		ULockOnTarget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnCameraComponent_eventLockOn_Parms, Target), Z_Construct_UClass_ULockOnTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "LockOn", nullptr, nullptr, Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::LockOnCameraComponent_eventLockOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::LockOnCameraComponent_eventLockOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_LockOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_LockOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execLockOn)
{
	P_GET_OBJECT(ULockOnTarget,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockOn(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function LockOn

// Begin Class ULockOnCameraComponent Function LockOnClosest
struct Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "LockOnClosest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execLockOnClosest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockOnClosest();
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function LockOnClosest

// Begin Class ULockOnCameraComponent Function SwitchTarget
struct Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics
{
	struct LockOnCameraComponent_eventSwitchTarget_Parms
	{
		FVector2D Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnCameraComponent_eventSwitchTarget_Parms, Input), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "SwitchTarget", nullptr, nullptr, Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::LockOnCameraComponent_eventSwitchTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::LockOnCameraComponent_eventSwitchTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execSwitchTarget)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchTarget(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function SwitchTarget

// Begin Class ULockOnCameraComponent Function UpdateCamera
struct Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics
{
	struct LockOnCameraComponent_eventUpdateCamera_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnCameraComponent_eventUpdateCamera_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnCameraComponent, nullptr, "UpdateCamera", nullptr, nullptr, Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::LockOnCameraComponent_eventUpdateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::LockOnCameraComponent_eventUpdateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnCameraComponent::execUpdateCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCamera(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ULockOnCameraComponent Function UpdateCamera

// Begin Class ULockOnCameraComponent
void ULockOnCameraComponent::StaticRegisterNativesULockOnCameraComponent()
{
	UClass* Class = ULockOnCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindNearbyTargets", &ULockOnCameraComponent::execFindNearbyTargets },
		{ "LockOff", &ULockOnCameraComponent::execLockOff },
		{ "LockOn", &ULockOnCameraComponent::execLockOn },
		{ "LockOnClosest", &ULockOnCameraComponent::execLockOnClosest },
		{ "SwitchTarget", &ULockOnCameraComponent::execSwitchTarget },
		{ "UpdateCamera", &ULockOnCameraComponent::execUpdateCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnCameraComponent);
UClass* Z_Construct_UClass_ULockOnCameraComponent_NoRegister()
{
	return ULockOnCameraComponent::StaticClass();
}
struct Z_Construct_UClass_ULockOnCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LockOnCameraComponent.h" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnRange_MetaData[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpolationSpeed_MetaData[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchTargetDeadzone_MetaData[] = {
		{ "Category", "Lock On Camera" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearbyTargets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LockOnCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockOnRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwitchTargetDeadzone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearbyTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NearbyTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnCameraComponent_FindNearbyTargets, "FindNearbyTargets" }, // 376192
		{ &Z_Construct_UFunction_ULockOnCameraComponent_LockOff, "LockOff" }, // 534325508
		{ &Z_Construct_UFunction_ULockOnCameraComponent_LockOn, "LockOn" }, // 2825779716
		{ &Z_Construct_UFunction_ULockOnCameraComponent_LockOnClosest, "LockOnClosest" }, // 2493324501
		{ &Z_Construct_UFunction_ULockOnCameraComponent_SwitchTarget, "SwitchTarget" }, // 728143251
		{ &Z_Construct_UFunction_ULockOnCameraComponent_UpdateCamera, "UpdateCamera" }, // 2641657888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_LockOnRange = { "LockOnRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, LockOnRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnRange_MetaData), NewProp_LockOnRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_CameraInterpolationSpeed = { "CameraInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, CameraInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpolationSpeed_MetaData), NewProp_CameraInterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_SwitchTargetDeadzone = { "SwitchTargetDeadzone", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, SwitchTargetDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchTargetDeadzone_MetaData), NewProp_SwitchTargetDeadzone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, CurrentTarget), Z_Construct_UClass_ULockOnTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_NearbyTargets_Inner = { "NearbyTargets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULockOnTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_NearbyTargets = { "NearbyTargets", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnCameraComponent, NearbyTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearbyTargets_MetaData), NewProp_NearbyTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockOnCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_LockOnRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_CameraInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_SwitchTargetDeadzone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_NearbyTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnCameraComponent_Statics::NewProp_NearbyTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULockOnCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LockOnCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnCameraComponent_Statics::ClassParams = {
	&ULockOnCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULockOnCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULockOnCameraComponent()
{
	if (!Z_Registration_Info_UClass_ULockOnCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnCameraComponent.OuterSingleton, Z_Construct_UClass_ULockOnCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULockOnCameraComponent.OuterSingleton;
}
template<> LOCKONCAMERA_API UClass* StaticClass<ULockOnCameraComponent>()
{
	return ULockOnCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnCameraComponent);
ULockOnCameraComponent::~ULockOnCameraComponent() {}
// End Class ULockOnCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnCameraComponent, ULockOnCameraComponent::StaticClass, TEXT("ULockOnCameraComponent"), &Z_Registration_Info_UClass_ULockOnCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnCameraComponent), 1591798455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_2221293181(TEXT("/Script/LockOnCamera"),
	Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
