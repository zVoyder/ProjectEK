// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemVisualDetails() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemVisualDetails();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGItemVisualDetails *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails;
class UScriptStruct* FRPGItemVisualDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItemVisualDetails, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGItemVisualDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RPGItemVisualDetails" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "RPGItemVisualDetails" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "RPGItemVisualDetails" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "RPGItemVisualDetails" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItemVisualDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemVisualDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemVisualDetails, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) }; // 963227394
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemVisualDetails, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItemVisualDetails, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewProp_ItemMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGItemVisualDetails",
	Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::PropPointers),
	sizeof(FRPGItemVisualDetails),
	alignof(FRPGItemVisualDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGItemVisualDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.InnerSingleton, Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails.InnerSingleton;
}
// ********** End ScriptStruct FRPGItemVisualDetails ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualDetails_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGItemVisualDetails::StaticStruct, Z_Construct_UScriptStruct_FRPGItemVisualDetails_Statics::NewStructOps, TEXT("RPGItemVisualDetails"), &Z_Registration_Info_UScriptStruct_FRPGItemVisualDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGItemVisualDetails), 191893739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualDetails_h__Script_RPGSystem_2358297748(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualDetails_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualDetails_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
