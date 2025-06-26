// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/ISInventoriesUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeISInventoriesUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISInventoriesUtility();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISInventoriesUtility_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UISInventoriesUtility Function DropItemWithOperation *********************
struct Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics
{
	struct ISInventoriesUtility_eventDropItemWithOperation_Parms
	{
		UItemBase* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Drops an item using the drop operation defined in the settings.\n\x09 * @param Item The item to drop.\n\x09 * @return True if the item was dropped successfully, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Drops an item using the drop operation defined in the settings.\n@param Item The item to drop.\n@return True if the item was dropped successfully, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventDropItemWithOperation_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ISInventoriesUtility_eventDropItemWithOperation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ISInventoriesUtility_eventDropItemWithOperation_Parms), &Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "DropItemWithOperation", Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::ISInventoriesUtility_eventDropItemWithOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::ISInventoriesUtility_eventDropItemWithOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execDropItemWithOperation)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UISInventoriesUtility::DropItemWithOperation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function DropItemWithOperation ***********************

// ********** Begin Class UISInventoriesUtility Function GetInventoriesManager *********************
struct Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics
{
	struct ISInventoriesUtility_eventGetInventoriesManager_Parms
	{
		UInventoriesManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventGetInventoriesManager_Parms, ReturnValue), Z_Construct_UClass_UInventoriesManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "GetInventoriesManager", Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::ISInventoriesUtility_eventGetInventoriesManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::ISInventoriesUtility_eventGetInventoriesManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execGetInventoriesManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoriesManager**)Z_Param__Result=UISInventoriesUtility::GetInventoriesManager();
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function GetInventoriesManager ***********************

