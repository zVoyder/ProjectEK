// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Projectiles/ProjectileBullet.h"

#ifdef WEAPONSYSTEM_ProjectileBullet_generated_h
#error "ProjectileBullet.generated.h already included, missing '#pragma once' in ProjectileBullet.h"
#endif
#define WEAPONSYSTEM_ProjectileBullet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileBullet ********************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBullet(); \
	friend struct Z_Construct_UClass_AProjectileBullet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileBullet, AProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AProjectileBullet_NoRegister) \
	DECLARE_SERIALIZER(AProjectileBullet)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBullet(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileBullet(AProjectileBullet&&) = delete; \
	AProjectileBullet(const AProjectileBullet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBullet) \
	NO_API virtual ~AProjectileBullet();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileBullet;

// ********** End Class AProjectileBullet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
