// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/BetterWidget.h"

#ifdef BETTERUI_BetterWidget_generated_h
#error "BetterWidget.generated.h already included, missing '#pragma once' in BetterWidget.h"
#endif
#define BETTERUI_BetterWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterWidget;

// ********** Begin Delegate FOnSelected ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_14_DELEGATE \
BETTERUI_API void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UBetterWidget* Widget);


// ********** End Delegate FOnSelected *************************************************************

// ********** Begin Delegate FOnDeselected *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_19_DELEGATE \
BETTERUI_API void FOnDeselected_DelegateWrapper(const FMulticastScriptDelegate& OnDeselected, UBetterWidget* Widget);


// ********** End Delegate FOnDeselected ***********************************************************

// ********** Begin Class UBetterWidget ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanUnfocus_Implementation() const; \
	virtual bool CanFocus_Implementation() const; \
	virtual void OnDeselectWidget_Implementation(); \
	virtual void OnSelectWidget_Implementation(); \
	DECLARE_FUNCTION(execCanUnfocus); \
	DECLARE_FUNCTION(execCanFocus); \
	DECLARE_FUNCTION(execOnDeselectWidget); \
	DECLARE_FUNCTION(execOnSelectWidget); \
	DECLARE_FUNCTION(execUnfocus); \
	DECLARE_FUNCTION(execSetFocusDesiredWidget); \
	DECLARE_FUNCTION(execIsBetterWidgetSelected);


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterWidget(); \
	friend struct Z_Construct_UClass_UBetterWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterWidget_NoRegister) \
	DECLARE_SERIALIZER(UBetterWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UBetterWidget*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterWidget(UBetterWidget&&) = delete; \
	UBetterWidget(const UBetterWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterWidget) \
	NO_API virtual ~UBetterWidget();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_21_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterWidget;

// ********** End Class UBetterWidget **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
