// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/ShootBarrel.h"

#ifdef WEAPONSYSTEM_ShootBarrel_generated_h
#error "ShootBarrel.generated.h already included, missing '#pragma once' in ShootBarrel.h"
#endif
#define WEAPONSYSTEM_ShootBarrel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UShootPoint;

// ********** Begin Class UShootBarrel *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetShootPointsChildren);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootBarrel(); \
	friend struct Z_Construct_UClass_UShootBarrel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister(); \
public: \
	DECLARE_CLASS2(UShootBarrel, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShootBarrel_NoRegister) \
	DECLARE_SERIALIZER(UShootBarrel)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShootBarrel(UShootBarrel&&) = delete; \
	UShootBarrel(const UShootBarrel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShootBarrel) \
	NO_API virtual ~UShootBarrel();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShootBarrel;

// ********** End Class UShootBarrel ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
