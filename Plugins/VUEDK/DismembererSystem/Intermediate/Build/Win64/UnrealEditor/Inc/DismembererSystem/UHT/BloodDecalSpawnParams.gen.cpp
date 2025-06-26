// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/BloodDecalSpawnParams.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBloodDecalSpawnParams() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBloodDecalSpawnParams();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBloodDecalSpawnParams ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams;
class UScriptStruct* FBloodDecalSpawnParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodDecalSpawnParams, (UObject*)Z_Construct_UPackage__Script_DismembererSystem(), TEXT("BloodDecalSpawnParams"));
	}
	return Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "BloodDecalSpawnParams" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[] = {
		{ "Category", "BloodDecalSpawnParams" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSize_MetaData[] = {
		{ "Category", "BloodDecalSpawnParams" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSortOrder_MetaData[] = {
		{ "Category", "BloodDecalSpawnParams" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSortOrder_MetaData[] = {
		{ "Category", "BloodDecalSpawnParams" },
		{ "ModuleRelativePath", "Public/Data/BloodDecalSpawnParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSortOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSortOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodDecalSpawnParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBloodDecalSpawnParams, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBloodDecalSpawnParams, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSize_MetaData), NewProp_MaxSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBloodDecalSpawnParams, MinSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSize_MetaData), NewProp_MinSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MaxSortOrder = { "MaxSortOrder", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBloodDecalSpawnParams, MaxSortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSortOrder_MetaData), NewProp_MaxSortOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MinSortOrder = { "MinSortOrder", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBloodDecalSpawnParams, MinSortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSortOrder_MetaData), NewProp_MinSortOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_SpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MinSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MaxSortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewProp_MinSortOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
	nullptr,
	&NewStructOps,
	"BloodDecalSpawnParams",
	Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::PropPointers),
	sizeof(FBloodDecalSpawnParams),
	alignof(FBloodDecalSpawnParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBloodDecalSpawnParams()
{
	if (!Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.InnerSingleton, Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams.InnerSingleton;
}
// ********** End ScriptStruct FBloodDecalSpawnParams **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_BloodDecalSpawnParams_h__Script_DismembererSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBloodDecalSpawnParams::StaticStruct, Z_Construct_UScriptStruct_FBloodDecalSpawnParams_Statics::NewStructOps, TEXT("BloodDecalSpawnParams"), &Z_Registration_Info_UScriptStruct_FBloodDecalSpawnParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBloodDecalSpawnParams), 1152522553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_BloodDecalSpawnParams_h__Script_DismembererSystem_2383382617(TEXT("/Script/DismembererSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_BloodDecalSpawnParams_h__Script_DismembererSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_BloodDecalSpawnParams_h__Script_DismembererSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