// ********** Begin Class UISInventoriesUtility Function GetItemDataFromRegistry *******************
struct Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics
{
	struct ISInventoriesUtility_eventGetItemDataFromRegistry_Parms
	{
		FGuid ItemDataID;
		UItemDataBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::NewProp_ItemDataID = { "ItemDataID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventGetItemDataFromRegistry_Parms, ItemDataID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataID_MetaData), NewProp_ItemDataID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventGetItemDataFromRegistry_Parms, ReturnValue), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::NewProp_ItemDataID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "GetItemDataFromRegistry", Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::ISInventoriesUtility_eventGetItemDataFromRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::ISInventoriesUtility_eventGetItemDataFromRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execGetItemDataFromRegistry)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemDataID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemDataBase**)Z_Param__Result=UISInventoriesUtility::GetItemDataFromRegistry(Z_Param_Out_ItemDataID);
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function GetItemDataFromRegistry *********************

// ********** Begin Class UISInventoriesUtility Function GetRegistry *******************************
struct Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics
{
	struct ISInventoriesUtility_eventGetRegistry_Parms
	{
		UItemsRegistry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventGetRegistry_Parms, ReturnValue), Z_Construct_UClass_UItemsRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "GetRegistry", Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::ISInventoriesUtility_eventGetRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::ISInventoriesUtility_eventGetRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_GetRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_GetRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execGetRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemsRegistry**)Z_Param__Result=UISInventoriesUtility::GetRegistry();
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function GetRegistry *********************************

// ********** Begin Class UISInventoriesUtility Function GetTargetInventory ************************
struct Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics
{
	struct ISInventoriesUtility_eventGetTargetInventory_Parms
	{
		UInventoryBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the target inventory set by SetTargetInventory.\n\x09 * @return The target inventory.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the target inventory set by SetTargetInventory.\n@return The target inventory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventGetTargetInventory_Parms, ReturnValue), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "GetTargetInventory", Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::ISInventoriesUtility_eventGetTargetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::ISInventoriesUtility_eventGetTargetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execGetTargetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoryBase**)Z_Param__Result=UISInventoriesUtility::GetTargetInventory();
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function GetTargetInventory **************************

// ********** Begin Class UISInventoriesUtility Function IsItemInRegistry **************************
struct Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics
{
	struct ISInventoriesUtility_eventIsItemInRegistry_Parms
	{
		const UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventIsItemInRegistry_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
void Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ISInventoriesUtility_eventIsItemInRegistry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ISInventoriesUtility_eventIsItemInRegistry_Parms), &Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "IsItemInRegistry", Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::ISInventoriesUtility_eventIsItemInRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::ISInventoriesUtility_eventIsItemInRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execIsItemInRegistry)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UISInventoriesUtility::IsItemInRegistry(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function IsItemInRegistry ****************************

// ********** Begin Class UISInventoriesUtility Function SetTargetInventory ************************
struct Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics
{
	struct ISInventoriesUtility_eventSetTargetInventory_Parms
	{
		UInventoryBase* Inventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tetris Inventory System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Sets the target inventory for the utility functions, used to perform equip and unequip actions so the item knows where to go.\n\x09 * @param Inventory The inventory to set as target.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the target inventory for the utility functions, used to perform equip and unequip actions so the item knows where to go.\n@param Inventory The inventory to set as target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISInventoriesUtility_eventSetTargetInventory_Parms, Inventory), Z_Construct_UClass_UInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISInventoriesUtility, nullptr, "SetTargetInventory", Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::ISInventoriesUtility_eventSetTargetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::ISInventoriesUtility_eventSetTargetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISInventoriesUtility::execSetTargetInventory)
{
	P_GET_OBJECT(UInventoryBase,Z_Param_Inventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	UISInventoriesUtility::SetTargetInventory(Z_Param_Inventory);
	P_NATIVE_END;
}
// ********** End Class UISInventoriesUtility Function SetTargetInventory **************************

// ********** Begin Class UISInventoriesUtility ****************************************************
void UISInventoriesUtility::StaticRegisterNativesUISInventoriesUtility()
{
	UClass* Class = UISInventoriesUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItemWithOperation", &UISInventoriesUtility::execDropItemWithOperation },
		{ "GetInventoriesManager", &UISInventoriesUtility::execGetInventoriesManager },
		{ "GetItemDataFromRegistry", &UISInventoriesUtility::execGetItemDataFromRegistry },
		{ "GetRegistry", &UISInventoriesUtility::execGetRegistry },
		{ "GetTargetInventory", &UISInventoriesUtility::execGetTargetInventory },
		{ "IsItemInRegistry", &UISInventoriesUtility::execIsItemInRegistry },
		{ "SetTargetInventory", &UISInventoriesUtility::execSetTargetInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UISInventoriesUtility;
UClass* UISInventoriesUtility::GetPrivateStaticClass()
{
	using TClass = UISInventoriesUtility;
	if (!Z_Registration_Info_UClass_UISInventoriesUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ISInventoriesUtility"),
			Z_Registration_Info_UClass_UISInventoriesUtility.InnerSingleton,
			StaticRegisterNativesUISInventoriesUtility,
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
	return Z_Registration_Info_UClass_UISInventoriesUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UISInventoriesUtility_NoRegister()
{
	return UISInventoriesUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UISInventoriesUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/ISInventoriesUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/ISInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UISInventoriesUtility_DropItemWithOperation, "DropItemWithOperation" }, // 3781823460
		{ &Z_Construct_UFunction_UISInventoriesUtility_GetInventoriesManager, "GetInventoriesManager" }, // 3229734634
		{ &Z_Construct_UFunction_UISInventoriesUtility_GetItemDataFromRegistry, "GetItemDataFromRegistry" }, // 1971914705
		{ &Z_Construct_UFunction_UISInventoriesUtility_GetRegistry, "GetRegistry" }, // 198275702
		{ &Z_Construct_UFunction_UISInventoriesUtility_GetTargetInventory, "GetTargetInventory" }, // 3109911961
		{ &Z_Construct_UFunction_UISInventoriesUtility_IsItemInRegistry, "IsItemInRegistry" }, // 2816554292
		{ &Z_Construct_UFunction_UISInventoriesUtility_SetTargetInventory, "SetTargetInventory" }, // 1831496819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISInventoriesUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UISInventoriesUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISInventoriesUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISInventoriesUtility_Statics::ClassParams = {
	&UISInventoriesUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISInventoriesUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UISInventoriesUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISInventoriesUtility()
{
	if (!Z_Registration_Info_UClass_UISInventoriesUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISInventoriesUtility.OuterSingleton, Z_Construct_UClass_UISInventoriesUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISInventoriesUtility.OuterSingleton;
}
UISInventoriesUtility::UISInventoriesUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISInventoriesUtility);
UISInventoriesUtility::~UISInventoriesUtility() {}
// ********** End Class UISInventoriesUtility ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UISInventoriesUtility, UISInventoriesUtility::StaticClass, TEXT("UISInventoriesUtility"), &Z_Registration_Info_UClass_UISInventoriesUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISInventoriesUtility), 1408042831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h__Script_InventorySystem_404752190(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
