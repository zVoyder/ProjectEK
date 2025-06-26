// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/RPGGearItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemData() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGGearItemData *********************************************************
void URPGGearItemData::StaticRegisterNativesURPGGearItemData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItemData;
UClass* URPGGearItemData::GetPrivateStaticClass()
{
	using TClass = URPGGearItemData;
	if (!Z_Registration_Info_UClass_URPGGearItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItemData"),
			Z_Registration_Info_UClass_URPGGearItemData.InnerSingleton,
			StaticRegisterNativesURPGGearItemData,
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
	return Z_Registration_Info_UClass_URPGGearItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItemData_NoRegister()
{
	return URPGGearItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Data/RPGGearItemData.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGGearItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearBaseMultiplier_MetaData[] = {
		{ "Category", "RPGGearItemData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGGearItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GearBaseMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGGearItemData_Statics::NewProp_GearBaseMultiplier = { "GearBaseMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItemData, GearBaseMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearBaseMultiplier_MetaData), NewProp_GearBaseMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGearItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemData_Statics::NewProp_GearBaseMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGGearItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGItemData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItemData_Statics::ClassParams = {
	&URPGGearItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGGearItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItemData()
{
	if (!Z_Registration_Info_UClass_URPGGearItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItemData.OuterSingleton, Z_Construct_UClass_URPGGearItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItemData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItemData);
URPGGearItemData::~URPGGearItemData() {}
// ********** End Class URPGGearItemData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGGearItemData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItemData, URPGGearItemData::StaticClass, TEXT("URPGGearItemData"), &Z_Registration_Info_UClass_URPGGearItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItemData), 143161957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGGearItemData_h__Script_RPGSystem_2377398177(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGGearItemData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGGearItemData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
