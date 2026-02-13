// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LockOnCamera/Public/LockOnTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnTarget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
LOCKONCAMERA_API UClass* Z_Construct_UClass_ULockOnTarget();
LOCKONCAMERA_API UClass* Z_Construct_UClass_ULockOnTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LockOnCamera();
// End Cross Module References

// Begin Class ULockOnTarget Function GetOwnerLocation
struct Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics
{
	struct LockOnTarget_eventGetOwnerLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOnTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnTarget_eventGetOwnerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnTarget, nullptr, "GetOwnerLocation", nullptr, nullptr, Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::LockOnTarget_eventGetOwnerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::LockOnTarget_eventGetOwnerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnTarget::execGetOwnerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetOwnerLocation();
	P_NATIVE_END;
}
// End Class ULockOnTarget Function GetOwnerLocation

// Begin Class ULockOnTarget Function GetTargetLocation
struct Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics
{
	struct LockOnTarget_eventGetTargetLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOnTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnTarget_eventGetTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnTarget, nullptr, "GetTargetLocation", nullptr, nullptr, Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::LockOnTarget_eventGetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::LockOnTarget_eventGetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockOnTarget_GetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnTarget_GetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockOnTarget::execGetTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetLocation();
	P_NATIVE_END;
}
// End Class ULockOnTarget Function GetTargetLocation

// Begin Class ULockOnTarget
void ULockOnTarget::StaticRegisterNativesULockOnTarget()
{
	UClass* Class = ULockOnTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwnerLocation", &ULockOnTarget::execGetOwnerLocation },
		{ "GetTargetLocation", &ULockOnTarget::execGetTargetLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnTarget);
UClass* Z_Construct_UClass_ULockOnTarget_NoRegister()
{
	return ULockOnTarget::StaticClass();
}
struct Z_Construct_UClass_ULockOnTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LockOnTarget.h" },
		{ "ModuleRelativePath", "Public/LockOnTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnTarget_GetOwnerLocation, "GetOwnerLocation" }, // 2030260665
		{ &Z_Construct_UFunction_ULockOnTarget_GetTargetLocation, "GetTargetLocation" }, // 2260671700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULockOnTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LockOnCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnTarget_Statics::ClassParams = {
	&ULockOnTarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULockOnTarget()
{
	if (!Z_Registration_Info_UClass_ULockOnTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnTarget.OuterSingleton, Z_Construct_UClass_ULockOnTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULockOnTarget.OuterSingleton;
}
template<> LOCKONCAMERA_API UClass* StaticClass<ULockOnTarget>()
{
	return ULockOnTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnTarget);
ULockOnTarget::~ULockOnTarget() {}
// End Class ULockOnTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnTarget, ULockOnTarget::StaticClass, TEXT("ULockOnTarget"), &Z_Registration_Info_UClass_ULockOnTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnTarget), 390221360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnTarget_h_2028242694(TEXT("/Script/LockOnCamera"),
	Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
