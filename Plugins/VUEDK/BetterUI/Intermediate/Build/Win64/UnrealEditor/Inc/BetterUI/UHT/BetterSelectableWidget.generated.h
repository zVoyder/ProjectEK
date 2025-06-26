// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterSelectableWidget.h"

#ifdef BETTERUI_BetterSelectableWidget_generated_h
#error "BetterSelectableWidget.generated.h already included, missing '#pragma once' in BetterSelectableWidget.h"
#endif
#define BETTERUI_BetterSelectableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBetterSelectableWidget **********************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DeselectWidget_Implementation() {}; \
	virtual void SelectWidget_Implementation() {}; \
	DECLARE_FUNCTION(execDeselectWidget); \
	DECLARE_FUNCTION(execSelectWidget);


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterSelectableWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterSelectableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterSelectableWidget(UBetterSelectableWidget&&) = delete; \
	UBetterSelectableWidget(const UBetterSelectableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterSelectableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterSelectableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterSelectableWidget) \
	virtual ~UBetterSelectableWidget() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterSelectableWidget(); \
	friend struct Z_Construct_UClass_UBetterSelectableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterSelectableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterSelectableWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterSelectableWidget_NoRegister) \
	DECLARE_SERIALIZER(UBetterSelectableWidget)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterSelectableWidget() {} \
public: \
	typedef UBetterSelectableWidget UClassType; \
	typedef IBetterSelectableWidget ThisClass; \
	static void Execute_DeselectWidget(UObject* O); \
	static void Execute_SelectWidget(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterSelectableWidget;

// ********** End Interface UBetterSelectableWidget ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
