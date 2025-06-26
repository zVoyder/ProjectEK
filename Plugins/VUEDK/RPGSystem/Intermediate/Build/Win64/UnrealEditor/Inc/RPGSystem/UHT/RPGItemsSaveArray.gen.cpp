// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/SaveArrays/RPGItemsSaveArray.h"
#include "RPGInventory/Data/SaveData/RPGItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemsSaveArray() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemsSaveArray();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGItemsSaveArray ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray;
class UScriptStruct* FRPGItemsSaveArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItemsSaveArray, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGItemsSaveArray"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/SaveArrays/RPGItemsSaveArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "RPGItemsSaveArray" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/SaveArrays/RPGItemsSaveArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItemsSaveArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGItemSaveData, METADATA_PARAMS(0, nullptr) }; // 2032670270
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemsSaveArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 2032670270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGItemsSaveArray",
	Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::PropPointers),
	sizeof(FRPGItemsSaveArray),
	alignof(FRPGItemsSaveArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGItemsSaveArray()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.InnerSingleton, Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray.InnerSingleton;
}
// ********** End ScriptStruct FRPGItemsSaveArray **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGItemsSaveArray_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGItemsSaveArray::StaticStruct, Z_Construct_UScriptStruct_FRPGItemsSaveArray_Statics::NewStructOps, TEXT("RPGItemsSaveArray"), &Z_Registration_Info_UScriptStruct_FRPGItemsSaveArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGItemsSaveArray), 3161662430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGItemsSaveArray_h__Script_RPGSystem_1274630519(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGItemsSaveArray_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_SaveArrays_RPGItemsSaveArray_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
