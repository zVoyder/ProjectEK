// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MenuManager.h"

#ifdef BETTERUI_MenuManager_generated_h
#error "MenuManager.generated.h already included, missing '#pragma once' in MenuManager.h"
#endif
#define BETTERUI_MenuManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMenuWidget;
struct FGameplayTag;

// ********** Begin Delegate FOnMenuOpened *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_17_DELEGATE \
BETTERUI_API void FOnMenuOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMenuOpened, UMenuWidget* MenuWidget, FGameplayTag MenuTag);


// ********** End Delegate FOnMenuOpened ***********************************************************

// ********** Begin Delegate FOnMenuClosed *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_23_DELEGATE \
BETTERUI_API void FOnMenuClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuClosed, UMenuWidget* MenuWidget, FGameplayTag MenuTag);


// ********** End Delegate FOnMenuClosed ***********************************************************

// ********** Begin Class UMenuManager *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAnyMenuOpen); \
	DECLARE_FUNCTION(execIsMenuOpen); \
	DECLARE_FUNCTION(execGetMenuByTag); \
	DECLARE_FUNCTION(execGetCurrentOpenMenu); \
	DECLARE_FUNCTION(execCloseCurrentMenu); \
	DECLARE_FUNCTION(execToggleMenu); \
	DECLARE_FUNCTION(execAddMenu);


BETTERUI_API UClass* Z_Construct_UClass_UMenuManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuManager(); \
	friend struct Z_Construct_UClass_UMenuManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UMenuManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UMenuManager_NoRegister) \
	DECLARE_SERIALIZER(UMenuManager)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuManager(UMenuManager&&) = delete; \
	UMenuManager(const UMenuManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuManager) \
	NO_API virtual ~UMenuManager();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_25_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuManager;

// ********** End Class UMenuManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
