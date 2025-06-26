// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Data/PreconditionsMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePreconditionsMode() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EPreconditionsMode();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPreconditionsMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPreconditionsMode;
static UEnum* EPreconditionsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPreconditionsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPreconditionsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EPreconditionsMode, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EPreconditionsMode"));
	}
	return Z_Registration_Info_UEnum_EPreconditionsMode.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EPreconditionsMode>()
{
	return EPreconditionsMode_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "All" },
		{ "All.ToolTip", "All preconditions must be met to equip the item." },
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "Any" },
		{ "Any.ToolTip", "At least one precondition must be met to equip the item." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Data/PreconditionsMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "All", (int64)All },
		{ "Any", (int64)Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EPreconditionsMode",
	"EPreconditionsMode",
	Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EPreconditionsMode()
{
	if (!Z_Registration_Info_UEnum_EPreconditionsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPreconditionsMode.InnerSingleton, Z_Construct_UEnum_InventorySystem_EPreconditionsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPreconditionsMode.InnerSingleton;
}
// ********** End Enum EPreconditionsMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_PreconditionsMode_h__Script_InventorySystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPreconditionsMode_StaticEnum, TEXT("EPreconditionsMode"), &Z_Registration_Info_UEnum_EPreconditionsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 127141454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_PreconditionsMode_h__Script_InventorySystem_3910085259(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_PreconditionsMode_h__Script_InventorySystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_PreconditionsMode_h__Script_InventorySystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
