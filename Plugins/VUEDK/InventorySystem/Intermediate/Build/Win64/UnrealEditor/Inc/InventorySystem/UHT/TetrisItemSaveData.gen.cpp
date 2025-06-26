// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/Data/SaveData/TetrisItemSaveData.h"
#include "Base/Data/SaveData/ItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisItemSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemSaveData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTetrisItemSaveData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTetrisItemSaveData;
class UScriptStruct* FTetrisItemSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetrisItemSaveData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("TetrisItemSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSaveData_MetaData[] = {
		{ "Category", "TetrisItemSaveData" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotPosition_MetaData[] = {
		{ "Category", "TetrisItemSaveData" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotated_MetaData[] = {
		{ "Category", "TetrisItemSaveData" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisItemSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSaveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPosition;
	static void NewProp_bIsRotated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetrisItemSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_ItemSaveData = { "ItemSaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetrisItemSaveData, ItemSaveData), Z_Construct_UScriptStruct_FItemSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSaveData_MetaData), NewProp_ItemSaveData_MetaData) }; // 915502906
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_SlotPosition = { "SlotPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetrisItemSaveData, SlotPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotPosition_MetaData), NewProp_SlotPosition_MetaData) };
void Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_bIsRotated_SetBit(void* Obj)
{
	((FTetrisItemSaveData*)Obj)->bIsRotated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTetrisItemSaveData), &Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRotated_MetaData), NewProp_bIsRotated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_ItemSaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_SlotPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewProp_bIsRotated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"TetrisItemSaveData",
	Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::PropPointers),
	sizeof(FTetrisItemSaveData),
	alignof(FTetrisItemSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.InnerSingleton, Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTetrisItemSaveData.InnerSingleton;
}
// ********** End ScriptStruct FTetrisItemSaveData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemSaveData_h__Script_InventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTetrisItemSaveData::StaticStruct, Z_Construct_UScriptStruct_FTetrisItemSaveData_Statics::NewStructOps, TEXT("TetrisItemSaveData"), &Z_Registration_Info_UScriptStruct_FTetrisItemSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetrisItemSaveData), 3253818996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemSaveData_h__Script_InventorySystem_3983129291(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
