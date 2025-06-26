// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/SaveArrays/RPGGearItemsSaveArray.h"
#include "RPGInventory/Data/SaveData/RPGGearItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemsSaveArray() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemsSaveArray();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGGearItemsSaveArray ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray;
class UScriptStruct* FRPGGearItemsSaveArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGearItemsSaveArray, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGGearItemsSaveArray"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/SaveArrays/RPGGearItemsSaveArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearItems_MetaData[] = {
		{ "Category", "RPGGearItemsSaveArray" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/SaveArrays/RPGGearItemsSaveArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GearItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GearItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGearItemsSaveArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::NewProp_GearItems_Inner = { "GearItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGGearItemSaveData, METADATA_PARAMS(0, nullptr) }; // 2394929111
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::NewProp_GearItems = { "GearItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGGearItemsSaveArray, GearItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearItems_MetaData), NewProp_GearItems_MetaData) }; // 2394929111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::NewProp_GearItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::NewProp_GearItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGGearItemsSaveArray",
	Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::PropPointers),
	sizeof(FRPGGearItemsSaveArray),
	alignof(FRPGGearItemsSaveArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemsSaveArray()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.InnerSingleton, Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray.InnerSingleton;
}
// ********** End ScriptStruct FRPGGearItemsSaveArray **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGGearItemsSaveArray_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGGearItemsSaveArray::StaticStruct, Z_Construct_UScriptStruct_FRPGGearItemsSaveArray_Statics::NewStructOps, TEXT("RPGGearItemsSaveArray"), &Z_Registration_Info_UScriptStruct_FRPGGearItemsSaveArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGGearItemsSaveArray), 3767312714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGGearItemsSaveArray_h__Script_RPGSystem_2757731384(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGGearItemsSaveArray_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGGearItemsSaveArray_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
