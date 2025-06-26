// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Thrower/Thrower.h"

#ifdef WEAPONSYSTEM_Thrower_generated_h
#error "Thrower.generated.h already included, missing '#pragma once' in Thrower.h"
#endif
#define WEAPONSYSTEM_Thrower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UThrower *****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execThrowAtDirection); \
	DECLARE_FUNCTION(execThrow);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UThrower_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrower(); \
	friend struct Z_Construct_UClass_UThrower_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UThrower_NoRegister(); \
public: \
	DECLARE_CLASS2(UThrower, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UThrower_NoRegister) \
	DECLARE_SERIALIZER(UThrower)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThrower(UThrower&&) = delete; \
	UThrower(const UThrower&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThrower) \
	NO_API virtual ~UThrower();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThrower;

// ********** End Class UThrower *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
