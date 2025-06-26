// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/RPGInventoryItemsSaveData.h"
#include "RPGInventory/Data/SaveData/SaveArrays/RPGGearItemsSaveArray.h"
#include "RPGInventory/Data/SaveData/SaveArrays/RPGItemsSaveArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventoryItemsSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemsSaveArray();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemsSaveArray();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGInventoryItemsSaveData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData;
class UScriptStruct* FRPGInventoryItemsSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGInventoryItemsSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGInventoryItemsSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericItems_MetaData[] = {
		{ "Category", "RPGInventoryItemsSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGInventoryItemsSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearItems_MetaData[] = {
		{ "Category", "RPGInventoryItemsSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGInventoryItemsSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenericItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenericItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GenericItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GearItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GearItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GearItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGInventoryItemsSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems_ValueProp = { "GenericItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRPGItemsSaveArray, METADATA_PARAMS(0, nullptr) }; // 3161662430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems_Key_KeyProp = { "GenericItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems = { "GenericItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInventoryItemsSaveData, GenericItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericItems_MetaData), NewProp_GenericItems_MetaData) }; // 3161662430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems_ValueProp = { "GearItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRPGGearItemsSaveArray, METADATA_PARAMS(0, nullptr) }; // 3767312714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems_Key_KeyProp = { "GearItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems = { "GearItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInventoryItemsSaveData, GearItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearItems_MetaData), NewProp_GearItems_MetaData) }; // 3767312714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GenericItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewProp_GearItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGInventoryItemsSaveData",
	Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::PropPointers),
	sizeof(FRPGInventoryItemsSaveData),
	alignof(FRPGInventoryItemsSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData.InnerSingleton;
}
// ********** End ScriptStruct FRPGInventoryItemsSaveData ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventoryItemsSaveData_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGInventoryItemsSaveData::StaticStruct, Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData_Statics::NewStructOps, TEXT("RPGInventoryItemsSaveData"), &Z_Registration_Info_UScriptStruct_FRPGInventoryItemsSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGInventoryItemsSaveData), 2322444893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventoryItemsSaveData_h__Script_RPGSystem_1762224137(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventoryItemsSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventoryItemsSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
