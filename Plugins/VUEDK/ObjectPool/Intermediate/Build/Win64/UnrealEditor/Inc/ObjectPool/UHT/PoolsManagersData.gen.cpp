// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PoolsManagersData.h"
#include "Data/ActorPoolData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolsManagersData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
OBJECTPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FActorPoolData();
OBJECTPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FPoolsManagersData();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPoolsManagersData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPoolsManagersData;
class UScriptStruct* FPoolsManagersData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPoolsManagersData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPoolsManagersData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoolsManagersData, (UObject*)Z_Construct_UPackage__Script_ObjectPool(), TEXT("PoolsManagersData"));
	}
	return Z_Registration_Info_UScriptStruct_FPoolsManagersData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPoolsManagersData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PoolsManagersData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedGamemodes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PoolsManagersData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolsData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PoolsManagersData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_RelatedGamemodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedGamemodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolsData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoolsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoolsManagersData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_RelatedGamemodes_Inner = { "RelatedGamemodes", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_RelatedGamemodes = { "RelatedGamemodes", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoolsManagersData, RelatedGamemodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedGamemodes_MetaData), NewProp_RelatedGamemodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_PoolsData_Inner = { "PoolsData", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorPoolData, METADATA_PARAMS(0, nullptr) }; // 83406171
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_PoolsData = { "PoolsData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoolsManagersData, PoolsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolsData_MetaData), NewProp_PoolsData_MetaData) }; // 83406171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoolsManagersData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_RelatedGamemodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_RelatedGamemodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_PoolsData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewProp_PoolsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolsManagersData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoolsManagersData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	nullptr,
	&NewStructOps,
	"PoolsManagersData",
	Z_Construct_UScriptStruct_FPoolsManagersData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolsManagersData_Statics::PropPointers),
	sizeof(FPoolsManagersData),
	alignof(FPoolsManagersData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolsManagersData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoolsManagersData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoolsManagersData()
{
	if (!Z_Registration_Info_UScriptStruct_FPoolsManagersData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPoolsManagersData.InnerSingleton, Z_Construct_UScriptStruct_FPoolsManagersData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPoolsManagersData.InnerSingleton;
}
// ********** End ScriptStruct FPoolsManagersData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_PoolsManagersData_h__Script_ObjectPool_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoolsManagersData::StaticStruct, Z_Construct_UScriptStruct_FPoolsManagersData_Statics::NewStructOps, TEXT("PoolsManagersData"), &Z_Registration_Info_UScriptStruct_FPoolsManagersData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoolsManagersData), 1310648482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_PoolsManagersData_h__Script_ObjectPool_1509029080(TEXT("/Script/ObjectPool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_PoolsManagersData_h__Script_ObjectPool_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_PoolsManagersData_h__Script_ObjectPool_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
