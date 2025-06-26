// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Projectiles/ProjectileGrenade.h"

#ifdef WEAPONSYSTEM_ProjectileGrenade_generated_h
#error "ProjectileGrenade.generated.h already included, missing '#pragma once' in ProjectileGrenade.h"
#endif
#define WEAPONSYSTEM_ProjectileGrenade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileGrenade *******************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileGrenade, AProjectileExplosive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AProjectileGrenade_NoRegister) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileGrenade(AProjectileGrenade&&) = delete; \
	AProjectileGrenade(const AProjectileGrenade&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileGrenade) \
	NO_API virtual ~AProjectileGrenade();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileGrenade;

// ********** End Class AProjectileGrenade *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
