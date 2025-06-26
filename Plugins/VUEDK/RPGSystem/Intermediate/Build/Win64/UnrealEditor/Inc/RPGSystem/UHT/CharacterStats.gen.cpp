// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/CharacterStats/CharacterStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterStats() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterStats();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterStats Function Init ********************************************
struct Z_Construct_UFunction_UCharacterStats_Init_Statics
{
	struct CharacterStats_eventInit_Parms
	{
		UEquipment* InEquipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEquipment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEquipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_Init_Statics::NewProp_InEquipment = { "InEquipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventInit_Parms, InEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEquipment_MetaData), NewProp_InEquipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStats_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_Init_Statics::NewProp_InEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStats_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStats, nullptr, "Init", Z_Construct_UFunction_UCharacterStats_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStats_Init_Statics::CharacterStats_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStats_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStats_Init_Statics::CharacterStats_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStats_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStats_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStats::execInit)
{
	P_GET_OBJECT(UEquipment,Z_Param_InEquipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InEquipment);
	P_NATIVE_END;
}
// ********** End Class UCharacterStats Function Init **********************************************

// ********** Begin Class UCharacterStats Function OnItemEquippedOrUnequipped **********************
struct Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics
{
	struct CharacterStats_eventOnItemEquippedOrUnequipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* ItemBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemEquippedOrUnequipped_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemEquippedOrUnequipped_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemEquippedOrUnequipped_Parms, ItemBase), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::NewProp_ItemBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStats, nullptr, "OnItemEquippedOrUnequipped", Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::CharacterStats_eventOnItemEquippedOrUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::CharacterStats_eventOnItemEquippedOrUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStats::execOnItemEquippedOrUnequipped)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(UItemBase,Z_Param_ItemBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemEquippedOrUnequipped(Z_Param_EquipSlotKey,Z_Param_SlotIndex,Z_Param_ItemBase);
	P_NATIVE_END;
}
// ********** End Class UCharacterStats Function OnItemEquippedOrUnequipped ************************

// ********** Begin Class UCharacterStats Function OnItemsSwitchedSlots ****************************
struct Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics
{
	struct CharacterStats_eventOnItemsSwitchedSlots_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* ItemBaseA;
		UItemBase* ItemBaseB;
		int32 OldSlotIndexItemA;
		int32 OldSlotIndexItemB;
		int32 NewSlotIndexItemA;
		int32 NewSlotIndexItemB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBaseA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBaseB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_ItemBaseA = { "ItemBaseA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, ItemBaseA), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_ItemBaseB = { "ItemBaseB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, ItemBaseB), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemA = { "OldSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemB = { "OldSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemA = { "NewSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemB = { "NewSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_ItemBaseA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_ItemBaseB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStats, nullptr, "OnItemsSwitchedSlots", Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::CharacterStats_eventOnItemsSwitchedSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::CharacterStats_eventOnItemsSwitchedSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStats::execOnItemsSwitchedSlots)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_ItemBaseA);
	P_GET_OBJECT(UItemBase,Z_Param_ItemBaseB);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSlotIndexItemA);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSlotIndexItemB);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotIndexItemA);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotIndexItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemsSwitchedSlots(Z_Param_EquipSlotKey,Z_Param_ItemBaseA,Z_Param_ItemBaseB,Z_Param_OldSlotIndexItemA,Z_Param_OldSlotIndexItemB,Z_Param_NewSlotIndexItemA,Z_Param_NewSlotIndexItemB);
	P_NATIVE_END;
}
// ********** End Class UCharacterStats Function OnItemsSwitchedSlots ******************************

// ********** Begin Class UCharacterStats Function OnItemSwappedWithInventoryItem ******************
struct Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics
{
	struct CharacterStats_eventOnItemSwappedWithInventoryItem_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		UItemBase* InventoryItem;
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemSwappedWithInventoryItem_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemSwappedWithInventoryItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemSwappedWithInventoryItem_Parms, InventoryItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterStats_eventOnItemSwappedWithInventoryItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_InventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterStats, nullptr, "OnItemSwappedWithInventoryItem", Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::CharacterStats_eventOnItemSwappedWithInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::CharacterStats_eventOnItemSwappedWithInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterStats::execOnItemSwappedWithInventoryItem)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(UItemBase,Z_Param_InventoryItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSwappedWithInventoryItem(Z_Param_EquipSlotKey,Z_Param_Item,Z_Param_InventoryItem,Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UCharacterStats Function OnItemSwappedWithInventoryItem ********************

// ********** Begin Class UCharacterStats **********************************************************
void UCharacterStats::StaticRegisterNativesUCharacterStats()
{
	UClass* Class = UCharacterStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Init", &UCharacterStats::execInit },
		{ "OnItemEquippedOrUnequipped", &UCharacterStats::execOnItemEquippedOrUnequipped },
		{ "OnItemsSwitchedSlots", &UCharacterStats::execOnItemsSwitchedSlots },
		{ "OnItemSwappedWithInventoryItem", &UCharacterStats::execOnItemSwappedWithInventoryItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterStats;
UClass* UCharacterStats::GetPrivateStaticClass()
{
	using TClass = UCharacterStats;
	if (!Z_Registration_Info_UClass_UCharacterStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterStats"),
			Z_Registration_Info_UClass_UCharacterStats.InnerSingleton,
			StaticRegisterNativesUCharacterStats,
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
	return Z_Registration_Info_UClass_UCharacterStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterStats_NoRegister()
{
	return UCharacterStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatsSystem/CharacterStats/CharacterStats.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterStats_Init, "Init" }, // 2379210025
		{ &Z_Construct_UFunction_UCharacterStats_OnItemEquippedOrUnequipped, "OnItemEquippedOrUnequipped" }, // 637671524
		{ &Z_Construct_UFunction_UCharacterStats_OnItemsSwitchedSlots, "OnItemsSwitchedSlots" }, // 4159139886
		{ &Z_Construct_UFunction_UCharacterStats_OnItemSwappedWithInventoryItem, "OnItemSwappedWithInventoryItem" }, // 3541946436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStats_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterStats, Equipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStats_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatsBridgeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStats_Statics::ClassParams = {
	&UCharacterStats::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStats()
{
	if (!Z_Registration_Info_UClass_UCharacterStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStats.OuterSingleton, Z_Construct_UClass_UCharacterStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStats);
UCharacterStats::~UCharacterStats() {}
// ********** End Class UCharacterStats ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStats, UCharacterStats::StaticClass, TEXT("UCharacterStats"), &Z_Registration_Info_UClass_UCharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStats), 2036606315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h__Script_RPGSystem_467976763(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
