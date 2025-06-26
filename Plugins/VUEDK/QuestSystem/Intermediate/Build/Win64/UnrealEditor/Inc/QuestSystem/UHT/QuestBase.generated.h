// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Quests/QuestBase.h"

#ifdef QUESTSYSTEM_QuestBase_generated_h
#error "QuestBase.generated.h already included, missing '#pragma once' in QuestBase.h"
#endif
#define QUESTSYSTEM_QuestBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTaskBase;
class UTaskData;
enum class EQuestStatus : uint8;
enum class EQuestType : uint8;
struct FQuestSaveData;

// ********** Begin Delegate FOnQuestCompleted *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_15_DELEGATE \
QUESTSYSTEM_API void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted);


// ********** End Delegate FOnQuestCompleted *******************************************************

// ********** Begin Class UQuestBase ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetQuest); \
	DECLARE_FUNCTION(execGetQuestType); \
	DECLARE_FUNCTION(execGetQuestStatus); \
	DECLARE_FUNCTION(execGetTaskByFName); \
	DECLARE_FUNCTION(execGetTask); \
	DECLARE_FUNCTION(execIsTaskAchieved); \
	DECLARE_FUNCTION(execAchieveAllTasks); \
	DECLARE_FUNCTION(execAchieveQuestTask); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateQuestSaveData);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestBase(); \
	friend struct Z_Construct_UClass_UQuestBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestBase_NoRegister) \
	DECLARE_SERIALIZER(UQuestBase)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestBase(UQuestBase&&) = delete; \
	UQuestBase(const UQuestBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestBase) \
	NO_API virtual ~UQuestBase();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestBase;

// ********** End Class UQuestBase *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
