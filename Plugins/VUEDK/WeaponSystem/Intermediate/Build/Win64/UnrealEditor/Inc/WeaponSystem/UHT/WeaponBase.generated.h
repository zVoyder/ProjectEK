// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponBase.h"

#ifdef WEAPONSYSTEM_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define WEAPONSYSTEM_WeaponBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UAnimInstance;
class UAnimMontage;
class UObject;
struct FWeaponData;
struct FWeaponMontageData;

// ********** Begin Delegate FOnWeaponAttackSuccess ************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_14_DELEGATE \
WEAPONSYSTEM_API void FOnWeaponAttackSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttackSuccess);


// ********** End Delegate FOnWeaponAttackSuccess **************************************************

// ********** Begin Delegate FOnWeaponAttackFail ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_18_DELEGATE \
WEAPONSYSTEM_API void FOnWeaponAttackFail_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttackFail);


// ********** End Delegate FOnWeaponAttackFail *****************************************************

// ********** Begin Delegate FOnEndWeaponAttack ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_22_DELEGATE \
WEAPONSYSTEM_API void FOnEndWeaponAttack_DelegateWrapper(const FMulticastScriptDelegate& OnEndWeaponAttack);


// ********** End Delegate FOnEndWeaponAttack ******************************************************

// ********** Begin Delegate FOnWeaponEquipped *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_26_DELEGATE \
WEAPONSYSTEM_API void FOnWeaponEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponEquipped);


// ********** End Delegate FOnWeaponEquipped *******************************************************

// ********** Begin Delegate FOnWeaponUnequipped ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_30_DELEGATE \
WEAPONSYSTEM_API void FOnWeaponUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponUnequipped);


// ********** End Delegate FOnWeaponUnequipped *****************************************************

// ********** Begin Class AWeaponBase **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnWeaponUnequipped_Implementation(); \
	virtual void OnWeaponEquipped_Implementation(); \
	virtual void OnWeaponAttackFail_Implementation(); \
	virtual void OnWeaponAttackSuccess_Implementation(); \
	virtual void OnEndWeaponAttack_Implementation(); \
	virtual bool DeployWeaponAttack_Implementation(); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnWeaponUnequipped); \
	DECLARE_FUNCTION(execOnWeaponEquipped); \
	DECLARE_FUNCTION(execOnWeaponAttackFail); \
	DECLARE_FUNCTION(execOnWeaponAttackSuccess); \
	DECLARE_FUNCTION(execOnEndWeaponAttack); \
	DECLARE_FUNCTION(execDeployWeaponAttack); \
	DECLARE_FUNCTION(execInterruptWeaponMontage); \
	DECLARE_FUNCTION(execStartWeaponMontage); \
	DECLARE_FUNCTION(execIsPlayingWeaponMontage); \
	DECLARE_FUNCTION(execGetWeaponAnimInstance); \
	DECLARE_FUNCTION(execGetOwnerAnimInstance); \
	DECLARE_FUNCTION(execGetWeaponData); \
	DECLARE_FUNCTION(execIsWeaponAttacking); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execGetWeaponDamage); \
	DECLARE_FUNCTION(execSetWeaponDamage); \
	DECLARE_FUNCTION(execSetPayload); \
	DECLARE_FUNCTION(execEndWeaponAttack); \
	DECLARE_FUNCTION(execWeaponAttack); \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execInit);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AWeaponBase_NoRegister) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&) = delete; \
	AWeaponBase(const AWeaponBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_32_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponBase;

// ********** End Class AWeaponBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
