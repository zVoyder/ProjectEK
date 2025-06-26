// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Enums/SaveTypeFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveTypeFilter() {}

// ********** Begin Cross Module References ********************************************************
SAVESYSTEM_API UEnum* Z_Construct_UEnum_SaveSystem_ESaveTypeFilter();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESaveTypeFilter ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveTypeFilter;
static UEnum* ESaveTypeFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESaveTypeFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveSystem_ESaveTypeFilter, (UObject*)Z_Construct_UPackage__Script_SaveSystem(), TEXT("ESaveTypeFilter"));
	}
	return Z_Registration_Info_UEnum_ESaveTypeFilter.OuterSingleton;
}
template<> SAVESYSTEM_API UEnum* StaticEnum<ESaveTypeFilter>()
{
	return ESaveTypeFilter_StaticEnum();
}
struct Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "ESaveTypeFilter::All" },
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "ESaveTypeFilter::Auto" },
		{ "BlueprintType", "true" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "ESaveTypeFilter::Manual" },
		{ "ModuleRelativePath", "Public/Data/Enums/SaveTypeFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESaveTypeFilter::All", (int64)ESaveTypeFilter::All },
		{ "ESaveTypeFilter::Manual", (int64)ESaveTypeFilter::Manual },
		{ "ESaveTypeFilter::Auto", (int64)ESaveTypeFilter::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SaveSystem,
	nullptr,
	"ESaveTypeFilter",
	"ESaveTypeFilter",
	Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SaveSystem_ESaveTypeFilter()
{
	if (!Z_Registration_Info_UEnum_ESaveTypeFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveTypeFilter.InnerSingleton, Z_Construct_UEnum_SaveSystem_ESaveTypeFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESaveTypeFilter.InnerSingleton;
}
// ********** End Enum ESaveTypeFilter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Enums_SaveTypeFilter_h__Script_SaveSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESaveTypeFilter_StaticEnum, TEXT("ESaveTypeFilter"), &Z_Registration_Info_UEnum_ESaveTypeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2982267197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Enums_SaveTypeFilter_h__Script_SaveSystem_1224795574(TEXT("/Script/SaveSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Enums_SaveTypeFilter_h__Script_SaveSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Enums_SaveTypeFilter_h__Script_SaveSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
