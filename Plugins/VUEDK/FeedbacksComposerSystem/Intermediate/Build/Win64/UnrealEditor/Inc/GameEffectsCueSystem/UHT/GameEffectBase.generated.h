// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effects/GameEffectBase.h"

#ifdef GAMEEFFECTSCUESYSTEM_GameEffectBase_generated_h
#error "GameEffectBase.generated.h already included, missing '#pragma once' in GameEffectBase.h"
#endif
#define GAMEEFFECTSCUESYSTEM_GameEffectBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UGameEffectsCue;

// ********** Begin Class UGameEffectBase **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFinish_Implementation(); \
	virtual void OnTick_Implementation(float DeltaTime); \
	virtual void OnStop_Implementation(); \
	virtual void OnPlay_Implementation(); \
	virtual void OnInit_Implementation(); \
	virtual void NextEffect_Implementation(); \
	DECLARE_FUNCTION(execOnFinish); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOnStop); \
	DECLARE_FUNCTION(execOnPlay); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execGetInDelay); \
	DECLARE_FUNCTION(execGetOutDelay); \
	DECLARE_FUNCTION(execGetRelatedCue); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execNextEffect); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_CALLBACK_WRAPPERS
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEffectBase(); \
	friend struct Z_Construct_UClass_UGameEffectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEffectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameEffectsCueSystem"), Z_Construct_UClass_UGameEffectBase_NoRegister) \
	DECLARE_SERIALIZER(UGameEffectBase)


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEffectBase(UGameEffectBase&&) = delete; \
	UGameEffectBase(const UGameEffectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEffectBase) \
	NO_API virtual ~UGameEffectBase();


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEffectBase;

// ********** End Class UGameEffectBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
