// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/SaveManagerData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveManagerData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveManagerData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSaveManagerData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSaveManagerData;
class UScriptStruct* FSaveManagerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSaveManagerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSaveManagerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveManagerData, (UObject*)Z_Construct_UPackage__Script_SaveSystem(), TEXT("SaveManagerData"));
	}
	return Z_Registration_Info_UScriptStruct_FSaveManagerData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSaveManagerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/SaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "SaveManagerData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSaveGameClass_MetaData[] = {
		{ "Category", "SaveManagerData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoItemClass_MetaData[] = {
		{ "Category", "SaveManagerData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSlotInfoItemClass_MetaData[] = {
		{ "Category", "SaveManagerData" },
		{ "ModuleRelativePath", "Public/Data/Structs/SaveManagerData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSaveGameClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlotInfoItemClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSlotInfoItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveManagerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveManagerData, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameClass_MetaData), NewProp_SaveGameClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SharedSaveGameClass = { "SharedSaveGameClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveManagerData, SharedSaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSaveGameClass_MetaData), NewProp_SharedSaveGameClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SlotInfoItemClass = { "SlotInfoItemClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveManagerData, SlotInfoItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfoItemClass_MetaData), NewProp_SlotInfoItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SharedSlotInfoItemClass = { "SharedSlotInfoItemClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveManagerData, SharedSlotInfoItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSlotInfoItemClass_MetaData), NewProp_SharedSlotInfoItemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveManagerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SharedSaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SlotInfoItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewProp_SharedSlotInfoItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveManagerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveManagerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
	nullptr,
	&NewStructOps,
	"SaveManagerData",
	Z_Construct_UScriptStruct_FSaveManagerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveManagerData_Statics::PropPointers),
	sizeof(FSaveManagerData),
	alignof(FSaveManagerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveManagerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveManagerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveManagerData()
{
	if (!Z_Registration_Info_UScriptStruct_FSaveManagerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSaveManagerData.InnerSingleton, Z_Construct_UScriptStruct_FSaveManagerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSaveManagerData.InnerSingleton;
}
// ********** End ScriptStruct FSaveManagerData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SaveManagerData_h__Script_SaveSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveManagerData::StaticStruct, Z_Construct_UScriptStruct_FSaveManagerData_Statics::NewStructOps, TEXT("SaveManagerData"), &Z_Registration_Info_UScriptStruct_FSaveManagerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveManagerData), 327736943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SaveManagerData_h__Script_SaveSystem_3450371723(TEXT("/Script/SaveSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SaveManagerData_h__Script_SaveSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_SaveManagerData_h__Script_SaveSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
