// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/Data/SaveData/TetrisItemsSaveArray.h"
#include "TetrisInventory/Data/SaveData/TetrisItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisItemsSaveArray() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemSaveData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemsSaveArray();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTetrisItemsSaveArray *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray;
class UScriptStruct* FTetrisItemsSaveArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetrisItemsSaveArray, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("TetrisItemsSaveArray"));
	}
	return Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemsSaveArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "TetrisItemsSaveArray" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemsSaveArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetrisItemsSaveArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTetrisItemSaveData, METADATA_PARAMS(0, nullptr) }; // 3253818996
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetrisItemsSaveArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 3253818996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"TetrisItemsSaveArray",
	Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::PropPointers),
	sizeof(FTetrisItemsSaveArray),
	alignof(FTetrisItemsSaveArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemsSaveArray()
{
	if (!Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.InnerSingleton, Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray.InnerSingleton;
}
// ********** End ScriptStruct FTetrisItemsSaveArray ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemsSaveArray_h__Script_InventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTetrisItemsSaveArray::StaticStruct, Z_Construct_UScriptStruct_FTetrisItemsSaveArray_Statics::NewStructOps, TEXT("TetrisItemsSaveArray"), &Z_Registration_Info_UScriptStruct_FTetrisItemsSaveArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetrisItemsSaveArray), 2603913265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemsSaveArray_h__Script_InventorySystem_1279289258(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemsSaveArray_h__Script_InventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemsSaveArray_h__Script_InventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
