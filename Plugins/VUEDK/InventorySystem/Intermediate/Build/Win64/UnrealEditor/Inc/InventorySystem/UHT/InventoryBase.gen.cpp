// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/InventoryBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveable_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnyItemAdded *******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemAdded_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemAdded_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemAdded__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemAdded, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemAdded_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemAdded_Parms Parms;
	Parms.Item=Item;
	OnAnyItemAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemAdded *********************************************************

// ********** Begin Delegate FOnAnyItemConsumed ****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemConsumed_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemConsumed_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemConsumed__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemConsumed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemConsumed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemConsumed_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemConsumed, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemConsumed_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemConsumed_Parms Parms;
	Parms.Item=Item;
	OnAnyItemConsumed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemConsumed ******************************************************

// ********** Begin Delegate FOnAnyItemUsed ********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemUsed_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUsed_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemUsed__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUsed, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemUsed_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemUsed_Parms Parms;
	Parms.Item=Item;
	OnAnyItemUsed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemUsed **********************************************************

// ********** Begin Delegate FOnAnyItemRemoved *****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemRemoved_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemRemoved_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemRemoved__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemRemoved, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemRemoved_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemRemoved_Parms Parms;
	Parms.Item=Item;
	OnAnyItemRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemRemoved *******************************************************

// ********** Begin Delegate FOnInventoryCleared ***************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnInventoryCleared__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryCleared_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryCleared)
{
	OnInventoryCleared.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryCleared *****************************************************

// ********** Begin Delegate FOnInventoryModified **************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnInventoryModified__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryModified_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryModified)
{
	OnInventoryModified.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryModified ****************************************************

// ********** Begin Class UInventoryBase Function AddNewItem ***************************************
struct Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics
{
	struct InventoryBase_eventAddNewItem_Parms
	{
		UItemDataBase* ItemData;
		int32 OutOverflow;
		int32 Amount;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutOverflow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventAddNewItem_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_OutOverflow = { "OutOverflow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventAddNewItem_Parms, OutOverflow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventAddNewItem_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventAddNewItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_OutOverflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "AddNewItem", Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::InventoryBase_eventAddNewItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::InventoryBase_eventAddNewItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_AddNewItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_AddNewItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execAddNewItem)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutOverflow);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->AddNewItem(Z_Param_ItemData,Z_Param_Out_OutOverflow,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function AddNewItem *****************************************

// ********** Begin Class UInventoryBase Function CanContainItem ***********************************
struct Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics
{
	struct InventoryBase_eventCanContainItem_Parms
	{
		const UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCanContainItem_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
void Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventCanContainItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventCanContainItem_Parms), &Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "CanContainItem", Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::InventoryBase_eventCanContainItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::InventoryBase_eventCanContainItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_CanContainItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_CanContainItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execCanContainItem)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanContainItem(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function CanContainItem *************************************

// ********** Begin Class UInventoryBase Function CanSupportAdditionalWeight ***********************
struct Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics
{
	struct InventoryBase_eventCanSupportAdditionalWeight_Parms
	{
		float Weight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCanSupportAdditionalWeight_Parms, Weight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventCanSupportAdditionalWeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventCanSupportAdditionalWeight_Parms), &Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "CanSupportAdditionalWeight", Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::InventoryBase_eventCanSupportAdditionalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::InventoryBase_eventCanSupportAdditionalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execCanSupportAdditionalWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSupportAdditionalWeight(Z_Param_Weight);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function CanSupportAdditionalWeight *************************

// ********** Begin Class UInventoryBase Function ClearInventory ***********************************
struct Z_Construct_UFunction_UInventoryBase_ClearInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_ClearInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "ClearInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_ClearInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_ClearInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryBase_ClearInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_ClearInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execClearInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInventory();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function ClearInventory *************************************

// ********** Begin Class UInventoryBase Function ConsumeItem **************************************
struct Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics
{
	struct InventoryBase_eventConsumeItem_Parms
	{
		UItemDataBase* ItemData;
		int32 AmountToConsume;
		bool bForceConsume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AmountToConsume", "1" },
		{ "CPP_Default_bForceConsume", "false" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToConsume;
	static void NewProp_bForceConsume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceConsume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventConsumeItem_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_AmountToConsume = { "AmountToConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventConsumeItem_Parms, AmountToConsume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToConsume_MetaData), NewProp_AmountToConsume_MetaData) };
void Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_bForceConsume_SetBit(void* Obj)
{
	((InventoryBase_eventConsumeItem_Parms*)Obj)->bForceConsume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_bForceConsume = { "bForceConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventConsumeItem_Parms), &Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_bForceConsume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceConsume_MetaData), NewProp_bForceConsume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_AmountToConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::NewProp_bForceConsume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "ConsumeItem", Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::InventoryBase_eventConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::InventoryBase_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execConsumeItem)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToConsume);
	P_GET_UBOOL(Z_Param_bForceConsume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeItem(Z_Param_ItemData,Z_Param_AmountToConsume,Z_Param_bForceConsume);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function ConsumeItem ****************************************

// ********** Begin Class UInventoryBase Function CreateInventorySaveData **************************
struct InventoryBase_eventCreateInventorySaveData_Parms
{
	USaveData* SaveData;
	TArray<UItemBase*> ItemsToSave;
	USaveData* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryBase_eventCreateInventorySaveData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UInventoryBase_CreateInventorySaveData = FName(TEXT("CreateInventorySaveData"));
USaveData* UInventoryBase::CreateInventorySaveData(USaveData* SaveData, TArray<UItemBase*>& ItemsToSave)
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_CreateInventorySaveData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventoryBase_eventCreateInventorySaveData_Parms Parms;
		Parms.SaveData=SaveData;
		Parms.ItemsToSave=ItemsToSave;
	ProcessEvent(Func,&Parms);
		ItemsToSave=Parms.ItemsToSave;
		return Parms.ReturnValue;
	}
	else
	{
		return CreateInventorySaveData_Implementation(SaveData, ItemsToSave);
	}
}
struct Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCreateInventorySaveData_Parms, SaveData), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ItemsToSave_Inner = { "ItemsToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ItemsToSave = { "ItemsToSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCreateInventorySaveData_Parms, ItemsToSave), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCreateInventorySaveData_Parms, ReturnValue), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ItemsToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ItemsToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "CreateInventorySaveData", Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::PropPointers), sizeof(InventoryBase_eventCreateInventorySaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryBase_eventCreateInventorySaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execCreateInventorySaveData)
{
	P_GET_OBJECT(USaveData,Z_Param_SaveData);
	P_GET_TARRAY_REF(UItemBase*,Z_Param_Out_ItemsToSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveData**)Z_Param__Result=P_THIS->CreateInventorySaveData_Implementation(Z_Param_SaveData,Z_Param_Out_ItemsToSave);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function CreateInventorySaveData ****************************

// ********** Begin Class UInventoryBase Function CreateSaveData ***********************************
struct Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics
{
	struct InventoryBase_eventCreateSaveData_Parms
	{
		USaveData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCreateSaveData_Parms, ReturnValue), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "CreateSaveData", Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::InventoryBase_eventCreateSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::InventoryBase_eventCreateSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_CreateSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_CreateSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execCreateSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveData**)Z_Param__Result=P_THIS->CreateSaveData();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function CreateSaveData *************************************

// ********** Begin Class UInventoryBase Function CreateSaveDataObject *****************************
struct InventoryBase_eventCreateSaveDataObject_Parms
{
	USaveData* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryBase_eventCreateSaveDataObject_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UInventoryBase_CreateSaveDataObject = FName(TEXT("CreateSaveDataObject"));
USaveData* UInventoryBase::CreateSaveDataObject()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_CreateSaveDataObject);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventoryBase_eventCreateSaveDataObject_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return CreateSaveDataObject_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventCreateSaveDataObject_Parms, ReturnValue), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "CreateSaveDataObject", Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::PropPointers), sizeof(InventoryBase_eventCreateSaveDataObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryBase_eventCreateSaveDataObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execCreateSaveDataObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveData**)Z_Param__Result=P_THIS->CreateSaveDataObject_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function CreateSaveDataObject *******************************

// ********** Begin Class UInventoryBase Function Find *********************************************
struct Z_Construct_UFunction_UInventoryBase_Find_Statics
{
	struct InventoryBase_eventFind_Parms
	{
		const UItemDataBase* ItemData;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_Find_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventFind_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventFind_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_Find_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_Find_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_Find_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_Find_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_Find_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "Find", Z_Construct_UFunction_UInventoryBase_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_Find_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_Find_Statics::InventoryBase_eventFind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_Find_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_Find_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_Find_Statics::InventoryBase_eventFind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_Find()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_Find_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execFind)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->Find(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function Find ***********************************************

// ********** Begin Class UInventoryBase Function GetCurrentWeight *********************************
struct Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics
{
	struct InventoryBase_eventGetCurrentWeight_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventGetCurrentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "GetCurrentWeight", Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::InventoryBase_eventGetCurrentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::InventoryBase_eventGetCurrentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_GetCurrentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_GetCurrentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execGetCurrentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetCurrentWeight();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function GetCurrentWeight ***********************************

// ********** Begin Class UInventoryBase Function GetEquipment *************************************
struct Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics
{
	struct InventoryBase_eventGetEquipment_Parms
	{
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventGetEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "GetEquipment", Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::InventoryBase_eventGetEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::InventoryBase_eventGetEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_GetEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_GetEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execGetEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=P_THIS->GetEquipment();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function GetEquipment ***************************************

// ********** Begin Class UInventoryBase Function GetItemDataFromRegistry **************************
struct Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics
{
	struct InventoryBase_eventGetItemDataFromRegistry_Parms
	{
		FGuid ItemDataID;
		UItemDataBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::NewProp_ItemDataID = { "ItemDataID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventGetItemDataFromRegistry_Parms, ItemDataID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataID_MetaData), NewProp_ItemDataID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventGetItemDataFromRegistry_Parms, ReturnValue), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::NewProp_ItemDataID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "GetItemDataFromRegistry", Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::InventoryBase_eventGetItemDataFromRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::InventoryBase_eventGetItemDataFromRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execGetItemDataFromRegistry)
{
	P_GET_STRUCT(FGuid,Z_Param_ItemDataID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemDataBase**)Z_Param__Result=P_THIS->GetItemDataFromRegistry(Z_Param_ItemDataID);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function GetItemDataFromRegistry ****************************

// ********** Begin Class UInventoryBase Function GetItems *****************************************
struct Z_Construct_UFunction_UInventoryBase_GetItems_Statics
{
	struct InventoryBase_eventGetItems_Parms
	{
		bool bIncludeEquippedItems;
		TArray<UItemBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bIncludeEquippedItems", "true" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeEquippedItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeEquippedItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeEquippedItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_bIncludeEquippedItems_SetBit(void* Obj)
{
	((InventoryBase_eventGetItems_Parms*)Obj)->bIncludeEquippedItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_bIncludeEquippedItems = { "bIncludeEquippedItems", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventGetItems_Parms), &Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_bIncludeEquippedItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeEquippedItems_MetaData), NewProp_bIncludeEquippedItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_bIncludeEquippedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_GetItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "GetItems", Z_Construct_UFunction_UInventoryBase_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_GetItems_Statics::InventoryBase_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_GetItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_GetItems_Statics::InventoryBase_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execGetItems)
{
	P_GET_UBOOL(Z_Param_bIncludeEquippedItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemBase*>*)Z_Param__Result=P_THIS->GetItems(Z_Param_bIncludeEquippedItems);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function GetItems *******************************************

// ********** Begin Class UInventoryBase Function HasEnoughQuantityToConsume ***********************
struct Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics
{
	struct InventoryBase_eventHasEnoughQuantityToConsume_Parms
	{
		const UItemDataBase* ItemData;
		int32 QuantityToConsume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantityToConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuantityToConsume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventHasEnoughQuantityToConsume_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_QuantityToConsume = { "QuantityToConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventHasEnoughQuantityToConsume_Parms, QuantityToConsume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantityToConsume_MetaData), NewProp_QuantityToConsume_MetaData) };
void Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventHasEnoughQuantityToConsume_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventHasEnoughQuantityToConsume_Parms), &Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_QuantityToConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "HasEnoughQuantityToConsume", Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::InventoryBase_eventHasEnoughQuantityToConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::InventoryBase_eventHasEnoughQuantityToConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execHasEnoughQuantityToConsume)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_QuantityToConsume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughQuantityToConsume(Z_Param_ItemData,Z_Param_QuantityToConsume);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function HasEnoughQuantityToConsume *************************

// ********** Begin Class UInventoryBase Function HasItemOfDataID **********************************
struct Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics
{
	struct InventoryBase_eventHasItemOfDataID_Parms
	{
		const UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventHasItemOfDataID_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
void Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventHasItemOfDataID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventHasItemOfDataID_Parms), &Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "HasItemOfDataID", Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::InventoryBase_eventHasItemOfDataID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::InventoryBase_eventHasItemOfDataID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_HasItemOfDataID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_HasItemOfDataID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execHasItemOfDataID)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItemOfDataID(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function HasItemOfDataID ************************************

// ********** Begin Class UInventoryBase Function HasItemOfTypeID **********************************
struct Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics
{
	struct InventoryBase_eventHasItemOfTypeID_Parms
	{
		const UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventHasItemOfTypeID_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
void Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventHasItemOfTypeID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventHasItemOfTypeID_Parms), &Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "HasItemOfTypeID", Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::InventoryBase_eventHasItemOfTypeID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::InventoryBase_eventHasItemOfTypeID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execHasItemOfTypeID)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItemOfTypeID(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function HasItemOfTypeID ************************************

// ********** Begin Class UInventoryBase Function IsCompletelyFull *********************************
struct Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics
{
	struct InventoryBase_eventIsCompletelyFull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventIsCompletelyFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventIsCompletelyFull_Parms), &Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "IsCompletelyFull", Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::InventoryBase_eventIsCompletelyFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::InventoryBase_eventIsCompletelyFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_IsCompletelyFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_IsCompletelyFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execIsCompletelyFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompletelyFull();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function IsCompletelyFull ***********************************

// ********** Begin Class UInventoryBase Function IsEmpty ******************************************
struct Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics
{
	struct InventoryBase_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventIsEmpty_Parms), &Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "IsEmpty", Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::InventoryBase_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::InventoryBase_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function IsEmpty ********************************************

// ********** Begin Class UInventoryBase Function LinkEquipment ************************************
struct Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics
{
	struct InventoryBase_eventLinkEquipment_Parms
	{
		UEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventLinkEquipment_Parms, Equipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "LinkEquipment", Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::InventoryBase_eventLinkEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::InventoryBase_eventLinkEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_LinkEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_LinkEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execLinkEquipment)
{
	P_GET_OBJECT(UEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LinkEquipment(Z_Param_Equipment);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function LinkEquipment **************************************

// ********** Begin Class UInventoryBase Function LoadInventorySaveData ****************************
struct InventoryBase_eventLoadInventorySaveData_Parms
{
	UInventoryBaseSaveData* InventorySaveData;
};
static FName NAME_UInventoryBase_LoadInventorySaveData = FName(TEXT("LoadInventorySaveData"));
void UInventoryBase::LoadInventorySaveData(UInventoryBaseSaveData* InventorySaveData)
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_LoadInventorySaveData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventoryBase_eventLoadInventorySaveData_Parms Parms;
		Parms.InventorySaveData=InventorySaveData;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LoadInventorySaveData_Implementation(InventorySaveData);
	}
}
struct Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::NewProp_InventorySaveData = { "InventorySaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventLoadInventorySaveData_Parms, InventorySaveData), Z_Construct_UClass_UInventoryBaseSaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::NewProp_InventorySaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "LoadInventorySaveData", Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::PropPointers), sizeof(InventoryBase_eventLoadInventorySaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryBase_eventLoadInventorySaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execLoadInventorySaveData)
{
	P_GET_OBJECT(UInventoryBaseSaveData,Z_Param_InventorySaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadInventorySaveData_Implementation(Z_Param_InventorySaveData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function LoadInventorySaveData ******************************

// ********** Begin Class UInventoryBase Function LoadSaveData *************************************
struct Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics
{
	struct InventoryBase_eventLoadSaveData_Parms
	{
		USaveData* SavedData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_SavedData = { "SavedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventLoadSaveData_Parms, SavedData), Z_Construct_UClass_USaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventLoadSaveData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventLoadSaveData_Parms), &Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_SavedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "LoadSaveData", Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::InventoryBase_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::InventoryBase_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execLoadSaveData)
{
	P_GET_OBJECT(USaveData,Z_Param_SavedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSaveData(Z_Param_SavedData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function LoadSaveData ***************************************

// ********** Begin Class UInventoryBase Function OnClearedInventory *******************************
static FName NAME_UInventoryBase_OnClearedInventory = FName(TEXT("OnClearedInventory"));
void UInventoryBase::OnClearedInventory()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_OnClearedInventory);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnClearedInventory_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryBase_OnClearedInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_OnClearedInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "OnClearedInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnClearedInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_OnClearedInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryBase_OnClearedInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_OnClearedInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execOnClearedInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClearedInventory_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function OnClearedInventory *********************************

// ********** Begin Class UInventoryBase Function OnItemAdded **************************************
struct InventoryBase_eventOnItemAdded_Parms
{
	UItemBase* Item;
};
static FName NAME_UInventoryBase_OnItemAdded = FName(TEXT("OnItemAdded"));
void UInventoryBase::OnItemAdded(UItemBase* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_OnItemAdded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventoryBase_eventOnItemAdded_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnItemAdded_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventOnItemAdded_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "OnItemAdded", Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::PropPointers), sizeof(InventoryBase_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryBase_eventOnItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_OnItemAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_OnItemAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execOnItemAdded)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemAdded_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function OnItemAdded ****************************************

// ********** Begin Class UInventoryBase Function OnItemRemoved ************************************
struct InventoryBase_eventOnItemRemoved_Parms
{
	UItemBase* Item;
};
static FName NAME_UInventoryBase_OnItemRemoved = FName(TEXT("OnItemRemoved"));
void UInventoryBase::OnItemRemoved(UItemBase* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryBase_OnItemRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventoryBase_eventOnItemRemoved_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnItemRemoved_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventOnItemRemoved_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "OnItemRemoved", Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::PropPointers), sizeof(InventoryBase_eventOnItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryBase_eventOnItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_OnItemRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_OnItemRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execOnItemRemoved)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemRemoved_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function OnItemRemoved **************************************

// ********** Begin Class UInventoryBase Function RemoveItem ***************************************
struct Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics
{
	struct InventoryBase_eventRemoveItem_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventRemoveItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "RemoveItem", Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::InventoryBase_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::InventoryBase_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execRemoveItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function RemoveItem *****************************************

// ********** Begin Class UInventoryBase Function RemoveItemByDataID *******************************
struct Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics
{
	struct InventoryBase_eventRemoveItemByDataID_Parms
	{
		UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventRemoveItemByDataID_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventRemoveItemByDataID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventRemoveItemByDataID_Parms), &Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "RemoveItemByDataID", Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::InventoryBase_eventRemoveItemByDataID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::InventoryBase_eventRemoveItemByDataID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execRemoveItemByDataID)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemByDataID(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function RemoveItemByDataID *********************************

// ********** Begin Class UInventoryBase Function TryAddItem ***************************************
struct Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics
{
	struct InventoryBase_eventTryAddItem_Parms
	{
		UItemBase* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryBase_eventTryAddItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryBase_eventTryAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryBase_eventTryAddItem_Parms), &Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "TryAddItem", Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::InventoryBase_eventTryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::InventoryBase_eventTryAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryBase_TryAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_TryAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execTryAddItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function TryAddItem *****************************************

// ********** Begin Class UInventoryBase Function UnlinkEquipment **********************************
struct Z_Construct_UFunction_UInventoryBase_UnlinkEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryBase_UnlinkEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryBase, nullptr, "UnlinkEquipment", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryBase_UnlinkEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryBase_UnlinkEquipment_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryBase_UnlinkEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryBase_UnlinkEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryBase::execUnlinkEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkEquipment();
	P_NATIVE_END;
}
// ********** End Class UInventoryBase Function UnlinkEquipment ************************************

// ********** Begin Class UInventoryBase ***********************************************************
void UInventoryBase::StaticRegisterNativesUInventoryBase()
{
	UClass* Class = UInventoryBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewItem", &UInventoryBase::execAddNewItem },
		{ "CanContainItem", &UInventoryBase::execCanContainItem },
		{ "CanSupportAdditionalWeight", &UInventoryBase::execCanSupportAdditionalWeight },
		{ "ClearInventory", &UInventoryBase::execClearInventory },
		{ "ConsumeItem", &UInventoryBase::execConsumeItem },
		{ "CreateInventorySaveData", &UInventoryBase::execCreateInventorySaveData },
		{ "CreateSaveData", &UInventoryBase::execCreateSaveData },
		{ "CreateSaveDataObject", &UInventoryBase::execCreateSaveDataObject },
		{ "Find", &UInventoryBase::execFind },
		{ "GetCurrentWeight", &UInventoryBase::execGetCurrentWeight },
		{ "GetEquipment", &UInventoryBase::execGetEquipment },
		{ "GetItemDataFromRegistry", &UInventoryBase::execGetItemDataFromRegistry },
		{ "GetItems", &UInventoryBase::execGetItems },
		{ "HasEnoughQuantityToConsume", &UInventoryBase::execHasEnoughQuantityToConsume },
		{ "HasItemOfDataID", &UInventoryBase::execHasItemOfDataID },
		{ "HasItemOfTypeID", &UInventoryBase::execHasItemOfTypeID },
		{ "IsCompletelyFull", &UInventoryBase::execIsCompletelyFull },
		{ "IsEmpty", &UInventoryBase::execIsEmpty },
		{ "LinkEquipment", &UInventoryBase::execLinkEquipment },
		{ "LoadInventorySaveData", &UInventoryBase::execLoadInventorySaveData },
		{ "LoadSaveData", &UInventoryBase::execLoadSaveData },
		{ "OnClearedInventory", &UInventoryBase::execOnClearedInventory },
		{ "OnItemAdded", &UInventoryBase::execOnItemAdded },
		{ "OnItemRemoved", &UInventoryBase::execOnItemRemoved },
		{ "RemoveItem", &UInventoryBase::execRemoveItem },
		{ "RemoveItemByDataID", &UInventoryBase::execRemoveItemByDataID },
		{ "TryAddItem", &UInventoryBase::execTryAddItem },
		{ "UnlinkEquipment", &UInventoryBase::execUnlinkEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryBase;
UClass* UInventoryBase::GetPrivateStaticClass()
{
	using TClass = UInventoryBase;
	if (!Z_Registration_Info_UClass_UInventoryBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryBase"),
			Z_Registration_Info_UClass_UInventoryBase.InnerSingleton,
			StaticRegisterNativesUInventoryBase,
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
	return Z_Registration_Info_UClass_UInventoryBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryBase_NoRegister()
{
	return UInventoryBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Base/InventoryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryCleared_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryModified_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemAdded_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemUsed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemConsumed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemRemoved_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "InventoryBase" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of items that can be stored in the inventory." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeight_MetaData[] = {
		{ "Category", "InventoryBase" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMaxCapacity_MetaData[] = {
		{ "Category", "InventoryBase" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bUseWeight" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedEquipment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/InventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryCleared;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryModified;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemUsed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemConsumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemRemoved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static void NewProp_bUseWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMaxCapacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Items;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedEquipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryBase_AddNewItem, "AddNewItem" }, // 1312780425
		{ &Z_Construct_UFunction_UInventoryBase_CanContainItem, "CanContainItem" }, // 994547381
		{ &Z_Construct_UFunction_UInventoryBase_CanSupportAdditionalWeight, "CanSupportAdditionalWeight" }, // 3096801660
		{ &Z_Construct_UFunction_UInventoryBase_ClearInventory, "ClearInventory" }, // 3025842244
		{ &Z_Construct_UFunction_UInventoryBase_ConsumeItem, "ConsumeItem" }, // 3666101391
		{ &Z_Construct_UFunction_UInventoryBase_CreateInventorySaveData, "CreateInventorySaveData" }, // 1643248369
		{ &Z_Construct_UFunction_UInventoryBase_CreateSaveData, "CreateSaveData" }, // 1058153993
		{ &Z_Construct_UFunction_UInventoryBase_CreateSaveDataObject, "CreateSaveDataObject" }, // 465286992
		{ &Z_Construct_UFunction_UInventoryBase_Find, "Find" }, // 3549708614
		{ &Z_Construct_UFunction_UInventoryBase_GetCurrentWeight, "GetCurrentWeight" }, // 1866036459
		{ &Z_Construct_UFunction_UInventoryBase_GetEquipment, "GetEquipment" }, // 3401071682
		{ &Z_Construct_UFunction_UInventoryBase_GetItemDataFromRegistry, "GetItemDataFromRegistry" }, // 1515993484
		{ &Z_Construct_UFunction_UInventoryBase_GetItems, "GetItems" }, // 2275751852
		{ &Z_Construct_UFunction_UInventoryBase_HasEnoughQuantityToConsume, "HasEnoughQuantityToConsume" }, // 3634073896
		{ &Z_Construct_UFunction_UInventoryBase_HasItemOfDataID, "HasItemOfDataID" }, // 1362851015
		{ &Z_Construct_UFunction_UInventoryBase_HasItemOfTypeID, "HasItemOfTypeID" }, // 853786911
		{ &Z_Construct_UFunction_UInventoryBase_IsCompletelyFull, "IsCompletelyFull" }, // 1954834719
		{ &Z_Construct_UFunction_UInventoryBase_IsEmpty, "IsEmpty" }, // 1110959700
		{ &Z_Construct_UFunction_UInventoryBase_LinkEquipment, "LinkEquipment" }, // 2692167431
		{ &Z_Construct_UFunction_UInventoryBase_LoadInventorySaveData, "LoadInventorySaveData" }, // 3539519492
		{ &Z_Construct_UFunction_UInventoryBase_LoadSaveData, "LoadSaveData" }, // 793657959
		{ &Z_Construct_UFunction_UInventoryBase_OnClearedInventory, "OnClearedInventory" }, // 3552321759
		{ &Z_Construct_UFunction_UInventoryBase_OnItemAdded, "OnItemAdded" }, // 3764096908
		{ &Z_Construct_UFunction_UInventoryBase_OnItemRemoved, "OnItemRemoved" }, // 4176139398
		{ &Z_Construct_UFunction_UInventoryBase_RemoveItem, "RemoveItem" }, // 2096510573
		{ &Z_Construct_UFunction_UInventoryBase_RemoveItemByDataID, "RemoveItemByDataID" }, // 567281629
		{ &Z_Construct_UFunction_UInventoryBase_TryAddItem, "TryAddItem" }, // 3953936666
		{ &Z_Construct_UFunction_UInventoryBase_UnlinkEquipment, "UnlinkEquipment" }, // 2263850983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnInventoryCleared = { "OnInventoryCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnInventoryCleared), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryCleared__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryCleared_MetaData), NewProp_OnInventoryCleared_MetaData) }; // 2741197149
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnInventoryModified = { "OnInventoryModified", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnInventoryModified), Z_Construct_UDelegateFunction_InventorySystem_OnInventoryModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryModified_MetaData), NewProp_OnInventoryModified_MetaData) }; // 2186211777
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemAdded = { "OnAnyItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnAnyItemAdded), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemAdded_MetaData), NewProp_OnAnyItemAdded_MetaData) }; // 631950153
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemUsed = { "OnAnyItemUsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnAnyItemUsed), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemUsed_MetaData), NewProp_OnAnyItemUsed_MetaData) }; // 68064425
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemConsumed = { "OnAnyItemConsumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnAnyItemConsumed), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemConsumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemConsumed_MetaData), NewProp_OnAnyItemConsumed_MetaData) }; // 4171466649
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemRemoved = { "OnAnyItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, OnAnyItemRemoved), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemRemoved_MetaData), NewProp_OnAnyItemRemoved_MetaData) }; // 918774057
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
void Z_Construct_UClass_UInventoryBase_Statics::NewProp_bUseWeight_SetBit(void* Obj)
{
	((UInventoryBase*)Obj)->bUseWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_bUseWeight = { "bUseWeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryBase), &Z_Construct_UClass_UInventoryBase_Statics::NewProp_bUseWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWeight_MetaData), NewProp_bUseWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_WeightMaxCapacity = { "WeightMaxCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, WeightMaxCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMaxCapacity_MetaData), NewProp_WeightMaxCapacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_Items_ElementProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, Items), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryBase_Statics::NewProp_RelatedEquipment = { "RelatedEquipment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBase, RelatedEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedEquipment_MetaData), NewProp_RelatedEquipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnInventoryCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnInventoryModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemConsumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_OnAnyItemRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_bUseWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_WeightMaxCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_Items_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBase_Statics::NewProp_RelatedEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventoryBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveable_NoRegister, (int32)VTABLE_OFFSET(UInventoryBase, ISaveable), false },  // 2639263768
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryBase_Statics::ClassParams = {
	&UInventoryBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryBase()
{
	if (!Z_Registration_Info_UClass_UInventoryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryBase.OuterSingleton, Z_Construct_UClass_UInventoryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryBase);
UInventoryBase::~UInventoryBase() {}
// ********** End Class UInventoryBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryBase, UInventoryBase::StaticClass, TEXT("UInventoryBase"), &Z_Registration_Info_UClass_UInventoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryBase), 3285137505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h__Script_InventorySystem_1125754580(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
