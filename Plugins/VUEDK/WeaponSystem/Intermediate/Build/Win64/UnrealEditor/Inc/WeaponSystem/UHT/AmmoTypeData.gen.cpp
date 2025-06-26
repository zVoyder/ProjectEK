// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/Data/AmmoTypeData.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAmmoTypeData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAmmoTypeData ************************************************************
void UAmmoTypeData::StaticRegisterNativesUAmmoTypeData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAmmoTypeData;
UClass* UAmmoTypeData::GetPrivateStaticClass()
{
	using TClass = UAmmoTypeData;
	if (!Z_Registration_Info_UClass_UAmmoTypeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AmmoTypeData"),
			Z_Registration_Info_UClass_UAmmoTypeData.InnerSingleton,
			StaticRegisterNativesUAmmoTypeData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAmmoTypeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister()
{
	return UAmmoTypeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAmmoTypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/Data/AmmoTypeData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Weapons/Data/AmmoTypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoID_MetaData[] = {
		{ "Category", "AmmoTypeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/AmmoTypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoName_MetaData[] = {
		{ "Category", "AmmoTypeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/AmmoTypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoDescription_MetaData[] = {
		{ "Category", "AmmoTypeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/AmmoTypeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoIcon_MetaData[] = {
		{ "Category", "AmmoTypeData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/AmmoTypeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AmmoName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AmmoDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoTypeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoID = { "AmmoID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoTypeData, AmmoID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoID_MetaData), NewProp_AmmoID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoName = { "AmmoName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoTypeData, AmmoName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoName_MetaData), NewProp_AmmoName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoDescription = { "AmmoDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoTypeData, AmmoDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoDescription_MetaData), NewProp_AmmoDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoIcon = { "AmmoIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoTypeData, AmmoIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoIcon_MetaData), NewProp_AmmoIcon_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmmoTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoTypeData_Statics::NewProp_AmmoIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoTypeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmmoTypeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoTypeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoTypeData_Statics::ClassParams = {
	&UAmmoTypeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAmmoTypeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoTypeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoTypeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmmoTypeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmmoTypeData()
{
	if (!Z_Registration_Info_UClass_UAmmoTypeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoTypeData.OuterSingleton, Z_Construct_UClass_UAmmoTypeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmmoTypeData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoTypeData);
UAmmoTypeData::~UAmmoTypeData() {}
// ********** End Class UAmmoTypeData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoTypeData, UAmmoTypeData::StaticClass, TEXT("UAmmoTypeData"), &Z_Registration_Info_UClass_UAmmoTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoTypeData), 2911004958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h__Script_WeaponSystem_4243286936(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
