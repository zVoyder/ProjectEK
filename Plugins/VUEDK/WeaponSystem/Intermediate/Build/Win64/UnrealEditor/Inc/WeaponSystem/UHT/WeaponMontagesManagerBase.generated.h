// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Montages/Base/WeaponMontagesManagerBase.h"

#ifdef WEAPONSYSTEM_WeaponMontagesManagerBase_generated_h
#error "WeaponMontagesManagerBase.generated.h already included, missing '#pragma once' in WeaponMontagesManagerBase.h"
#endif
#define WEAPONSYSTEM_WeaponMontagesManagerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FWeaponMontageData;

// ********** Begin Class UWeaponMontagesManagerBase ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnWeaponReadyToUse); \
	DECLARE_FUNCTION(execOnWeaponUnequipped); \
	DECLARE_FUNCTION(execOnWeaponEquipped); \
	DECLARE_FUNCTION(execOnWeaponEndAttack); \
	DECLARE_FUNCTION(execOnWeaponAttackFail); \
	DECLARE_FUNCTION(execOnWeaponAttackSuccess); \
	DECLARE_FUNCTION(execIsWeaponReadyToUse); \
	DECLARE_FUNCTION(execIsPlayingWeaponMontage); \
	DECLARE_FUNCTION(execInterruptWeaponMontage); \
	DECLARE_FUNCTION(execStartWeaponMontage);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponMontagesManagerBase(); \
	friend struct Z_Construct_UClass_UWeaponMontagesManagerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponMontagesManagerBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UWeaponMontagesManagerBase_NoRegister) \
	DECLARE_SERIALIZER(UWeaponMontagesManagerBase)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponMontagesManagerBase(UWeaponMontagesManagerBase&&) = delete; \
	UWeaponMontagesManagerBase(const UWeaponMontagesManagerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponMontagesManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponMontagesManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWeaponMontagesManagerBase) \
	NO_API virtual ~UWeaponMontagesManagerBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponMontagesManagerBase;

// ********** End Class UWeaponMontagesManagerBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
