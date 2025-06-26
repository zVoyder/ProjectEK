// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponCrosshair/Widgets/FirearmCrosshairWidget.h"

#ifdef WEAPONSYSTEM_FirearmCrosshairWidget_generated_h
#error "FirearmCrosshairWidget.generated.h already included, missing '#pragma once' in FirearmCrosshairWidget.h"
#endif
#define WEAPONSYSTEM_FirearmCrosshairWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWidgetAnimation;

// ********** Begin Class UFirearmCrosshairWidget **************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSpreadChanged_Implementation(float Spread); \
	virtual void OnAimDisabled_Implementation(); \
	virtual void OnAimEnabled_Implementation(); \
	DECLARE_FUNCTION(execAnimateCrosshair); \
	DECLARE_FUNCTION(execOnSpreadChanged); \
	DECLARE_FUNCTION(execOnAimDisabled); \
	DECLARE_FUNCTION(execOnAimEnabled);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmCrosshairWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirearmCrosshairWidget(); \
	friend struct Z_Construct_UClass_UFirearmCrosshairWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmCrosshairWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UFirearmCrosshairWidget, UWeaponCrosshairWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UFirearmCrosshairWidget_NoRegister) \
	DECLARE_SERIALIZER(UFirearmCrosshairWidget)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirearmCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFirearmCrosshairWidget(UFirearmCrosshairWidget&&) = delete; \
	UFirearmCrosshairWidget(const UFirearmCrosshairWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirearmCrosshairWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirearmCrosshairWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirearmCrosshairWidget) \
	NO_API virtual ~UFirearmCrosshairWidget();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFirearmCrosshairWidget;

// ********** End Class UFirearmCrosshairWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
