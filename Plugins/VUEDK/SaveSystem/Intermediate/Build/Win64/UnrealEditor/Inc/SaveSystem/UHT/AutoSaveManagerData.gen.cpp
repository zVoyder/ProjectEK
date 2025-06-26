// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/AutoSaveManagerData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAutoSaveManagerData() {}

// ********** Begin Cross Module References ********************************************************
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAutoSaveManagerData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAutoSaveManagerData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAutoSaveManagerData;
class UScriptStruct* FAutoSaveManagerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoSaveManagerData, (UObject*)Z_Construct_UPackage__Script_SaveSystem(), TEXT("AutoSaveManagerData"));
	}
	return Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/AutoSaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitPauseState_MetaData[] = {
		{ "Category", "AutoSaveManagerData" },
		{ "ModuleRelativePath", "Public/Data/Structs/AutoSaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveIntervalSeconds_MetaData[] = {
		{ "Category", "AutoSaveManagerData" },
		{ "ClampMin", "30.0" },
		{ "ModuleRelativePath", "Public/Data/Structs/AutoSaveManagerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAutoSaves_MetaData[] = {
		{ "Category", "AutoSaveManagerData" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Data/Structs/AutoSaveManagerData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInitPauseState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitPauseState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSaveIntervalSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAutoSaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoSaveManagerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_bInitPauseState_SetBit(void* Obj)
{
	((FAutoSaveManagerData*)Obj)->bInitPauseState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_bInitPauseState = { "bInitPauseState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoSaveManagerData), &Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_bInitPauseState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitPauseState_MetaData), NewProp_bInitPauseState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_AutoSaveIntervalSeconds = { "AutoSaveIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoSaveManagerData, AutoSaveIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveIntervalSeconds_MetaData), NewProp_AutoSaveIntervalSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_MaxAutoSaves = { "MaxAutoSaves", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoSaveManagerData, MaxAutoSaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAutoSaves_MetaData), NewProp_MaxAutoSaves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_bInitPauseState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_AutoSaveIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewProp_MaxAutoSaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
	nullptr,
	&NewStructOps,
	"AutoSaveManagerData",
	Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::PropPointers),
	sizeof(FAutoSaveManagerData),
	alignof(FAutoSaveManagerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoSaveManagerData()
{
	if (!Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.InnerSingleton, Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAutoSaveManagerData.InnerSingleton;
}
// ********** End ScriptStruct FAutoSaveManagerData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_AutoSaveManagerData_h__Script_SaveSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoSaveManagerData::StaticStruct, Z_Construct_UScriptStruct_FAutoSaveManagerData_Statics::NewStructOps, TEXT("AutoSaveManagerData"), &Z_Registration_Info_UScriptStruct_FAutoSaveManagerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoSaveManagerData), 978320185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_AutoSaveManagerData_h__Script_SaveSystem_789887072(TEXT("/Script/SaveSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_AutoSaveManagerData_h__Script_SaveSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Structs_AutoSaveManagerData_h__Script_SaveSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
