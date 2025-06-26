// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Montages/FirearmMontagesManager.h"

#ifdef WEAPONSYSTEM_FirearmMontagesManager_generated_h
#error "FirearmMontagesManager.generated.h already included, missing '#pragma once' in FirearmMontagesManager.h"
#endif
#define WEAPONSYSTEM_FirearmMontagesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFirearmMontagesManager **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAnimFailShooting); \
	DECLARE_FUNCTION(execIsAnimShooting);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmMontagesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirearmMontagesManager(); \
	friend struct Z_Construct_UClass_UFirearmMontagesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmMontagesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UFirearmMontagesManager, UWeaponMontagesManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UFirearmMontagesManager_NoRegister) \
	DECLARE_SERIALIZER(UFirearmMontagesManager)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFirearmMontagesManager(UFirearmMontagesManager&&) = delete; \
	UFirearmMontagesManager(const UFirearmMontagesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirearmMontagesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirearmMontagesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirearmMontagesManager) \
	NO_API virtual ~UFirearmMontagesManager();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFirearmMontagesManager;

// ********** End Class UFirearmMontagesManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
