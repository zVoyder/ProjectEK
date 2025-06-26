// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Tasks/SingleTask.h"

#ifdef QUESTSYSTEM_SingleTask_generated_h
#error "SingleTask.generated.h already included, missing '#pragma once' in SingleTask.h"
#endif
#define QUESTSYSTEM_SingleTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USingleTask **************************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_USingleTask_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleTask(); \
	friend struct Z_Construct_UClass_USingleTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_USingleTask_NoRegister(); \
public: \
	DECLARE_CLASS2(USingleTask, UTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_USingleTask_NoRegister) \
	DECLARE_SERIALIZER(USingleTask)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USingleTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USingleTask(USingleTask&&) = delete; \
	USingleTask(const USingleTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingleTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USingleTask) \
	NO_API virtual ~USingleTask();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USingleTask;

// ********** End Class USingleTask ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
