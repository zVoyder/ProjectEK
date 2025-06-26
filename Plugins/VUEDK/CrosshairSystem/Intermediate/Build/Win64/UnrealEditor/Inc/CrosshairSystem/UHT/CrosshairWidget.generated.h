// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CrosshairWidget.h"

#ifdef CROSSHAIRSYSTEM_CrosshairWidget_generated_h
#error "CrosshairWidget.generated.h already included, missing '#pragma once' in CrosshairWidget.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Delegate FOnStartOpening *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_11_DELEGATE \
CROSSHAIRSYSTEM_API void FOnStartOpening_DelegateWrapper(const FMulticastScriptDelegate& OnStartOpening);


// ********** End Delegate FOnStartOpening *********************************************************

// ********** Begin Delegate FOnStartClosing *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_15_DELEGATE \
CROSSHAIRSYSTEM_API void FOnStartClosing_DelegateWrapper(const FMulticastScriptDelegate& OnStartClosing);


// ********** End Delegate FOnStartClosing *********************************************************

// ********** Begin Delegate FOnCompleteOpening ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_19_DELEGATE \
CROSSHAIRSYSTEM_API void FOnCompleteOpening_DelegateWrapper(const FMulticastScriptDelegate& OnCompleteOpening);


// ********** End Delegate FOnCompleteOpening ******************************************************

// ********** Begin Delegate FOnCompltedClosing ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_23_DELEGATE \
CROSSHAIRSYSTEM_API void FOnCompltedClosing_DelegateWrapper(const FMulticastScriptDelegate& OnCompltedClosing);


// ********** End Delegate FOnCompltedClosing ******************************************************

// ********** Begin Class UCrosshairWidget *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCompleteClosing_Implementation(); \
	virtual void OnCompleteOpening_Implementation(); \
	virtual void OnStartClosing_Implementation(); \
	virtual void OnStartOpening_Implementation(); \
	virtual void OnInit_Implementation(); \
	DECLARE_FUNCTION(execOnCompleteClosing); \
	DECLARE_FUNCTION(execOnCompleteOpening); \
	DECLARE_FUNCTION(execOnStartClosing); \
	DECLARE_FUNCTION(execOnStartOpening); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execCompleteClosing); \
	DECLARE_FUNCTION(execCompleteOpening); \
	DECLARE_FUNCTION(execStartClosing); \
	DECLARE_FUNCTION(execStartOpening);


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_CALLBACK_WRAPPERS
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairWidget(); \
	friend struct Z_Construct_UClass_UCrosshairWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairWidget_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairWidget)


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairWidget(UCrosshairWidget&&) = delete; \
	UCrosshairWidget(const UCrosshairWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairWidget) \
	NO_API virtual ~UCrosshairWidget();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_25_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairWidget;

// ********** End Class UCrosshairWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Widgets_CrosshairWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
