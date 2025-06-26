// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Montages/Notifies/ReloadInsertAmmoNotify.h"

#ifdef WEAPONSYSTEM_ReloadInsertAmmoNotify_generated_h
#error "ReloadInsertAmmoNotify.generated.h already included, missing '#pragma once' in ReloadInsertAmmoNotify.h"
#endif
#define WEAPONSYSTEM_ReloadInsertAmmoNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AWeaponFirearm;

// ********** Begin Class UReloadInsertAmmoNotify **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execGetWeaponFirearm);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UReloadInsertAmmoNotify_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReloadInsertAmmoNotify(); \
	friend struct Z_Construct_UClass_UReloadInsertAmmoNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UReloadInsertAmmoNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UReloadInsertAmmoNotify, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UReloadInsertAmmoNotify_NoRegister) \
	DECLARE_SERIALIZER(UReloadInsertAmmoNotify)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReloadInsertAmmoNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReloadInsertAmmoNotify(UReloadInsertAmmoNotify&&) = delete; \
	UReloadInsertAmmoNotify(const UReloadInsertAmmoNotify&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReloadInsertAmmoNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReloadInsertAmmoNotify); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReloadInsertAmmoNotify) \
	NO_API virtual ~UReloadInsertAmmoNotify();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReloadInsertAmmoNotify;

// ********** End Class UReloadInsertAmmoNotify ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
