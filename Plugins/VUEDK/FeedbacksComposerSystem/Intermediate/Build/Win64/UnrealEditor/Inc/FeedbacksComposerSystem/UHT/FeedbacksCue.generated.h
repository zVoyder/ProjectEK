// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FeedbacksCue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FEEDBACKSCOMPOSERSYSTEM_FeedbacksCue_generated_h
#error "FeedbacksCue.generated.h already included, missing '#pragma once' in FeedbacksCue.h"
#endif
#define FEEDBACKSCOMPOSERSYSTEM_FeedbacksCue_generated_h

#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_12_DELEGATE \
FEEDBACKSCOMPOSERSYSTEM_API void FOnCueStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCueStarted);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_16_DELEGATE \
FEEDBACKSCOMPOSERSYSTEM_API void FOnCueStopped_DelegateWrapper(const FMulticastScriptDelegate& OnCueStopped);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_20_DELEGATE \
FEEDBACKSCOMPOSERSYSTEM_API void FOnCueResumed_DelegateWrapper(const FMulticastScriptDelegate& OnCueResumed);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_24_DELEGATE \
FEEDBACKSCOMPOSERSYSTEM_API void FOnCueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnCueFinished);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayFeedBackAtIndex); \
	DECLARE_FUNCTION(execPreviousFeedback); \
	DECLARE_FUNCTION(execNextFeedback); \
	DECLARE_FUNCTION(execInterruptCue); \
	DECLARE_FUNCTION(execResumeCue); \
	DECLARE_FUNCTION(execStopCue); \
	DECLARE_FUNCTION(execStartCue);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFeedbacksCue(); \
	friend struct Z_Construct_UClass_UFeedbacksCue_Statics; \
public: \
	DECLARE_CLASS(UFeedbacksCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FeedbacksComposerSystem"), NO_API) \
	DECLARE_SERIALIZER(UFeedbacksCue)


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbacksCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFeedbacksCue(UFeedbacksCue&&); \
	UFeedbacksCue(const UFeedbacksCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbacksCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbacksCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbacksCue) \
	NO_API virtual ~UFeedbacksCue();


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_26_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<class UFeedbacksCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
