// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/RPGInventoryCompareHandlerSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventoryCompareHandlerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_NoRegister();
RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestCompare *****************************************************
struct Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics
{
	struct _Script_RPGSystem_eventOnRequestCompare_Parms
	{
		URPGGearItem* ComparingItem;
		bool bCompare;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComparingItem;
	static void NewProp_bCompare_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompare;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_ComparingItem = { "ComparingItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RPGSystem_eventOnRequestCompare_Parms, ComparingItem), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_bCompare_SetBit(void* Obj)
{
	((_Script_RPGSystem_eventOnRequestCompare_Parms*)Obj)->bCompare = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_bCompare = { "bCompare", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RPGSystem_eventOnRequestCompare_Parms), &Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_bCompare_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_ComparingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::NewProp_bCompare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RPGSystem, nullptr, "OnRequestCompare__DelegateSignature", Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::_Script_RPGSystem_eventOnRequestCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::_Script_RPGSystem_eventOnRequestCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestCompare_DelegateWrapper(const FMulticastScriptDelegate& OnRequestCompare, URPGGearItem* ComparingItem, bool bCompare)
{
	struct _Script_RPGSystem_eventOnRequestCompare_Parms
	{
		URPGGearItem* ComparingItem;
		bool bCompare;
	};
	_Script_RPGSystem_eventOnRequestCompare_Parms Parms;
	Parms.ComparingItem=ComparingItem;
	Parms.bCompare=bCompare ? true : false;
	OnRequestCompare.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestCompare *******************************************************

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function GetComparingItem ***********
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventGetComparingItem_Parms
	{
		URPGGearItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryCompareHandlerSubsystem_eventGetComparingItem_Parms, ReturnValue), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "GetComparingItem", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::RPGInventoryCompareHandlerSubsystem_eventGetComparingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::RPGInventoryCompareHandlerSubsystem_eventGetComparingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execGetComparingItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItem**)Z_Param__Result=P_THIS->GetComparingItem();
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function GetComparingItem *************

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function GetTargetComparingEquipment 
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipment_Parms
	{
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "GetTargetComparingEquipment", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execGetTargetComparingEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=P_THIS->GetTargetComparingEquipment();
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function GetTargetComparingEquipment **

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function GetTargetComparingEquipSlotKey 
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipSlotKey_Parms
	{
		UEquipSlotKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipSlotKey_Parms, ReturnValue), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "GetTargetComparingEquipSlotKey", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipSlotKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::RPGInventoryCompareHandlerSubsystem_eventGetTargetComparingEquipSlotKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execGetTargetComparingEquipSlotKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipSlotKey**)Z_Param__Result=P_THIS->GetTargetComparingEquipSlotKey();
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function GetTargetComparingEquipSlotKey 

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function IsComparing ****************
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventIsComparing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGInventoryCompareHandlerSubsystem_eventIsComparing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoryCompareHandlerSubsystem_eventIsComparing_Parms), &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "IsComparing", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::RPGInventoryCompareHandlerSubsystem_eventIsComparing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::RPGInventoryCompareHandlerSubsystem_eventIsComparing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execIsComparing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComparing();
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function IsComparing ******************

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function RequestCompare *************
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventRequestCompare_Parms
	{
		bool bCompare;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
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
void Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::NewProp_bCompare_SetBit(void* Obj)
{
	((RPGInventoryCompareHandlerSubsystem_eventRequestCompare_Parms*)Obj)->bCompare = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::NewProp_bCompare = { "bCompare", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoryCompareHandlerSubsystem_eventRequestCompare_Parms), &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::NewProp_bCompare_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompare_MetaData), NewProp_bCompare_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::NewProp_bCompare,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "RequestCompare", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventRequestCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventRequestCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execRequestCompare)
{
	P_GET_UBOOL(Z_Param_bCompare);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCompare(Z_Param_bCompare);
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function RequestCompare ***************

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function SetTargetEquipmentForCompare 
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipmentForCompare_Parms
	{
		UEquipment* InComparingEquipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComparingEquipment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComparingEquipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::NewProp_InComparingEquipment = { "InComparingEquipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipmentForCompare_Parms, InComparingEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComparingEquipment_MetaData), NewProp_InComparingEquipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::NewProp_InComparingEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "SetTargetEquipmentForCompare", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipmentForCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipmentForCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execSetTargetEquipmentForCompare)
{
	P_GET_OBJECT(UEquipment,Z_Param_InComparingEquipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetEquipmentForCompare(Z_Param_InComparingEquipment);
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function SetTargetEquipmentForCompare *

// ********** Begin Class URPGInventoryCompareHandlerSubsystem Function SetTargetEquipSlotKeyForCompare 
struct Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics
{
	struct RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipSlotKeyForCompare_Parms
	{
		UEquipSlotKey* EquipSlotKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Compare" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipSlotKeyForCompare_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::NewProp_EquipSlotKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, nullptr, "SetTargetEquipSlotKeyForCompare", Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipSlotKeyForCompare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::RPGInventoryCompareHandlerSubsystem_eventSetTargetEquipSlotKeyForCompare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryCompareHandlerSubsystem::execSetTargetEquipSlotKeyForCompare)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetEquipSlotKeyForCompare(Z_Param_EquipSlotKey);
	P_NATIVE_END;
}
// ********** End Class URPGInventoryCompareHandlerSubsystem Function SetTargetEquipSlotKeyForCompare 

// ********** Begin Class URPGInventoryCompareHandlerSubsystem *************************************
void URPGInventoryCompareHandlerSubsystem::StaticRegisterNativesURPGInventoryCompareHandlerSubsystem()
{
	UClass* Class = URPGInventoryCompareHandlerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetComparingItem", &URPGInventoryCompareHandlerSubsystem::execGetComparingItem },
		{ "GetTargetComparingEquipment", &URPGInventoryCompareHandlerSubsystem::execGetTargetComparingEquipment },
		{ "GetTargetComparingEquipSlotKey", &URPGInventoryCompareHandlerSubsystem::execGetTargetComparingEquipSlotKey },
		{ "IsComparing", &URPGInventoryCompareHandlerSubsystem::execIsComparing },
		{ "RequestCompare", &URPGInventoryCompareHandlerSubsystem::execRequestCompare },
		{ "SetTargetEquipmentForCompare", &URPGInventoryCompareHandlerSubsystem::execSetTargetEquipmentForCompare },
		{ "SetTargetEquipSlotKeyForCompare", &URPGInventoryCompareHandlerSubsystem::execSetTargetEquipSlotKeyForCompare },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem;
UClass* URPGInventoryCompareHandlerSubsystem::GetPrivateStaticClass()
{
	using TClass = URPGInventoryCompareHandlerSubsystem;
	if (!Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGInventoryCompareHandlerSubsystem"),
			Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.InnerSingleton,
			StaticRegisterNativesURPGInventoryCompareHandlerSubsystem,
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
	return Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_NoRegister()
{
	return URPGInventoryCompareHandlerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestCompare_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComparingEquipment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComparingItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEquipSlotKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoryCompareHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestCompare;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComparingEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComparingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEquipSlotKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetComparingItem, "GetComparingItem" }, // 1243049828
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipment, "GetTargetComparingEquipment" }, // 3304784772
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_GetTargetComparingEquipSlotKey, "GetTargetComparingEquipSlotKey" }, // 966158479
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_IsComparing, "IsComparing" }, // 1591667301
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_RequestCompare, "RequestCompare" }, // 1892729801
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipmentForCompare, "SetTargetEquipmentForCompare" }, // 1157662512
		{ &Z_Construct_UFunction_URPGInventoryCompareHandlerSubsystem_SetTargetEquipSlotKeyForCompare, "SetTargetEquipSlotKeyForCompare" }, // 973981650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventoryCompareHandlerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_OnRequestCompare = { "OnRequestCompare", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoryCompareHandlerSubsystem, OnRequestCompare), Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestCompare_MetaData), NewProp_OnRequestCompare_MetaData) }; // 3839104938
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetComparingEquipment = { "TargetComparingEquipment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoryCompareHandlerSubsystem, TargetComparingEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComparingEquipment_MetaData), NewProp_TargetComparingEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetComparingItem = { "TargetComparingItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoryCompareHandlerSubsystem, TargetComparingItem), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComparingItem_MetaData), NewProp_TargetComparingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetEquipSlotKey = { "TargetEquipSlotKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoryCompareHandlerSubsystem, TargetEquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEquipSlotKey_MetaData), NewProp_TargetEquipSlotKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_OnRequestCompare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetComparingEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetComparingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::NewProp_TargetEquipSlotKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::ClassParams = {
	&URPGInventoryCompareHandlerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem()
{
	if (!Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.OuterSingleton, Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem.OuterSingleton;
}
URPGInventoryCompareHandlerSubsystem::URPGInventoryCompareHandlerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoryCompareHandlerSubsystem);
URPGInventoryCompareHandlerSubsystem::~URPGInventoryCompareHandlerSubsystem() {}
// ********** End Class URPGInventoryCompareHandlerSubsystem ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem, URPGInventoryCompareHandlerSubsystem::StaticClass, TEXT("URPGInventoryCompareHandlerSubsystem"), &Z_Registration_Info_UClass_URPGInventoryCompareHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventoryCompareHandlerSubsystem), 3233616346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h__Script_RPGSystem_3255211513(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
