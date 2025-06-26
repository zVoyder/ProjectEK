// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/Data/WeaponMeleeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponMeleeData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponMeleeData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponMeleeData;
class UScriptStruct* FWeaponMeleeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMeleeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponMeleeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponMeleeData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("WeaponMeleeData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMeleeData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponMeleeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponMeleeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageHitBoxChannel_MetaData[] = {
		{ "Category", "WeaponMeleeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponMeleeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "WeaponMeleeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/WeaponMeleeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageHitBoxChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponMeleeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::NewProp_DamageHitBoxChannel = { "DamageHitBoxChannel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeData, DamageHitBoxChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageHitBoxChannel_MetaData), NewProp_DamageHitBoxChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMeleeData, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::NewProp_DamageHitBoxChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::NewProp_DamageTypeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"WeaponMeleeData",
	Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::PropPointers),
	sizeof(FWeaponMeleeData),
	alignof(FWeaponMeleeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMeleeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponMeleeData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMeleeData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponMeleeData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponMeleeData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponMeleeData::StaticStruct, Z_Construct_UScriptStruct_FWeaponMeleeData_Statics::NewStructOps, TEXT("WeaponMeleeData"), &Z_Registration_Info_UScriptStruct_FWeaponMeleeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponMeleeData), 3793939027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponMeleeData_h__Script_WeaponSystem_3753446757(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponMeleeData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_WeaponMeleeData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
