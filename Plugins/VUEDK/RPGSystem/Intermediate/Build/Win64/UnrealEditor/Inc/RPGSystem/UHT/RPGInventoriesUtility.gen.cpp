// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Utility/RPGInventoriesUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventoriesUtility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesManager_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesUtility();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInventoriesUtility Function GetComparingItem *************************
struct Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics
{
	struct RPGInventoriesUtility_eventGetComparingItem_Parms
	{
		URPGGearItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventGetComparingItem_Parms, ReturnValue), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "GetComparingItem", Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::RPGInventoriesUtility_eventGetComparingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::RPGInventoriesUtility_eventGetComparingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execGetComparingItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItem**)Z_Param__Result=URPGInventoriesUtility::GetComparingItem();
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function GetComparingItem ***************************

// ********** Begin Class URPGInventoriesUtility Function GetRPGInventoriesManager *****************
struct Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics
{
	struct RPGInventoriesUtility_eventGetRPGInventoriesManager_Parms
	{
		URPGInventoriesManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventGetRPGInventoriesManager_Parms, ReturnValue), Z_Construct_UClass_URPGInventoriesManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "GetRPGInventoriesManager", Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::RPGInventoriesUtility_eventGetRPGInventoriesManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::RPGInventoriesUtility_eventGetRPGInventoriesManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execGetRPGInventoriesManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGInventoriesManager**)Z_Param__Result=URPGInventoriesUtility::GetRPGInventoriesManager();
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function GetRPGInventoriesManager *******************

