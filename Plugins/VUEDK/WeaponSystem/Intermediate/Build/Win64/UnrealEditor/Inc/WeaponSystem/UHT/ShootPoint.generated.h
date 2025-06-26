// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/ShootPoint.h"

#ifdef WEAPONSYSTEM_ShootPoint_generated_h
#error "ShootPoint.generated.h already included, missing '#pragma once' in ShootPoint.h"
#endif
#define WEAPONSYSTEM_ShootPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShootPoint **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetShootPointSpreadedRelativeDirection); \
	DECLARE_FUNCTION(execGetShootPointSpreadedDirection); \
	DECLARE_FUNCTION(execGetShootPointRelativeDirection); \
	DECLARE_FUNCTION(execGetShootPointDirection); \
	DECLARE_FUNCTION(execGetShootPointRelativeLocation); \
	DECLARE_FUNCTION(execGetShootPointLocation); \
	DECLARE_FUNCTION(execGetSpreadRad);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootPoint(); \
	friend struct Z_Construct_UClass_UShootPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UShootPoint, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShootPoint_NoRegister) \
	DECLARE_SERIALIZER(UShootPoint)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShootPoint(UShootPoint&&) = delete; \
	UShootPoint(const UShootPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShootPoint) \
	NO_API virtual ~UShootPoint();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShootPoint;

// ********** End Class UShootPoint ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
