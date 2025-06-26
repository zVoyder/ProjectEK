// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/StatsBridgeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatsBridgeBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister();
RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature();
RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveable_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCalculatedCoreStatsValues ******************************************
struct Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics
{
	struct _Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms
	{
		UStatsBridgeBase* StatsBridge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsBridge_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsBridge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::NewProp_StatsBridge = { "StatsBridge", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms, StatsBridge), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsBridge_MetaData), NewProp_StatsBridge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::NewProp_StatsBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RPGSystem, nullptr, "OnCalculatedCoreStatsValues__DelegateSignature", Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::_Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::_Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCalculatedCoreStatsValues_DelegateWrapper(const FMulticastScriptDelegate& OnCalculatedCoreStatsValues, UStatsBridgeBase* StatsBridge)
{
	struct _Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms
	{
		UStatsBridgeBase* StatsBridge;
	};
	_Script_RPGSystem_eventOnCalculatedCoreStatsValues_Parms Parms;
	Parms.StatsBridge=StatsBridge;
	OnCalculatedCoreStatsValues.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCalculatedCoreStatsValues ********************************************

// ********** Begin Delegate FOnCalculatedFullStatsValues ******************************************
struct Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics
{
	struct _Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms
	{
		UStatsBridgeBase* StatsBridge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsBridge_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsBridge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::NewProp_StatsBridge = { "StatsBridge", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms, StatsBridge), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsBridge_MetaData), NewProp_StatsBridge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::NewProp_StatsBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RPGSystem, nullptr, "OnCalculatedFullStatsValues__DelegateSignature", Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::_Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::_Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCalculatedFullStatsValues_DelegateWrapper(const FMulticastScriptDelegate& OnCalculatedFullStatsValues, UStatsBridgeBase* StatsBridge)
{
	struct _Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms
	{
		UStatsBridgeBase* StatsBridge;
	};
	_Script_RPGSystem_eventOnCalculatedFullStatsValues_Parms Parms;
	Parms.StatsBridge=StatsBridge;
	OnCalculatedFullStatsValues.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCalculatedFullStatsValues ********************************************

// ********** Begin Class UStatsBridgeBase Function CalculateAllStatsValues ************************
struct Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "CalculateAllStatsValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execCalculateAllStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateAllStatsValues();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function CalculateAllStatsValues **************************

// ********** Begin Class UStatsBridgeBase Function CalculateCoreStatsValues ***********************
struct Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "CalculateCoreStatsValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execCalculateCoreStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateCoreStatsValues();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function CalculateCoreStatsValues *************************

// ********** Begin Class UStatsBridgeBase Function CalculateCoreStatValueWithSpecialStat **********
struct Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics
{
	struct StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms
	{
		USpecialStatData* InSpecialStat;
		UCoreStatData* CoreStatData;
		const TSubclassOf<UBridgeStatOperation> OperationClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates the value of a core stat based on a special stat and a bridge operation.\n\x09 * @param InSpecialStat - The special stat to use for the calculation.\n\x09 * @param CoreStatData - The core stat data to modify.\n\x09 * @param OperationClass - The class of the bridge operation to use for the calculation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the value of a core stat based on a special stat and a bridge operation.\n@param InSpecialStat - The special stat to use for the calculation.\n@param CoreStatData - The core stat data to modify.\n@param OperationClass - The class of the bridge operation to use for the calculation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpecialStat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreStatData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OperationClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_InSpecialStat = { "InSpecialStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms, InSpecialStat), Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_CoreStatData = { "CoreStatData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms, CoreStatData), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms, OperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBridgeStatOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationClass_MetaData), NewProp_OperationClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_InSpecialStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_CoreStatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::NewProp_OperationClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "CalculateCoreStatValueWithSpecialStat", Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::StatsBridgeBase_eventCalculateCoreStatValueWithSpecialStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execCalculateCoreStatValueWithSpecialStat)
{
	P_GET_OBJECT(USpecialStatData,Z_Param_InSpecialStat);
	P_GET_OBJECT(UCoreStatData,Z_Param_CoreStatData);
	P_GET_OBJECT(UClass,Z_Param_OperationClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateCoreStatValueWithSpecialStat(Z_Param_InSpecialStat,Z_Param_CoreStatData,Z_Param_OperationClass);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function CalculateCoreStatValueWithSpecialStat ************

// ********** Begin Class UStatsBridgeBase Function CalculateFullStatsValues ***********************
struct Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "CalculateFullStatsValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execCalculateFullStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateFullStatsValues();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function CalculateFullStatsValues *************************

// ********** Begin Class UStatsBridgeBase Function CreateSaveData *********************************
struct Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics
{
	struct StatsBridgeBase_eventCreateSaveData_Parms
	{
		USaveData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventCreateSaveData_Parms, ReturnValue), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "CreateSaveData", Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::StatsBridgeBase_eventCreateSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::StatsBridgeBase_eventCreateSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execCreateSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveData**)Z_Param__Result=P_THIS->CreateSaveData();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function CreateSaveData ***********************************

// ********** Begin Class UStatsBridgeBase Function GetCoreStatByCodeName **************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics
{
	struct StatsBridgeBase_eventGetCoreStatByCodeName_Parms
	{
		FString CoreStatCodeName;
		UCoreStatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreStatCodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CoreStatCodeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::NewProp_CoreStatCodeName = { "CoreStatCodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetCoreStatByCodeName_Parms, CoreStatCodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreStatCodeName_MetaData), NewProp_CoreStatCodeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetCoreStatByCodeName_Parms, ReturnValue), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::NewProp_CoreStatCodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetCoreStatByCodeName", Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::StatsBridgeBase_eventGetCoreStatByCodeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::StatsBridgeBase_eventGetCoreStatByCodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetCoreStatByCodeName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CoreStatCodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreStatData**)Z_Param__Result=P_THIS->GetCoreStatByCodeName(Z_Param_CoreStatCodeName);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetCoreStatByCodeName ****************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatsContainer **************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics
{
	struct StatsBridgeBase_eventGetFullStatsContainer_Parms
	{
		UCoreStatsContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatsContainer_Parms, ReturnValue), Z_Construct_UClass_UCoreStatsContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatsContainer", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::StatsBridgeBase_eventGetFullStatsContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::StatsBridgeBase_eventGetFullStatsContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatsContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreStatsContainer**)Z_Param__Result=P_THIS->GetFullStatsContainer();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatsContainer ****************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatsLength *****************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics
{
	struct StatsBridgeBase_eventGetFullStatsLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatsLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatsLength", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::StatsBridgeBase_eventGetFullStatsLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::StatsBridgeBase_eventGetFullStatsLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatsLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFullStatsLength();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatsLength *******************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatsValues *****************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics
{
	struct StatsBridgeBase_eventGetFullStatsValues_Parms
	{
		TMap<UCoreStatData*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatsValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatsValues", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::StatsBridgeBase_eventGetFullStatsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::StatsBridgeBase_eventGetFullStatsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UCoreStatData*,float>*)Z_Param__Result=P_THIS->GetFullStatsValues();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatsValues *******************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatValueAsFloat ************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics
{
	struct StatsBridgeBase_eventGetFullStatValueAsFloat_Parms
	{
		const UStatDataBase* Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsFloat_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatValueAsFloat", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::StatsBridgeBase_eventGetFullStatValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::StatsBridgeBase_eventGetFullStatValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatValueAsFloat)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFullStatValueAsFloat(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatValueAsFloat **************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatValueAsInt **************************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics
{
	struct StatsBridgeBase_eventGetFullStatValueAsInt_Parms
	{
		const UStatDataBase* Stat;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsInt_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatValueAsInt", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::StatsBridgeBase_eventGetFullStatValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::StatsBridgeBase_eventGetFullStatValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatValueAsInt)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFullStatValueAsInt(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatValueAsInt ****************************

// ********** Begin Class UStatsBridgeBase Function GetFullStatValueAsString ***********************
struct Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics
{
	struct StatsBridgeBase_eventGetFullStatValueAsString_Parms
	{
		const UStatDataBase* Stat;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsString_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetFullStatValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetFullStatValueAsString", Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::StatsBridgeBase_eventGetFullStatValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::StatsBridgeBase_eventGetFullStatValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetFullStatValueAsString)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFullStatValueAsString(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetFullStatValueAsString *************************

// ********** Begin Class UStatsBridgeBase Function GetSpecialStatByCodeName ***********************
struct Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics
{
	struct StatsBridgeBase_eventGetSpecialStatByCodeName_Parms
	{
		FString SpecialStatCodeName;
		USpecialStatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialStatCodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecialStatCodeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::NewProp_SpecialStatCodeName = { "SpecialStatCodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetSpecialStatByCodeName_Parms, SpecialStatCodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialStatCodeName_MetaData), NewProp_SpecialStatCodeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventGetSpecialStatByCodeName_Parms, ReturnValue), Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::NewProp_SpecialStatCodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "GetSpecialStatByCodeName", Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::StatsBridgeBase_eventGetSpecialStatByCodeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::StatsBridgeBase_eventGetSpecialStatByCodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execGetSpecialStatByCodeName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SpecialStatCodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpecialStatData**)Z_Param__Result=P_THIS->GetSpecialStatByCodeName(Z_Param_SpecialStatCodeName);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function GetSpecialStatByCodeName *************************

// ********** Begin Class UStatsBridgeBase Function LoadSaveData ***********************************
struct Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics
{
	struct StatsBridgeBase_eventLoadSaveData_Parms
	{
		USaveData* SavedData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_SavedData = { "SavedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventLoadSaveData_Parms, SavedData), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsBridgeBase_eventLoadSaveData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsBridgeBase_eventLoadSaveData_Parms), &Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_SavedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "LoadSaveData", Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::StatsBridgeBase_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::StatsBridgeBase_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execLoadSaveData)
{
	P_GET_OBJECT(USaveData,Z_Param_SavedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSaveData(Z_Param_SavedData);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function LoadSaveData *************************************

// ********** Begin Class UStatsBridgeBase Function ModifyFullStatValue ****************************
struct Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics
{
	struct StatsBridgeBase_eventModifyFullStatValue_Parms
	{
		UStatDataBase* Stat;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventModifyFullStatValue_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventModifyFullStatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "ModifyFullStatValue", Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::StatsBridgeBase_eventModifyFullStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::StatsBridgeBase_eventModifyFullStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execModifyFullStatValue)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyFullStatValue(Z_Param_Stat,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function ModifyFullStatValue ******************************

// ********** Begin Class UStatsBridgeBase Function OnCalculateCoreStatsValues *********************
static FName NAME_UStatsBridgeBase_OnCalculateCoreStatsValues = FName(TEXT("OnCalculateCoreStatsValues"));
void UStatsBridgeBase::OnCalculateCoreStatsValues()
{
	UFunction* Func = FindFunctionChecked(NAME_UStatsBridgeBase_OnCalculateCoreStatsValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnCalculateCoreStatsValues_Implementation();
	}
}
struct Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "OnCalculateCoreStatsValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execOnCalculateCoreStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCalculateCoreStatsValues_Implementation();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function OnCalculateCoreStatsValues ***********************

// ********** Begin Class UStatsBridgeBase Function OnCalculateFullStatsValues *********************
static FName NAME_UStatsBridgeBase_OnCalculateFullStatsValues = FName(TEXT("OnCalculateFullStatsValues"));
void UStatsBridgeBase::OnCalculateFullStatsValues()
{
	UFunction* Func = FindFunctionChecked(NAME_UStatsBridgeBase_OnCalculateFullStatsValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnCalculateFullStatsValues_Implementation();
	}
}
struct Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "OnCalculateFullStatsValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execOnCalculateFullStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCalculateFullStatsValues_Implementation();
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function OnCalculateFullStatsValues ***********************

// ********** Begin Class UStatsBridgeBase Function SetFullStatValue *******************************
struct Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics
{
	struct StatsBridgeBase_eventSetFullStatValue_Parms
	{
		UStatDataBase* Stat;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventSetFullStatValue_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeBase_eventSetFullStatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeBase, nullptr, "SetFullStatValue", Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::StatsBridgeBase_eventSetFullStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::StatsBridgeBase_eventSetFullStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeBase::execSetFullStatValue)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFullStatValue(Z_Param_Stat,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeBase Function SetFullStatValue *********************************

// ********** Begin Class UStatsBridgeBase *********************************************************
void UStatsBridgeBase::StaticRegisterNativesUStatsBridgeBase()
{
	UClass* Class = UStatsBridgeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAllStatsValues", &UStatsBridgeBase::execCalculateAllStatsValues },
		{ "CalculateCoreStatsValues", &UStatsBridgeBase::execCalculateCoreStatsValues },
		{ "CalculateCoreStatValueWithSpecialStat", &UStatsBridgeBase::execCalculateCoreStatValueWithSpecialStat },
		{ "CalculateFullStatsValues", &UStatsBridgeBase::execCalculateFullStatsValues },
		{ "CreateSaveData", &UStatsBridgeBase::execCreateSaveData },
		{ "GetCoreStatByCodeName", &UStatsBridgeBase::execGetCoreStatByCodeName },
		{ "GetFullStatsContainer", &UStatsBridgeBase::execGetFullStatsContainer },
		{ "GetFullStatsLength", &UStatsBridgeBase::execGetFullStatsLength },
		{ "GetFullStatsValues", &UStatsBridgeBase::execGetFullStatsValues },
		{ "GetFullStatValueAsFloat", &UStatsBridgeBase::execGetFullStatValueAsFloat },
		{ "GetFullStatValueAsInt", &UStatsBridgeBase::execGetFullStatValueAsInt },
		{ "GetFullStatValueAsString", &UStatsBridgeBase::execGetFullStatValueAsString },
		{ "GetSpecialStatByCodeName", &UStatsBridgeBase::execGetSpecialStatByCodeName },
		{ "LoadSaveData", &UStatsBridgeBase::execLoadSaveData },
		{ "ModifyFullStatValue", &UStatsBridgeBase::execModifyFullStatValue },
		{ "OnCalculateCoreStatsValues", &UStatsBridgeBase::execOnCalculateCoreStatsValues },
		{ "OnCalculateFullStatsValues", &UStatsBridgeBase::execOnCalculateFullStatsValues },
		{ "SetFullStatValue", &UStatsBridgeBase::execSetFullStatValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatsBridgeBase;
UClass* UStatsBridgeBase::GetPrivateStaticClass()
{
	using TClass = UStatsBridgeBase;
	if (!Z_Registration_Info_UClass_UStatsBridgeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatsBridgeBase"),
			Z_Registration_Info_UClass_UStatsBridgeBase.InnerSingleton,
			StaticRegisterNativesUStatsBridgeBase,
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
	return Z_Registration_Info_UClass_UStatsBridgeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister()
{
	return UStatsBridgeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatsBridgeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatsSystem/StatsBridgeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCalculatedCoreStatsValues_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCalculatedFullStatsValues_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialStats_MetaData[] = {
		{ "Category", "StatsBridgeBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreStats_MetaData[] = {
		{ "Category", "StatsBridgeBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialStatsContainer_MetaData[] = {
		{ "Category", "StatsBridgeBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreStatsContainer_MetaData[] = {
		{ "Category", "StatsBridgeBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullStatsContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatsBridgeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalculatedCoreStatsValues;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalculatedFullStatsValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialStats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SpecialStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreStats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CoreStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialStatsContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreStatsContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullStatsContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsBridgeBase_CalculateAllStatsValues, "CalculateAllStatsValues" }, // 3666000465
		{ &Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatsValues, "CalculateCoreStatsValues" }, // 3292637998
		{ &Z_Construct_UFunction_UStatsBridgeBase_CalculateCoreStatValueWithSpecialStat, "CalculateCoreStatValueWithSpecialStat" }, // 1121081090
		{ &Z_Construct_UFunction_UStatsBridgeBase_CalculateFullStatsValues, "CalculateFullStatsValues" }, // 3969220060
		{ &Z_Construct_UFunction_UStatsBridgeBase_CreateSaveData, "CreateSaveData" }, // 2830733852
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetCoreStatByCodeName, "GetCoreStatByCodeName" }, // 1633829398
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsContainer, "GetFullStatsContainer" }, // 1821885333
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsLength, "GetFullStatsLength" }, // 1961068886
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatsValues, "GetFullStatsValues" }, // 1906061223
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsFloat, "GetFullStatValueAsFloat" }, // 743031246
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsInt, "GetFullStatValueAsInt" }, // 3653206881
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetFullStatValueAsString, "GetFullStatValueAsString" }, // 2798359528
		{ &Z_Construct_UFunction_UStatsBridgeBase_GetSpecialStatByCodeName, "GetSpecialStatByCodeName" }, // 837517680
		{ &Z_Construct_UFunction_UStatsBridgeBase_LoadSaveData, "LoadSaveData" }, // 501477294
		{ &Z_Construct_UFunction_UStatsBridgeBase_ModifyFullStatValue, "ModifyFullStatValue" }, // 1123593994
		{ &Z_Construct_UFunction_UStatsBridgeBase_OnCalculateCoreStatsValues, "OnCalculateCoreStatsValues" }, // 2740419926
		{ &Z_Construct_UFunction_UStatsBridgeBase_OnCalculateFullStatsValues, "OnCalculateFullStatsValues" }, // 1965222275
		{ &Z_Construct_UFunction_UStatsBridgeBase_SetFullStatValue, "SetFullStatValue" }, // 1482071523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsBridgeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_OnCalculatedCoreStatsValues = { "OnCalculatedCoreStatsValues", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, OnCalculatedCoreStatsValues), Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCalculatedCoreStatsValues_MetaData), NewProp_OnCalculatedCoreStatsValues_MetaData) }; // 3142482445
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_OnCalculatedFullStatsValues = { "OnCalculatedFullStatsValues", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, OnCalculatedFullStatsValues), Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCalculatedFullStatsValues_MetaData), NewProp_OnCalculatedFullStatsValues_MetaData) }; // 476149567
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStats_ElementProp = { "SpecialStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStats = { "SpecialStats", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, SpecialStats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialStats_MetaData), NewProp_SpecialStats_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStats_ElementProp = { "CoreStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStats = { "CoreStats", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, CoreStats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreStats_MetaData), NewProp_CoreStats_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStatsContainer = { "SpecialStatsContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, SpecialStatsContainer), Z_Construct_UClass_USpecialStatsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialStatsContainer_MetaData), NewProp_SpecialStatsContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStatsContainer = { "CoreStatsContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, CoreStatsContainer), Z_Construct_UClass_UCoreStatsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreStatsContainer_MetaData), NewProp_CoreStatsContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_FullStatsContainer = { "FullStatsContainer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeBase, FullStatsContainer), Z_Construct_UClass_UCoreStatsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullStatsContainer_MetaData), NewProp_FullStatsContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsBridgeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_OnCalculatedCoreStatsValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_OnCalculatedFullStatsValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_SpecialStatsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_CoreStatsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeBase_Statics::NewProp_FullStatsContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsBridgeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStatsBridgeBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveable_NoRegister, (int32)VTABLE_OFFSET(UStatsBridgeBase, ISaveable), false },  // 2639263768
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsBridgeBase_Statics::ClassParams = {
	&UStatsBridgeBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsBridgeBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsBridgeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsBridgeBase()
{
	if (!Z_Registration_Info_UClass_UStatsBridgeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsBridgeBase.OuterSingleton, Z_Construct_UClass_UStatsBridgeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsBridgeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsBridgeBase);
UStatsBridgeBase::~UStatsBridgeBase() {}
// ********** End Class UStatsBridgeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsBridgeBase, UStatsBridgeBase::StaticClass, TEXT("UStatsBridgeBase"), &Z_Registration_Info_UClass_UStatsBridgeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsBridgeBase), 2276519371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h__Script_RPGSystem_1160780620(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
