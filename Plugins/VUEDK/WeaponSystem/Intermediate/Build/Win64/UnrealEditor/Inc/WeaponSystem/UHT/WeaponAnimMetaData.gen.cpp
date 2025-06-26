// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Data/WeaponAnimMetaData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponAnimMetaData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimMetaData();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimMetaData_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponAnimMetaData ******************************************************
void UWeaponAnimMetaData::StaticRegisterNativesUWeaponAnimMetaData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponAnimMetaData;
UClass* UWeaponAnimMetaData::GetPrivateStaticClass()
{
	using TClass = UWeaponAnimMetaData;
	if (!Z_Registration_Info_UClass_UWeaponAnimMetaData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponAnimMetaData"),
			Z_Registration_Info_UClass_UWeaponAnimMetaData.InnerSingleton,
			StaticRegisterNativesUWeaponAnimMetaData,
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
	return Z_Registration_Info_UClass_UWeaponAnimMetaData.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponAnimMetaData_NoRegister()
{
	return UWeaponAnimMetaData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponAnimMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Montages/Data/WeaponAnimMetaData.h" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponAnimMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponAnimMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAnimMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponAnimMetaData_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAnimMetaData, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAnimMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAnimMetaData_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponAnimMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAnimMetaData_Statics::ClassParams = {
	&UWeaponAnimMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponAnimMetaData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimMetaData_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponAnimMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponAnimMetaData()
{
	if (!Z_Registration_Info_UClass_UWeaponAnimMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponAnimMetaData.OuterSingleton, Z_Construct_UClass_UWeaponAnimMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponAnimMetaData.OuterSingleton;
}
UWeaponAnimMetaData::UWeaponAnimMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAnimMetaData);
UWeaponAnimMetaData::~UWeaponAnimMetaData() {}
// ********** End Class UWeaponAnimMetaData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponAnimMetaData, UWeaponAnimMetaData::StaticClass, TEXT("UWeaponAnimMetaData"), &Z_Registration_Info_UClass_UWeaponAnimMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponAnimMetaData), 716483665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h__Script_WeaponSystem_1807586113(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
