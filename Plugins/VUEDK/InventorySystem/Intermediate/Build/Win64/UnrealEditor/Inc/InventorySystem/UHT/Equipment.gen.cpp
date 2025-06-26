// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Equipment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquipment() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnyItemEquipped ****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemEquipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipped_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipped_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemEquipped__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquipped, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemEquipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemEquipped_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.SlotIndex=SlotIndex;
	Parms.Item=Item;
	OnAnyItemEquipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemEquipped ******************************************************

// ********** Begin Delegate FOnAnyItemUnequipped **************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemUnequipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequipped_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequipped_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemUnequipped__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUnequipped, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemUnequipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemUnequipped_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.SlotIndex=SlotIndex;
	Parms.Item=Item;
	OnAnyItemUnequipped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemUnequipped ****************************************************

// ********** Begin Delegate FOnAnyItemEquippedNotify **********************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemEquippedNotify__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemEquippedNotify_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquippedNotify, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemEquippedNotify_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.SlotIndex=SlotIndex;
	Parms.Item=Item;
	OnAnyItemEquippedNotify.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemEquippedNotify ************************************************

// ********** Begin Delegate FOnAnyItemUnequippedNotify ********************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemUnequippedNotify__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemUnequippedNotify_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUnequippedNotify, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item)
{
	struct _Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
	_Script_InventorySystem_eventOnAnyItemUnequippedNotify_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.SlotIndex=SlotIndex;
	Parms.Item=Item;
	OnAnyItemUnequippedNotify.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemUnequippedNotify **********************************************

// ********** Begin Delegate FOnAnyItemEquipSlotChanged ********************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		int32 NewSlotIndex;
		int32 OldSlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_NewSlotIndex = { "NewSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms, NewSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_OldSlotIndex = { "OldSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms, OldSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_NewSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::NewProp_OldSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemEquipSlotChanged__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemEquipSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquipSlotChanged, UEquipSlotKey* EquipSlotKey, UItemBase* Item, int32 NewSlotIndex, int32 OldSlotIndex)
{
	struct _Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		int32 NewSlotIndex;
		int32 OldSlotIndex;
	};
	_Script_InventorySystem_eventOnAnyItemEquipSlotChanged_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.Item=Item;
	Parms.NewSlotIndex=NewSlotIndex;
	Parms.OldSlotIndex=OldSlotIndex;
	OnAnyItemEquipSlotChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemEquipSlotChanged **********************************************

// ********** Begin Delegate FOnAnyItemSwapWithInventoryItem ***************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		UItemBase* InventoryItem;
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms, InventoryItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_InventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnAnyItemSwapWithInventoryItem__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyItemSwapWithInventoryItem_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemSwapWithInventoryItem, UEquipSlotKey* EquipSlotKey, UItemBase* Item, UItemBase* InventoryItem, int32 SlotIndex)
{
	struct _Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		UItemBase* InventoryItem;
		int32 SlotIndex;
	};
	_Script_InventorySystem_eventOnAnyItemSwapWithInventoryItem_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.Item=Item;
	Parms.InventoryItem=InventoryItem;
	Parms.SlotIndex=SlotIndex;
	OnAnyItemSwapWithInventoryItem.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyItemSwapWithInventoryItem *****************************************

