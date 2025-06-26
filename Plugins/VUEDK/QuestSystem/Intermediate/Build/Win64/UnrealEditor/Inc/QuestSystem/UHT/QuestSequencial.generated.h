// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Quests/QuestSequencial.h"

#ifdef QUESTSYSTEM_QuestSequencial_generated_h
#error "QuestSequencial.generated.h already included, missing '#pragma once' in QuestSequencial.h"
#endif
#define QUESTSYSTEM_QuestSequencial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTaskData;

// ********** Begin Class UQuestSequencial *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTaskIndex); \
	DECLARE_FUNCTION(execGetCurrentTaskIndex);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSequencial_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestSequencial(); \
	friend struct Z_Construct_UClass_UQuestSequencial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSequencial_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestSequencial, UQuestBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestSequencial_NoRegister) \
	DECLARE_SERIALIZER(UQuestSequencial)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSequencial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestSequencial(UQuestSequencial&&) = delete; \
	UQuestSequencial(const UQuestSequencial&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSequencial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSequencial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestSequencial) \
	NO_API virtual ~UQuestSequencial();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestSequencial;

// ********** End Class UQuestSequencial ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
