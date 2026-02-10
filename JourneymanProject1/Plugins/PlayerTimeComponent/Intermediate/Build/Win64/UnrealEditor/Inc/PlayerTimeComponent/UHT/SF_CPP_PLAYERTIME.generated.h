// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SF_CPP_PLAYERTIME.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLAYERTIMECOMPONENT_SF_CPP_PLAYERTIME_generated_h
#error "SF_CPP_PLAYERTIME.generated.h already included, missing '#pragma once' in SF_CPP_PLAYERTIME.h"
#endif
#define PLAYERTIMECOMPONENT_SF_CPP_PLAYERTIME_generated_h

#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execRemoveTime); \
	DECLARE_FUNCTION(execAddTime); \
	DECLARE_FUNCTION(execTimeTickDown); \
	DECLARE_FUNCTION(execOutOfTimeCheck);


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSF_CPP_PLAYERTIME(); \
	friend struct Z_Construct_UClass_USF_CPP_PLAYERTIME_Statics; \
public: \
	DECLARE_CLASS(USF_CPP_PLAYERTIME, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerTimeComponent"), NO_API) \
	DECLARE_SERIALIZER(USF_CPP_PLAYERTIME)


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USF_CPP_PLAYERTIME(USF_CPP_PLAYERTIME&&); \
	USF_CPP_PLAYERTIME(const USF_CPP_PLAYERTIME&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USF_CPP_PLAYERTIME); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USF_CPP_PLAYERTIME); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USF_CPP_PLAYERTIME) \
	NO_API virtual ~USF_CPP_PLAYERTIME();


#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_11_PROLOG
#define FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERTIMECOMPONENT_API UClass* StaticClass<class USF_CPP_PLAYERTIME>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_E4050212_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_PlayerTimeComponent_Source_PlayerTimeComponent_Public_SF_CPP_PLAYERTIME_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
