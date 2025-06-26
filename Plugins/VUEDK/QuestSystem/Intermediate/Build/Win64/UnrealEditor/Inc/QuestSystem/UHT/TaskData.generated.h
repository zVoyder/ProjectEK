// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DataAssets/TaskData.h"

#ifdef QUESTSYSTEM_TaskData_generated_h
#error "TaskData.generated.h already included, missing '#pragma once' in TaskData.h"
#endif
#define QUESTSYSTEM_TaskData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ETaskType : uint8;

// ********** Begin Class UTaskData ****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTaskType);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskData(); \
	friend struct Z_Construct_UClass_UTaskData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaskData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UTaskData_NoRegister) \
	DECLARE_SERIALIZER(UTaskData)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaskData(UTaskData&&) = delete; \
	UTaskData(const UTaskData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskData) \
	NO_API virtual ~UTaskData();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaskData;

// ********** End Class UTaskData ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
