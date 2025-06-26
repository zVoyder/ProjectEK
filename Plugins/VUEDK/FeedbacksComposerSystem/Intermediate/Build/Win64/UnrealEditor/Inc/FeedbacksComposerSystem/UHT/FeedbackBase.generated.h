// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FeedbackBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFeedbacksCue;
#ifdef FEEDBACKSCOMPOSERSYSTEM_FeedbackBase_generated_h
#error "FeedbackBase.generated.h already included, missing '#pragma once' in FeedbackBase.h"
#endif
#define FEEDBACKSCOMPOSERSYSTEM_FeedbackBase_generated_h

#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFinish_Implementation(); \
	virtual void OnTick_Implementation(float DeltaTime); \
	virtual void OnStop_Implementation(); \
	virtual void OnPlay_Implementation(); \
	virtual void OnInit_Implementation(); \
	virtual void NextFeedback_Implementation(); \
	DECLARE_FUNCTION(execOnFinish); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOnStop); \
	DECLARE_FUNCTION(execOnPlay); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execGetRelatedCue); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execNextFeedback); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_CALLBACK_WRAPPERS
#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFeedbackBase(); \
	friend struct Z_Construct_UClass_UFeedbackBase_Statics; \
public: \
	DECLARE_CLASS(UFeedbackBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FeedbacksComposerSystem"), NO_API) \
	DECLARE_SERIALIZER(UFeedbackBase)


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbackBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFeedbackBase(UFeedbackBase&&); \
	UFeedbackBase(const UFeedbackBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbackBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbackBase) \
	NO_API virtual ~UFeedbackBase();


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_11_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_CALLBACK_WRAPPERS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<class UFeedbackBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