// ********** Begin Delegate FOnItemsSwitchedSlots *************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemsSwitchedSlots_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* ItemA;
		UItemBase* ItemB;
		int32 OldSlotIndexItemA;
		int32 OldSlotIndexItemB;
		int32 NewSlotIndexItemA;
		int32 NewSlotIndexItemB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, ItemA), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, ItemB), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_OldSlotIndexItemA = { "OldSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_OldSlotIndexItemB = { "OldSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_NewSlotIndexItemA = { "NewSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_NewSlotIndexItemB = { "NewSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_OldSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_OldSlotIndexItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_NewSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::NewProp_NewSlotIndexItemB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemsSwitchedSlots__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemsSwitchedSlots_DelegateWrapper(const FMulticastScriptDelegate& OnItemsSwitchedSlots, UEquipSlotKey* EquipSlotKey, UItemBase* ItemA, UItemBase* ItemB, int32 OldSlotIndexItemA, int32 OldSlotIndexItemB, int32 NewSlotIndexItemA, int32 NewSlotIndexItemB)
{
	struct _Script_InventorySystem_eventOnItemsSwitchedSlots_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* ItemA;
		UItemBase* ItemB;
		int32 OldSlotIndexItemA;
		int32 OldSlotIndexItemB;
		int32 NewSlotIndexItemA;
		int32 NewSlotIndexItemB;
	};
	_Script_InventorySystem_eventOnItemsSwitchedSlots_Parms Parms;
	Parms.EquipSlotKey=EquipSlotKey;
	Parms.ItemA=ItemA;
	Parms.ItemB=ItemB;
	Parms.OldSlotIndexItemA=OldSlotIndexItemA;
	Parms.OldSlotIndexItemB=OldSlotIndexItemB;
	Parms.NewSlotIndexItemA=NewSlotIndexItemA;
	Parms.NewSlotIndexItemB=NewSlotIndexItemB;
	OnItemsSwitchedSlots.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemsSwitchedSlots ***************************************************

// ********** Begin Delegate FOnEquipChanged *******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnEquipChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipChanged)
{
	OnEquipChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEquipChanged *********************************************************

// ********** Begin Delegate FOnEquipmentCleared ***************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnEquipmentCleared__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipmentCleared_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentCleared)
{
	OnEquipmentCleared.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEquipmentCleared *****************************************************

// ********** Begin Class UEquipment Function AreAllSlotsOfKeyOccupied *****************************
struct Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics
{
	struct Equipment_eventAreAllSlotsOfKeyOccupied_Parms
	{
		const UEquipSlotKey* TargetSlotKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlotKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSlotKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_TargetSlotKey = { "TargetSlotKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventAreAllSlotsOfKeyOccupied_Parms, TargetSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSlotKey_MetaData), NewProp_TargetSlotKey_MetaData) };
void Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Equipment_eventAreAllSlotsOfKeyOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventAreAllSlotsOfKeyOccupied_Parms), &Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_TargetSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "AreAllSlotsOfKeyOccupied", Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::Equipment_eventAreAllSlotsOfKeyOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::Equipment_eventAreAllSlotsOfKeyOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execAreAllSlotsOfKeyOccupied)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_TargetSlotKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreAllSlotsOfKeyOccupied(Z_Param_TargetSlotKey);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function AreAllSlotsOfKeyOccupied *******************************

// ********** Begin Class UEquipment Function ClearEquipment ***************************************
struct Z_Construct_UFunction_UEquipment_ClearEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_ClearEquipment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "ClearEquipment", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_ClearEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_ClearEquipment_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEquipment_ClearEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_ClearEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execClearEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearEquipment();
	P_NATIVE_END;
}
// ********** End Class UEquipment Function ClearEquipment *****************************************

// ********** Begin Class UEquipment Function FindEquippedItem *************************************
struct Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics
{
	struct Equipment_eventFindEquippedItem_Parms
	{
		const UEquipSlotKey* TargetSlotKey;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlotKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::NewProp_TargetSlotKey = { "TargetSlotKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventFindEquippedItem_Parms, TargetSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSlotKey_MetaData), NewProp_TargetSlotKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventFindEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::NewProp_TargetSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "FindEquippedItem", Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::Equipment_eventFindEquippedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::Equipment_eventFindEquippedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_FindEquippedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_FindEquippedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execFindEquippedItem)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_TargetSlotKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->FindEquippedItem(Z_Param_TargetSlotKey);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function FindEquippedItem ***************************************

// ********** Begin Class UEquipment Function FindEquippedItemAtIndex ******************************
struct Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics
{
	struct Equipment_eventFindEquippedItemAtIndex_Parms
	{
		const UEquipSlotKey* TargetSlotKey;
		int32 SlotIndex;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlotKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_TargetSlotKey = { "TargetSlotKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventFindEquippedItemAtIndex_Parms, TargetSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSlotKey_MetaData), NewProp_TargetSlotKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventFindEquippedItemAtIndex_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventFindEquippedItemAtIndex_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_TargetSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "FindEquippedItemAtIndex", Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::Equipment_eventFindEquippedItemAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::Equipment_eventFindEquippedItemAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execFindEquippedItemAtIndex)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_TargetSlotKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->FindEquippedItemAtIndex(Z_Param_TargetSlotKey,Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function FindEquippedItemAtIndex ********************************

// ********** Begin Class UEquipment Function GetEquippedItems *************************************
struct Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics
{
	struct Equipment_eventGetEquippedItems_Parms
	{
		TSet<UItemBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventGetEquippedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "GetEquippedItems", Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::Equipment_eventGetEquippedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::Equipment_eventGetEquippedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_GetEquippedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_GetEquippedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execGetEquippedItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UItemBase*>*)Z_Param__Result=P_THIS->GetEquippedItems();
	P_NATIVE_END;
}
// ********** End Class UEquipment Function GetEquippedItems ***************************************

// ********** Begin Class UEquipment Function OnEquipItem ******************************************
struct Equipment_eventOnEquipItem_Parms
{
	UEquipSlotKey* EquipSlotKey;
	UItemBase* Item;
};
static FName NAME_UEquipment_OnEquipItem = FName(TEXT("OnEquipItem"));
void UEquipment::OnEquipItem(UEquipSlotKey* EquipSlotKey, UItemBase* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipment_OnEquipItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Equipment_eventOnEquipItem_Parms Parms;
		Parms.EquipSlotKey=EquipSlotKey;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnEquipItem_Implementation(EquipSlotKey, Item);
	}
}
struct Z_Construct_UFunction_UEquipment_OnEquipItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnEquipItem_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnEquipItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "OnEquipItem", Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::PropPointers), sizeof(Equipment_eventOnEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Equipment_eventOnEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_OnEquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_OnEquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execOnEquipItem)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquipItem_Implementation(Z_Param_EquipSlotKey,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function OnEquipItem ********************************************

// ********** Begin Class UEquipment Function OnItemAddedToAnyInventory ****************************
struct Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics
{
	struct Equipment_eventOnItemAddedToAnyInventory_Parms
	{
		UItemBase* Item;
		UInventoryBase* Inventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnItemAddedToAnyInventory_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnItemAddedToAnyInventory_Parms, Inventory), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "OnItemAddedToAnyInventory", Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::Equipment_eventOnItemAddedToAnyInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::Equipment_eventOnItemAddedToAnyInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execOnItemAddedToAnyInventory)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(UInventoryBase,Z_Param_Inventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemAddedToAnyInventory(Z_Param_Item,Z_Param_Inventory);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function OnItemAddedToAnyInventory ******************************

// ********** Begin Class UEquipment Function OnUnequipItem ****************************************
struct Equipment_eventOnUnequipItem_Parms
{
	UEquipSlotKey* EquipSlotKey;
	UItemBase* Item;
};
static FName NAME_UEquipment_OnUnequipItem = FName(TEXT("OnUnequipItem"));
void UEquipment::OnUnequipItem(UEquipSlotKey* EquipSlotKey, UItemBase* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipment_OnUnequipItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Equipment_eventOnUnequipItem_Parms Parms;
		Parms.EquipSlotKey=EquipSlotKey;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnUnequipItem_Implementation(EquipSlotKey, Item);
	}
}
struct Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnUnequipItem_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventOnUnequipItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "OnUnequipItem", Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::PropPointers), sizeof(Equipment_eventOnUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Equipment_eventOnUnequipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_OnUnequipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_OnUnequipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execOnUnequipItem)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnequipItem_Implementation(Z_Param_EquipSlotKey,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function OnUnequipItem ******************************************

// ********** Begin Class UEquipment Function TryEquipItem *****************************************
struct Z_Construct_UFunction_UEquipment_TryEquipItem_Statics
{
	struct Equipment_eventTryEquipItem_Parms
	{
		UItemBase* Item;
		UEquipSlotKey* TargetSlotKey;
		int32 SlotIndex;
		bool bAllowSwapWithInventoryItem;
		bool bNotifyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bAllowSwapWithInventoryItem", "true" },
		{ "CPP_Default_bNotifyEvent", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static void NewProp_bAllowSwapWithInventoryItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSwapWithInventoryItem;
	static void NewProp_bNotifyEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryEquipItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_TargetSlotKey = { "TargetSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryEquipItem_Parms, TargetSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryEquipItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bAllowSwapWithInventoryItem_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItem_Parms*)Obj)->bAllowSwapWithInventoryItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bAllowSwapWithInventoryItem = { "bAllowSwapWithInventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItem_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bAllowSwapWithInventoryItem_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bNotifyEvent_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItem_Parms*)Obj)->bNotifyEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bNotifyEvent = { "bNotifyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItem_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bNotifyEvent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItem_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_TargetSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bAllowSwapWithInventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_bNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "TryEquipItem", Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::Equipment_eventTryEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::Equipment_eventTryEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_TryEquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_TryEquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execTryEquipItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(UEquipSlotKey,Z_Param_TargetSlotKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_UBOOL(Z_Param_bAllowSwapWithInventoryItem);
	P_GET_UBOOL(Z_Param_bNotifyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryEquipItem(Z_Param_Item,Z_Param_TargetSlotKey,Z_Param_SlotIndex,Z_Param_bAllowSwapWithInventoryItem,Z_Param_bNotifyEvent);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function TryEquipItem *******************************************

// ********** Begin Class UEquipment Function TryEquipItemToAvailableSlot **************************
struct Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics
{
	struct Equipment_eventTryEquipItemToAvailableSlot_Parms
	{
		UItemBase* Item;
		int32 SwapPriority;
		bool bAllowSwapWithInventoryItem;
		bool bNotifyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bAllowSwapWithInventoryItem", "true" },
		{ "CPP_Default_bNotifyEvent", "true" },
		{ "CPP_Default_SwapPriority", "0" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwapPriority;
	static void NewProp_bAllowSwapWithInventoryItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSwapWithInventoryItem;
	static void NewProp_bNotifyEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryEquipItemToAvailableSlot_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_SwapPriority = { "SwapPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryEquipItemToAvailableSlot_Parms, SwapPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapPriority_MetaData), NewProp_SwapPriority_MetaData) };
void Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bAllowSwapWithInventoryItem_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItemToAvailableSlot_Parms*)Obj)->bAllowSwapWithInventoryItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bAllowSwapWithInventoryItem = { "bAllowSwapWithInventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItemToAvailableSlot_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bAllowSwapWithInventoryItem_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bNotifyEvent_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItemToAvailableSlot_Parms*)Obj)->bNotifyEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bNotifyEvent = { "bNotifyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItemToAvailableSlot_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bNotifyEvent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Equipment_eventTryEquipItemToAvailableSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryEquipItemToAvailableSlot_Parms), &Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_SwapPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bAllowSwapWithInventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_bNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "TryEquipItemToAvailableSlot", Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::Equipment_eventTryEquipItemToAvailableSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::Equipment_eventTryEquipItemToAvailableSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execTryEquipItemToAvailableSlot)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_SwapPriority);
	P_GET_UBOOL(Z_Param_bAllowSwapWithInventoryItem);
	P_GET_UBOOL(Z_Param_bNotifyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryEquipItemToAvailableSlot(Z_Param_Item,Z_Param_SwapPriority,Z_Param_bAllowSwapWithInventoryItem,Z_Param_bNotifyEvent);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function TryEquipItemToAvailableSlot ****************************

// ********** Begin Class UEquipment Function TryUnequipItem ***************************************
struct Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics
{
	struct Equipment_eventTryUnequipItem_Parms
	{
		UItemBase* Item;
		bool bNotifyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bNotifyEvent", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_bNotifyEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventTryUnequipItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_bNotifyEvent_SetBit(void* Obj)
{
	((Equipment_eventTryUnequipItem_Parms*)Obj)->bNotifyEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_bNotifyEvent = { "bNotifyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryUnequipItem_Parms), &Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_bNotifyEvent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Equipment_eventTryUnequipItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Equipment_eventTryUnequipItem_Parms), &Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_bNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipment, nullptr, "TryUnequipItem", Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::Equipment_eventTryUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::Equipment_eventTryUnequipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipment_TryUnequipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipment_TryUnequipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipment::execTryUnequipItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_UBOOL(Z_Param_bNotifyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryUnequipItem(Z_Param_Item,Z_Param_bNotifyEvent);
	P_NATIVE_END;
}
// ********** End Class UEquipment Function TryUnequipItem *****************************************

// ********** Begin Class UEquipment ***************************************************************
void UEquipment::StaticRegisterNativesUEquipment()
{
	UClass* Class = UEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreAllSlotsOfKeyOccupied", &UEquipment::execAreAllSlotsOfKeyOccupied },
		{ "ClearEquipment", &UEquipment::execClearEquipment },
		{ "FindEquippedItem", &UEquipment::execFindEquippedItem },
		{ "FindEquippedItemAtIndex", &UEquipment::execFindEquippedItemAtIndex },
		{ "GetEquippedItems", &UEquipment::execGetEquippedItems },
		{ "OnEquipItem", &UEquipment::execOnEquipItem },
		{ "OnItemAddedToAnyInventory", &UEquipment::execOnItemAddedToAnyInventory },
		{ "OnUnequipItem", &UEquipment::execOnUnequipItem },
		{ "TryEquipItem", &UEquipment::execTryEquipItem },
		{ "TryEquipItemToAvailableSlot", &UEquipment::execTryEquipItemToAvailableSlot },
		{ "TryUnequipItem", &UEquipment::execTryUnequipItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEquipment;
UClass* UEquipment::GetPrivateStaticClass()
{
	using TClass = UEquipment;
	if (!Z_Registration_Info_UClass_UEquipment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Equipment"),
			Z_Registration_Info_UClass_UEquipment.InnerSingleton,
			StaticRegisterNativesUEquipment,
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
	return Z_Registration_Info_UClass_UEquipment.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquipment_NoRegister()
{
	return UEquipment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EquipmentSystem/Equipment.h" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemEquipNotify_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is notified to be equipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is notified to be equipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemUnequipNotify_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is notified to be unequipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is notified to be unequipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemEquipped_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is equipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is equipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemUnequipped_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is unequipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is unequipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemEquipSlotChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is equipped and has changed its slot with an empty one.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is equipped and has changed its slot with an empty one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemsSwitchedSlots_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when two items have switched slots.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when two items have switched slots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyItemSwapWithInventoryItem_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an item is swapped with an item in the inventory.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an item is swapped with an item in the inventory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Generic event called when equipment has changed its state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Generic event called when equipment has changed its state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentCleared_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when equipment is cleared.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when equipment is cleared." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotLimits_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemEquipNotify;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemUnequipNotify;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemEquipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemUnequipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemEquipSlotChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemsSwitchedSlots;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyItemSwapWithInventoryItem;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentCleared;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotLimits_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotLimits_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlotLimits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipment_AreAllSlotsOfKeyOccupied, "AreAllSlotsOfKeyOccupied" }, // 1813097509
		{ &Z_Construct_UFunction_UEquipment_ClearEquipment, "ClearEquipment" }, // 226595429
		{ &Z_Construct_UFunction_UEquipment_FindEquippedItem, "FindEquippedItem" }, // 616518259
		{ &Z_Construct_UFunction_UEquipment_FindEquippedItemAtIndex, "FindEquippedItemAtIndex" }, // 1548961405
		{ &Z_Construct_UFunction_UEquipment_GetEquippedItems, "GetEquippedItems" }, // 1031016601
		{ &Z_Construct_UFunction_UEquipment_OnEquipItem, "OnEquipItem" }, // 105762533
		{ &Z_Construct_UFunction_UEquipment_OnItemAddedToAnyInventory, "OnItemAddedToAnyInventory" }, // 3778021206
		{ &Z_Construct_UFunction_UEquipment_OnUnequipItem, "OnUnequipItem" }, // 277881123
		{ &Z_Construct_UFunction_UEquipment_TryEquipItem, "TryEquipItem" }, // 4147116546
		{ &Z_Construct_UFunction_UEquipment_TryEquipItemToAvailableSlot, "TryEquipItemToAvailableSlot" }, // 64536844
		{ &Z_Construct_UFunction_UEquipment_TryUnequipItem, "TryUnequipItem" }, // 363039943
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipNotify = { "OnAnyItemEquipNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemEquipNotify), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquippedNotify__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemEquipNotify_MetaData), NewProp_OnAnyItemEquipNotify_MetaData) }; // 1016550510
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemUnequipNotify = { "OnAnyItemUnequipNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemUnequipNotify), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequippedNotify__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemUnequipNotify_MetaData), NewProp_OnAnyItemUnequipNotify_MetaData) }; // 1471359617
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipped = { "OnAnyItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemEquipped), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemEquipped_MetaData), NewProp_OnAnyItemEquipped_MetaData) }; // 2120841446
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemUnequipped = { "OnAnyItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemUnequipped), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemUnequipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemUnequipped_MetaData), NewProp_OnAnyItemUnequipped_MetaData) }; // 1993986978
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipSlotChanged = { "OnAnyItemEquipSlotChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemEquipSlotChanged), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemEquipSlotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemEquipSlotChanged_MetaData), NewProp_OnAnyItemEquipSlotChanged_MetaData) }; // 368313778
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnItemsSwitchedSlots = { "OnItemsSwitchedSlots", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnItemsSwitchedSlots), Z_Construct_UDelegateFunction_InventorySystem_OnItemsSwitchedSlots__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemsSwitchedSlots_MetaData), NewProp_OnItemsSwitchedSlots_MetaData) }; // 599114989
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemSwapWithInventoryItem = { "OnAnyItemSwapWithInventoryItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnAnyItemSwapWithInventoryItem), Z_Construct_UDelegateFunction_InventorySystem_OnAnyItemSwapWithInventoryItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyItemSwapWithInventoryItem_MetaData), NewProp_OnAnyItemSwapWithInventoryItem_MetaData) }; // 3012154000
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnEquipChanged = { "OnEquipChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnEquipChanged), Z_Construct_UDelegateFunction_InventorySystem_OnEquipChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipChanged_MetaData), NewProp_OnEquipChanged_MetaData) }; // 496030421
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_OnEquipmentCleared = { "OnEquipmentCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, OnEquipmentCleared), Z_Construct_UDelegateFunction_InventorySystem_OnEquipmentCleared__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipmentCleared_MetaData), NewProp_OnEquipmentCleared_MetaData) }; // 2182160267
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits_ValueProp = { "SlotLimits", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits_Key_KeyProp = { "SlotLimits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits = { "SlotLimits", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipment, SlotLimits), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotLimits_MetaData), NewProp_SlotLimits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemUnequipNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemEquipSlotChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnItemsSwitchedSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnAnyItemSwapWithInventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnEquipChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_OnEquipmentCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipment_Statics::NewProp_SlotLimits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipment_Statics::ClassParams = {
	&UEquipment::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipment()
{
	if (!Z_Registration_Info_UClass_UEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipment.OuterSingleton, Z_Construct_UClass_UEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipment.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipment);
UEquipment::~UEquipment() {}
// ********** End Class UEquipment *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipment, UEquipment::StaticClass, TEXT("UEquipment"), &Z_Registration_Info_UClass_UEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipment), 4189612009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h__Script_InventorySystem_2779734582(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
