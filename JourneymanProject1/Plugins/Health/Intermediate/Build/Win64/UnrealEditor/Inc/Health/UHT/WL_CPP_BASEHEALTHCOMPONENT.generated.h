// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WL_CPP_BASEHEALTHCOMPONENT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEALTH_WL_CPP_BASEHEALTHCOMPONENT_generated_h
#error "WL_CPP_BASEHEALTHCOMPONENT.generated.h already included, missing '#pragma once' in WL_CPP_BASEHEALTHCOMPONENT.h"
#endif
#define HEALTH_WL_CPP_BASEHEALTHCOMPONENT_generated_h

#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_13_DELEGATE \
HEALTH_API void FOnTakenDamage_DelegateWrapper(const FMulticastScriptDelegate& OnTakenDamage);


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecreaseMaxHealth); \
	DECLARE_FUNCTION(execIncreaseMaxHealth); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execisAlive);


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWL_CPP_BASEHEALTHCOMPONENT(); \
	friend struct Z_Construct_UClass_UWL_CPP_BASEHEALTHCOMPONENT_Statics; \
public: \
	DECLARE_CLASS(UWL_CPP_BASEHEALTHCOMPONENT, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Health"), NO_API) \
	DECLARE_SERIALIZER(UWL_CPP_BASEHEALTHCOMPONENT)


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWL_CPP_BASEHEALTHCOMPONENT(UWL_CPP_BASEHEALTHCOMPONENT&&); \
	UWL_CPP_BASEHEALTHCOMPONENT(const UWL_CPP_BASEHEALTHCOMPONENT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWL_CPP_BASEHEALTHCOMPONENT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWL_CPP_BASEHEALTHCOMPONENT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWL_CPP_BASEHEALTHCOMPONENT) \
	NO_API virtual ~UWL_CPP_BASEHEALTHCOMPONENT();


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_15_PROLOG
#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEALTH_API UClass* StaticClass<class UWL_CPP_BASEHEALTHCOMPONENT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_Health_Source_Health_Public_WL_CPP_BASEHEALTHCOMPONENT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
