// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Health/Public/WL_CPP_BASEHEALTHCOMPONENT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWL_CPP_BASEHEALTHCOMPONENT() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HEALTH_API UClass* Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT();
HEALTH_API UClass* Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_NoRegister();
HEALTH_API UFunction* Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Health();
// End Cross Module References

// Begin Delegate FOnTakenDamage
struct Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Health, nullptr, "OnTakenDamage__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTakenDamage_DelegateWrapper(const FMulticastScriptDelegate& OnTakenDamage)
{
	OnTakenDamage.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTakenDamage

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT Function DecreaseMaxHealth
struct Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics
{
	struct WL_CPP_BASEHEALTHCOMPONENT_eventDecreaseMaxHealth_Parms
	{
		float Decrement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Max Health Status" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- Decreases the actors MAXIMUM Health by a specified amount" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Decrement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::NewProp_Decrement = { "Decrement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WL_CPP_BASEHEALTHCOMPONENT_eventDecreaseMaxHealth_Parms, Decrement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::NewProp_Decrement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, nullptr, "DecreaseMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventDecreaseMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventDecreaseMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWL_CPP_BASEHEALTHCOMPONENT::execDecreaseMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Decrement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseMaxHealth(Z_Param_Decrement);
	P_NATIVE_END;
}
// End Class UWL_CPP_BASEHEALTHCOMPONENT Function DecreaseMaxHealth

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT Function Heal
struct Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics
{
	struct WL_CPP_BASEHEALTHCOMPONENT_eventHeal_Parms
	{
		float Increment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Current Health Status" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "+ Heals the actor by a specified amount" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Increment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WL_CPP_BASEHEALTHCOMPONENT_eventHeal_Parms, Increment), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::NewProp_Increment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWL_CPP_BASEHEALTHCOMPONENT::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Increment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_Increment);
	P_NATIVE_END;
}
// End Class UWL_CPP_BASEHEALTHCOMPONENT Function Heal

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT Function IncreaseMaxHealth
struct Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics
{
	struct WL_CPP_BASEHEALTHCOMPONENT_eventIncreaseMaxHealth_Parms
	{
		float Increment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Max Health Status" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "+ Increases the actors MAXIMUM Health by a specified amount" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Increment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WL_CPP_BASEHEALTHCOMPONENT_eventIncreaseMaxHealth_Parms, Increment), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::NewProp_Increment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, nullptr, "IncreaseMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventIncreaseMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventIncreaseMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWL_CPP_BASEHEALTHCOMPONENT::execIncreaseMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Increment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseMaxHealth(Z_Param_Increment);
	P_NATIVE_END;
}
// End Class UWL_CPP_BASEHEALTHCOMPONENT Function IncreaseMaxHealth

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT Function isAlive
struct Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics
{
	struct WL_CPP_BASEHEALTHCOMPONENT_eventisAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Life State" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if actor still has health remaining" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WL_CPP_BASEHEALTHCOMPONENT_eventisAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WL_CPP_BASEHEALTHCOMPONENT_eventisAlive_Parms), &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, nullptr, "isAlive", nullptr, nullptr, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventisAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventisAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWL_CPP_BASEHEALTHCOMPONENT::execisAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->isAlive();
	P_NATIVE_END;
}
// End Class UWL_CPP_BASEHEALTHCOMPONENT Function isAlive

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT Function TakeDamage
struct Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics
{
	struct WL_CPP_BASEHEALTHCOMPONENT_eventTakeDamage_Parms
	{
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Current Health Status" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- Damages the actor by a specified amount" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WL_CPP_BASEHEALTHCOMPONENT_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::WL_CPP_BASEHEALTHCOMPONENT_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWL_CPP_BASEHEALTHCOMPONENT::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class UWL_CPP_BASEHEALTHCOMPONENT Function TakeDamage

// Begin Class UWL_CPP_BASEHEALTHCOMPONENT
void UWL_CPP_BASEHEALTHCOMPONENT::StaticRegisterNativesUWL_CPP_BASEHEALTHCOMPONENT()
{
	UClass* Class = UWL_CPP_BASEHEALTHCOMPONENT::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseMaxHealth", &UWL_CPP_BASEHEALTHCOMPONENT::execDecreaseMaxHealth },
		{ "Heal", &UWL_CPP_BASEHEALTHCOMPONENT::execHeal },
		{ "IncreaseMaxHealth", &UWL_CPP_BASEHEALTHCOMPONENT::execIncreaseMaxHealth },
		{ "isAlive", &UWL_CPP_BASEHEALTHCOMPONENT::execisAlive },
		{ "TakeDamage", &UWL_CPP_BASEHEALTHCOMPONENT::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWL_CPP_BASEHEALTHCOMPONENT);
UClass* Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_NoRegister()
{
	return UWL_CPP_BASEHEALTHCOMPONENT::StaticClass();
}
struct Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WL_CPP_BASEHEALTHCOMPONENT.h" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Set Max Health" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Set Current Health" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTakenDamage_MetaData[] = {
		{ "Category", "Damage Event" },
		{ "ModuleRelativePath", "Public/WL_CPP_BASEHEALTHCOMPONENT.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakenDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_DecreaseMaxHealth, "DecreaseMaxHealth" }, // 32533874
		{ &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_Heal, "Heal" }, // 3938649816
		{ &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_IncreaseMaxHealth, "IncreaseMaxHealth" }, // 4074487413
		{ &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_isAlive, "isAlive" }, // 2017647744
		{ &Z_Construct_UFunction_UWL_CPP_BASEHEALTHCOMPONENT_TakeDamage, "TakeDamage" }, // 1406657634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWL_CPP_BASEHEALTHCOMPONENT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWL_CPP_BASEHEALTHCOMPONENT, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWL_CPP_BASEHEALTHCOMPONENT, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_OnTakenDamage = { "OnTakenDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWL_CPP_BASEHEALTHCOMPONENT, OnTakenDamage), Z_Construct_UDelegateFunction_Health_OnTakenDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTakenDamage_MetaData), NewProp_OnTakenDamage_MetaData) }; // 1338827116
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::NewProp_OnTakenDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::ClassParams = {
	&UWL_CPP_BASEHEALTHCOMPONENT::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::Class_MetaDataParams), Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT()
{
	if (!Z_Registration_Info_UClass_UWL_CPP_BASEHEALTHCOMPONENT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWL_CPP_BASEHEALTHCOMPONENT.OuterSingleton, Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWL_CPP_BASEHEALTHCOMPONENT.OuterSingleton;
}
template<> HEALTH_API UClass* StaticClass<UWL_CPP_BASEHEALTHCOMPONENT>()
{
	return UWL_CPP_BASEHEALTHCOMPONENT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWL_CPP_BASEHEALTHCOMPONENT);
UWL_CPP_BASEHEALTHCOMPONENT::~UWL_CPP_BASEHEALTHCOMPONENT() {}
// End Class UWL_CPP_BASEHEALTHCOMPONENT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT, UWL_CPP_BASEHEALTHCOMPONENT::StaticClass, TEXT("UWL_CPP_BASEHEALTHCOMPONENT"), &Z_Registration_Info_UClass_UWL_CPP_BASEHEALTHCOMPONENT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWL_CPP_BASEHEALTHCOMPONENT), 2572751673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_2487398827(TEXT("/Script/Health"),
	Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
