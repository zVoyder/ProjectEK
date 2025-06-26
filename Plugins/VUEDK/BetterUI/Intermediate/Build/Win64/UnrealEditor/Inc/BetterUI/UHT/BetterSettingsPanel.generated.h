// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterSettingsPanel.h"

#ifdef BETTERUI_BetterSettingsPanel_generated_h
#error "BetterSettingsPanel.generated.h already included, missing '#pragma once' in BetterSettingsPanel.h"
#endif
#define BETTERUI_BetterSettingsPanel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBetterSettingsPanel *************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsPanel_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterSettingsPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterSettingsPanel(UBetterSettingsPanel&&) = delete; \
	UBetterSettingsPanel(const UBetterSettingsPanel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterSettingsPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterSettingsPanel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterSettingsPanel) \
	virtual ~UBetterSettingsPanel() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterSettingsPanel(); \
	friend struct Z_Construct_UClass_UBetterSettingsPanel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsPanel_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterSettingsPanel, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterSettingsPanel_NoRegister) \
	DECLARE_SERIALIZER(UBetterSettingsPanel)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterSettingsPanel() {} \
public: \
	typedef UBetterSettingsPanel UClassType; \
	typedef IBetterSettingsPanel ThisClass; \
	static void Execute_ResetSettingsToDefaults(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterSettingsPanel;

// ********** End Interface UBetterSettingsPanel ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
