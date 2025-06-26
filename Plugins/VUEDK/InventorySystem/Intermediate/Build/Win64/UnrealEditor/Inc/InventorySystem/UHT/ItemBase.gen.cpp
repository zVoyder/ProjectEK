// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/ItemBase.h"
#include "Base/ItemDropActor.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnItemAdded **********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemAdded_Parms
	{
		UItemBase* Item;
		UInventoryBase* Inventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemAdded_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemAdded_Parms, Inventory), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemAdded__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, UItemBase* Item, UInventoryBase* Inventory)
{
	struct _Script_InventorySystem_eventOnItemAdded_Parms
	{
		UItemBase* Item;
		UInventoryBase* Inventory;
	};
	_Script_InventorySystem_eventOnItemAdded_Parms Parms;
	Parms.Item=Item;
	Parms.Inventory=Inventory;
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemAdded ************************************************************

// ********** Begin Delegate FOnItemUsed ***********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemUsed_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemUsed_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemUsed__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnItemUsed_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnItemUsed_Parms Parms;
	Parms.Item=Item;
	OnItemUsed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemUsed *************************************************************

// ********** Begin Delegate FOnItemConsumed *******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemConsumed_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemConsumed_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemConsumed__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemConsumed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemConsumed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemConsumed_DelegateWrapper(const FMulticastScriptDelegate& OnItemConsumed, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnItemConsumed_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnItemConsumed_Parms Parms;
	Parms.Item=Item;
	OnItemConsumed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemConsumed *********************************************************

// ********** Begin Delegate FOnItemRemoved ********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemRemoved_Parms
	{
		UItemBase* Item;
		UInventoryBase* Inventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRemoved_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRemoved_Parms, Inventory), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemRemoved__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, UItemBase* Item, UInventoryBase* Inventory)
{
	struct _Script_InventorySystem_eventOnItemRemoved_Parms
	{
		UItemBase* Item;
		UInventoryBase* Inventory;
	};
	_Script_InventorySystem_eventOnItemRemoved_Parms Parms;
	Parms.Item=Item;
	Parms.Inventory=Inventory;
	OnItemRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemRemoved **********************************************************

// ********** Begin Delegate FOnItemEquipped *******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemEquipped_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemEquipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemEquipped__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnItemEquipped_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnItemEquipped_Parms Parms;
	Parms.Item=Item;
	OnItemEquipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemEquipped *********************************************************

// ********** Begin Delegate FOnItemUnequipped *****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemUnequipped_Parms
	{
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemUnequipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemUnequipped__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnequipped, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnItemUnequipped_Parms
	{
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnItemUnequipped_Parms Parms;
	Parms.Item=Item;
	OnItemUnequipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemUnequipped *******************************************************

// ********** Begin Delegate FOnItemQuantityChanged ************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemQuantityChanged_Parms
	{
		UItemBase* Item;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemQuantityChanged_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemQuantityChanged_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemQuantityChanged__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemQuantityChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemQuantityChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemQuantityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemQuantityChanged, UItemBase* Item, int32 Quantity)
{
	struct _Script_InventorySystem_eventOnItemQuantityChanged_Parms
	{
		UItemBase* Item;
		int32 Quantity;
	};
	_Script_InventorySystem_eventOnItemQuantityChanged_Parms Parms;
	Parms.Item=Item;
	Parms.Quantity=Quantity;
	OnItemQuantityChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemQuantityChanged **************************************************

// ********** Begin Delegate FOnItemMeshLoaded *****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemMeshLoaded_Parms
	{
		UStaticMesh* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemMeshLoaded_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemMeshLoaded__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemMeshLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemMeshLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemMeshLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnItemMeshLoaded, UStaticMesh* Mesh)
{
	struct _Script_InventorySystem_eventOnItemMeshLoaded_Parms
	{
		UStaticMesh* Mesh;
	};
	_Script_InventorySystem_eventOnItemMeshLoaded_Parms Parms;
	Parms.Mesh=Mesh;
	OnItemMeshLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemMeshLoaded *******************************************************

// ********** Begin Class UItemBase Function AreEquipPreconditionsMet ******************************
struct Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics
{
	struct ItemBase_eventAreEquipPreconditionsMet_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventAreEquipPreconditionsMet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventAreEquipPreconditionsMet_Parms), &Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "AreEquipPreconditionsMet", Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::ItemBase_eventAreEquipPreconditionsMet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::ItemBase_eventAreEquipPreconditionsMet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execAreEquipPreconditionsMet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreEquipPreconditionsMet();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function AreEquipPreconditionsMet ********************************

// ********** Begin Class UItemBase Function CanStack **********************************************
struct Z_Construct_UFunction_UItemBase_CanStack_Statics
{
	struct ItemBase_eventCanStack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_CanStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventCanStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_CanStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventCanStack_Parms), &Z_Construct_UFunction_UItemBase_CanStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_CanStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_CanStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_CanStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "CanStack", Z_Construct_UFunction_UItemBase_CanStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_CanStack_Statics::ItemBase_eventCanStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_CanStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_CanStack_Statics::ItemBase_eventCanStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_CanStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_CanStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execCanStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStack();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function CanStack ************************************************

// ********** Begin Class UItemBase Function CanStackItem ******************************************
struct ItemBase_eventCanStackItem_Parms
{
	UItemBase* OtherItem;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemBase_eventCanStackItem_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UItemBase_CanStackItem = FName(TEXT("CanStackItem"));
bool UItemBase::CanStackItem(UItemBase* OtherItem) const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_CanStackItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemBase_eventCanStackItem_Parms Parms;
		Parms.OtherItem=OtherItem;
		const_cast<UItemBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemBase*>(this)->CanStackItem_Implementation(OtherItem);
	}
}
struct Z_Construct_UFunction_UItemBase_CanStackItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_OtherItem = { "OtherItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventCanStackItem_Parms, OtherItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventCanStackItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventCanStackItem_Parms), &Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_CanStackItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_OtherItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_CanStackItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStackItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_CanStackItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "CanStackItem", Z_Construct_UFunction_UItemBase_CanStackItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStackItem_Statics::PropPointers), sizeof(ItemBase_eventCanStackItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CanStackItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_CanStackItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemBase_eventCanStackItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_CanStackItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_CanStackItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execCanStackItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_OtherItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStackItem_Implementation(Z_Param_OtherItem);
	P_NATIVE_END;
}
// ********** End Class UItemBase Function CanStackItem ********************************************

// ********** Begin Class UItemBase Function Consume ***********************************************
struct Z_Construct_UFunction_UItemBase_Consume_Statics
{
	struct ItemBase_eventConsume_Parms
	{
		int32 AmountToConsume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AmountToConsume", "1" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToConsume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_Consume_Statics::NewProp_AmountToConsume = { "AmountToConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventConsume_Parms, AmountToConsume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToConsume_MetaData), NewProp_AmountToConsume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_Consume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventConsume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_Consume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_Consume_Statics::NewProp_AmountToConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_Consume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Consume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Consume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Consume", Z_Construct_UFunction_UItemBase_Consume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Consume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_Consume_Statics::ItemBase_eventConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Consume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Consume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_Consume_Statics::ItemBase_eventConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_Consume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Consume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execConsume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToConsume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Consume(Z_Param_AmountToConsume);
	P_NATIVE_END;
}
// ********** End Class UItemBase Function Consume *************************************************

// ********** Begin Class UItemBase Function GetCurrentQuantity ************************************
struct Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics
{
	struct ItemBase_eventGetCurrentQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetCurrentQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetCurrentQuantity", Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::ItemBase_eventGetCurrentQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::ItemBase_eventGetCurrentQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetCurrentQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetCurrentQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetCurrentQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentQuantity();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetCurrentQuantity **************************************

// ********** Begin Class UItemBase Function GetEquipSlotIndex *************************************
struct Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics
{
	struct ItemBase_eventGetEquipSlotIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetEquipSlotIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetEquipSlotIndex", Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::ItemBase_eventGetEquipSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::ItemBase_eventGetEquipSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetEquipSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetEquipSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetEquipSlotIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEquipSlotIndex();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetEquipSlotIndex ***************************************

// ********** Begin Class UItemBase Function GetEquipSlotKey ***************************************
struct Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics
{
	struct ItemBase_eventGetEquipSlotKey_Parms
	{
		UEquipSlotKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetEquipSlotKey_Parms, ReturnValue), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetEquipSlotKey", Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::ItemBase_eventGetEquipSlotKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::ItemBase_eventGetEquipSlotKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetEquipSlotKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetEquipSlotKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetEquipSlotKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipSlotKey**)Z_Param__Result=P_THIS->GetEquipSlotKey();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetEquipSlotKey *****************************************

// ********** Begin Class UItemBase Function GetItemData *******************************************
struct Z_Construct_UFunction_UItemBase_GetItemData_Statics
{
	struct ItemBase_eventGetItemData_Parms
	{
		UItemDataBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemData", Z_Construct_UFunction_UItemBase_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemData_Statics::ItemBase_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemData_Statics::ItemBase_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemDataBase**)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemData *********************************************

// ********** Begin Class UItemBase Function GetItemDescription ************************************
struct Z_Construct_UFunction_UItemBase_GetItemDescription_Statics
{
	struct ItemBase_eventGetItemDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemDescription", Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::ItemBase_eventGetItemDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::ItemBase_eventGetItemDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetItemDescription();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemDescription **************************************

// ********** Begin Class UItemBase Function GetItemFullName ***************************************
struct Z_Construct_UFunction_UItemBase_GetItemFullName_Statics
{
	struct ItemBase_eventGetItemFullName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemFullName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemFullName", Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::ItemBase_eventGetItemFullName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::ItemBase_eventGetItemFullName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemFullName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemFullName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemFullName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetItemFullName();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemFullName *****************************************

// ********** Begin Class UItemBase Function GetItemFullWeight *************************************
struct ItemBase_eventGetItemFullWeight_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ItemBase_eventGetItemFullWeight_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UItemBase_GetItemFullWeight = FName(TEXT("GetItemFullWeight"));
float UItemBase::GetItemFullWeight() const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_GetItemFullWeight);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemBase_eventGetItemFullWeight_Parms Parms;
		const_cast<UItemBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemBase*>(this)->GetItemFullWeight_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemFullWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemFullWeight", Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::PropPointers), sizeof(ItemBase_eventGetItemFullWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemBase_eventGetItemFullWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemFullWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemFullWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemFullWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetItemFullWeight_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemFullWeight ***************************************

// ********** Begin Class UItemBase Function GetItemIcon *******************************************
struct Z_Construct_UFunction_UItemBase_GetItemIcon_Statics
{
	struct ItemBase_eventGetItemIcon_Parms
	{
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemIcon", Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::ItemBase_eventGetItemIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::ItemBase_eventGetItemIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=P_THIS->GetItemIcon();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemIcon *********************************************

// ********** Begin Class UItemBase Function GetItemWeight *****************************************
struct ItemBase_eventGetItemWeight_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ItemBase_eventGetItemWeight_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UItemBase_GetItemWeight = FName(TEXT("GetItemWeight"));
float UItemBase::GetItemWeight() const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_GetItemWeight);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemBase_eventGetItemWeight_Parms Parms;
		const_cast<UItemBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemBase*>(this)->GetItemWeight_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_GetItemWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemWeight", Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::PropPointers), sizeof(ItemBase_eventGetItemWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemBase_eventGetItemWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_GetItemWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execGetItemWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetItemWeight_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function GetItemWeight *******************************************

// ********** Begin Class UItemBase Function HasEquipPermission ************************************
struct ItemBase_eventHasEquipPermission_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemBase_eventHasEquipPermission_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UItemBase_HasEquipPermission = FName(TEXT("HasEquipPermission"));
bool UItemBase::HasEquipPermission() const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_HasEquipPermission);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemBase_eventHasEquipPermission_Parms Parms;
		const_cast<UItemBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemBase*>(this)->HasEquipPermission_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventHasEquipPermission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventHasEquipPermission_Parms), &Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "HasEquipPermission", Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::PropPointers), sizeof(ItemBase_eventHasEquipPermission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemBase_eventHasEquipPermission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_HasEquipPermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_HasEquipPermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execHasEquipPermission)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEquipPermission_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function HasEquipPermission **************************************

// ********** Begin Class UItemBase Function IsEquippable ******************************************
struct Z_Construct_UFunction_UItemBase_IsEquippable_Statics
{
	struct ItemBase_eventIsEquippable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_IsEquippable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventIsEquippable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsEquippable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsEquippable_Parms), &Z_Construct_UFunction_UItemBase_IsEquippable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsEquippable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsEquippable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquippable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsEquippable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsEquippable", Z_Construct_UFunction_UItemBase_IsEquippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquippable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsEquippable_Statics::ItemBase_eventIsEquippable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquippable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsEquippable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsEquippable_Statics::ItemBase_eventIsEquippable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_IsEquippable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsEquippable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execIsEquippable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEquippable();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function IsEquippable ********************************************

// ********** Begin Class UItemBase Function IsEquipped ********************************************
struct Z_Construct_UFunction_UItemBase_IsEquipped_Statics
{
	struct ItemBase_eventIsEquipped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsEquipped_Parms), &Z_Construct_UFunction_UItemBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsEquipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsEquipped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsEquipped", Z_Construct_UFunction_UItemBase_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsEquipped_Statics::ItemBase_eventIsEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsEquipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsEquipped_Statics::ItemBase_eventIsEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_IsEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execIsEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEquipped();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function IsEquipped **********************************************

// ********** Begin Class UItemBase Function IsMaxStacked ******************************************
struct Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics
{
	struct ItemBase_eventIsMaxStacked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventIsMaxStacked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsMaxStacked_Parms), &Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsMaxStacked", Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::ItemBase_eventIsMaxStacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::ItemBase_eventIsMaxStacked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_IsMaxStacked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsMaxStacked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execIsMaxStacked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMaxStacked();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function IsMaxStacked ********************************************

// ********** Begin Class UItemBase Function IsStackable *******************************************
struct Z_Construct_UFunction_UItemBase_IsStackable_Statics
{
	struct ItemBase_eventIsStackable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemBase_IsStackable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventIsStackable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsStackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsStackable_Parms), &Z_Construct_UFunction_UItemBase_IsStackable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsStackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsStackable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsStackable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsStackable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsStackable", Z_Construct_UFunction_UItemBase_IsStackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsStackable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsStackable_Statics::ItemBase_eventIsStackable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsStackable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsStackable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsStackable_Statics::ItemBase_eventIsStackable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_IsStackable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsStackable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execIsStackable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStackable();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function IsStackable *********************************************

// ********** Begin Class UItemBase Function LoadItemMeshAsync *************************************
struct Z_Construct_UFunction_UItemBase_LoadItemMeshAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Loads the item mesh asynchronously.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Loads the item mesh asynchronously." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_LoadItemMeshAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "LoadItemMeshAsync", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadItemMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_LoadItemMeshAsync_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_LoadItemMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_LoadItemMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execLoadItemMeshAsync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadItemMeshAsync();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function LoadItemMeshAsync ***************************************

// ********** Begin Class UItemBase Function LoadItemMeshSync **************************************
struct Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics
{
	struct ItemBase_eventLoadItemMeshSync_Parms
	{
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Loads the item mesh synchronously.\n\x09 * @return The loaded mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Loads the item mesh synchronously.\n@return The loaded mesh." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventLoadItemMeshSync_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "LoadItemMeshSync", Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::ItemBase_eventLoadItemMeshSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::ItemBase_eventLoadItemMeshSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_LoadItemMeshSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_LoadItemMeshSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execLoadItemMeshSync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->LoadItemMeshSync();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function LoadItemMeshSync ****************************************

// ********** Begin Class UItemBase Function OnAdd *************************************************
static FName NAME_UItemBase_OnAdd = FName(TEXT("OnAdd"));
void UItemBase::OnAdd()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnAdd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAdd_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnAdd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnAdd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnAdd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnAdd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnAdd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAdd_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnAdd ***************************************************

// ********** Begin Class UItemBase Function OnConsume *********************************************
static FName NAME_UItemBase_OnConsume = FName(TEXT("OnConsume"));
void UItemBase::OnConsume()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnConsume);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnConsume_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnConsume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnConsume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnConsume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnConsume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnConsume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConsume_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnConsume ***********************************************

// ********** Begin Class UItemBase Function OnEquip ***********************************************
static FName NAME_UItemBase_OnEquip = FName(TEXT("OnEquip"));
void UItemBase::OnEquip()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnEquip);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEquip_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnEquip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnEquip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnEquip", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnEquip_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnEquip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnEquip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnEquip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquip_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnEquip *************************************************

// ********** Begin Class UItemBase Function OnInit ************************************************
static FName NAME_UItemBase_OnInit = FName(TEXT("OnInit"));
void UItemBase::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnInit **************************************************

// ********** Begin Class UItemBase Function OnRemove **********************************************
static FName NAME_UItemBase_OnRemove = FName(TEXT("OnRemove"));
void UItemBase::OnRemove()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnRemove);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnRemove_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnRemove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnRemove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnRemove", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnRemove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnRemove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemove_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnRemove ************************************************

// ********** Begin Class UItemBase Function OnUnequip *********************************************
static FName NAME_UItemBase_OnUnequip = FName(TEXT("OnUnequip"));
void UItemBase::OnUnequip()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnUnequip);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnUnequip_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnUnequip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnUnequip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnUnequip", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnUnequip_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnUnequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnUnequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnUnequip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnequip_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnUnequip ***********************************************

// ********** Begin Class UItemBase Function OnUse *************************************************
static FName NAME_UItemBase_OnUse = FName(TEXT("OnUse"));
void UItemBase::OnUse()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemBase_OnUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnUse_Implementation();
	}
}
struct Z_Construct_UFunction_UItemBase_OnUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_OnUse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "OnUse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_OnUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_OnUse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_OnUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_OnUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execOnUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUse_Implementation();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function OnUse ***************************************************

// ********** Begin Class UItemBase Function Remove ************************************************
struct Z_Construct_UFunction_UItemBase_Remove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Remove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Remove", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Remove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Remove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_Remove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Remove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execRemove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Remove();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function Remove **************************************************

// ********** Begin Class UItemBase Function TryDrop ***********************************************
struct Z_Construct_UFunction_UItemBase_TryDrop_Statics
{
	struct ItemBase_eventTryDrop_Parms
	{
		FVector Location;
		FRotator Rotation;
		AItemDropActor* OutItemDropActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutItemDropActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTryDrop_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTryDrop_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_OutItemDropActor = { "OutItemDropActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTryDrop_Parms, OutItemDropActor), Z_Construct_UClass_AItemDropActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventTryDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventTryDrop_Parms), &Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_TryDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_OutItemDropActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_TryDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "TryDrop", Z_Construct_UFunction_UItemBase_TryDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_TryDrop_Statics::ItemBase_eventTryDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_TryDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_TryDrop_Statics::ItemBase_eventTryDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_TryDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_TryDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execTryDrop)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_OBJECT_REF(AItemDropActor,Z_Param_Out_OutItemDropActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryDrop(Z_Param_Location,Z_Param_Rotation,P_ARG_GC_BARRIER(Z_Param_Out_OutItemDropActor));
	P_NATIVE_END;
}
// ********** End Class UItemBase Function TryDrop *************************************************

// ********** Begin Class UItemBase Function TrySplitItem ******************************************
struct Z_Construct_UFunction_UItemBase_TrySplitItem_Statics
{
	struct ItemBase_eventTrySplitItem_Parms
	{
		int32 AmountToSplit;
		UItemBase* OutNewSplittedItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToSplit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToSplit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNewSplittedItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_AmountToSplit = { "AmountToSplit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTrySplitItem_Parms, AmountToSplit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToSplit_MetaData), NewProp_AmountToSplit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_OutNewSplittedItem = { "OutNewSplittedItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTrySplitItem_Parms, OutNewSplittedItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventTrySplitItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventTrySplitItem_Parms), &Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_AmountToSplit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_OutNewSplittedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "TrySplitItem", Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::ItemBase_eventTrySplitItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::ItemBase_eventTrySplitItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_TrySplitItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_TrySplitItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execTrySplitItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToSplit);
	P_GET_OBJECT_REF(UItemBase,Z_Param_Out_OutNewSplittedItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySplitItem(Z_Param_AmountToSplit,P_ARG_GC_BARRIER(Z_Param_Out_OutNewSplittedItem));
	P_NATIVE_END;
}
// ********** End Class UItemBase Function TrySplitItem ********************************************

// ********** Begin Class UItemBase Function TryStackItem ******************************************
struct Z_Construct_UFunction_UItemBase_TryStackItem_Statics
{
	struct ItemBase_eventTryStackItem_Parms
	{
		UItemBase* Item;
		int32 AmountToStack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AmountToStack", "1" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToStack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTryStackItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_AmountToStack = { "AmountToStack", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventTryStackItem_Parms, AmountToStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToStack_MetaData), NewProp_AmountToStack_MetaData) };
void Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemBase_eventTryStackItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventTryStackItem_Parms), &Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_TryStackItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_AmountToStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_TryStackItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryStackItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_TryStackItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "TryStackItem", Z_Construct_UFunction_UItemBase_TryStackItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryStackItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_TryStackItem_Statics::ItemBase_eventTryStackItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_TryStackItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_TryStackItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemBase_TryStackItem_Statics::ItemBase_eventTryStackItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBase_TryStackItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_TryStackItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execTryStackItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryStackItem(Z_Param_Item,Z_Param_AmountToStack);
	P_NATIVE_END;
}
// ********** End Class UItemBase Function TryStackItem ********************************************

// ********** Begin Class UItemBase Function Use ***************************************************
struct Z_Construct_UFunction_UItemBase_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Use_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Use", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Use_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemBase_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBase::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use();
	P_NATIVE_END;
}
// ********** End Class UItemBase Function Use *****************************************************

// ********** Begin Class UItemBase ****************************************************************
void UItemBase::StaticRegisterNativesUItemBase()
{
	UClass* Class = UItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreEquipPreconditionsMet", &UItemBase::execAreEquipPreconditionsMet },
		{ "CanStack", &UItemBase::execCanStack },
		{ "CanStackItem", &UItemBase::execCanStackItem },
		{ "Consume", &UItemBase::execConsume },
		{ "GetCurrentQuantity", &UItemBase::execGetCurrentQuantity },
		{ "GetEquipSlotIndex", &UItemBase::execGetEquipSlotIndex },
		{ "GetEquipSlotKey", &UItemBase::execGetEquipSlotKey },
		{ "GetItemData", &UItemBase::execGetItemData },
		{ "GetItemDescription", &UItemBase::execGetItemDescription },
		{ "GetItemFullName", &UItemBase::execGetItemFullName },
		{ "GetItemFullWeight", &UItemBase::execGetItemFullWeight },
		{ "GetItemIcon", &UItemBase::execGetItemIcon },
		{ "GetItemWeight", &UItemBase::execGetItemWeight },
		{ "HasEquipPermission", &UItemBase::execHasEquipPermission },
		{ "IsEquippable", &UItemBase::execIsEquippable },
		{ "IsEquipped", &UItemBase::execIsEquipped },
		{ "IsMaxStacked", &UItemBase::execIsMaxStacked },
		{ "IsStackable", &UItemBase::execIsStackable },
		{ "LoadItemMeshAsync", &UItemBase::execLoadItemMeshAsync },
		{ "LoadItemMeshSync", &UItemBase::execLoadItemMeshSync },
		{ "OnAdd", &UItemBase::execOnAdd },
		{ "OnConsume", &UItemBase::execOnConsume },
		{ "OnEquip", &UItemBase::execOnEquip },
		{ "OnInit", &UItemBase::execOnInit },
		{ "OnRemove", &UItemBase::execOnRemove },
		{ "OnUnequip", &UItemBase::execOnUnequip },
		{ "OnUse", &UItemBase::execOnUse },
		{ "Remove", &UItemBase::execRemove },
		{ "TryDrop", &UItemBase::execTryDrop },
		{ "TrySplitItem", &UItemBase::execTrySplitItem },
		{ "TryStackItem", &UItemBase::execTryStackItem },
		{ "Use", &UItemBase::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemBase;
UClass* UItemBase::GetPrivateStaticClass()
{
	using TClass = UItemBase;
	if (!Z_Registration_Info_UClass_UItemBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemBase"),
			Z_Registration_Info_UClass_UItemBase.InnerSingleton,
			StaticRegisterNativesUItemBase,
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
	return Z_Registration_Info_UClass_UItemBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemBase_NoRegister()
{
	return UItemBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/ItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUsed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemConsumed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemEquipped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUnequipped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemQuantityChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemMeshLoaded_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedInventory_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedEquipment_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQuantity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUsed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemConsumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemEquipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUnequipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemQuantityChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemMeshLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquipSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentQuantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBase_AreEquipPreconditionsMet, "AreEquipPreconditionsMet" }, // 26386241
		{ &Z_Construct_UFunction_UItemBase_CanStack, "CanStack" }, // 1888118367
		{ &Z_Construct_UFunction_UItemBase_CanStackItem, "CanStackItem" }, // 2690582057
		{ &Z_Construct_UFunction_UItemBase_Consume, "Consume" }, // 3722249683
		{ &Z_Construct_UFunction_UItemBase_GetCurrentQuantity, "GetCurrentQuantity" }, // 1491473798
		{ &Z_Construct_UFunction_UItemBase_GetEquipSlotIndex, "GetEquipSlotIndex" }, // 2015952362
		{ &Z_Construct_UFunction_UItemBase_GetEquipSlotKey, "GetEquipSlotKey" }, // 1967373443
		{ &Z_Construct_UFunction_UItemBase_GetItemData, "GetItemData" }, // 1929400798
		{ &Z_Construct_UFunction_UItemBase_GetItemDescription, "GetItemDescription" }, // 1726343388
		{ &Z_Construct_UFunction_UItemBase_GetItemFullName, "GetItemFullName" }, // 573001056
		{ &Z_Construct_UFunction_UItemBase_GetItemFullWeight, "GetItemFullWeight" }, // 1912892360
		{ &Z_Construct_UFunction_UItemBase_GetItemIcon, "GetItemIcon" }, // 167102974
		{ &Z_Construct_UFunction_UItemBase_GetItemWeight, "GetItemWeight" }, // 4226537582
		{ &Z_Construct_UFunction_UItemBase_HasEquipPermission, "HasEquipPermission" }, // 1787642514
		{ &Z_Construct_UFunction_UItemBase_IsEquippable, "IsEquippable" }, // 2945696013
		{ &Z_Construct_UFunction_UItemBase_IsEquipped, "IsEquipped" }, // 658750327
		{ &Z_Construct_UFunction_UItemBase_IsMaxStacked, "IsMaxStacked" }, // 2335651192
		{ &Z_Construct_UFunction_UItemBase_IsStackable, "IsStackable" }, // 618036129
		{ &Z_Construct_UFunction_UItemBase_LoadItemMeshAsync, "LoadItemMeshAsync" }, // 3431127967
		{ &Z_Construct_UFunction_UItemBase_LoadItemMeshSync, "LoadItemMeshSync" }, // 3689215964
		{ &Z_Construct_UFunction_UItemBase_OnAdd, "OnAdd" }, // 3370320373
		{ &Z_Construct_UFunction_UItemBase_OnConsume, "OnConsume" }, // 52353242
		{ &Z_Construct_UFunction_UItemBase_OnEquip, "OnEquip" }, // 3725815161
		{ &Z_Construct_UFunction_UItemBase_OnInit, "OnInit" }, // 3341981395
		{ &Z_Construct_UFunction_UItemBase_OnRemove, "OnRemove" }, // 1963330356
		{ &Z_Construct_UFunction_UItemBase_OnUnequip, "OnUnequip" }, // 607017968
		{ &Z_Construct_UFunction_UItemBase_OnUse, "OnUse" }, // 468585491
		{ &Z_Construct_UFunction_UItemBase_Remove, "Remove" }, // 2287711677
		{ &Z_Construct_UFunction_UItemBase_TryDrop, "TryDrop" }, // 408781997
		{ &Z_Construct_UFunction_UItemBase_TrySplitItem, "TrySplitItem" }, // 2580843954
		{ &Z_Construct_UFunction_UItemBase_TryStackItem, "TryStackItem" }, // 2006757076
		{ &Z_Construct_UFunction_UItemBase_Use, "Use" }, // 4203704443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemAdded), Z_Construct_UDelegateFunction_InventorySystem_OnItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 601063893
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemUsed = { "OnItemUsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemUsed), Z_Construct_UDelegateFunction_InventorySystem_OnItemUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUsed_MetaData), NewProp_OnItemUsed_MetaData) }; // 2323014843
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemConsumed = { "OnItemConsumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemConsumed), Z_Construct_UDelegateFunction_InventorySystem_OnItemConsumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemConsumed_MetaData), NewProp_OnItemConsumed_MetaData) }; // 25858546
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemRemoved), Z_Construct_UDelegateFunction_InventorySystem_OnItemRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoved_MetaData), NewProp_OnItemRemoved_MetaData) }; // 3009691357
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemEquipped = { "OnItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemEquipped), Z_Construct_UDelegateFunction_InventorySystem_OnItemEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemEquipped_MetaData), NewProp_OnItemEquipped_MetaData) }; // 957013957
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemUnequipped = { "OnItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemUnequipped), Z_Construct_UDelegateFunction_InventorySystem_OnItemUnequipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUnequipped_MetaData), NewProp_OnItemUnequipped_MetaData) }; // 4081091418
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemQuantityChanged = { "OnItemQuantityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemQuantityChanged), Z_Construct_UDelegateFunction_InventorySystem_OnItemQuantityChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemQuantityChanged_MetaData), NewProp_OnItemQuantityChanged_MetaData) }; // 3096559742
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemMeshLoaded = { "OnItemMeshLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OnItemMeshLoaded), Z_Construct_UDelegateFunction_InventorySystem_OnItemMeshLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemMeshLoaded_MetaData), NewProp_OnItemMeshLoaded_MetaData) }; // 3516361302
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_RelatedInventory = { "RelatedInventory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, RelatedInventory), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedInventory_MetaData), NewProp_RelatedInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_RelatedEquipment = { "RelatedEquipment", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, RelatedEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedEquipment_MetaData), NewProp_RelatedEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_EquipSlotIndex = { "EquipSlotIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, EquipSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotIndex_MetaData), NewProp_EquipSlotIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_CurrentQuantity = { "CurrentQuantity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, CurrentQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentQuantity_MetaData), NewProp_CurrentQuantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemWorldContext = { "ItemWorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemWorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWorldContext_MetaData), NewProp_ItemWorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemConsumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemQuantityChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OnItemMeshLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_RelatedInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_RelatedEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_EquipSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_CurrentQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemWorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
	&UItemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemBase()
{
	if (!Z_Registration_Info_UClass_UItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBase.OuterSingleton, Z_Construct_UClass_UItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
UItemBase::~UItemBase() {}
// ********** End Class UItemBase ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemBase, UItemBase::StaticClass, TEXT("UItemBase"), &Z_Registration_Info_UClass_UItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBase), 2096564066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h__Script_InventorySystem_680592863(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
