// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestManager.h"
#include "Data/Structs/QuestLogSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLogSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnyQuestCompleted **************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnAnyQuestCompleted_Parms
	{
		const UQuestBase* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnAnyQuestCompleted_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnAnyQuestCompleted__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::_Script_QuestSystem_eventOnAnyQuestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::_Script_QuestSystem_eventOnAnyQuestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAnyQuestCompleted, const UQuestBase* Quest)
{
	struct _Script_QuestSystem_eventOnAnyQuestCompleted_Parms
	{
		const UQuestBase* Quest;
	};
	_Script_QuestSystem_eventOnAnyQuestCompleted_Parms Parms;
	Parms.Quest=Quest;
	OnAnyQuestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyQuestCompleted ****************************************************

// ********** Begin Delegate FOnAnyTaskAchieved ****************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnAnyTaskAchieved_Parms
	{
		const UQuestBase* Quest;
		const UTaskBase* Task;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnAnyTaskAchieved_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnAnyTaskAchieved_Parms, Task), Z_Construct_UClass_UTaskBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnAnyTaskAchieved__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::_Script_QuestSystem_eventOnAnyTaskAchieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::_Script_QuestSystem_eventOnAnyTaskAchieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyTaskAchieved_DelegateWrapper(const FMulticastScriptDelegate& OnAnyTaskAchieved, const UQuestBase* Quest, const UTaskBase* Task)
{
	struct _Script_QuestSystem_eventOnAnyTaskAchieved_Parms
	{
		const UQuestBase* Quest;
		const UTaskBase* Task;
	};
	_Script_QuestSystem_eventOnAnyTaskAchieved_Parms Parms;
	Parms.Quest=Quest;
	Parms.Task=Task;
	OnAnyTaskAchieved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyTaskAchieved ******************************************************

// ********** Begin Delegate FOnQuestTracked *******************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnQuestTracked_Parms
	{
		const UQuestBase* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestTracked_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestTracked__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestTracked_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTracked, const UQuestBase* Quest)
{
	struct _Script_QuestSystem_eventOnQuestTracked_Parms
	{
		const UQuestBase* Quest;
	};
	_Script_QuestSystem_eventOnQuestTracked_Parms Parms;
	Parms.Quest=Quest;
	OnQuestTracked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuestTracked *********************************************************

// ********** Begin Class UQuestManager Function AchieveTaskInActiveQuests *************************
struct Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics
{
	struct QuestManager_eventAchieveTaskInActiveQuests_Parms
	{
		const UTaskData* TaskDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAchieveTaskInActiveQuests_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::NewProp_TaskDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AchieveTaskInActiveQuests", Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::QuestManager_eventAchieveTaskInActiveQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::QuestManager_eventAchieveTaskInActiveQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execAchieveTaskInActiveQuests)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveTaskInActiveQuests(Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function AchieveTaskInActiveQuests ***************************

// ********** Begin Class UQuestManager Function AchieveTaskInQuest ********************************
struct Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics
{
	struct QuestManager_eventAchieveTaskInQuest_Parms
	{
		const UQuestData* QuestDataKey;
		const UTaskData* TaskDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAchieveTaskInQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAchieveTaskInQuest_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::NewProp_TaskDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AchieveTaskInQuest", Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::QuestManager_eventAchieveTaskInQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::QuestManager_eventAchieveTaskInQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execAchieveTaskInQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveTaskInQuest(Z_Param_QuestDataKey,Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function AchieveTaskInQuest **********************************

// ********** Begin Class UQuestManager Function AddToActiveQuests *********************************
struct Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics
{
	struct QuestManager_eventAddToActiveQuests_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAddToActiveQuests_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AddToActiveQuests", Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::QuestManager_eventAddToActiveQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::QuestManager_eventAddToActiveQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_AddToActiveQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AddToActiveQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execAddToActiveQuests)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToActiveQuests(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function AddToActiveQuests ***********************************

// ********** Begin Class UQuestManager Function AddToCompletedQuests ******************************
struct Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics
{
	struct QuestManager_eventAddToCompletedQuests_Parms
	{
		const UQuestData* QuestDataKey;
		bool bAchieveAllTasks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bAchieveAllTasks", "false" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static void NewProp_bAchieveAllTasks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieveAllTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAddToCompletedQuests_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
void Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_bAchieveAllTasks_SetBit(void* Obj)
{
	((QuestManager_eventAddToCompletedQuests_Parms*)Obj)->bAchieveAllTasks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_bAchieveAllTasks = { "bAchieveAllTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventAddToCompletedQuests_Parms), &Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_bAchieveAllTasks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::NewProp_bAchieveAllTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AddToCompletedQuests", Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::QuestManager_eventAddToCompletedQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::QuestManager_eventAddToCompletedQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_AddToCompletedQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AddToCompletedQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execAddToCompletedQuests)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_GET_UBOOL(Z_Param_bAchieveAllTasks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToCompletedQuests(Z_Param_QuestDataKey,Z_Param_bAchieveAllTasks);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function AddToCompletedQuests ********************************

// ********** Begin Class UQuestManager Function AddToInactiveQuests *******************************
struct Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics
{
	struct QuestManager_eventAddToInactiveQuests_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventAddToInactiveQuests_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AddToInactiveQuests", Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::QuestManager_eventAddToInactiveQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::QuestManager_eventAddToInactiveQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_AddToInactiveQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AddToInactiveQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execAddToInactiveQuests)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToInactiveQuests(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function AddToInactiveQuests *********************************

// ********** Begin Class UQuestManager Function CreateSaveData ************************************
struct Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics
{
	struct QuestManager_eventCreateSaveData_Parms
	{
		FQuestLogSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventCreateSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestLogSaveData, METADATA_PARAMS(0, nullptr) }; // 194729343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "CreateSaveData", Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::QuestManager_eventCreateSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::QuestManager_eventCreateSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_CreateSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_CreateSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execCreateSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestLogSaveData*)Z_Param__Result=P_THIS->CreateSaveData();
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function CreateSaveData **************************************

// ********** Begin Class UQuestManager Function GetQuest ******************************************
struct Z_Construct_UFunction_UQuestManager_GetQuest_Statics
{
	struct QuestManager_eventGetQuest_Parms
	{
		const UQuestData* QuestDataKey;
		UQuestBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuest_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "GetQuest", Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::QuestManager_eventGetQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_GetQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::QuestManager_eventGetQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_GetQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_GetQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execGetQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestBase**)Z_Param__Result=P_THIS->GetQuest(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function GetQuest ********************************************

// ********** Begin Class UQuestManager Function GetQuestsByFilter *********************************
struct Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics
{
	struct QuestManager_eventGetQuestsByFilter_Parms
	{
		const UQuestFilterData* QuestFilterData;
		TArray<UQuestBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFilterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestFilterData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_QuestFilterData = { "QuestFilterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuestsByFilter_Parms, QuestFilterData), Z_Construct_UClass_UQuestFilterData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFilterData_MetaData), NewProp_QuestFilterData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuestsByFilter_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_QuestFilterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "GetQuestsByFilter", Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::QuestManager_eventGetQuestsByFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::QuestManager_eventGetQuestsByFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_GetQuestsByFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_GetQuestsByFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execGetQuestsByFilter)
{
	P_GET_OBJECT(UQuestFilterData,Z_Param_QuestFilterData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuestBase*>*)Z_Param__Result=P_THIS->GetQuestsByFilter(Z_Param_QuestFilterData);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function GetQuestsByFilter ***********************************

// ********** Begin Class UQuestManager Function Init **********************************************
struct Z_Construct_UFunction_UQuestManager_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuestManager_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function Init ************************************************

// ********** Begin Class UQuestManager Function IsInActiveQuestsList ******************************
struct Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics
{
	struct QuestManager_eventIsInActiveQuestsList_Parms
	{
		const UQuestData* QuestDataKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventIsInActiveQuestsList_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
void Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventIsInActiveQuestsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventIsInActiveQuestsList_Parms), &Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "IsInActiveQuestsList", Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::QuestManager_eventIsInActiveQuestsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::QuestManager_eventIsInActiveQuestsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execIsInActiveQuestsList)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInActiveQuestsList(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function IsInActiveQuestsList ********************************

// ********** Begin Class UQuestManager Function IsInCompletedQuestsList ***************************
struct Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics
{
	struct QuestManager_eventIsInCompletedQuestsList_Parms
	{
		const UQuestData* QuestDataKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventIsInCompletedQuestsList_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
void Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventIsInCompletedQuestsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventIsInCompletedQuestsList_Parms), &Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "IsInCompletedQuestsList", Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::QuestManager_eventIsInCompletedQuestsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::QuestManager_eventIsInCompletedQuestsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execIsInCompletedQuestsList)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCompletedQuestsList(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function IsInCompletedQuestsList *****************************

// ********** Begin Class UQuestManager Function IsInInactiveQuestsList ****************************
struct Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics
{
	struct QuestManager_eventIsInInactiveQuestsList_Parms
	{
		const UQuestData* QuestDataKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventIsInInactiveQuestsList_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
void Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventIsInInactiveQuestsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventIsInInactiveQuestsList_Parms), &Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "IsInInactiveQuestsList", Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::QuestManager_eventIsInInactiveQuestsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::QuestManager_eventIsInInactiveQuestsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execIsInInactiveQuestsList)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInInactiveQuestsList(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function IsInInactiveQuestsList ******************************

// ********** Begin Class UQuestManager Function IsTaskAchieved ************************************
struct Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics
{
	struct QuestManager_eventIsTaskAchieved_Parms
	{
		const UQuestData* QuestDataKey;
		const UTaskData* TaskDataKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventIsTaskAchieved_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventIsTaskAchieved_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
void Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventIsTaskAchieved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventIsTaskAchieved_Parms), &Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_QuestDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_TaskDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "IsTaskAchieved", Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::QuestManager_eventIsTaskAchieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::QuestManager_eventIsTaskAchieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_IsTaskAchieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_IsTaskAchieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execIsTaskAchieved)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTaskAchieved(Z_Param_QuestDataKey,Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function IsTaskAchieved **************************************

// ********** Begin Class UQuestManager Function LoadSaveData **************************************
struct Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics
{
	struct QuestManager_eventLoadSaveData_Parms
	{
		FQuestLogSaveData QuestLogSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestLogSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::NewProp_QuestLogSaveData = { "QuestLogSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventLoadSaveData_Parms, QuestLogSaveData), Z_Construct_UScriptStruct_FQuestLogSaveData, METADATA_PARAMS(0, nullptr) }; // 194729343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::NewProp_QuestLogSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "LoadSaveData", Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::QuestManager_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::QuestManager_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execLoadSaveData)
{
	P_GET_STRUCT(FQuestLogSaveData,Z_Param_QuestLogSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSaveData(Z_Param_QuestLogSaveData);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function LoadSaveData ****************************************

// ********** Begin Class UQuestManager Function LogAllQuests **************************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UQuestManager_LogAllQuests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_LogAllQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "LogAllQuests", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x64020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_LogAllQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_LogAllQuests_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuestManager_LogAllQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_LogAllQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UQuestManager::execLogAllQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogAllQuests();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UQuestManager Function LogAllQuests ****************************************

// ********** Begin Class UQuestManager Function TrackQuest ****************************************
struct Z_Construct_UFunction_UQuestManager_TrackQuest_Statics
{
	struct QuestManager_eventTrackQuest_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventTrackQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "TrackQuest", Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::QuestManager_eventTrackQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::QuestManager_eventTrackQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_TrackQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_TrackQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execTrackQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrackQuest(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function TrackQuest ******************************************

// ********** Begin Class UQuestManager ************************************************************
void UQuestManager::StaticRegisterNativesUQuestManager()
{
	UClass* Class = UQuestManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AchieveTaskInActiveQuests", &UQuestManager::execAchieveTaskInActiveQuests },
		{ "AchieveTaskInQuest", &UQuestManager::execAchieveTaskInQuest },
		{ "AddToActiveQuests", &UQuestManager::execAddToActiveQuests },
		{ "AddToCompletedQuests", &UQuestManager::execAddToCompletedQuests },
		{ "AddToInactiveQuests", &UQuestManager::execAddToInactiveQuests },
		{ "CreateSaveData", &UQuestManager::execCreateSaveData },
		{ "GetQuest", &UQuestManager::execGetQuest },
		{ "GetQuestsByFilter", &UQuestManager::execGetQuestsByFilter },
		{ "Init", &UQuestManager::execInit },
		{ "IsInActiveQuestsList", &UQuestManager::execIsInActiveQuestsList },
		{ "IsInCompletedQuestsList", &UQuestManager::execIsInCompletedQuestsList },
		{ "IsInInactiveQuestsList", &UQuestManager::execIsInInactiveQuestsList },
		{ "IsTaskAchieved", &UQuestManager::execIsTaskAchieved },
		{ "LoadSaveData", &UQuestManager::execLoadSaveData },
#if WITH_EDITOR
		{ "LogAllQuests", &UQuestManager::execLogAllQuests },
#endif // WITH_EDITOR
		{ "TrackQuest", &UQuestManager::execTrackQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestManager;
UClass* UQuestManager::GetPrivateStaticClass()
{
	using TClass = UQuestManager;
	if (!Z_Registration_Info_UClass_UQuestManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestManager"),
			Z_Registration_Info_UClass_UQuestManager.InnerSingleton,
			StaticRegisterNativesUQuestManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UQuestManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestManager_NoRegister()
{
	return UQuestManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLogData_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedQuest_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyQuestCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyTaskAchieved_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTracked_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestLogData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedQuest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllQuests_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllQuests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllQuests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveQuests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InactiveQuests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompletedQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedQuests;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyQuestCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyTaskAchieved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManager_AchieveTaskInActiveQuests, "AchieveTaskInActiveQuests" }, // 2802320333
		{ &Z_Construct_UFunction_UQuestManager_AchieveTaskInQuest, "AchieveTaskInQuest" }, // 4217930417
		{ &Z_Construct_UFunction_UQuestManager_AddToActiveQuests, "AddToActiveQuests" }, // 2260542242
		{ &Z_Construct_UFunction_UQuestManager_AddToCompletedQuests, "AddToCompletedQuests" }, // 2443505703
		{ &Z_Construct_UFunction_UQuestManager_AddToInactiveQuests, "AddToInactiveQuests" }, // 3719073052
		{ &Z_Construct_UFunction_UQuestManager_CreateSaveData, "CreateSaveData" }, // 207440659
		{ &Z_Construct_UFunction_UQuestManager_GetQuest, "GetQuest" }, // 2327128862
		{ &Z_Construct_UFunction_UQuestManager_GetQuestsByFilter, "GetQuestsByFilter" }, // 3041099643
		{ &Z_Construct_UFunction_UQuestManager_Init, "Init" }, // 2928565682
		{ &Z_Construct_UFunction_UQuestManager_IsInActiveQuestsList, "IsInActiveQuestsList" }, // 959873625
		{ &Z_Construct_UFunction_UQuestManager_IsInCompletedQuestsList, "IsInCompletedQuestsList" }, // 2913688830
		{ &Z_Construct_UFunction_UQuestManager_IsInInactiveQuestsList, "IsInInactiveQuestsList" }, // 2121369968
		{ &Z_Construct_UFunction_UQuestManager_IsTaskAchieved, "IsTaskAchieved" }, // 3609975692
		{ &Z_Construct_UFunction_UQuestManager_LoadSaveData, "LoadSaveData" }, // 367923241
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UQuestManager_LogAllQuests, "LogAllQuests" }, // 102507337
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UQuestManager_TrackQuest, "TrackQuest" }, // 1137528385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestLogData = { "QuestLogData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, QuestLogData), Z_Construct_UClass_UQuestLogData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestLogData_MetaData), NewProp_QuestLogData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuest = { "TrackedQuest", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, TrackedQuest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedQuest_MetaData), NewProp_TrackedQuest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests_ValueProp = { "AllQuests", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests_Key_KeyProp = { "AllQuests_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests = { "AllQuests", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, AllQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllQuests_MetaData), NewProp_AllQuests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Inner = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, ActiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuests_MetaData), NewProp_ActiveQuests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_InactiveQuests_Inner = { "InactiveQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_InactiveQuests = { "InactiveQuests", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, InactiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveQuests_MetaData), NewProp_InactiveQuests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_Inner = { "CompletedQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests = { "CompletedQuests", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, CompletedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedQuests_MetaData), NewProp_CompletedQuests_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnAnyQuestCompleted = { "OnAnyQuestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnAnyQuestCompleted), Z_Construct_UDelegateFunction_QuestSystem_OnAnyQuestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyQuestCompleted_MetaData), NewProp_OnAnyQuestCompleted_MetaData) }; // 4040604518
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnAnyTaskAchieved = { "OnAnyTaskAchieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnAnyTaskAchieved), Z_Construct_UDelegateFunction_QuestSystem_OnAnyTaskAchieved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyTaskAchieved_MetaData), NewProp_OnAnyTaskAchieved_MetaData) }; // 3870174568
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestTracked = { "OnQuestTracked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnQuestTracked), Z_Construct_UDelegateFunction_QuestSystem_OnQuestTracked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestTracked_MetaData), NewProp_OnQuestTracked_MetaData) }; // 852553407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestLogData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_AllQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_InactiveQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_InactiveQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnAnyQuestCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnAnyTaskAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManager_Statics::ClassParams = {
	&UQuestManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestManager()
{
	if (!Z_Registration_Info_UClass_UQuestManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManager.OuterSingleton, Z_Construct_UClass_UQuestManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManager);
UQuestManager::~UQuestManager() {}
// ********** End Class UQuestManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManager, UQuestManager::StaticClass, TEXT("UQuestManager"), &Z_Registration_Info_UClass_UQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManager), 4172195350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_682174936(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
