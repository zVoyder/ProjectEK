// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/RPGFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGFactory();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGFactory_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationSet_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGFactory Function CreateBridgeStatOperation ***************************
struct Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics
{
	struct RPGFactory_eventCreateBridgeStatOperation_Parms
	{
		UStatsBridgeBase* Bridge;
		UCoreStatData* InCoreStatData;
		USpecialStatData* SpecialStat;
		const TSubclassOf<UBridgeStatOperation> OperationClass;
		UBridgeStatOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bridge_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bridge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCoreStatData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialStat;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OperationClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_Bridge = { "Bridge", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateBridgeStatOperation_Parms, Bridge), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bridge_MetaData), NewProp_Bridge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_InCoreStatData = { "InCoreStatData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateBridgeStatOperation_Parms, InCoreStatData), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_SpecialStat = { "SpecialStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateBridgeStatOperation_Parms, SpecialStat), Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateBridgeStatOperation_Parms, OperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBridgeStatOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationClass_MetaData), NewProp_OperationClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateBridgeStatOperation_Parms, ReturnValue), Z_Construct_UClass_UBridgeStatOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_Bridge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_InCoreStatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_SpecialStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_OperationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateBridgeStatOperation", Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::RPGFactory_eventCreateBridgeStatOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::RPGFactory_eventCreateBridgeStatOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateBridgeStatOperation)
{
	P_GET_OBJECT(UStatsBridgeBase,Z_Param_Bridge);
	P_GET_OBJECT(UCoreStatData,Z_Param_InCoreStatData);
	P_GET_OBJECT(USpecialStatData,Z_Param_SpecialStat);
	P_GET_OBJECT(UClass,Z_Param_OperationClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBridgeStatOperation**)Z_Param__Result=URPGFactory::CreateBridgeStatOperation(Z_Param_Bridge,Z_Param_InCoreStatData,Z_Param_SpecialStat,Z_Param_OperationClass);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateBridgeStatOperation *****************************

// ********** Begin Class URPGFactory Function CreateItemStatOperation *****************************
struct Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics
{
	struct RPGFactory_eventCreateItemStatOperation_Parms
	{
		UStatOperation* Operation;
		URPGItem* Item;
		UStatOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateItemStatOperation_Parms, Operation), Z_Construct_UClass_UStatOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateItemStatOperation_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateItemStatOperation_Parms, ReturnValue), Z_Construct_UClass_UStatOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateItemStatOperation", Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::RPGFactory_eventCreateItemStatOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::RPGFactory_eventCreateItemStatOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateItemStatOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateItemStatOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateItemStatOperation)
{
	P_GET_OBJECT(UStatOperation,Z_Param_Operation);
	P_GET_OBJECT(URPGItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatOperation**)Z_Param__Result=URPGFactory::CreateItemStatOperation(Z_Param_Operation,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateItemStatOperation *******************************

// ********** Begin Class URPGFactory Function CreateRPGGearItem ***********************************
struct Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics
{
	struct RPGFactory_eventCreateRPGGearItem_Parms
	{
		UObject* WorldContextObject;
		URPGGearItemData* Data;
		const URPGGearItemGenerationData* GenerationData;
		bool bBuildItem;
		URPGGearItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "CPP_Default_bBuildItem", "true" },
		{ "HidePin", "bBuildItem" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static void NewProp_bBuildItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItem_Parms, Data), Z_Construct_UClass_URPGGearItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItem_Parms, GenerationData), Z_Construct_UClass_URPGGearItemGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
void Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_bBuildItem_SetBit(void* Obj)
{
	((RPGFactory_eventCreateRPGGearItem_Parms*)Obj)->bBuildItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_bBuildItem = { "bBuildItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGFactory_eventCreateRPGGearItem_Parms), &Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_bBuildItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildItem_MetaData), NewProp_bBuildItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItem_Parms, ReturnValue), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_bBuildItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateRPGGearItem", Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::RPGFactory_eventCreateRPGGearItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::RPGFactory_eventCreateRPGGearItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateRPGGearItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateRPGGearItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateRPGGearItem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URPGGearItemData,Z_Param_Data);
	P_GET_OBJECT(URPGGearItemGenerationData,Z_Param_GenerationData);
	P_GET_UBOOL(Z_Param_bBuildItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItem**)Z_Param__Result=URPGFactory::CreateRPGGearItem(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_GenerationData,Z_Param_bBuildItem);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateRPGGearItem *************************************

// ********** Begin Class URPGFactory Function CreateRPGGearItemWithFixedStats *********************
struct Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics
{
	struct RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms
	{
		UObject* WorldContextObject;
		URPGGearItemData* Data;
		const URPGGearItemFixedStatsGenerationData* GenerationData;
		URPGGearItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "HidePin", "bBuildItem" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms, Data), Z_Construct_UClass_URPGGearItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms, GenerationData), Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms, ReturnValue), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateRPGGearItemWithFixedStats", Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::RPGFactory_eventCreateRPGGearItemWithFixedStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateRPGGearItemWithFixedStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URPGGearItemData,Z_Param_Data);
	P_GET_OBJECT(URPGGearItemFixedStatsGenerationData,Z_Param_GenerationData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItem**)Z_Param__Result=URPGFactory::CreateRPGGearItemWithFixedStats(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_GenerationData);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateRPGGearItemWithFixedStats ***********************

// ********** Begin Class URPGFactory Function CreateRPGGearItemWithGenerationSet ******************
struct Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics
{
	struct RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms
	{
		UObject* WorldContextObject;
		URPGGearItemData* Data;
		const URPGGearItemGenerationSet* GenerationSet;
		URPGGearItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms, Data), Z_Construct_UClass_URPGGearItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_GenerationSet = { "GenerationSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms, GenerationSet), Z_Construct_UClass_URPGGearItemGenerationSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationSet_MetaData), NewProp_GenerationSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms, ReturnValue), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_GenerationSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateRPGGearItemWithGenerationSet", Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::RPGFactory_eventCreateRPGGearItemWithGenerationSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateRPGGearItemWithGenerationSet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URPGGearItemData,Z_Param_Data);
	P_GET_OBJECT(URPGGearItemGenerationSet,Z_Param_GenerationSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItem**)Z_Param__Result=URPGFactory::CreateRPGGearItemWithGenerationSet(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_GenerationSet);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateRPGGearItemWithGenerationSet ********************

// ********** Begin Class URPGFactory Function CreateRPGGenericItem ********************************
struct Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics
{
	struct RPGFactory_eventCreateRPGGenericItem_Parms
	{
		UObject* WorldContextObject;
		URPGItemData* Data;
		const URPGItemBaseGenerationData* GenerationData;
		bool bBuildItem;
		URPGItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "CPP_Default_bBuildItem", "true" },
		{ "HidePin", "bBuildItem" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static void NewProp_bBuildItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItem_Parms, Data), Z_Construct_UClass_URPGItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItem_Parms, GenerationData), Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
void Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_bBuildItem_SetBit(void* Obj)
{
	((RPGFactory_eventCreateRPGGenericItem_Parms*)Obj)->bBuildItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_bBuildItem = { "bBuildItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGFactory_eventCreateRPGGenericItem_Parms), &Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_bBuildItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildItem_MetaData), NewProp_bBuildItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItem_Parms, ReturnValue), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_bBuildItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateRPGGenericItem", Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::RPGFactory_eventCreateRPGGenericItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::RPGFactory_eventCreateRPGGenericItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateRPGGenericItem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URPGItemData,Z_Param_Data);
	P_GET_OBJECT(URPGItemBaseGenerationData,Z_Param_GenerationData);
	P_GET_UBOOL(Z_Param_bBuildItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGItem**)Z_Param__Result=URPGFactory::CreateRPGGenericItem(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_GenerationData,Z_Param_bBuildItem);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateRPGGenericItem **********************************

// ********** Begin Class URPGFactory Function CreateRPGGenericItems *******************************
struct Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics
{
	struct RPGFactory_eventCreateRPGGenericItems_Parms
	{
		UObject* WorldContextObject;
		URPGItemData* Data;
		const URPGItemBaseGenerationData* GenerationData;
		int32 OutOverflow;
		bool bBuildItem;
		int32 Quantity;
		URPGItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Factories" },
		{ "CPP_Default_bBuildItem", "true" },
		{ "CPP_Default_Quantity", "1" },
		{ "HidePin", "bBuildItem" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildItem_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutOverflow;
	static void NewProp_bBuildItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, Data), Z_Construct_UClass_URPGItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, GenerationData), Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_OutOverflow = { "OutOverflow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, OutOverflow), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_bBuildItem_SetBit(void* Obj)
{
	((RPGFactory_eventCreateRPGGenericItems_Parms*)Obj)->bBuildItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_bBuildItem = { "bBuildItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGFactory_eventCreateRPGGenericItems_Parms), &Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_bBuildItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildItem_MetaData), NewProp_bBuildItem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGFactory_eventCreateRPGGenericItems_Parms, ReturnValue), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_OutOverflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_bBuildItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGFactory, nullptr, "CreateRPGGenericItems", Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::RPGFactory_eventCreateRPGGenericItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::RPGFactory_eventCreateRPGGenericItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGFactory::execCreateRPGGenericItems)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URPGItemData,Z_Param_Data);
	P_GET_OBJECT(URPGItemBaseGenerationData,Z_Param_GenerationData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutOverflow);
	P_GET_UBOOL(Z_Param_bBuildItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGItem**)Z_Param__Result=URPGFactory::CreateRPGGenericItems(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_GenerationData,Z_Param_Out_OutOverflow,Z_Param_bBuildItem,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class URPGFactory Function CreateRPGGenericItems *********************************

// ********** Begin Class URPGFactory **************************************************************
void URPGFactory::StaticRegisterNativesURPGFactory()
{
	UClass* Class = URPGFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBridgeStatOperation", &URPGFactory::execCreateBridgeStatOperation },
		{ "CreateItemStatOperation", &URPGFactory::execCreateItemStatOperation },
		{ "CreateRPGGearItem", &URPGFactory::execCreateRPGGearItem },
		{ "CreateRPGGearItemWithFixedStats", &URPGFactory::execCreateRPGGearItemWithFixedStats },
		{ "CreateRPGGearItemWithGenerationSet", &URPGFactory::execCreateRPGGearItemWithGenerationSet },
		{ "CreateRPGGenericItem", &URPGFactory::execCreateRPGGenericItem },
		{ "CreateRPGGenericItems", &URPGFactory::execCreateRPGGenericItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGFactory;
UClass* URPGFactory::GetPrivateStaticClass()
{
	using TClass = URPGFactory;
	if (!Z_Registration_Info_UClass_URPGFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGFactory"),
			Z_Registration_Info_UClass_URPGFactory.InnerSingleton,
			StaticRegisterNativesURPGFactory,
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
	return Z_Registration_Info_UClass_URPGFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGFactory_NoRegister()
{
	return URPGFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/RPGFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/RPGFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGFactory_CreateBridgeStatOperation, "CreateBridgeStatOperation" }, // 2926922965
		{ &Z_Construct_UFunction_URPGFactory_CreateItemStatOperation, "CreateItemStatOperation" }, // 3603990281
		{ &Z_Construct_UFunction_URPGFactory_CreateRPGGearItem, "CreateRPGGearItem" }, // 3694969811
		{ &Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithFixedStats, "CreateRPGGearItemWithFixedStats" }, // 142657586
		{ &Z_Construct_UFunction_URPGFactory_CreateRPGGearItemWithGenerationSet, "CreateRPGGearItemWithGenerationSet" }, // 518405902
		{ &Z_Construct_UFunction_URPGFactory_CreateRPGGenericItem, "CreateRPGGenericItem" }, // 3865610826
		{ &Z_Construct_UFunction_URPGFactory_CreateRPGGenericItems, "CreateRPGGenericItems" }, // 3239897828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGFactory_Statics::ClassParams = {
	&URPGFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGFactory()
{
	if (!Z_Registration_Info_UClass_URPGFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGFactory.OuterSingleton, Z_Construct_UClass_URPGFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGFactory.OuterSingleton;
}
URPGFactory::URPGFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGFactory);
URPGFactory::~URPGFactory() {}
// ********** End Class URPGFactory ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGFactory, URPGFactory::StaticClass, TEXT("URPGFactory"), &Z_Registration_Info_UClass_URPGFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGFactory), 214586107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h__Script_RPGSystem_2860439853(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
