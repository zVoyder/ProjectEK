// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterFocusableWidget.h"

#ifdef BETTERUI_BetterFocusableWidget_generated_h
#error "BetterFocusableWidget.generated.h already included, missing '#pragma once' in BetterFocusableWidget.h"
#endif
#define BETTERUI_BetterFocusableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWidget;

// ********** Begin Interface UBetterFocusableWidget ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UWidget* GetWidgetUnfocusTarget_Implementation() { return NULL; }; \
	virtual UWidget* GetWidgetFocusTarget_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execGetWidgetUnfocusTarget); \
	DECLARE_FUNCTION(execGetWidgetFocusTarget);


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterFocusableWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterFocusableWidget(UBetterFocusableWidget&&) = delete; \
	UBetterFocusableWidget(const UBetterFocusableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterFocusableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterFocusableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterFocusableWidget) \
	virtual ~UBetterFocusableWidget() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterFocusableWidget(); \
	friend struct Z_Construct_UClass_UBetterFocusableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterFocusableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterFocusableWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterFocusableWidget_NoRegister) \
	DECLARE_SERIALIZER(UBetterFocusableWidget)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterFocusableWidget() {} \
public: \
	typedef UBetterFocusableWidget UClassType; \
	typedef IBetterFocusableWidget ThisClass; \
	static UWidget* Execute_GetWidgetFocusTarget(UObject* O); \
	static UWidget* Execute_GetWidgetUnfocusTarget(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterFocusableWidget;

// ********** End Interface UBetterFocusableWidget *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
