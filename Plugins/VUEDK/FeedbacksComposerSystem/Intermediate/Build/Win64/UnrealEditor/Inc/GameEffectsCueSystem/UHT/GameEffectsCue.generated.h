// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameEffectsCue.h"

#ifdef GAMEEFFECTSCUESYSTEM_GameEffectsCue_generated_h
#error "GameEffectsCue.generated.h already included, missing '#pragma once' in GameEffectsCue.h"
#endif
#define GAMEEFFECTSCUESYSTEM_GameEffectsCue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnCueStarted *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_12_DELEGATE \
GAMEEFFECTSCUESYSTEM_API void FOnCueStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCueStarted);


// ********** End Delegate FOnCueStarted ***********************************************************

// ********** Begin Delegate FOnCueStopped *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_16_DELEGATE \
GAMEEFFECTSCUESYSTEM_API void FOnCueStopped_DelegateWrapper(const FMulticastScriptDelegate& OnCueStopped);


// ********** End Delegate FOnCueStopped ***********************************************************

// ********** Begin Delegate FOnCueResumed *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_20_DELEGATE \
GAMEEFFECTSCUESYSTEM_API void FOnCueResumed_DelegateWrapper(const FMulticastScriptDelegate& OnCueResumed);


// ********** End Delegate FOnCueResumed ***********************************************************

// ********** Begin Delegate FOnCueFinished ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_24_DELEGATE \
GAMEEFFECTSCUESYSTEM_API void FOnCueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnCueFinished);


// ********** End Delegate FOnCueFinished **********************************************************

// ********** Begin Class UGameEffectsCue **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayEffectAtIndex); \
	DECLARE_FUNCTION(execPreviousEffect); \
	DECLARE_FUNCTION(execNextEffect); \
	DECLARE_FUNCTION(execInterruptCue); \
	DECLARE_FUNCTION(execResumeCue); \
	DECLARE_FUNCTION(execStopCue); \
	DECLARE_FUNCTION(execStartCue);


GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEffectsCue(); \
	friend struct Z_Construct_UClass_UGameEffectsCue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEffectsCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEffectsCueSystem"), Z_Construct_UClass_UGameEffectsCue_NoRegister) \
	DECLARE_SERIALIZER(UGameEffectsCue)


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEffectsCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEffectsCue(UGameEffectsCue&&) = delete; \
	UGameEffectsCue(const UGameEffectsCue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEffectsCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEffectsCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEffectsCue) \
	NO_API virtual ~UGameEffectsCue();


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_26_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEffectsCue;

// ********** End Class UGameEffectsCue ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
