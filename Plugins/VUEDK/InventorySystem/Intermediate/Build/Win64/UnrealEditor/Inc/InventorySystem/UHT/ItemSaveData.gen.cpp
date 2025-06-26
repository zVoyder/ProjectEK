// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/Data/SaveData/ItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemSaveData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FItemSaveData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemSaveData;
class UScriptStruct* FItemSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSaveData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FItemSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/Data/SaveData/ItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "ItemSaveData" },
		{ "ModuleRelativePath", "Public/Base/Data/SaveData/ItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotIndex_MetaData[] = {
		{ "Category", "ItemSaveData" },
		{ "ModuleRelativePath", "Public/Base/Data/SaveData/ItemSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquipSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSaveData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSaveData, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSaveData_Statics::NewProp_EquipSlotIndex = { "EquipSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSaveData, EquipSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotIndex_MetaData), NewProp_EquipSlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSaveData_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSaveData_Statics::NewProp_EquipSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ItemSaveData",
	Z_Construct_UScriptStruct_FItemSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSaveData_Statics::PropPointers),
	sizeof(FItemSaveData),
	alignof(FItemSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FItemSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemSaveData.InnerSingleton, Z_Construct_UScriptStruct_FItemSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemSaveData.InnerSingleton;
}
// ********** End ScriptStruct FItemSaveData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_ItemSaveData_h__Script_InventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemSaveData::StaticStruct, Z_Construct_UScriptStruct_FItemSaveData_Statics::NewStructOps, TEXT("ItemSaveData"), &Z_Registration_Info_UScriptStruct_FItemSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemSaveData), 915502906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_ItemSaveData_h__Script_InventorySystem_2874120405(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_ItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_ItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
