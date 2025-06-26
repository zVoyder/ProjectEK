// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Tasks/CountTask.h"

#ifdef QUESTSYSTEM_CountTask_generated_h
#error "CountTask.generated.h already included, missing '#pragma once' in CountTask.h"
#endif
#define QUESTSYSTEM_CountTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCountTask ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentCount);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTask_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCountTask(); \
	friend struct Z_Construct_UClass_UCountTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UCountTask, UTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UCountTask_NoRegister) \
	DECLARE_SERIALIZER(UCountTask)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCountTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCountTask(UCountTask&&) = delete; \
	UCountTask(const UCountTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCountTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCountTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCountTask) \
	NO_API virtual ~UCountTask();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCountTask;

// ********** End Class UCountTask *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
