// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/Data/SaveData/ClassicItemSaveData.h"
#include "Base/Data/SaveData/ItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicItemSaveData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSaveData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSaveData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FClassicItemSaveData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClassicItemSaveData;
class UScriptStruct* FClassicItemSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicItemSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClassicItemSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassicItemSaveData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ClassicItemSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FClassicItemSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FClassicItemSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/SaveData/ClassicItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSaveData_MetaData[] = {
		{ "Category", "ClassicItemSaveData" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/SaveData/ClassicItemSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassicItemSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::NewProp_ItemSaveData = { "ItemSaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicItemSaveData, ItemSaveData), Z_Construct_UScriptStruct_FItemSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSaveData_MetaData), NewProp_ItemSaveData_MetaData) }; // 915502906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::NewProp_ItemSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ClassicItemSaveData",
	Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::PropPointers),
	sizeof(FClassicItemSaveData),
	alignof(FClassicItemSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicItemSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClassicItemSaveData.InnerSingleton, Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FClassicItemSaveData.InnerSingleton;
}
// ********** End ScriptStruct FClassicItemSaveData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicItemSaveData_h__Script_InventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClassicItemSaveData::StaticStruct, Z_Construct_UScriptStruct_FClassicItemSaveData_Statics::NewStructOps, TEXT("ClassicItemSaveData"), &Z_Registration_Info_UScriptStruct_FClassicItemSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassicItemSaveData), 90916714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicItemSaveData_h__Script_InventorySystem_2353079273(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicItemSaveData_h__Script_InventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
