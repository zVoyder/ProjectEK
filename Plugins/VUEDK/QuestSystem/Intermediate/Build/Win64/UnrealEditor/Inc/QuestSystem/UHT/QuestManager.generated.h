// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestManager.h"

#ifdef QUESTSYSTEM_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define QUESTSYSTEM_QuestManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UQuestBase;
class UQuestData;
class UQuestFilterData;
class UTaskBase;
class UTaskData;
struct FQuestLogSaveData;

// ********** Begin Delegate FOnAnyQuestCompleted **************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_17_DELEGATE \
QUESTSYSTEM_API void FOnAnyQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAnyQuestCompleted, const UQuestBase* Quest);


// ********** End Delegate FOnAnyQuestCompleted ****************************************************

// ********** Begin Delegate FOnAnyTaskAchieved ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_22_DELEGATE \
QUESTSYSTEM_API void FOnAnyTaskAchieved_DelegateWrapper(const FMulticastScriptDelegate& OnAnyTaskAchieved, const UQuestBase* Quest, const UTaskBase* Task);


// ********** End Delegate FOnAnyTaskAchieved ******************************************************

// ********** Begin Delegate FOnQuestTracked *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_26_DELEGATE \
QUESTSYSTEM_API void FOnQuestTracked_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTracked, const UQuestBase* Quest);


// ********** End Delegate FOnQuestTracked *********************************************************

// ********** Begin Class UQuestManager ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQuestsByFilter); \
	DECLARE_FUNCTION(execGetQuest); \
	DECLARE_FUNCTION(execIsTaskAchieved); \
	DECLARE_FUNCTION(execIsInInactiveQuestsList); \
	DECLARE_FUNCTION(execIsInActiveQuestsList); \
	DECLARE_FUNCTION(execIsInCompletedQuestsList); \
	DECLARE_FUNCTION(execAddToCompletedQuests); \
	DECLARE_FUNCTION(execAddToInactiveQuests); \
	DECLARE_FUNCTION(execAddToActiveQuests); \
	DECLARE_FUNCTION(execAchieveTaskInQuest); \
	DECLARE_FUNCTION(execAchieveTaskInActiveQuests); \
	DECLARE_FUNCTION(execTrackQuest); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateSaveData); \
	DECLARE_FUNCTION(execInit);


#if WITH_EDITOR
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execLogAllQuests);
#else // WITH_EDITOR
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestManager_NoRegister) \
	DECLARE_SERIALIZER(UQuestManager)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestManager(UQuestManager&&) = delete; \
	UQuestManager(const UQuestManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManager) \
	NO_API virtual ~UQuestManager();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_28_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestManager;

// ********** End Class UQuestManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
