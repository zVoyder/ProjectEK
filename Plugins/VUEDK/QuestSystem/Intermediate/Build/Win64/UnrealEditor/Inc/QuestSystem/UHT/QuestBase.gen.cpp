// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Quests/QuestBase.h"
#include "Data/Structs/QuestSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestType();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnQuestCompleted *****************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted)
{
	OnQuestCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnQuestCompleted *******************************************************

// ********** Begin Class UQuestBase Function AchieveAllTasks **************************************
struct Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics
{
	struct QuestBase_eventAchieveAllTasks_Parms
	{
		bool bFullyAchieve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bFullyAchieve", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyAchieve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bFullyAchieve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::NewProp_bFullyAchieve_SetBit(void* Obj)
{
	((QuestBase_eventAchieveAllTasks_Parms*)Obj)->bFullyAchieve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::NewProp_bFullyAchieve = { "bFullyAchieve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestBase_eventAchieveAllTasks_Parms), &Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::NewProp_bFullyAchieve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyAchieve_MetaData), NewProp_bFullyAchieve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::NewProp_bFullyAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "AchieveAllTasks", Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::QuestBase_eventAchieveAllTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::QuestBase_eventAchieveAllTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_AchieveAllTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_AchieveAllTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execAchieveAllTasks)
{
	P_GET_UBOOL(Z_Param_bFullyAchieve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveAllTasks(Z_Param_bFullyAchieve);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function AchieveAllTasks ****************************************

// ********** Begin Class UQuestBase Function AchieveQuestTask *************************************
struct Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics
{
	struct QuestBase_eventAchieveQuestTask_Parms
	{
		const UTaskData* TaskDataKey;
		bool bFullyAchieve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bFullyAchieve", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyAchieve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static void NewProp_bFullyAchieve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventAchieveQuestTask_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
void Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_bFullyAchieve_SetBit(void* Obj)
{
	((QuestBase_eventAchieveQuestTask_Parms*)Obj)->bFullyAchieve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_bFullyAchieve = { "bFullyAchieve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestBase_eventAchieveQuestTask_Parms), &Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_bFullyAchieve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyAchieve_MetaData), NewProp_bFullyAchieve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_TaskDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::NewProp_bFullyAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "AchieveQuestTask", Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::QuestBase_eventAchieveQuestTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::QuestBase_eventAchieveQuestTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_AchieveQuestTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_AchieveQuestTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execAchieveQuestTask)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_GET_UBOOL(Z_Param_bFullyAchieve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveQuestTask(Z_Param_TaskDataKey,Z_Param_bFullyAchieve);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function AchieveQuestTask ***************************************

// ********** Begin Class UQuestBase Function CreateQuestSaveData **********************************
struct Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics
{
	struct QuestBase_eventCreateQuestSaveData_Parms
	{
		FQuestSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventCreateQuestSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestSaveData, METADATA_PARAMS(0, nullptr) }; // 2940496550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "CreateQuestSaveData", Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::QuestBase_eventCreateQuestSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::QuestBase_eventCreateQuestSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_CreateQuestSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_CreateQuestSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execCreateQuestSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestSaveData*)Z_Param__Result=P_THIS->CreateQuestSaveData();
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function CreateQuestSaveData ************************************

// ********** Begin Class UQuestBase Function GetQuestStatus ***************************************
struct Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics
{
	struct QuestBase_eventGetQuestStatus_Parms
	{
		EQuestStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetQuestStatus_Parms, ReturnValue), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(0, nullptr) }; // 2306328276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetQuestStatus", Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::QuestBase_eventGetQuestStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::QuestBase_eventGetQuestStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_GetQuestStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_GetQuestStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execGetQuestStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EQuestStatus*)Z_Param__Result=P_THIS->GetQuestStatus();
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function GetQuestStatus *****************************************

// ********** Begin Class UQuestBase Function GetQuestType *****************************************
struct Z_Construct_UFunction_UQuestBase_GetQuestType_Statics
{
	struct QuestBase_eventGetQuestType_Parms
	{
		EQuestType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetQuestType_Parms, ReturnValue), Z_Construct_UEnum_QuestSystem_EQuestType, METADATA_PARAMS(0, nullptr) }; // 3095288182
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetQuestType", Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::QuestBase_eventGetQuestType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::QuestBase_eventGetQuestType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_GetQuestType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_GetQuestType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execGetQuestType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EQuestType*)Z_Param__Result=P_THIS->GetQuestType();
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function GetQuestType *******************************************

// ********** Begin Class UQuestBase Function GetTask **********************************************
struct Z_Construct_UFunction_UQuestBase_GetTask_Statics
{
	struct QuestBase_eventGetTask_Parms
	{
		const UTaskData* TaskDataKey;
		UTaskBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetTask_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetTask_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetTask_Parms, ReturnValue), Z_Construct_UClass_UTaskBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetTask_Statics::NewProp_TaskDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetTask", Z_Construct_UFunction_UQuestBase_GetTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_GetTask_Statics::QuestBase_eventGetTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_GetTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_GetTask_Statics::QuestBase_eventGetTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_GetTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_GetTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execGetTask)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTaskBase**)Z_Param__Result=P_THIS->GetTask(Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function GetTask ************************************************

// ********** Begin Class UQuestBase Function GetTaskByFName ***************************************
struct Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics
{
	struct QuestBase_eventGetTaskByFName_Parms
	{
		FName TaskName;
		UTaskBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetTaskByFName_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventGetTaskByFName_Parms, ReturnValue), Z_Construct_UClass_UTaskBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetTaskByFName", Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::QuestBase_eventGetTaskByFName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::QuestBase_eventGetTaskByFName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_GetTaskByFName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_GetTaskByFName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execGetTaskByFName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTaskBase**)Z_Param__Result=P_THIS->GetTaskByFName(Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function GetTaskByFName *****************************************

// ********** Begin Class UQuestBase Function IsTaskAchieved ***************************************
struct Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics
{
	struct QuestBase_eventIsTaskAchieved_Parms
	{
		const UTaskData* TaskDataKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventIsTaskAchieved_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDataKey_MetaData), NewProp_TaskDataKey_MetaData) };
void Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestBase_eventIsTaskAchieved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestBase_eventIsTaskAchieved_Parms), &Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_TaskDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "IsTaskAchieved", Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::QuestBase_eventIsTaskAchieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::QuestBase_eventIsTaskAchieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_IsTaskAchieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_IsTaskAchieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execIsTaskAchieved)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTaskAchieved(Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function IsTaskAchieved *****************************************

// ********** Begin Class UQuestBase Function LoadSaveData *****************************************
struct Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics
{
	struct QuestBase_eventLoadSaveData_Parms
	{
		FQuestSaveData QuestSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::NewProp_QuestSaveData = { "QuestSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestBase_eventLoadSaveData_Parms, QuestSaveData), Z_Construct_UScriptStruct_FQuestSaveData, METADATA_PARAMS(0, nullptr) }; // 2940496550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::NewProp_QuestSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "LoadSaveData", Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::QuestBase_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::QuestBase_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestBase_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execLoadSaveData)
{
	P_GET_STRUCT(FQuestSaveData,Z_Param_QuestSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSaveData(Z_Param_QuestSaveData);
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function LoadSaveData *******************************************

// ********** Begin Class UQuestBase Function ResetQuest *******************************************
struct Z_Construct_UFunction_UQuestBase_ResetQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_ResetQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "ResetQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_ResetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestBase_ResetQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuestBase_ResetQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestBase_ResetQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestBase::execResetQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetQuest();
	P_NATIVE_END;
}
// ********** End Class UQuestBase Function ResetQuest *********************************************

// ********** Begin Class UQuestBase ***************************************************************
void UQuestBase::StaticRegisterNativesUQuestBase()
{
	UClass* Class = UQuestBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AchieveAllTasks", &UQuestBase::execAchieveAllTasks },
		{ "AchieveQuestTask", &UQuestBase::execAchieveQuestTask },
		{ "CreateQuestSaveData", &UQuestBase::execCreateQuestSaveData },
		{ "GetQuestStatus", &UQuestBase::execGetQuestStatus },
		{ "GetQuestType", &UQuestBase::execGetQuestType },
		{ "GetTask", &UQuestBase::execGetTask },
		{ "GetTaskByFName", &UQuestBase::execGetTaskByFName },
		{ "IsTaskAchieved", &UQuestBase::execIsTaskAchieved },
		{ "LoadSaveData", &UQuestBase::execLoadSaveData },
		{ "ResetQuest", &UQuestBase::execResetQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestBase;
UClass* UQuestBase::GetPrivateStaticClass()
{
	using TClass = UQuestBase;
	if (!Z_Registration_Info_UClass_UQuestBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestBase"),
			Z_Registration_Info_UClass_UQuestBase.InnerSingleton,
			StaticRegisterNativesUQuestBase,
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
	return Z_Registration_Info_UClass_UQuestBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestBase_NoRegister()
{
	return UQuestBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Quests/QuestBase.h" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[] = {
		{ "Category", "QuestBase" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTasks_MetaData[] = {
		{ "Category", "QuestBase" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuestCompleted_MetaData[] = {
		{ "Category", "QuestBase" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTasks_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTasks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllTasks;
	static void NewProp_bIsQuestCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuestCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestBase_AchieveAllTasks, "AchieveAllTasks" }, // 2825592956
		{ &Z_Construct_UFunction_UQuestBase_AchieveQuestTask, "AchieveQuestTask" }, // 127883622
		{ &Z_Construct_UFunction_UQuestBase_CreateQuestSaveData, "CreateQuestSaveData" }, // 1300095177
		{ &Z_Construct_UFunction_UQuestBase_GetQuestStatus, "GetQuestStatus" }, // 3114926259
		{ &Z_Construct_UFunction_UQuestBase_GetQuestType, "GetQuestType" }, // 4021905245
		{ &Z_Construct_UFunction_UQuestBase_GetTask, "GetTask" }, // 2948826923
		{ &Z_Construct_UFunction_UQuestBase_GetTaskByFName, "GetTaskByFName" }, // 2370169805
		{ &Z_Construct_UFunction_UQuestBase_IsTaskAchieved, "IsTaskAchieved" }, // 3627947712
		{ &Z_Construct_UFunction_UQuestBase_LoadSaveData, "LoadSaveData" }, // 2427996644
		{ &Z_Construct_UFunction_UQuestBase_ResetQuest, "ResetQuest" }, // 3750958699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBase, QuestData), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestData_MetaData), NewProp_QuestData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks_ValueProp = { "AllTasks", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTaskBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks_Key_KeyProp = { "AllTasks_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks = { "AllTasks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBase, AllTasks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTasks_MetaData), NewProp_AllTasks_MetaData) };
void Z_Construct_UClass_UQuestBase_Statics::NewProp_bIsQuestCompleted_SetBit(void* Obj)
{
	((UQuestBase*)Obj)->bIsQuestCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_bIsQuestCompleted = { "bIsQuestCompleted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestBase), &Z_Construct_UClass_UQuestBase_Statics::NewProp_bIsQuestCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsQuestCompleted_MetaData), NewProp_bIsQuestCompleted_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_OnQuestCompleted = { "OnQuestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBase, OnQuestCompleted), Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestCompleted_MetaData), NewProp_OnQuestCompleted_MetaData) }; // 3500005100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_QuestData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_AllTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_bIsQuestCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_OnQuestCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBase_Statics::ClassParams = {
	&UQuestBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestBase()
{
	if (!Z_Registration_Info_UClass_UQuestBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBase.OuterSingleton, Z_Construct_UClass_UQuestBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestBase.OuterSingleton;
}
UQuestBase::UQuestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBase);
UQuestBase::~UQuestBase() {}
// ********** End Class UQuestBase *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestBase, UQuestBase::StaticClass, TEXT("UQuestBase"), &Z_Registration_Info_UClass_UQuestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBase), 263917697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h__Script_QuestSystem_1445111332(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestBase_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
