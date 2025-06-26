// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Tasks/TaskBase.h"

#ifdef QUESTSYSTEM_TaskBase_generated_h
#error "TaskBase.generated.h already included, missing '#pragma once' in TaskBase.h"
#endif
#define QUESTSYSTEM_TaskBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTaskSaveData;

// ********** Begin Delegate FOnTaskAchieved *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_13_DELEGATE \
QUESTSYSTEM_API void FOnTaskAchieved_DelegateWrapper(const FMulticastScriptDelegate& OnTaskAchieved);


// ********** End Delegate FOnTaskAchieved *********************************************************

// ********** Begin Class UTaskBase ****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetTask); \
	DECLARE_FUNCTION(execAchieveTask); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateTaskSaveData);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskBase(); \
	friend struct Z_Construct_UClass_UTaskBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaskBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UTaskBase_NoRegister) \
	DECLARE_SERIALIZER(UTaskBase)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaskBase(UTaskBase&&) = delete; \
	UTaskBase(const UTaskBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskBase) \
	NO_API virtual ~UTaskBase();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_15_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaskBase;

// ********** End Class UTaskBase ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
