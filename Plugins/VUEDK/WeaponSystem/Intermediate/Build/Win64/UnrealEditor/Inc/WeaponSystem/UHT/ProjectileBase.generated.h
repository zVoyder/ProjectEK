// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Projectiles/ProjectileBase.h"

#ifdef WEAPONSYSTEM_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define WEAPONSYSTEM_ProjectileBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FHitResult;

// ********** Begin Delegate FProjectileHitDelegate ************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_14_DELEGATE \
WEAPONSYSTEM_API void FProjectileHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHitDelegate, FHitResult const& ImpactResult);


// ********** End Delegate FProjectileHitDelegate **************************************************

// ********** Begin Class AProjectileBase **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnProjectileLifeSpanEnd_Implementation(); \
	virtual void OnProjectileHit_Implementation(FHitResult const& ImpactResult, FVector const& ImpactVelocity); \
	virtual void OnInit_Implementation(); \
	virtual float CalculateLifeSpan_Implementation(const float InRange, const float InSpeed) const; \
	virtual void InitVelocityAndLifeSpan_Implementation(float InRange, float InSpeed, FVector const& InDirection); \
	DECLARE_FUNCTION(execProjectileHit); \
	DECLARE_FUNCTION(execEndProjectileLifeSpan); \
	DECLARE_FUNCTION(execOnProjectileLifeSpanEnd); \
	DECLARE_FUNCTION(execOnProjectileHit); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execDisposeProjectile); \
	DECLARE_FUNCTION(execGetProjectileInstigator); \
	DECLARE_FUNCTION(execGetProjectileVelocity); \
	DECLARE_FUNCTION(execGetRange); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execSetProjectileInstigator); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execSetRange); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execCalculateLifeSpan); \
	DECLARE_FUNCTION(execInitVelocityAndLifeSpan);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectileBase, APooledActorBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AProjectileBase_NoRegister) \
	DECLARE_SERIALIZER(AProjectileBase)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectileBase(AProjectileBase&&) = delete; \
	AProjectileBase(const AProjectileBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase) \
	NO_API virtual ~AProjectileBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_16_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectileBase;

// ********** End Class AProjectileBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
