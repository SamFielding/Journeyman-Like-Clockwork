// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurrencyPickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurrencyManager;
#ifdef CURRENCYSYSTEM_CurrencyPickup_generated_h
#error "CurrencyPickup.generated.h already included, missing '#pragma once' in CurrencyPickup.h"
#endif
#define CURRENCYSYSTEM_CurrencyPickup_generated_h

#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCollectCurrency);


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACurrencyPickup(); \
	friend struct Z_Construct_UClass_ACurrencyPickup_Statics; \
public: \
	DECLARE_CLASS(ACurrencyPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurrencySystem"), NO_API) \
	DECLARE_SERIALIZER(ACurrencyPickup)


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACurrencyPickup(ACurrencyPickup&&); \
	ACurrencyPickup(const ACurrencyPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACurrencyPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACurrencyPickup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACurrencyPickup) \
	NO_API virtual ~ACurrencyPickup();


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_12_PROLOG
#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURRENCYSYSTEM_API UClass* StaticClass<class ACurrencyPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_CurrencySystem_Source_CurrencySystem_Public_CurrencyPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
