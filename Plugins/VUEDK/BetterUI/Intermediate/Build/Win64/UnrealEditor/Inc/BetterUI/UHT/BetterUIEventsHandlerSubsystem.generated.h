// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BetterUIEventsHandlerSubsystem.h"

#ifdef BETTERUI_BetterUIEventsHandlerSubsystem_generated_h
#error "BetterUIEventsHandlerSubsystem.generated.h already included, missing '#pragma once' in BetterUIEventsHandlerSubsystem.h"
#endif
#define BETTERUI_BetterUIEventsHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FRequestBack **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_11_DELEGATE \
BETTERUI_API void FRequestBack_DelegateWrapper(const FMulticastScriptDelegate& RequestBack);


// ********** End Delegate FRequestBack ************************************************************

// ********** Begin Delegate FRequestConfirm *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_15_DELEGATE \
BETTERUI_API void FRequestConfirm_DelegateWrapper(const FMulticastScriptDelegate& RequestConfirm);


// ********** End Delegate FRequestConfirm *********************************************************

// ********** Begin Delegate FRequestRightSelect ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_19_DELEGATE \
BETTERUI_API void FRequestRightSelect_DelegateWrapper(const FMulticastScriptDelegate& RequestRightSelect);


// ********** End Delegate FRequestRightSelect *****************************************************

// ********** Begin Delegate FRequestLeftSelect ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_23_DELEGATE \
BETTERUI_API void FRequestLeftSelect_DelegateWrapper(const FMulticastScriptDelegate& RequestLeftSelect);


// ********** End Delegate FRequestLeftSelect ******************************************************

// ********** Begin Class UBetterUIEventsHandlerSubsystem ******************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestLeftSelect); \
	DECLARE_FUNCTION(execRequestRightSelect); \
	DECLARE_FUNCTION(execRequestConfirm); \
	DECLARE_FUNCTION(execRequestBack);


BETTERUI_API UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterUIEventsHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterUIEventsHandlerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBetterUIEventsHandlerSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterUIEventsHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterUIEventsHandlerSubsystem(UBetterUIEventsHandlerSubsystem&&) = delete; \
	UBetterUIEventsHandlerSubsystem(const UBetterUIEventsHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterUIEventsHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterUIEventsHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBetterUIEventsHandlerSubsystem) \
	NO_API virtual ~UBetterUIEventsHandlerSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_25_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterUIEventsHandlerSubsystem;

// ********** End Class UBetterUIEventsHandlerSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
