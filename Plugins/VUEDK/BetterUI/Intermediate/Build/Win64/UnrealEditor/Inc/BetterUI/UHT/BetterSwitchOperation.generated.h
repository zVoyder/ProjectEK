// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Operations/BetterSwitchOperation.h"

#ifdef BETTERUI_BetterSwitchOperation_generated_h
#error "BetterSwitchOperation.generated.h already included, missing '#pragma once' in BetterSwitchOperation.h"
#endif
#define BETTERUI_BetterSwitchOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterWidget;
class UUserWidget;
class UWidget;

// ********** Begin Delegate FOnWidgetSwitched *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_15_DELEGATE \
BETTERUI_API void FOnWidgetSwitched_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetSwitched, int32 OldIndex, int32 NewIndex);


// ********** End Delegate FOnWidgetSwitched *******************************************************

// ********** Begin Class UBetterSwitchOperation ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOwnerWidgetDestruct); \
	DECLARE_FUNCTION(execOnWidgetSelected); \
	DECLARE_FUNCTION(execActivatePreviousWidget); \
	DECLARE_FUNCTION(execActivateNextWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetSwitcherActiveWidget); \
	DECLARE_FUNCTION(execGetSelectableActiveWidget);


BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitchOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterSwitchOperation(); \
	friend struct Z_Construct_UClass_UBetterSwitchOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitchOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterSwitchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterSwitchOperation_NoRegister) \
	DECLARE_SERIALIZER(UBetterSwitchOperation)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterSwitchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterSwitchOperation(UBetterSwitchOperation&&) = delete; \
	UBetterSwitchOperation(const UBetterSwitchOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterSwitchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterSwitchOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterSwitchOperation) \
	NO_API virtual ~UBetterSwitchOperation();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterSwitchOperation;

// ********** End Class UBetterSwitchOperation *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
