// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Projectiles/ProjectileExplosive.h"

#ifdef WEAPONSYSTEM_ProjectileExplosive_generated_h
#error "ProjectileExplosive.generated.h already included, missing '#pragma once' in ProjectileExplosive.h"
#endif
#define WEAPONSYSTEM_ProjectileExplosive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectileExplosive *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnExplosion_Implementation(); \
	DECLARE_FUNCTION(execOnExplosion); \
	DECLARE_FUNCTION(execExplode);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileExplosive_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileExplosive(); \
	friend struct Z_Construct_UClass_AProjectileExplosive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileExplosive_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileExplosive, AProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AProjectileExplosive_NoRegister) \
	DECLARE_SERIALIZER(AProjectileExplosive)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileExplosive(AProjectileExplosive&&) = delete; \
	AProjectileExplosive(const AProjectileExplosive&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileExplosive) \
	NO_API virtual ~AProjectileExplosive();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileExplosive;

// ********** End Class AProjectileExplosive *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
