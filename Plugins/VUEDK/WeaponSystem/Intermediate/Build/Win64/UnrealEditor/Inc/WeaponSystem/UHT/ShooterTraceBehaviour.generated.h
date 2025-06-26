// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Behaviours/ShooterTraceBehaviour.h"

#ifdef WEAPONSYSTEM_ShooterTraceBehaviour_generated_h
#error "ShooterTraceBehaviour.generated.h already included, missing '#pragma once' in ShooterTraceBehaviour.h"
#endif
#define WEAPONSYSTEM_ShooterTraceBehaviour_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UShootBarrel;
struct FHitResult;

// ********** Begin Class UShooterTraceBehaviour ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnShootTrace_Implementation(UShootBarrel* Barrel, FVector const& ShootPointLocation, FVector const& TraceStartLocation, FVector const& EndLocation, TArray<FHitResult> const& TraceHitResults, TArray<FHitResult> const& DamageHitResults) const; \
	DECLARE_FUNCTION(execOnShootTrace);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterTraceBehaviour_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterTraceBehaviour(); \
	friend struct Z_Construct_UClass_UShooterTraceBehaviour_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterTraceBehaviour_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterTraceBehaviour, UShooterBehaviourBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooterTraceBehaviour_NoRegister) \
	DECLARE_SERIALIZER(UShooterTraceBehaviour)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterTraceBehaviour(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterTraceBehaviour(UShooterTraceBehaviour&&) = delete; \
	UShooterTraceBehaviour(const UShooterTraceBehaviour&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterTraceBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterTraceBehaviour); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterTraceBehaviour) \
	NO_API virtual ~UShooterTraceBehaviour();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterTraceBehaviour;

// ********** End Class UShooterTraceBehaviour *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
