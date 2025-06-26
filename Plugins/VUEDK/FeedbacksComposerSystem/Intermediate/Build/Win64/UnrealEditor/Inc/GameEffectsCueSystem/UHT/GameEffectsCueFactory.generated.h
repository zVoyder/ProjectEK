// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/GameEffectsCueFactory.h"

#ifdef GAMEEFFECTSCUESYSTEM_GameEffectsCueFactory_generated_h
#error "GameEffectsCueFactory.generated.h already included, missing '#pragma once' in GameEffectsCueFactory.h"
#endif
#define GAMEEFFECTSCUESYSTEM_GameEffectsCueFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UGameEffectsCue;
class UGameEffectsCueData;

// ********** Begin Class UGameEffectsCueFactory ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateGameEffectsCue);


GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEffectsCueFactory(); \
	friend struct Z_Construct_UClass_UGameEffectsCueFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEffectsCueFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEffectsCueSystem"), Z_Construct_UClass_UGameEffectsCueFactory_NoRegister) \
	DECLARE_SERIALIZER(UGameEffectsCueFactory)


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEffectsCueFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEffectsCueFactory(UGameEffectsCueFactory&&) = delete; \
	UGameEffectsCueFactory(const UGameEffectsCueFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEffectsCueFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEffectsCueFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEffectsCueFactory) \
	NO_API virtual ~UGameEffectsCueFactory();


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEffectsCueFactory;

// ********** End Class UGameEffectsCueFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
