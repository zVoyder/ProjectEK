// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Tasks/TaskBase.h"
#include "Data/Structs/TaskSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTaskSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTaskAchieved *******************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnTaskAchieved__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTaskAchieved_DelegateWrapper(const FMulticastScriptDelegate& OnTaskAchieved)
{
	OnTaskAchieved.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTaskAchieved *********************************************************

// ********** Begin Class UTaskBase Function AchieveTask *******************************************
struct Z_Construct_UFunction_UTaskBase_AchieveTask_Statics
{
	struct TaskBase_eventAchieveTask_Parms
	{
		bool bFullyAchieve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bFullyAchieve", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFullyAchieve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::NewProp_bFullyAchieve_SetBit(void* Obj)
{
	((TaskBase_eventAchieveTask_Parms*)Obj)->bFullyAchieve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::NewProp_bFullyAchieve = { "bFullyAchieve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskBase_eventAchieveTask_Parms), &Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::NewProp_bFullyAchieve_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::NewProp_bFullyAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskBase, nullptr, "AchieveTask", Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::TaskBase_eventAchieveTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::TaskBase_eventAchieveTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskBase_AchieveTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskBase_AchieveTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskBase::execAchieveTask)
{
	P_GET_UBOOL(Z_Param_bFullyAchieve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveTask(Z_Param_bFullyAchieve);
	P_NATIVE_END;
}
// ********** End Class UTaskBase Function AchieveTask *********************************************

// ********** Begin Class UTaskBase Function CreateTaskSaveData ************************************
struct Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics
{
	struct TaskBase_eventCreateTaskSaveData_Parms
	{
		FTaskSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskBase_eventCreateTaskSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaskSaveData, METADATA_PARAMS(0, nullptr) }; // 1939530510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskBase, nullptr, "CreateTaskSaveData", Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::TaskBase_eventCreateTaskSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::TaskBase_eventCreateTaskSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskBase_CreateTaskSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskBase_CreateTaskSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskBase::execCreateTaskSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTaskSaveData*)Z_Param__Result=P_THIS->CreateTaskSaveData();
	P_NATIVE_END;
}
// ********** End Class UTaskBase Function CreateTaskSaveData **************************************

// ********** Begin Class UTaskBase Function LoadSaveData ******************************************
struct Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics
{
	struct TaskBase_eventLoadSaveData_Parms
	{
		FTaskSaveData TaskSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::NewProp_TaskSaveData = { "TaskSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskBase_eventLoadSaveData_Parms, TaskSaveData), Z_Construct_UScriptStruct_FTaskSaveData, METADATA_PARAMS(0, nullptr) }; // 1939530510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::NewProp_TaskSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskBase, nullptr, "LoadSaveData", Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::TaskBase_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::TaskBase_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskBase_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskBase_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskBase::execLoadSaveData)
{
	P_GET_STRUCT(FTaskSaveData,Z_Param_TaskSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSaveData(Z_Param_TaskSaveData);
	P_NATIVE_END;
}
// ********** End Class UTaskBase Function LoadSaveData ********************************************

// ********** Begin Class UTaskBase Function ResetTask *********************************************
struct Z_Construct_UFunction_UTaskBase_ResetTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskBase_ResetTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskBase, nullptr, "ResetTask", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskBase_ResetTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskBase_ResetTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTaskBase_ResetTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskBase_ResetTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskBase::execResetTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTask();
	P_NATIVE_END;
}
// ********** End Class UTaskBase Function ResetTask ***********************************************

// ********** Begin Class UTaskBase ****************************************************************
void UTaskBase::StaticRegisterNativesUTaskBase()
{
	UClass* Class = UTaskBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AchieveTask", &UTaskBase::execAchieveTask },
		{ "CreateTaskSaveData", &UTaskBase::execCreateTaskSaveData },
		{ "LoadSaveData", &UTaskBase::execLoadSaveData },
		{ "ResetTask", &UTaskBase::execResetTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTaskBase;
UClass* UTaskBase::GetPrivateStaticClass()
{
	using TClass = UTaskBase;
	if (!Z_Registration_Info_UClass_UTaskBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TaskBase"),
			Z_Registration_Info_UClass_UTaskBase.InnerSingleton,
			StaticRegisterNativesUTaskBase,
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
	return Z_Registration_Info_UClass_UTaskBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UTaskBase_NoRegister()
{
	return UTaskBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTaskBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Tasks/TaskBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskData_MetaData[] = {
		{ "Category", "TaskBase" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedQuest_MetaData[] = {
		{ "Category", "TaskBase" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAchieved_MetaData[] = {
		{ "Category", "TaskBase" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskAchieved_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/TaskBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedQuest;
	static void NewProp_bIsAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAchieved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskAchieved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskBase_AchieveTask, "AchieveTask" }, // 3612138858
		{ &Z_Construct_UFunction_UTaskBase_CreateTaskSaveData, "CreateTaskSaveData" }, // 1008556834
		{ &Z_Construct_UFunction_UTaskBase_LoadSaveData, "LoadSaveData" }, // 244511921
		{ &Z_Construct_UFunction_UTaskBase_ResetTask, "ResetTask" }, // 2897704711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskBase_Statics::NewProp_TaskData = { "TaskData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskBase, TaskData), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskData_MetaData), NewProp_TaskData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskBase_Statics::NewProp_RelatedQuest = { "RelatedQuest", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskBase, RelatedQuest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedQuest_MetaData), NewProp_RelatedQuest_MetaData) };
void Z_Construct_UClass_UTaskBase_Statics::NewProp_bIsAchieved_SetBit(void* Obj)
{
	((UTaskBase*)Obj)->bIsAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTaskBase_Statics::NewProp_bIsAchieved = { "bIsAchieved", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTaskBase), &Z_Construct_UClass_UTaskBase_Statics::NewProp_bIsAchieved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAchieved_MetaData), NewProp_bIsAchieved_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTaskBase_Statics::NewProp_OnTaskAchieved = { "OnTaskAchieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskBase, OnTaskAchieved), Z_Construct_UDelegateFunction_QuestSystem_OnTaskAchieved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskAchieved_MetaData), NewProp_OnTaskAchieved_MetaData) }; // 2832252716
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskBase_Statics::NewProp_TaskData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskBase_Statics::NewProp_RelatedQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskBase_Statics::NewProp_bIsAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskBase_Statics::NewProp_OnTaskAchieved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskBase_Statics::ClassParams = {
	&UTaskBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTaskBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskBase()
{
	if (!Z_Registration_Info_UClass_UTaskBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskBase.OuterSingleton, Z_Construct_UClass_UTaskBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskBase.OuterSingleton;
}
UTaskBase::UTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskBase);
UTaskBase::~UTaskBase() {}
// ********** End Class UTaskBase ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskBase, UTaskBase::StaticClass, TEXT("UTaskBase"), &Z_Registration_Info_UClass_UTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskBase), 392129070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h__Script_QuestSystem_4279748272(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_TaskBase_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
