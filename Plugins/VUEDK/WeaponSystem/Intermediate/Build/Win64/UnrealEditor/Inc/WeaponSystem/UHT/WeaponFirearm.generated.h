// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponFirearm.h"

#ifdef WEAPONSYSTEM_WeaponFirearm_generated_h
#error "WeaponFirearm.generated.h already included, missing '#pragma once' in WeaponFirearm.h"
#endif
#define WEAPONSYSTEM_WeaponFirearm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAmmoTypeData;
enum class EShootType : uint8;
struct FReloadEventData;
struct FWeaponFirearmData;

// ********** Begin Delegate FOnReloadStarted ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_18_DELEGATE \
WEAPONSYSTEM_API void FOnReloadStarted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadStarted, FReloadEventData ReloadPayload);


// ********** End Delegate FOnReloadStarted ********************************************************

// ********** Begin Delegate FOnReloadInsertedAmmo *************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_23_DELEGATE \
WEAPONSYSTEM_API void FOnReloadInsertedAmmo_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInsertedAmmo, FReloadEventData ReloadPayload);


// ********** End Delegate FOnReloadInsertedAmmo ***************************************************

// ********** Begin Delegate FOnReloadEnded ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_27_DELEGATE \
WEAPONSYSTEM_API void FOnReloadEnded_DelegateWrapper(const FMulticastScriptDelegate& OnReloadEnded);


// ********** End Delegate FOnReloadEnded **********************************************************

// ********** Begin Delegate FOnReloadInterrupted **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_32_DELEGATE \
WEAPONSYSTEM_API void FOnReloadInterrupted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInterrupted, FReloadEventData ReloadPayload);


// ********** End Delegate FOnReloadInterrupted ****************************************************

// ********** Begin Delegate FOnAimEnabled *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_36_DELEGATE \
WEAPONSYSTEM_API void FOnAimEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnAimEnabled);


// ********** End Delegate FOnAimEnabled ***********************************************************

// ********** Begin Delegate FOnAimDisabled ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_40_DELEGATE \
WEAPONSYSTEM_API void FOnAimDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnAimDisabled);


// ********** End Delegate FOnAimDisabled **********************************************************

// ********** Begin Class AWeaponFirearm ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMagEmpty_Implementation(); \
	virtual void OnEndShootSequence_Implementation(); \
	virtual void OnCurrentAmmoChanged_Implementation(int32 CurrentAmmo, int32 MagSize); \
	virtual void OnDisableAim_Implementation(); \
	virtual void OnEnableAim_Implementation(); \
	virtual void OnReloadFail_Implementation(); \
	virtual void OnReloadSuccess_Implementation(float Remain, float ReloadedAmmo); \
	virtual bool CanReload_Implementation() const; \
	DECLARE_FUNCTION(execOnReloadMontageEnded); \
	DECLARE_FUNCTION(execOnMagEmpty); \
	DECLARE_FUNCTION(execOnEndShootSequence); \
	DECLARE_FUNCTION(execOnCurrentAmmoChanged); \
	DECLARE_FUNCTION(execOnDisableAim); \
	DECLARE_FUNCTION(execOnEnableAim); \
	DECLARE_FUNCTION(execOnReloadFail); \
	DECLARE_FUNCTION(execOnReloadSuccess); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execHasJustShot); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execSetAim); \
	DECLARE_FUNCTION(execRefillAllMagazine); \
	DECLARE_FUNCTION(execRefill); \
	DECLARE_FUNCTION(execInterruptReload); \
	DECLARE_FUNCTION(execReloadWithMontage); \
	DECLARE_FUNCTION(execResetToDefaultShootType); \
	DECLARE_FUNCTION(execGetWeaponSpread); \
	DECLARE_FUNCTION(execGetDefaultSpread); \
	DECLARE_FUNCTION(execGetWeaponMaxSpread); \
	DECLARE_FUNCTION(execGetWeaponShootType); \
	DECLARE_FUNCTION(execGetWeaponAmmoType); \
	DECLARE_FUNCTION(execGetNeededAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetWeaponReloadTime); \
	DECLARE_FUNCTION(execGetWeaponRecoilStrength); \
	DECLARE_FUNCTION(execGetWeaponMaxRange); \
	DECLARE_FUNCTION(execGetWeaponMagSize); \
	DECLARE_FUNCTION(execGetWeaponFireRate); \
	DECLARE_FUNCTION(execGetWeaponFirearmData); \
	DECLARE_FUNCTION(execSetWeaponSpread); \
	DECLARE_FUNCTION(execInstantSetSpread); \
	DECLARE_FUNCTION(execSetWeaponShootType); \
	DECLARE_FUNCTION(execSetWeaponAmmoType); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execSetWeaponReloadTime); \
	DECLARE_FUNCTION(execSetWeaponRecoilStrength); \
	DECLARE_FUNCTION(execSetWeaponMaxRange); \
	DECLARE_FUNCTION(execSetWeaponMagSize); \
	DECLARE_FUNCTION(execSetWeaponFireRate); \
	DECLARE_FUNCTION(execResetSpread); \
	DECLARE_FUNCTION(execResetCooldown); \
	DECLARE_FUNCTION(execAddWeaponDynamicSpread);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponFirearm(); \
	friend struct Z_Construct_UClass_AWeaponFirearm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponFirearm, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AWeaponFirearm_NoRegister) \
	DECLARE_SERIALIZER(AWeaponFirearm)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponFirearm(AWeaponFirearm&&) = delete; \
	AWeaponFirearm(const AWeaponFirearm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponFirearm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponFirearm) \
	NO_API virtual ~AWeaponFirearm();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_42_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponFirearm;

// ********** End Class AWeaponFirearm *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
