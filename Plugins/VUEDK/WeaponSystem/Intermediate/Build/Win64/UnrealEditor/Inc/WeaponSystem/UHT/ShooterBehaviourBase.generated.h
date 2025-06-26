// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Behaviours/ShooterBehaviourBase.h"

#ifdef WEAPONSYSTEM_ShooterBehaviourBase_generated_h
#error "ShooterBehaviourBase.generated.h already included, missing '#pragma once' in ShooterBehaviourBase.h"
#endif
#define WEAPONSYSTEM_ShooterBehaviourBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UCooldownHandler;
class URecoilHandler;
class UShootBarrel;
class UShootPoint;
class USpreadHandler;
enum class EShootFailReason : uint8;
enum class EShootType : uint8;

// ********** Begin Delegate FOnBehaviourEnabled ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_22_DELEGATE \
WEAPONSYSTEM_API void FOnBehaviourEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourEnabled);


// ********** End Delegate FOnBehaviourEnabled *****************************************************

// ********** Begin Delegate FOnBehaviourDisabled **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_26_DELEGATE \
WEAPONSYSTEM_API void FOnBehaviourDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourDisabled);


// ********** End Delegate FOnBehaviourDisabled ****************************************************

// ********** Begin Delegate FOnBehaviourShootSuccess **********************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_32_DELEGATE \
WEAPONSYSTEM_API void FOnBehaviourShootSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourShootSuccess, UShootBarrel* ShootBarrel, int32 ShotIndex);


// ********** End Delegate FOnBehaviourShootSuccess ************************************************

// ********** Begin Delegate FOnBehaviourShootFail *************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_36_DELEGATE \
WEAPONSYSTEM_API void FOnBehaviourShootFail_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourShootFail);


// ********** End Delegate FOnBehaviourShootFail ***************************************************

// ********** Begin Delegate FOnEndShootSequence ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_40_DELEGATE \
WEAPONSYSTEM_API void FOnEndShootSequence_DelegateWrapper(const FMulticastScriptDelegate& OnEndShootSequence);


// ********** End Delegate FOnEndShootSequence *****************************************************

// ********** Begin Delegate FOnBehaviourRefill ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_45_DELEGATE \
WEAPONSYSTEM_API void FOnBehaviourRefill_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourRefill, int32 CurrentAmmo);


// ********** End Delegate FOnBehaviourRefill ******************************************************

// ********** Begin Delegate FOnCurrentAmmoChanged *************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_51_DELEGATE \
WEAPONSYSTEM_API void FOnCurrentAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentAmmoChanged, int32 CurrentAmmo, int32 MagSize);


// ********** End Delegate FOnCurrentAmmoChanged ***************************************************

// ********** Begin Delegate FOnMagEmpty ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_55_DELEGATE \
WEAPONSYSTEM_API void FOnMagEmpty_DelegateWrapper(const FMulticastScriptDelegate& OnMagEmpty);


// ********** End Delegate FOnMagEmpty *************************************************************

// ********** Begin Class UShooterBehaviourBase ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetShooterTargetLocation_Implementation() const; \
	virtual void OnMagEmptied_Implementation(); \
	virtual void OnRefill_Implementation(); \
	virtual bool OnShootCondition_Implementation(UShootBarrel* OutShootBarrel) const; \
	virtual void OnShootFail_Implementation(const EShootFailReason FailReason); \
	virtual void OnShootSuccess_Implementation(const UShootBarrel* OutShootBarrel); \
	virtual void OnDeployShoot_Implementation(UShootPoint* ShootPoint, FVector const& TargetLocation, FVector const& DirectionToTarget, FVector const& DirectionToTargetSpreaded) const; \
	virtual void OnDisabled_Implementation(); \
	virtual void OnEnabled_Implementation(); \
	virtual void OnTickBehaviour_Implementation(const float DeltaTime); \
	virtual void OnInit_Implementation(); \
	virtual float GetRecoilStrength_Implementation() const; \
	virtual int32 GetMagSize_Implementation() const; \
	virtual float GetMaxRange_Implementation() const; \
	virtual float GetFireRate_Implementation() const; \
	virtual float GetDamage_Implementation() const; \
	DECLARE_FUNCTION(execResetHasJustShot); \
	DECLARE_FUNCTION(execNextTickHasJustShot); \
	DECLARE_FUNCTION(execIsInLineOfSight); \
	DECLARE_FUNCTION(execTryGetCameraPoints); \
	DECLARE_FUNCTION(execGetShooterTargetLocation); \
	DECLARE_FUNCTION(execOnMagEmptied); \
	DECLARE_FUNCTION(execOnRefill); \
	DECLARE_FUNCTION(execOnShootCondition); \
	DECLARE_FUNCTION(execOnShootFail); \
	DECLARE_FUNCTION(execOnShootSuccess); \
	DECLARE_FUNCTION(execOnDeployShoot); \
	DECLARE_FUNCTION(execOnDisabled); \
	DECLARE_FUNCTION(execOnEnabled); \
	DECLARE_FUNCTION(execOnTickBehaviour); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execHasJustShot); \
	DECLARE_FUNCTION(execGetSpreadHandler); \
	DECLARE_FUNCTION(execGetRecoilHandler); \
	DECLARE_FUNCTION(execGetCooldownHandler); \
	DECLARE_FUNCTION(execGetAmmoToConsume); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetShotsFired); \
	DECLARE_FUNCTION(execGetShootType); \
	DECLARE_FUNCTION(execGetShootBarrel); \
	DECLARE_FUNCTION(execGetSpread); \
	DECLARE_FUNCTION(execGetRecoilStrength); \
	DECLARE_FUNCTION(execGetMagSize); \
	DECLARE_FUNCTION(execGetMaxRange); \
	DECLARE_FUNCTION(execGetFireRate); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execIsBehaviourActive); \
	DECLARE_FUNCTION(execModifyCurrentAmmo); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execSetShootType); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execInstantSetSpread); \
	DECLARE_FUNCTION(execSetRecoilStrength); \
	DECLARE_FUNCTION(execSetMagSize); \
	DECLARE_FUNCTION(execSetMaxRange); \
	DECLARE_FUNCTION(execSetFireRate); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execSetShootParams); \
	DECLARE_FUNCTION(execAddDynamicSpread); \
	DECLARE_FUNCTION(execRefillAllMagazine); \
	DECLARE_FUNCTION(execRefill); \
	DECLARE_FUNCTION(execResetSpread); \
	DECLARE_FUNCTION(execEndShootSequence); \
	DECLARE_FUNCTION(execResetCooldown); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execDisableBehaviour); \
	DECLARE_FUNCTION(execEnableBehaviour); \
	DECLARE_FUNCTION(execSetBehaviourEnabled);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterBehaviourBase(); \
	friend struct Z_Construct_UClass_UShooterBehaviourBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterBehaviourBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooterBehaviourBase_NoRegister) \
	DECLARE_SERIALIZER(UShooterBehaviourBase) \
	virtual UObject* _getUObject() const override { return const_cast<UShooterBehaviourBase*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterBehaviourBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterBehaviourBase(UShooterBehaviourBase&&) = delete; \
	UShooterBehaviourBase(const UShooterBehaviourBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterBehaviourBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterBehaviourBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterBehaviourBase) \
	NO_API virtual ~UShooterBehaviourBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_60_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterBehaviourBase;

// ********** End Class UShooterBehaviourBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
