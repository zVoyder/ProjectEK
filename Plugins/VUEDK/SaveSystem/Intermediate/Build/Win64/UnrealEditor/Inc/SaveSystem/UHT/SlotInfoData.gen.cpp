// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/SlotInfoData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlotInfoData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfoData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSlotInfoData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlotInfoData;
class UScriptStruct* FSlotInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSlotInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSlotInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotInfoData, (UObject*)Z_Construct_UPackage__Script_SaveSystem(), TEXT("SlotInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_FSlotInfoData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSlotInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/SlotInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoName_MetaData[] = {
		{ "Category", "SlotInfoData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SlotInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSaveDate_MetaData[] = {
		{ "Category", "SlotInfoData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SlotInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimePlayed_MetaData[] = {
		{ "Category", "SlotInfoData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SlotInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoItem_MetaData[] = {
		{ "Category", "SlotInfoData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SlotInfoData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotInfoName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSaveDate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimePlayed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotInfoData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_SlotInfoName = { "SlotInfoName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfoData, SlotInfoName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfoName_MetaData), NewProp_SlotInfoName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_LastSaveDate = { "LastSaveDate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfoData, LastSaveDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSaveDate_MetaData), NewProp_LastSaveDate_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_TimePlayed = { "TimePlayed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfoData, TimePlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimePlayed_MetaData), NewProp_TimePlayed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotInfoData, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfoItem_MetaData), NewProp_SlotInfoItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_SlotInfoName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_LastSaveDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_TimePlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewProp_SlotInfoItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotInfoData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
	nullptr,
	&NewStructOps,
	"SlotInfoData",
	Z_Construct_UScriptStruct_FSlotInfoData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfoData_Statics::PropPointers),
	sizeof(FSlotInfoData),
	alignof(FSlotInfoData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotInfoData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotInfoData()
{
	if (!Z_Registration_Info_UScriptStruct_FSlotInfoData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlotInfoData.InnerSingleton, Z_Construct_UScriptStruct_FSlotInfoData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSlotInfoData.InnerSingleton;
}
// ********** End ScriptStruct FSlotInfoData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SlotInfoData_h__Script_SaveSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlotInfoData::StaticStruct, Z_Construct_UScriptStruct_FSlotInfoData_Statics::NewStructOps, TEXT("SlotInfoData"), &Z_Registration_Info_UScriptStruct_FSlotInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotInfoData), 3154120906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SlotInfoData_h__Script_SaveSystem_4212718696(TEXT("/Script/SaveSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SlotInfoData_h__Script_SaveSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SlotInfoData_h__Script_SaveSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
