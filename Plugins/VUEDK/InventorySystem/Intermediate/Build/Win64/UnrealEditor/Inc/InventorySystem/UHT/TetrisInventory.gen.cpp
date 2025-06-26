// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/TetrisInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisInventory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItemData_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisSlot_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnItemAddedToSlot ****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemAddedToSlot_Parms
	{
		UTetrisItem* Item;
		FIntPoint SlotPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemAddedToSlot_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::NewProp_SlotPosition = { "SlotPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemAddedToSlot_Parms, SlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::NewProp_SlotPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemAddedToSlot__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAddedToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAddedToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAddedToSlot_DelegateWrapper(const FMulticastScriptDelegate& OnItemAddedToSlot, UTetrisItem* Item, FIntPoint SlotPosition)
{
	struct _Script_InventorySystem_eventOnItemAddedToSlot_Parms
	{
		UTetrisItem* Item;
		FIntPoint SlotPosition;
	};
	_Script_InventorySystem_eventOnItemAddedToSlot_Parms Parms;
	Parms.Item=Item;
	Parms.SlotPosition=SlotPosition;
	OnItemAddedToSlot.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemAddedToSlot ******************************************************

// ********** Begin Delegate FOnItemRemovedFromSlot ************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemRemovedFromSlot_Parms
	{
		UTetrisItem* Item;
		FIntPoint SlotPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRemovedFromSlot_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::NewProp_SlotPosition = { "SlotPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRemovedFromSlot_Parms, SlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::NewProp_SlotPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemRemovedFromSlot__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemovedFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemovedFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRemovedFromSlot_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemovedFromSlot, UTetrisItem* Item, FIntPoint SlotPosition)
{
	struct _Script_InventorySystem_eventOnItemRemovedFromSlot_Parms
	{
		UTetrisItem* Item;
		FIntPoint SlotPosition;
	};
	_Script_InventorySystem_eventOnItemRemovedFromSlot_Parms Parms;
	Parms.Item=Item;
	Parms.SlotPosition=SlotPosition;
	OnItemRemovedFromSlot.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemRemovedFromSlot **************************************************

// ********** Begin Delegate FOnItemMoved **********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemMoved_Parms
	{
		UTetrisItem* Item;
		FIntPoint OldPosition;
		FIntPoint NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemMoved_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemMoved_Parms, OldPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemMoved_Parms, NewPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_OldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemMoved__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemMoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemMoved, UTetrisItem* Item, FIntPoint OldPosition, FIntPoint NewPosition)
{
	struct _Script_InventorySystem_eventOnItemMoved_Parms
	{
		UTetrisItem* Item;
		FIntPoint OldPosition;
		FIntPoint NewPosition;
	};
	_Script_InventorySystem_eventOnItemMoved_Parms Parms;
	Parms.Item=Item;
	Parms.OldPosition=OldPosition;
	Parms.NewPosition=NewPosition;
	OnItemMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemMoved ************************************************************

// ********** Begin Delegate FOnItemsSwitchedPositions *********************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemsSwitchedPositions_Parms
	{
		UTetrisItem* ItemA;
		UTetrisItem* ItemB;
		FIntPoint ItemAOldPosition;
		FIntPoint ItemBOldPosition;
		FIntPoint ItemANewPosition;
		FIntPoint ItemBNewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAOldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemBOldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemANewPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemBNewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemA), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemB), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemAOldPosition = { "ItemAOldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemAOldPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemBOldPosition = { "ItemBOldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemBOldPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemANewPosition = { "ItemANewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemANewPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemBNewPosition = { "ItemBNewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms, ItemBNewPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemAOldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemBOldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemANewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::NewProp_ItemBNewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemsSwitchedPositions__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemsSwitchedPositions_DelegateWrapper(const FMulticastScriptDelegate& OnItemsSwitchedPositions, UTetrisItem* ItemA, UTetrisItem* ItemB, FIntPoint ItemAOldPosition, FIntPoint ItemBOldPosition, FIntPoint ItemANewPosition, FIntPoint ItemBNewPosition)
{
	struct _Script_InventorySystem_eventOnItemsSwitchedPositions_Parms
	{
		UTetrisItem* ItemA;
		UTetrisItem* ItemB;
		FIntPoint ItemAOldPosition;
		FIntPoint ItemBOldPosition;
		FIntPoint ItemANewPosition;
		FIntPoint ItemBNewPosition;
	};
	_Script_InventorySystem_eventOnItemsSwitchedPositions_Parms Parms;
	Parms.ItemA=ItemA;
	Parms.ItemB=ItemB;
	Parms.ItemAOldPosition=ItemAOldPosition;
	Parms.ItemBOldPosition=ItemBOldPosition;
	Parms.ItemANewPosition=ItemANewPosition;
	Parms.ItemBNewPosition=ItemBNewPosition;
	OnItemsSwitchedPositions.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemsSwitchedPositions ***********************************************

// ********** Begin Class UTetrisInventory Function CanOccupySlots *********************************
struct Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics
{
	struct TetrisInventory_eventCanOccupySlots_Parms
	{
		FIntPoint Size;
		FIntPoint StartSlotPosition;
		bool bOutNeedsRotation;
		bool bCheckRotation;
		const UTetrisItem* IgnoreItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bCheckRotation", "false" },
		{ "CPP_Default_IgnoreItem", "None" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSlotPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartSlotPosition;
	static void NewProp_bOutNeedsRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutNeedsRotation;
	static void NewProp_bCheckRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventCanOccupySlots_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_StartSlotPosition = { "StartSlotPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventCanOccupySlots_Parms, StartSlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSlotPosition_MetaData), NewProp_StartSlotPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bOutNeedsRotation_SetBit(void* Obj)
{
	((TetrisInventory_eventCanOccupySlots_Parms*)Obj)->bOutNeedsRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bOutNeedsRotation = { "bOutNeedsRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventCanOccupySlots_Parms), &Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bOutNeedsRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bCheckRotation_SetBit(void* Obj)
{
	((TetrisInventory_eventCanOccupySlots_Parms*)Obj)->bCheckRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bCheckRotation = { "bCheckRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventCanOccupySlots_Parms), &Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bCheckRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckRotation_MetaData), NewProp_bCheckRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_IgnoreItem = { "IgnoreItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventCanOccupySlots_Parms, IgnoreItem), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreItem_MetaData), NewProp_IgnoreItem_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventory_eventCanOccupySlots_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventCanOccupySlots_Parms), &Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_StartSlotPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bOutNeedsRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_bCheckRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_IgnoreItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "CanOccupySlots", Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::TetrisInventory_eventCanOccupySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::TetrisInventory_eventCanOccupySlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_CanOccupySlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_CanOccupySlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execCanOccupySlots)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Size);
	P_GET_STRUCT(FIntPoint,Z_Param_StartSlotPosition);
	P_GET_UBOOL_REF(Z_Param_Out_bOutNeedsRotation);
	P_GET_UBOOL(Z_Param_bCheckRotation);
	P_GET_OBJECT(UTetrisItem,Z_Param_IgnoreItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanOccupySlots(Z_Param_Size,Z_Param_StartSlotPosition,Z_Param_Out_bOutNeedsRotation,Z_Param_bCheckRotation,Z_Param_IgnoreItem);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function CanOccupySlots ***********************************

// ********** Begin Class UTetrisInventory Function GetGridSize ************************************
struct Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics
{
	struct TetrisInventory_eventGetGridSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventGetGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "GetGridSize", Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::TetrisInventory_eventGetGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::TetrisInventory_eventGetGridSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_GetGridSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_GetGridSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execGetGridSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetGridSize();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function GetGridSize **************************************

// ********** Begin Class UTetrisInventory Function GetSlot ****************************************
struct Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics
{
	struct TetrisInventory_eventGetSlot_Parms
	{
		FIntPoint SlotPosition;
		UTetrisSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::NewProp_SlotPosition = { "SlotPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventGetSlot_Parms, SlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotPosition_MetaData), NewProp_SlotPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventGetSlot_Parms, ReturnValue), Z_Construct_UClass_UTetrisSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::NewProp_SlotPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "GetSlot", Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::TetrisInventory_eventGetSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::TetrisInventory_eventGetSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_GetSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_GetSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execGetSlot)
{
	P_GET_STRUCT(FIntPoint,Z_Param_SlotPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTetrisSlot**)Z_Param__Result=P_THIS->GetSlot(Z_Param_SlotPosition);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function GetSlot ******************************************

// ********** Begin Class UTetrisInventory Function TryAddItemAtSlots ******************************
struct Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics
{
	struct TetrisInventory_eventTryAddItemAtSlots_Parms
	{
		UTetrisItem* Item;
		FIntPoint StartSlotPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSlotPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartSlotPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryAddItemAtSlots_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_StartSlotPosition = { "StartSlotPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryAddItemAtSlots_Parms, StartSlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSlotPosition_MetaData), NewProp_StartSlotPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventory_eventTryAddItemAtSlots_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventTryAddItemAtSlots_Parms), &Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_StartSlotPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "TryAddItemAtSlots", Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::TetrisInventory_eventTryAddItemAtSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::TetrisInventory_eventTryAddItemAtSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execTryAddItemAtSlots)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_Item);
	P_GET_STRUCT(FIntPoint,Z_Param_StartSlotPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAddItemAtSlots(Z_Param_Item,Z_Param_StartSlotPosition);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function TryAddItemAtSlots ********************************

// ********** Begin Class UTetrisInventory Function TryAddNewItemAtSlots ***************************
struct Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics
{
	struct TetrisInventory_eventTryAddNewItemAtSlots_Parms
	{
		UTetrisItemData* ItemData;
		FIntPoint StartSlotPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSlotPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartSlotPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryAddNewItemAtSlots_Parms, ItemData), Z_Construct_UClass_UTetrisItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_StartSlotPosition = { "StartSlotPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryAddNewItemAtSlots_Parms, StartSlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSlotPosition_MetaData), NewProp_StartSlotPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventory_eventTryAddNewItemAtSlots_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventTryAddNewItemAtSlots_Parms), &Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_StartSlotPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "TryAddNewItemAtSlots", Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::TetrisInventory_eventTryAddNewItemAtSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::TetrisInventory_eventTryAddNewItemAtSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execTryAddNewItemAtSlots)
{
	P_GET_OBJECT(UTetrisItemData,Z_Param_ItemData);
	P_GET_STRUCT(FIntPoint,Z_Param_StartSlotPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryAddNewItemAtSlots(Z_Param_ItemData,Z_Param_StartSlotPosition);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function TryAddNewItemAtSlots *****************************

// ********** Begin Class UTetrisInventory Function TryMoveItem ************************************
struct Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics
{
	struct TetrisInventory_eventTryMoveItem_Parms
	{
		UTetrisItem* Item;
		FIntPoint NewPosition;
		bool bTryRotate;
		const UTetrisItem* IgnoreItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bTryRotate", "false" },
		{ "CPP_Default_IgnoreItem", "None" },
		{ "HidePin", "bCallEvents" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryRotate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static void NewProp_bTryRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryRotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryMoveItem_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryMoveItem_Parms, NewPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPosition_MetaData), NewProp_NewPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_bTryRotate_SetBit(void* Obj)
{
	((TetrisInventory_eventTryMoveItem_Parms*)Obj)->bTryRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_bTryRotate = { "bTryRotate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventTryMoveItem_Parms), &Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_bTryRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryRotate_MetaData), NewProp_bTryRotate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_IgnoreItem = { "IgnoreItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTryMoveItem_Parms, IgnoreItem), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreItem_MetaData), NewProp_IgnoreItem_MetaData) };
void Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventory_eventTryMoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventTryMoveItem_Parms), &Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_bTryRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_IgnoreItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "TryMoveItem", Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::TetrisInventory_eventTryMoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::TetrisInventory_eventTryMoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_TryMoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_TryMoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execTryMoveItem)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_Item);
	P_GET_STRUCT(FIntPoint,Z_Param_NewPosition);
	P_GET_UBOOL(Z_Param_bTryRotate);
	P_GET_OBJECT(UTetrisItem,Z_Param_IgnoreItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryMoveItem(Z_Param_Item,Z_Param_NewPosition,Z_Param_bTryRotate,Z_Param_IgnoreItem);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function TryMoveItem **************************************

// ********** Begin Class UTetrisInventory Function TrySwitchItemsPositions ************************
struct Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics
{
	struct TetrisInventory_eventTrySwitchItemsPositions_Parms
	{
		UTetrisItem* ItemA;
		UTetrisItem* ItemB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTrySwitchItemsPositions_Parms, ItemA), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventory_eventTrySwitchItemsPositions_Parms, ItemB), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventory_eventTrySwitchItemsPositions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventory_eventTrySwitchItemsPositions_Parms), &Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventory, nullptr, "TrySwitchItemsPositions", Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::TetrisInventory_eventTrySwitchItemsPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::TetrisInventory_eventTrySwitchItemsPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventory::execTrySwitchItemsPositions)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemA);
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySwitchItemsPositions(Z_Param_ItemA,Z_Param_ItemB);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventory Function TrySwitchItemsPositions **************************

// ********** Begin Class UTetrisInventory *********************************************************
void UTetrisInventory::StaticRegisterNativesUTetrisInventory()
{
	UClass* Class = UTetrisInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanOccupySlots", &UTetrisInventory::execCanOccupySlots },
		{ "GetGridSize", &UTetrisInventory::execGetGridSize },
		{ "GetSlot", &UTetrisInventory::execGetSlot },
		{ "TryAddItemAtSlots", &UTetrisInventory::execTryAddItemAtSlots },
		{ "TryAddNewItemAtSlots", &UTetrisInventory::execTryAddNewItemAtSlots },
		{ "TryMoveItem", &UTetrisInventory::execTryMoveItem },
		{ "TrySwitchItemsPositions", &UTetrisInventory::execTrySwitchItemsPositions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisInventory;
UClass* UTetrisInventory::GetPrivateStaticClass()
{
	using TClass = UTetrisInventory;
	if (!Z_Registration_Info_UClass_UTetrisInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisInventory"),
			Z_Registration_Info_UClass_UTetrisInventory.InnerSingleton,
			StaticRegisterNativesUTetrisInventory,
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
	return Z_Registration_Info_UClass_UTetrisInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisInventory_NoRegister()
{
	return UTetrisInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TetrisInventory/TetrisInventory.h" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAddedToSlot_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemovedFromSlot_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemMoved_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemsSwitchedPositions_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "TetrisInventory" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAddedToSlot;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemovedFromSlot;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemMoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemsSwitchedPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisInventory_CanOccupySlots, "CanOccupySlots" }, // 638439219
		{ &Z_Construct_UFunction_UTetrisInventory_GetGridSize, "GetGridSize" }, // 3790436795
		{ &Z_Construct_UFunction_UTetrisInventory_GetSlot, "GetSlot" }, // 1282768629
		{ &Z_Construct_UFunction_UTetrisInventory_TryAddItemAtSlots, "TryAddItemAtSlots" }, // 2986727176
		{ &Z_Construct_UFunction_UTetrisInventory_TryAddNewItemAtSlots, "TryAddNewItemAtSlots" }, // 959077146
		{ &Z_Construct_UFunction_UTetrisInventory_TryMoveItem, "TryMoveItem" }, // 4080302224
		{ &Z_Construct_UFunction_UTetrisInventory_TrySwitchItemsPositions, "TrySwitchItemsPositions" }, // 1150064033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemAddedToSlot = { "OnItemAddedToSlot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventory, OnItemAddedToSlot), Z_Construct_UDelegateFunction_InventorySystem_OnItemAddedToSlot__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAddedToSlot_MetaData), NewProp_OnItemAddedToSlot_MetaData) }; // 520325263
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemRemovedFromSlot = { "OnItemRemovedFromSlot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventory, OnItemRemovedFromSlot), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemovedFromSlot__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemovedFromSlot_MetaData), NewProp_OnItemRemovedFromSlot_MetaData) }; // 4228192319
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemMoved = { "OnItemMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventory, OnItemMoved), Z_Construct_UDelegateFunction_InventorySystem_OnItemMoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemMoved_MetaData), NewProp_OnItemMoved_MetaData) }; // 2995814088
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemsSwitchedPositions = { "OnItemsSwitchedPositions", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventory, OnItemsSwitchedPositions), Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedPositions__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemsSwitchedPositions_MetaData), NewProp_OnItemsSwitchedPositions_MetaData) }; // 917547355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisInventory_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventory, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemAddedToSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemRemovedFromSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventory_Statics::NewProp_OnItemsSwitchedPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventory_Statics::NewProp_GridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisInventory_Statics::ClassParams = {
	&UTetrisInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTetrisInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventory_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisInventory()
{
	if (!Z_Registration_Info_UClass_UTetrisInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisInventory.OuterSingleton, Z_Construct_UClass_UTetrisInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisInventory);
UTetrisInventory::~UTetrisInventory() {}
// ********** End Class UTetrisInventory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisInventory, UTetrisInventory::StaticClass, TEXT("UTetrisInventory"), &Z_Registration_Info_UClass_UTetrisInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisInventory), 1332973347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h__Script_InventorySystem_4122444511(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
