// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/Data/WeaponData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[] = {
		{ "Category", "Weapon|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Information --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Information --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Stats --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Stats --" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponName_MetaData), NewProp_WeaponName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"WeaponData",
	Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_FWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 177794471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponData_h__Script_WeaponSystem_2418908653(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
