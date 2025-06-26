// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponCrosshair/Widgets/WeaponCrosshairWidget.h"

#ifdef WEAPONSYSTEM_WeaponCrosshairWidget_generated_h
#error "WeaponCrosshairWidget.generated.h already included, missing '#pragma once' in WeaponCrosshairWidget.h"
#endif
#define WEAPONSYSTEM_WeaponCrosshairWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponCrosshairWidget ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnWeaponAttackFailed_Implementation(); \
	virtual void OnWeaponAttackSuccess_Implementation(); \
	DECLARE_FUNCTION(execOnWeaponAttackFailed); \
	DECLARE_FUNCTION(execOnWeaponAttackSuccess);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponCrosshairWidget(); \
	friend struct Z_Construct_UClass_UWeaponCrosshairWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponCrosshairWidget, UCrosshairWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UWeaponCrosshairWidget_NoRegister) \
	DECLARE_SERIALIZER(UWeaponCrosshairWidget)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponCrosshairWidget(UWeaponCrosshairWidget&&) = delete; \
	UWeaponCrosshairWidget(const UWeaponCrosshairWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponCrosshairWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponCrosshairWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponCrosshairWidget) \
	NO_API virtual ~UWeaponCrosshairWidget();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponCrosshairWidget;

// ********** End Class UWeaponCrosshairWidget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
