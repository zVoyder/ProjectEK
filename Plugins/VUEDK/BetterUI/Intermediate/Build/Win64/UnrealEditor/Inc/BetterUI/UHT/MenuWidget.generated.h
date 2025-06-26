// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/MenuWidget.h"

#ifdef BETTERUI_MenuWidget_generated_h
#error "MenuWidget.generated.h already included, missing '#pragma once' in MenuWidget.h"
#endif
#define BETTERUI_MenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnMenuWidgetOpened ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_12_DELEGATE \
BETTERUI_API void FOnMenuWidgetOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMenuWidgetOpened);


// ********** End Delegate FOnMenuWidgetOpened *****************************************************

// ********** Begin Delegate FOnMenuWidgetClosed ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_16_DELEGATE \
BETTERUI_API void FOnMenuWidgetClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuWidgetClosed);


// ********** End Delegate FOnMenuWidgetClosed *****************************************************

// ********** Begin Class UMenuWidget **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnClose_Implementation(); \
	virtual void OnOpen_Implementation(); \
	DECLARE_FUNCTION(execOnClose); \
	DECLARE_FUNCTION(execOnOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execClose);


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UMenuWidget)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuWidget(UMenuWidget&&) = delete; \
	UMenuWidget(const UMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget) \
	NO_API virtual ~UMenuWidget();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_18_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuWidget;

// ********** End Class UMenuWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
