// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h"

#ifdef WEAPONSYSTEM_ShooterPhysicProjectileBehaviour_generated_h
#error "ShooterPhysicProjectileBehaviour.generated.h already included, missing '#pragma once' in ShooterPhysicProjectileBehaviour.h"
#endif
#define WEAPONSYSTEM_ShooterPhysicProjectileBehaviour_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AProjectileBase;
struct FGameplayTag;

// ********** Begin Delegate FOnProjectileSpawned **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_14_DELEGATE \
WEAPONSYSTEM_API void FOnProjectileSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileSpawned, AProjectileBase* Projectile);


// ********** End Delegate FOnProjectileSpawned ****************************************************

// ********** Begin Class UShooterPhysicProjectileBehaviour ****************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetProjectilesPool);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterPhysicProjectileBehaviour(); \
	friend struct Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterPhysicProjectileBehaviour, UShooterBehaviourBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooterPhysicProjectileBehaviour_NoRegister) \
	DECLARE_SERIALIZER(UShooterPhysicProjectileBehaviour)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterPhysicProjectileBehaviour(UShooterPhysicProjectileBehaviour&&) = delete; \
	UShooterPhysicProjectileBehaviour(const UShooterPhysicProjectileBehaviour&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterPhysicProjectileBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterPhysicProjectileBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShooterPhysicProjectileBehaviour) \
	NO_API virtual ~UShooterPhysicProjectileBehaviour();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_16_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterPhysicProjectileBehaviour;

// ********** End Class UShooterPhysicProjectileBehaviour ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
