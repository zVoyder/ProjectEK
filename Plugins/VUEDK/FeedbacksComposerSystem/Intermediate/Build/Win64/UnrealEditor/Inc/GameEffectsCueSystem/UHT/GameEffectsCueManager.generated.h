// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameEffectsCueManager.h"

#ifdef GAMEEFFECTSCUESYSTEM_GameEffectsCueManager_generated_h
#error "GameEffectsCueManager.generated.h already included, missing '#pragma once' in GameEffectsCueManager.h"
#endif
#define GAMEEFFECTSCUESYSTEM_GameEffectsCueManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UGameEffectsCue;
class UGameEffectsCueData;

// ********** Begin Class UGameEffectsCueManager ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartGameEffectsCue);


GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEffectsCueManager(); \
	friend struct Z_Construct_UClass_UGameEffectsCueManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEffectsCueManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEffectsCueSystem"), Z_Construct_UClass_UGameEffectsCueManager_NoRegister) \
	DECLARE_SERIALIZER(UGameEffectsCueManager)


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEffectsCueManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEffectsCueManager(UGameEffectsCueManager&&) = delete; \
	UGameEffectsCueManager(const UGameEffectsCueManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEffectsCueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEffectsCueManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEffectsCueManager) \
	NO_API virtual ~UGameEffectsCueManager();


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEffectsCueManager;

// ********** End Class UGameEffectsCueManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
