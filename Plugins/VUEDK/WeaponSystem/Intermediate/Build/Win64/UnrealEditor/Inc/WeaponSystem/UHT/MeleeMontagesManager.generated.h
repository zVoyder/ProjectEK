// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Montages/MeleeMontagesManager.h"

#ifdef WEAPONSYSTEM_MeleeMontagesManager_generated_h
#error "MeleeMontagesManager.generated.h already included, missing '#pragma once' in MeleeMontagesManager.h"
#endif
#define WEAPONSYSTEM_MeleeMontagesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeleeMontagesManager ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageAttackFinished); \
	DECLARE_FUNCTION(execGetAttackIndex);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeMontagesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeMontagesManager(); \
	friend struct Z_Construct_UClass_UMeleeMontagesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeMontagesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeleeMontagesManager, UWeaponMontagesManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UMeleeMontagesManager_NoRegister) \
	DECLARE_SERIALIZER(UMeleeMontagesManager)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeleeMontagesManager(UMeleeMontagesManager&&) = delete; \
	UMeleeMontagesManager(const UMeleeMontagesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeMontagesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeMontagesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeleeMontagesManager) \
	NO_API virtual ~UMeleeMontagesManager();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeleeMontagesManager;

// ********** End Class UMeleeMontagesManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
