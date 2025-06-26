// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponCrosshair/WeaponCrosshairComponent.h"

#ifdef WEAPONSYSTEM_WeaponCrosshairComponent_generated_h
#error "WeaponCrosshairComponent.generated.h already included, missing '#pragma once' in WeaponCrosshairComponent.h"
#endif
#define WEAPONSYSTEM_WeaponCrosshairComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponCrosshairComponent ************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnWeaponUnequipped_Implementation(); \
	virtual void OnWeaponEquipped_Implementation(); \
	DECLARE_FUNCTION(execOnWeaponUnequipped); \
	DECLARE_FUNCTION(execOnWeaponEquipped);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairComponent_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponCrosshairComponent(); \
	friend struct Z_Construct_UClass_UWeaponCrosshairComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponCrosshairComponent, UCrosshairComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UWeaponCrosshairComponent_NoRegister) \
	DECLARE_SERIALIZER(UWeaponCrosshairComponent)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponCrosshairComponent(UWeaponCrosshairComponent&&) = delete; \
	UWeaponCrosshairComponent(const UWeaponCrosshairComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponCrosshairComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponCrosshairComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponCrosshairComponent) \
	NO_API virtual ~UWeaponCrosshairComponent();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponCrosshairComponent;

// ********** End Class UWeaponCrosshairComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
