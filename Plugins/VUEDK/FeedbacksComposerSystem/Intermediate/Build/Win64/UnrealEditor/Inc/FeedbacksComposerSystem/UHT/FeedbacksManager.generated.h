// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FeedbacksManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFeedbacksCue;
class UFeedbacksCueData;
#ifdef FEEDBACKSCOMPOSERSYSTEM_FeedbacksManager_generated_h
#error "FeedbacksManager.generated.h already included, missing '#pragma once' in FeedbacksManager.h"
#endif
#define FEEDBACKSCOMPOSERSYSTEM_FeedbacksManager_generated_h

#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartFeedbacksCue);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFeedbacksManager(); \
	friend struct Z_Construct_UClass_UFeedbacksManager_Statics; \
public: \
	DECLARE_CLASS(UFeedbacksManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FeedbacksComposerSystem"), NO_API) \
	DECLARE_SERIALIZER(UFeedbacksManager)


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbacksManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFeedbacksManager(UFeedbacksManager&&); \
	UFeedbacksManager(const UFeedbacksManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbacksManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbacksManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbacksManager) \
	NO_API virtual ~UFeedbacksManager();


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_11_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<class UFeedbacksManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
