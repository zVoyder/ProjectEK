// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/RPGItemSaveData.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"
#include "TetrisInventory/Data/SaveData/TetrisItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemVisualDetails();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGItemSaveData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGItemSaveData;
class UScriptStruct* FRPGItemSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGItemSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItemSaveData, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGItemSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGItemSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetrisItemSaveData_MetaData[] = {
		{ "Category", "RPGItemSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityID_MetaData[] = {
		{ "Category", "RPGItemSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualDetails_MetaData[] = {
		{ "Category", "RPGItemSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGItemSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetrisItemSaveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RarityID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItemSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_TetrisItemSaveData = { "TetrisItemSaveData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemSaveData, TetrisItemSaveData), Z_Construct_UScriptStruct_FTetrisItemSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetrisItemSaveData_MetaData), NewProp_TetrisItemSaveData_MetaData) }; // 3253818996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_RarityID = { "RarityID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemSaveData, RarityID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityID_MetaData), NewProp_RarityID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_VisualDetails = { "VisualDetails", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemSaveData, VisualDetails), Z_Construct_UScriptStruct_FRPGItemVisualDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualDetails_MetaData), NewProp_VisualDetails_MetaData) }; // 191893739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_TetrisItemSaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_RarityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewProp_VisualDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGItemSaveData",
	Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::PropPointers),
	sizeof(FRPGItemSaveData),
	alignof(FRPGItemSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGItemSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemSaveData.InnerSingleton;
}
// ********** End ScriptStruct FRPGItemSaveData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGItemSaveData_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGItemSaveData::StaticStruct, Z_Construct_UScriptStruct_FRPGItemSaveData_Statics::NewStructOps, TEXT("RPGItemSaveData"), &Z_Registration_Info_UScriptStruct_FRPGItemSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGItemSaveData), 2032670270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGItemSaveData_h__Script_RPGSystem_665997990(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGItemSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGItemSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
