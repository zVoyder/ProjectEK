// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/Data/ClassicItemSlotData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicItemSlotData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSlotData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FClassicItemSlotData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClassicItemSlotData;
class UScriptStruct* FClassicItemSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicItemSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClassicItemSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassicItemSlotData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ClassicItemSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_FClassicItemSlotData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FClassicItemSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/ClassicItemSlotData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "ClassicItemSlotData" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/ClassicItemSlotData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotQuantity_MetaData[] = {
		{ "Category", "ClassicItemSlotData" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/ClassicItemSlotData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassicItemSlotData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicItemSlotData, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::NewProp_SlotQuantity = { "SlotQuantity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicItemSlotData, SlotQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotQuantity_MetaData), NewProp_SlotQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::NewProp_SlotQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ClassicItemSlotData",
	Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::PropPointers),
	sizeof(FClassicItemSlotData),
	alignof(FClassicItemSlotData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSlotData()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicItemSlotData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClassicItemSlotData.InnerSingleton, Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FClassicItemSlotData.InnerSingleton;
}
// ********** End ScriptStruct FClassicItemSlotData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemSlotData_h__Script_InventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClassicItemSlotData::StaticStruct, Z_Construct_UScriptStruct_FClassicItemSlotData_Statics::NewStructOps, TEXT("ClassicItemSlotData"), &Z_Registration_Info_UScriptStruct_FClassicItemSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassicItemSlotData), 126303998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemSlotData_h__Script_InventorySystem_3424796966(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemSlotData_h__Script_InventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemSlotData_h__Script_InventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
