// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckpointsManager.h"
#include "Data/SaveData/CheckpointsSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpointsManager() {}

// ********** Begin Cross Module References ********************************************************
CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointsManager();
CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointsManager_NoRegister();
CHECKPOINTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature();
CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointsSaveData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCheckpointReached **************************************************
struct Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CheckpointSystem, nullptr, "OnCheckpointReached__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCheckpointReached_DelegateWrapper(const FMulticastScriptDelegate& OnCheckpointReached)
{
	OnCheckpointReached.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCheckpointReached ****************************************************

// ********** Begin Class UCheckpointsManager Function CreateSaveData ******************************
struct Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics
{
	struct CheckpointsManager_eventCreateSaveData_Parms
	{
		FCheckpointsSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventCreateSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCheckpointsSaveData, METADATA_PARAMS(0, nullptr) }; // 2865782105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCheckpointsManager, nullptr, "CreateSaveData", Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::CheckpointsManager_eventCreateSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::CheckpointsManager_eventCreateSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckpointsManager_CreateSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckpointsManager_CreateSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckpointsManager::execCreateSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCheckpointsSaveData*)Z_Param__Result=P_THIS->CreateSaveData();
	P_NATIVE_END;
}
// ********** End Class UCheckpointsManager Function CreateSaveData ********************************

// ********** Begin Class UCheckpointsManager Function LoadSaveData ********************************
struct Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics
{
	struct CheckpointsManager_eventLoadSaveData_Parms
	{
		FCheckpointsSaveData SaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventLoadSaveData_Parms, SaveData), Z_Construct_UScriptStruct_FCheckpointsSaveData, METADATA_PARAMS(0, nullptr) }; // 2865782105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::NewProp_SaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCheckpointsManager, nullptr, "LoadSaveData", Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::CheckpointsManager_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::CheckpointsManager_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckpointsManager_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckpointsManager_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckpointsManager::execLoadSaveData)
{
	P_GET_STRUCT(FCheckpointsSaveData,Z_Param_SaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSaveData(Z_Param_SaveData);
	P_NATIVE_END;
}
// ********** End Class UCheckpointsManager Function LoadSaveData **********************************

// ********** Begin Class UCheckpointsManager Function TryGetCheckpoint ****************************
struct Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics
{
	struct CheckpointsManager_eventTryGetCheckpoint_Parms
	{
		FName CheckpointKey;
		FTransform OutCheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckpointKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_CheckpointKey = { "CheckpointKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventTryGetCheckpoint_Parms, CheckpointKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointKey_MetaData), NewProp_CheckpointKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_OutCheckpointTransform = { "OutCheckpointTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventTryGetCheckpoint_Parms, OutCheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CheckpointsManager_eventTryGetCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckpointsManager_eventTryGetCheckpoint_Parms), &Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_CheckpointKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_OutCheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCheckpointsManager, nullptr, "TryGetCheckpoint", Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::CheckpointsManager_eventTryGetCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::CheckpointsManager_eventTryGetCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckpointsManager::execTryGetCheckpoint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CheckpointKey);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetCheckpoint(Z_Param_CheckpointKey,Z_Param_Out_OutCheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCheckpointsManager Function TryGetCheckpoint ******************************

// ********** Begin Class UCheckpointsManager Function TryGetLastCheckpoint ************************
struct Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics
{
	struct CheckpointsManager_eventTryGetLastCheckpoint_Parms
	{
		FTransform OutCheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_OutCheckpointTransform = { "OutCheckpointTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventTryGetLastCheckpoint_Parms, OutCheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CheckpointsManager_eventTryGetLastCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckpointsManager_eventTryGetLastCheckpoint_Parms), &Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_OutCheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCheckpointsManager, nullptr, "TryGetLastCheckpoint", Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::CheckpointsManager_eventTryGetLastCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::CheckpointsManager_eventTryGetLastCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckpointsManager::execTryGetLastCheckpoint)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetLastCheckpoint(Z_Param_Out_OutCheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCheckpointsManager Function TryGetLastCheckpoint **************************

// ********** Begin Class UCheckpointsManager Function TrySetCheckpoint ****************************
struct Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics
{
	struct CheckpointsManager_eventTrySetCheckpoint_Parms
	{
		FName CheckpointKey;
		FTransform CheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckpointKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_CheckpointKey = { "CheckpointKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventTrySetCheckpoint_Parms, CheckpointKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointKey_MetaData), NewProp_CheckpointKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_CheckpointTransform = { "CheckpointTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckpointsManager_eventTrySetCheckpoint_Parms, CheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTransform_MetaData), NewProp_CheckpointTransform_MetaData) };
void Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CheckpointsManager_eventTrySetCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CheckpointsManager_eventTrySetCheckpoint_Parms), &Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_CheckpointKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_CheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCheckpointsManager, nullptr, "TrySetCheckpoint", Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::CheckpointsManager_eventTrySetCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::CheckpointsManager_eventTrySetCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckpointsManager::execTrySetCheckpoint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CheckpointKey);
	P_GET_STRUCT(FTransform,Z_Param_CheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySetCheckpoint(Z_Param_CheckpointKey,Z_Param_CheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCheckpointsManager Function TrySetCheckpoint ******************************

// ********** Begin Class UCheckpointsManager ******************************************************
void UCheckpointsManager::StaticRegisterNativesUCheckpointsManager()
{
	UClass* Class = UCheckpointsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSaveData", &UCheckpointsManager::execCreateSaveData },
		{ "LoadSaveData", &UCheckpointsManager::execLoadSaveData },
		{ "TryGetCheckpoint", &UCheckpointsManager::execTryGetCheckpoint },
		{ "TryGetLastCheckpoint", &UCheckpointsManager::execTryGetLastCheckpoint },
		{ "TrySetCheckpoint", &UCheckpointsManager::execTrySetCheckpoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCheckpointsManager;
UClass* UCheckpointsManager::GetPrivateStaticClass()
{
	using TClass = UCheckpointsManager;
	if (!Z_Registration_Info_UClass_UCheckpointsManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CheckpointsManager"),
			Z_Registration_Info_UClass_UCheckpointsManager.InnerSingleton,
			StaticRegisterNativesUCheckpointsManager,
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
	return Z_Registration_Info_UClass_UCheckpointsManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCheckpointsManager_NoRegister()
{
	return UCheckpointsManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCheckpointsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CheckpointsManager.h" },
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCheckpointSet_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CheckpointsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckpointSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckpointsManager_CreateSaveData, "CreateSaveData" }, // 2037665748
		{ &Z_Construct_UFunction_UCheckpointsManager_LoadSaveData, "LoadSaveData" }, // 3826991932
		{ &Z_Construct_UFunction_UCheckpointsManager_TryGetCheckpoint, "TryGetCheckpoint" }, // 3532297215
		{ &Z_Construct_UFunction_UCheckpointsManager_TryGetLastCheckpoint, "TryGetLastCheckpoint" }, // 1257136045
		{ &Z_Construct_UFunction_UCheckpointsManager_TrySetCheckpoint, "TrySetCheckpoint" }, // 527341653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckpointsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckpointsManager_Statics::NewProp_OnCheckpointSet = { "OnCheckpointSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckpointsManager, OnCheckpointSet), Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCheckpointSet_MetaData), NewProp_OnCheckpointSet_MetaData) }; // 3169575172
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckpointsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckpointsManager_Statics::NewProp_OnCheckpointSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheckpointsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckpointsManager_Statics::ClassParams = {
	&UCheckpointsManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCheckpointsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointsManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckpointsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckpointsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckpointsManager()
{
	if (!Z_Registration_Info_UClass_UCheckpointsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckpointsManager.OuterSingleton, Z_Construct_UClass_UCheckpointsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckpointsManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckpointsManager);
UCheckpointsManager::~UCheckpointsManager() {}
// ********** End Class UCheckpointsManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h__Script_CheckpointSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckpointsManager, UCheckpointsManager::StaticClass, TEXT("UCheckpointsManager"), &Z_Registration_Info_UClass_UCheckpointsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckpointsManager), 1108844684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h__Script_CheckpointSystem_3376625259(TEXT("/Script/CheckpointSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h__Script_CheckpointSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h__Script_CheckpointSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
