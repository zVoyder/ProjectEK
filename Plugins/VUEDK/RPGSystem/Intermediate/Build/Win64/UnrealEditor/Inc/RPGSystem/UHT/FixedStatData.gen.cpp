// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/FixedStatData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFixedStatData() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFixedStat();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFixedStat ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFixedStat;
class UScriptStruct* FFixedStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFixedStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFixedStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFixedStat, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("FixedStat"));
	}
	return Z_Registration_Info_UScriptStruct_FFixedStat.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFixedStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/FixedStatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatData_MetaData[] = {
		{ "Category", "FixedStat" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/FixedStatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "FixedStat" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/FixedStatData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFixedStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFixedStat_Statics::NewProp_StatData = { "StatData", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedStat, StatData), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatData_MetaData), NewProp_StatData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFixedStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFixedStat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFixedStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedStat_Statics::NewProp_StatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFixedStat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFixedStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"FixedStat",
	Z_Construct_UScriptStruct_FFixedStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedStat_Statics::PropPointers),
	sizeof(FFixedStat),
	alignof(FFixedStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFixedStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFixedStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFixedStat()
{
	if (!Z_Registration_Info_UScriptStruct_FFixedStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFixedStat.InnerSingleton, Z_Construct_UScriptStruct_FFixedStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFixedStat.InnerSingleton;
}
// ********** End ScriptStruct FFixedStat **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_FixedStatData_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFixedStat::StaticStruct, Z_Construct_UScriptStruct_FFixedStat_Statics::NewStructOps, TEXT("FixedStat"), &Z_Registration_Info_UScriptStruct_FFixedStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFixedStat), 3083110846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_FixedStatData_h__Script_RPGSystem_2692810115(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_FixedStatData_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_FixedStatData_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
