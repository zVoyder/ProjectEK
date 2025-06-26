// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/QSUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQSUtility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSUtility();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSUtility_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQSUtility Function AchieveTask ******************************************
struct Z_Construct_UFunction_UQSUtility_AchieveTask_Statics
{
	struct QSUtility_eventAchieveTask_Parms
	{
		const UTaskData* TaskDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Achieves a task in the active quests list.\n\x09 * @param TaskDataKey The task to achieve.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Achieves a task in the active quests list.\n@param TaskDataKey The task to achieve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventAchieveTask_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::NewProp_TaskDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "AchieveTask", Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::QSUtility_eventAchieveTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::QSUtility_eventAchieveTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_AchieveTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_AchieveTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execAchieveTask)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UQSUtility::AchieveTask(Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function AchieveTask ********************************************

// ********** Begin Class UQSUtility Function ActivateQuest ****************************************
struct Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics
{
	struct QSUtility_eventActivateQuest_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Puts the quest in the active quests list.\n\x09 * @param QuestDataKey The quest to activate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Puts the quest in the active quests list.\n@param QuestDataKey The quest to activate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventActivateQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "ActivateQuest", Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::QSUtility_eventActivateQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::QSUtility_eventActivateQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_ActivateQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_ActivateQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execActivateQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UQSUtility::ActivateQuest(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function ActivateQuest ******************************************

// ********** Begin Class UQSUtility Function CompleteQuestNow *************************************
struct Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics
{
	struct QSUtility_eventCompleteQuestNow_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Puts the quest in the completed quests list and achieves all its tasks.\n\x09 * @param QuestDataKey The quest to complete.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Puts the quest in the completed quests list and achieves all its tasks.\n@param QuestDataKey The quest to complete." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventCompleteQuestNow_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "CompleteQuestNow", Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::QSUtility_eventCompleteQuestNow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::QSUtility_eventCompleteQuestNow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_CompleteQuestNow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_CompleteQuestNow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execCompleteQuestNow)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UQSUtility::CompleteQuestNow(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function CompleteQuestNow ***************************************

// ********** Begin Class UQSUtility Function DeactivateQuest **************************************
struct Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics
{
	struct QSUtility_eventDeactivateQuest_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Puts the quest in the inactive quests list.\n\x09 * @param QuestDataKey The quest to deactivate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Puts the quest in the inactive quests list.\n@param QuestDataKey The quest to deactivate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventDeactivateQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "DeactivateQuest", Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::QSUtility_eventDeactivateQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::QSUtility_eventDeactivateQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_DeactivateQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_DeactivateQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execDeactivateQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UQSUtility::DeactivateQuest(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function DeactivateQuest ****************************************

// ********** Begin Class UQSUtility Function GetQuestManager **************************************
struct Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics
{
	struct QSUtility_eventGetQuestManager_Parms
	{
		UQuestManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the found QuestManager.\n\x09 * @return QuestManager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the found QuestManager.\n@return QuestManager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventGetQuestManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "GetQuestManager", Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::QSUtility_eventGetQuestManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::QSUtility_eventGetQuestManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_GetQuestManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_GetQuestManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execGetQuestManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestManager**)Z_Param__Result=UQSUtility::GetQuestManager();
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function GetQuestManager ****************************************

// ********** Begin Class UQSUtility Function TrackQuest *******************************************
struct Z_Construct_UFunction_UQSUtility_TrackQuest_Statics
{
	struct QSUtility_eventTrackQuest_Parms
	{
		const UQuestData* QuestDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Quest System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tracks a quest.\n\x09 * @param QuestDataKey The quest to track.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks a quest.\n@param QuestDataKey The quest to track." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::NewProp_QuestDataKey = { "QuestDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QSUtility_eventTrackQuest_Parms, QuestDataKey), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataKey_MetaData), NewProp_QuestDataKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::NewProp_QuestDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQSUtility, nullptr, "TrackQuest", Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::QSUtility_eventTrackQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::QSUtility_eventTrackQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQSUtility_TrackQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQSUtility_TrackQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQSUtility::execTrackQuest)
{
	P_GET_OBJECT(UQuestData,Z_Param_QuestDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	UQSUtility::TrackQuest(Z_Param_QuestDataKey);
	P_NATIVE_END;
}
// ********** End Class UQSUtility Function TrackQuest *********************************************

// ********** Begin Class UQSUtility ***************************************************************
void UQSUtility::StaticRegisterNativesUQSUtility()
{
	UClass* Class = UQSUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AchieveTask", &UQSUtility::execAchieveTask },
		{ "ActivateQuest", &UQSUtility::execActivateQuest },
		{ "CompleteQuestNow", &UQSUtility::execCompleteQuestNow },
		{ "DeactivateQuest", &UQSUtility::execDeactivateQuest },
		{ "GetQuestManager", &UQSUtility::execGetQuestManager },
		{ "TrackQuest", &UQSUtility::execTrackQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQSUtility;
UClass* UQSUtility::GetPrivateStaticClass()
{
	using TClass = UQSUtility;
	if (!Z_Registration_Info_UClass_UQSUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QSUtility"),
			Z_Registration_Info_UClass_UQSUtility.InnerSingleton,
			StaticRegisterNativesUQSUtility,
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
	return Z_Registration_Info_UClass_UQSUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UQSUtility_NoRegister()
{
	return UQSUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQSUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/QSUtility.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Utility/QSUtility.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQSUtility_AchieveTask, "AchieveTask" }, // 4203223398
		{ &Z_Construct_UFunction_UQSUtility_ActivateQuest, "ActivateQuest" }, // 787908098
		{ &Z_Construct_UFunction_UQSUtility_CompleteQuestNow, "CompleteQuestNow" }, // 899535397
		{ &Z_Construct_UFunction_UQSUtility_DeactivateQuest, "DeactivateQuest" }, // 3408971320
		{ &Z_Construct_UFunction_UQSUtility_GetQuestManager, "GetQuestManager" }, // 3359729458
		{ &Z_Construct_UFunction_UQSUtility_TrackQuest, "TrackQuest" }, // 693806900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQSUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQSUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQSUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQSUtility_Statics::ClassParams = {
	&UQSUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQSUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UQSUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQSUtility()
{
	if (!Z_Registration_Info_UClass_UQSUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQSUtility.OuterSingleton, Z_Construct_UClass_UQSUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQSUtility.OuterSingleton;
}
UQSUtility::UQSUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQSUtility);
UQSUtility::~UQSUtility() {}
// ********** End Class UQSUtility *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQSUtility, UQSUtility::StaticClass, TEXT("UQSUtility"), &Z_Registration_Info_UClass_UQSUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQSUtility), 1218723042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h__Script_QuestSystem_658722136(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
