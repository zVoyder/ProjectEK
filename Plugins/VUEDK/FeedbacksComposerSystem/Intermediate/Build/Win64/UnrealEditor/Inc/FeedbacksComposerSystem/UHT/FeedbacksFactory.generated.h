// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FeedbacksFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFeedbacksCue;
class UFeedbacksCueData;
#ifdef FEEDBACKSCOMPOSERSYSTEM_FeedbacksFactory_generated_h
#error "FeedbacksFactory.generated.h already included, missing '#pragma once' in FeedbacksFactory.h"
#endif
#define FEEDBACKSCOMPOSERSYSTEM_FeedbacksFactory_generated_h

#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateFeedbacksCue);


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFeedbacksFactory(); \
	friend struct Z_Construct_UClass_UFeedbacksFactory_Statics; \
public: \
	DECLARE_CLASS(UFeedbacksFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FeedbacksComposerSystem"), NO_API) \
	DECLARE_SERIALIZER(UFeedbacksFactory)


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbacksFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFeedbacksFactory(UFeedbacksFactory&&); \
	UFeedbacksFactory(const UFeedbacksFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbacksFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbacksFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbacksFactory) \
	NO_API virtual ~UFeedbacksFactory();


#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_11_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<class UFeedbacksFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Factories_FeedbacksFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
