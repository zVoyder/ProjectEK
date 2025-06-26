// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Data/WeaponMeleeAttackMontageData.h"
#include "Montages/Data/WeaponMontageData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponMeleeAttackMontageData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponMeleeAttackMontageData *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData;
class UScriptStruct* FWeaponMeleeAttackMontageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("WeaponMeleeAttackMontageData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMeleeAttackMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMeleeAttackMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPlayRate_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMeleeAttackMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterruptMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMeleeAttackMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterruptPlayRate_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMeleeAttackMontageData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackInterruptMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterruptPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponMeleeAttackMontageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeAttackMontageData, AttackMontage), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackPlayRate = { "AttackPlayRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeAttackMontageData, AttackPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPlayRate_MetaData), NewProp_AttackPlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackInterruptMontage = { "AttackInterruptMontage", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeAttackMontageData, AttackInterruptMontage), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterruptMontage_MetaData), NewProp_AttackInterruptMontage_MetaData) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_InterruptPlayRate = { "InterruptPlayRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeAttackMontageData, InterruptPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterruptPlayRate_MetaData), NewProp_InterruptPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_AttackInterruptMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewProp_InterruptPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"WeaponMeleeAttackMontageData",
	Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::PropPointers),
	sizeof(FWeaponMeleeAttackMontageData),
	alignof(FWeaponMeleeAttackMontageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponMeleeAttackMontageData ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMeleeAttackMontageData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponMeleeAttackMontageData::StaticStruct, Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData_Statics::NewStructOps, TEXT("WeaponMeleeAttackMontageData"), &Z_Registration_Info_UScriptStruct_FWeaponMeleeAttackMontageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponMeleeAttackMontageData), 3101345413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMeleeAttackMontageData_h__Script_WeaponSystem_769749390(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMeleeAttackMontageData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMeleeAttackMontageData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
