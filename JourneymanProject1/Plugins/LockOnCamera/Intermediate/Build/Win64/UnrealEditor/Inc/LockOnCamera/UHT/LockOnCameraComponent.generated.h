// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LockOnCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULockOnTarget;
#ifdef LOCKONCAMERA_LockOnCameraComponent_generated_h
#error "LockOnCameraComponent.generated.h already included, missing '#pragma once' in LockOnCameraComponent.h"
#endif
#define LOCKONCAMERA_LockOnCameraComponent_generated_h

#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWidget); \
	DECLARE_FUNCTION(execUpdateCamera); \
	DECLARE_FUNCTION(execLockOff); \
	DECLARE_FUNCTION(execSwitchTarget); \
	DECLARE_FUNCTION(execLockOn); \
	DECLARE_FUNCTION(execLockOnClosest); \
	DECLARE_FUNCTION(execFindNearbyTargets);


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockOnCameraComponent(); \
	friend struct Z_Construct_UClass_ULockOnCameraComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LockOnCamera"), NO_API) \
	DECLARE_SERIALIZER(ULockOnCameraComponent)


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULockOnCameraComponent(ULockOnCameraComponent&&); \
	ULockOnCameraComponent(const ULockOnCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockOnCameraComponent) \
	NO_API virtual ~ULockOnCameraComponent();


#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_11_PROLOG
#define FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCKONCAMERA_API UClass* StaticClass<class ULockOnCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_e4086040_Documents_GitHub_Journeyman_Like_Clockwork_JourneymanProject1_Plugins_LockOnCamera_Source_LockOnCamera_Public_LockOnCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
