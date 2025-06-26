// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomGameUserSettings.h"

#ifdef CUSTOMSETTINGSSYSTEM_CustomGameUserSettings_generated_h
#error "CustomGameUserSettings.generated.h already included, missing '#pragma once' in CustomGameUserSettings.h"
#endif
#define CUSTOMSETTINGSSYSTEM_CustomGameUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Delegate FOnCustomOptionChanged ************************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_15_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomOptionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCustomOptionChanged, FGameplayTag const& Tag, float Value);


// ********** End Delegate FOnCustomOptionChanged **************************************************

// ********** Begin Delegate FOnCustomSettingsApplied **********************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_19_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsApplied);


// ********** End Delegate FOnCustomSettingsApplied ************************************************

// ********** Begin Delegate FOnCustomSettingsResetToDefaults **************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_23_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomSettingsResetToDefaults_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToDefaults);


// ********** End Delegate FOnCustomSettingsResetToDefaults ****************************************

// ********** Begin Delegate FOnCustomSettingsResetToCurrent ***************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_27_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomSettingsResetToCurrent_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToCurrent);


// ********** End Delegate FOnCustomSettingsResetToCurrent *****************************************

// ********** Begin Delegate FOnCustomSettingsResetToFile ******************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_31_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomSettingsResetToFile_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToFile);


// ********** End Delegate FOnCustomSettingsResetToFile ********************************************

// ********** Begin Delegate FOnCustomSettingsUINeedsUpdate ****************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_35_DELEGATE \
CUSTOMSETTINGSSYSTEM_API void FOnCustomSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsUINeedsUpdate);


// ********** End Delegate FOnCustomSettingsUINeedsUpdate ******************************************

// ********** Begin Class UCustomGameUserSettings **************************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyAllSettings); \
	DECLARE_FUNCTION(execGetCustomOptionMinValue); \
	DECLARE_FUNCTION(execGetCustomOptionMaxValue); \
	DECLARE_FUNCTION(execResetToFileSettings); \
	DECLARE_FUNCTION(execSetCustomOptionsToDefaults); \
	DECLARE_FUNCTION(execSetAllCustomOptionsToDefaults); \
	DECLARE_FUNCTION(execSetAllToDefaults); \
	DECLARE_FUNCTION(execTryGetCustomOption); \
	DECLARE_FUNCTION(execSetCustomOption);


CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGameUserSettings(); \
	friend struct Z_Construct_UClass_UCustomGameUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomSettingsSystem"), Z_Construct_UClass_UCustomGameUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UCustomGameUserSettings)


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomGameUserSettings(UCustomGameUserSettings&&) = delete; \
	UCustomGameUserSettings(const UCustomGameUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameUserSettings) \
	NO_API virtual ~UCustomGameUserSettings();


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_37_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomGameUserSettings;

// ********** End Class UCustomGameUserSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