// ********** Begin Class URPGInventoriesUtility Function GetTargetComparingEquipment **************
struct Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics
{
	struct RPGInventoriesUtility_eventGetTargetComparingEquipment_Parms
	{
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventGetTargetComparingEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "GetTargetComparingEquipment", Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::RPGInventoriesUtility_eventGetTargetComparingEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::RPGInventoriesUtility_eventGetTargetComparingEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execGetTargetComparingEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=URPGInventoriesUtility::GetTargetComparingEquipment();
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function GetTargetComparingEquipment ****************

// ********** Begin Class URPGInventoriesUtility Function GetTargetComparingEquipSlotKey ***********
struct Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics
{
	struct RPGInventoriesUtility_eventGetTargetComparingEquipSlotKey_Parms
	{
		UEquipSlotKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventGetTargetComparingEquipSlotKey_Parms, ReturnValue), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "GetTargetComparingEquipSlotKey", Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::RPGInventoriesUtility_eventGetTargetComparingEquipSlotKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::RPGInventoriesUtility_eventGetTargetComparingEquipSlotKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execGetTargetComparingEquipSlotKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipSlotKey**)Z_Param__Result=URPGInventoriesUtility::GetTargetComparingEquipSlotKey();
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function GetTargetComparingEquipSlotKey *************

// ********** Begin Class URPGInventoriesUtility Function IsComparing ******************************
struct Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics
{
	struct RPGInventoriesUtility_eventIsComparing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGInventoriesUtility_eventIsComparing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoriesUtility_eventIsComparing_Parms), &Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "IsComparing", Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::RPGInventoriesUtility_eventIsComparing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::RPGInventoriesUtility_eventIsComparing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_IsComparing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_IsComparing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execIsComparing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URPGInventoriesUtility::IsComparing();
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function IsComparing ********************************

// ********** Begin Class URPGInventoriesUtility Function RequestCompare ***************************
struct Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics
{
	struct RPGInventoriesUtility_eventRequestCompare_Parms
	{
		bool bCompare;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompare_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bCompare_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompare;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::NewProp_bCompare_SetBit(void* Obj)
{
	((RPGInventoriesUtility_eventRequestCompare_Parms*)Obj)->bCompare = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::NewProp_bCompare = { "bCompare", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoriesUtility_eventRequestCompare_Parms), &Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::NewProp_bCompare_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompare_MetaData), NewProp_bCompare_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::NewProp_bCompare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "RequestCompare", Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::RPGInventoriesUtility_eventRequestCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::RPGInventoriesUtility_eventRequestCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execRequestCompare)
{
	P_GET_UBOOL(Z_Param_bCompare);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGInventoriesUtility::RequestCompare(Z_Param_bCompare);
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function RequestCompare *****************************

// ********** Begin Class URPGInventoriesUtility Function SetTargetEquipmentForCompare *************
struct Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics
{
	struct RPGInventoriesUtility_eventSetTargetEquipmentForCompare_Parms
	{
		UEquipment* InComparingEquipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComparingEquipment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComparingEquipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::NewProp_InComparingEquipment = { "InComparingEquipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventSetTargetEquipmentForCompare_Parms, InComparingEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComparingEquipment_MetaData), NewProp_InComparingEquipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::NewProp_InComparingEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "SetTargetEquipmentForCompare", Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::RPGInventoriesUtility_eventSetTargetEquipmentForCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::RPGInventoriesUtility_eventSetTargetEquipmentForCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execSetTargetEquipmentForCompare)
{
	P_GET_OBJECT(UEquipment,Z_Param_InComparingEquipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGInventoriesUtility::SetTargetEquipmentForCompare(Z_Param_InComparingEquipment);
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function SetTargetEquipmentForCompare ***************

// ********** Begin Class URPGInventoriesUtility Function SetTargetEquipSlotKeyForCompare **********
struct Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics
{
	struct RPGInventoriesUtility_eventSetTargetEquipSlotKeyForCompare_Parms
	{
		UEquipSlotKey* EquipSlotKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGInventoriesUtility" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesUtility_eventSetTargetEquipSlotKeyForCompare_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::NewProp_EquipSlotKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesUtility, nullptr, "SetTargetEquipSlotKeyForCompare", Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::RPGInventoriesUtility_eventSetTargetEquipSlotKeyForCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::RPGInventoriesUtility_eventSetTargetEquipSlotKeyForCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesUtility::execSetTargetEquipSlotKeyForCompare)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGInventoriesUtility::SetTargetEquipSlotKeyForCompare(Z_Param_EquipSlotKey);
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesUtility Function SetTargetEquipSlotKeyForCompare ************

// ********** Begin Class URPGInventoriesUtility ***************************************************
void URPGInventoriesUtility::StaticRegisterNativesURPGInventoriesUtility()
{
	UClass* Class = URPGInventoriesUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetComparingItem", &URPGInventoriesUtility::execGetComparingItem },
		{ "GetRPGInventoriesManager", &URPGInventoriesUtility::execGetRPGInventoriesManager },
		{ "GetTargetComparingEquipment", &URPGInventoriesUtility::execGetTargetComparingEquipment },
		{ "GetTargetComparingEquipSlotKey", &URPGInventoriesUtility::execGetTargetComparingEquipSlotKey },
		{ "IsComparing", &URPGInventoriesUtility::execIsComparing },
		{ "RequestCompare", &URPGInventoriesUtility::execRequestCompare },
		{ "SetTargetEquipmentForCompare", &URPGInventoriesUtility::execSetTargetEquipmentForCompare },
		{ "SetTargetEquipSlotKeyForCompare", &URPGInventoriesUtility::execSetTargetEquipSlotKeyForCompare },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInventoriesUtility;
UClass* URPGInventoriesUtility::GetPrivateStaticClass()
{
	using TClass = URPGInventoriesUtility;
	if (!Z_Registration_Info_UClass_URPGInventoriesUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGInventoriesUtility"),
			Z_Registration_Info_UClass_URPGInventoriesUtility.InnerSingleton,
			StaticRegisterNativesURPGInventoriesUtility,
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
	return Z_Registration_Info_UClass_URPGInventoriesUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInventoriesUtility_NoRegister()
{
	return URPGInventoriesUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInventoriesUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Utility/RPGInventoriesUtility.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Utility/RPGInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInventoriesUtility_GetComparingItem, "GetComparingItem" }, // 4540420
		{ &Z_Construct_UFunction_URPGInventoriesUtility_GetRPGInventoriesManager, "GetRPGInventoriesManager" }, // 2847352405
		{ &Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipment, "GetTargetComparingEquipment" }, // 2757104017
		{ &Z_Construct_UFunction_URPGInventoriesUtility_GetTargetComparingEquipSlotKey, "GetTargetComparingEquipSlotKey" }, // 621856421
		{ &Z_Construct_UFunction_URPGInventoriesUtility_IsComparing, "IsComparing" }, // 3662017950
		{ &Z_Construct_UFunction_URPGInventoriesUtility_RequestCompare, "RequestCompare" }, // 1566894620
		{ &Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipmentForCompare, "SetTargetEquipmentForCompare" }, // 2575599269
		{ &Z_Construct_UFunction_URPGInventoriesUtility_SetTargetEquipSlotKeyForCompare, "SetTargetEquipSlotKeyForCompare" }, // 1689709503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventoriesUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGInventoriesUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoriesUtility_Statics::ClassParams = {
	&URPGInventoriesUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventoriesUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventoriesUtility()
{
	if (!Z_Registration_Info_UClass_URPGInventoriesUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventoriesUtility.OuterSingleton, Z_Construct_UClass_URPGInventoriesUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventoriesUtility.OuterSingleton;
}
URPGInventoriesUtility::URPGInventoriesUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoriesUtility);
URPGInventoriesUtility::~URPGInventoriesUtility() {}
// ********** End Class URPGInventoriesUtility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventoriesUtility, URPGInventoriesUtility::StaticClass, TEXT("URPGInventoriesUtility"), &Z_Registration_Info_UClass_URPGInventoriesUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventoriesUtility), 3241602520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h__Script_RPGSystem_2342747314(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
