// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/GameEffectsCueData.h"

#ifdef GAMEEFFECTSCUESYSTEM_GameEffectsCueData_generated_h
#error "GameEffectsCueData.generated.h already included, missing '#pragma once' in GameEffectsCueData.h"
#endif
#define GAMEEFFECTSCUESYSTEM_GameEffectsCueData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameEffectsCueData ******************************************************
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEffectsCueData(); \
	friend struct Z_Construct_UClass_UGameEffectsCueData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEffectsCueData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEffectsCueSystem"), Z_Construct_UClass_UGameEffectsCueData_NoRegister) \
	DECLARE_SERIALIZER(UGameEffectsCueData)


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEffectsCueData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEffectsCueData(UGameEffectsCueData&&) = delete; \
	UGameEffectsCueData(const UGameEffectsCueData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEffectsCueData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEffectsCueData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEffectsCueData) \
	NO_API virtual ~UGameEffectsCueData();


#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEffectsCueData;

// ********** End Class UGameEffectsCueData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
