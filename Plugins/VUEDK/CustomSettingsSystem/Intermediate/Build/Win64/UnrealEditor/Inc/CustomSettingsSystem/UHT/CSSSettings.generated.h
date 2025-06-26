// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CSSSettings.h"

#ifdef CUSTOMSETTINGSSYSTEM_CSSSettings_generated_h
#error "CSSSettings.generated.h already included, missing '#pragma once' in CSSSettings.h"
#endif
#define CUSTOMSETTINGSSYSTEM_CSSSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCSSSettings *************************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCSSSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSSSettings(); \
	friend struct Z_Construct_UClass_UCSSSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCSSSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCSSSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomSettingsSystem"), Z_Construct_UClass_UCSSSettings_NoRegister) \
	DECLARE_SERIALIZER(UCSSSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("CSSSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSSSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCSSSettings(UCSSSettings&&) = delete; \
	UCSSSettings(const UCSSSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSSSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSSSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSSSettings) \
	NO_API virtual ~UCSSSettings();


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCSSSettings;

// ********** End Class UCSSSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
