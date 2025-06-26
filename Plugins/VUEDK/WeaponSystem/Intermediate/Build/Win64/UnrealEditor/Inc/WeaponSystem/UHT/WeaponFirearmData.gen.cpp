// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/Data/WeaponFirearmData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponFirearmData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponFirearmData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponFirearmData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponFirearmData;
class UScriptStruct* FWeaponFirearmData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponFirearmData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponFirearmData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponFirearmData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("WeaponFirearmData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponFirearmData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponFirearmData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimPrecisionIncrease_MetaData[] = {
		{ "Category", "Weapon|Stats" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Stats --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Stats --" },
#endif
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRecoilControlIncrease_MetaData[] = {
		{ "Category", "Weapon|Stats" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadChangeRate_MetaData[] = {
		{ "Category", "Weapon|Stats" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Weapon|Stats" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[] = {
		{ "Category", "Weapon|Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Ammo --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponFirearmData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Ammo --" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimPrecisionIncrease;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimRecoilControlIncrease;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadChangeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponFirearmData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AimPrecisionIncrease = { "AimPrecisionIncrease", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFirearmData, AimPrecisionIncrease), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimPrecisionIncrease_MetaData), NewProp_AimPrecisionIncrease_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AimRecoilControlIncrease = { "AimRecoilControlIncrease", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFirearmData, AimRecoilControlIncrease), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRecoilControlIncrease_MetaData), NewProp_AimRecoilControlIncrease_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_SpreadChangeRate = { "SpreadChangeRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFirearmData, SpreadChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadChangeRate_MetaData), NewProp_SpreadChangeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFirearmData, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponFirearmData, AmmoType), Z_Construct_UClass_UAmmoTypeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoType_MetaData), NewProp_AmmoType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AimPrecisionIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AimRecoilControlIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_SpreadChangeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_ReloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewProp_AmmoType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"WeaponFirearmData",
	Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::PropPointers),
	sizeof(FWeaponFirearmData),
	alignof(FWeaponFirearmData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponFirearmData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponFirearmData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponFirearmData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponFirearmData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponFirearmData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponFirearmData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponFirearmData::StaticStruct, Z_Construct_UScriptStruct_FWeaponFirearmData_Statics::NewStructOps, TEXT("WeaponFirearmData"), &Z_Registration_Info_UScriptStruct_FWeaponFirearmData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponFirearmData), 4125335618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponFirearmData_h__Script_WeaponSystem_1647971968(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponFirearmData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponFirearmData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
