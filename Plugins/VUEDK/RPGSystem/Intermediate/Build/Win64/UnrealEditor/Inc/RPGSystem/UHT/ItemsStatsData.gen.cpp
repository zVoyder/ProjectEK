// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/ItemsStatsData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemsStatsData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UItemsStatsData();
RPGSYSTEM_API UClass* Z_Construct_UClass_UItemsStatsData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemsStatsData **********************************************************
void UItemsStatsData::StaticRegisterNativesUItemsStatsData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemsStatsData;
UClass* UItemsStatsData::GetPrivateStaticClass()
{
	using TClass = UItemsStatsData;
	if (!Z_Registration_Info_UClass_UItemsStatsData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemsStatsData"),
			Z_Registration_Info_UClass_UItemsStatsData.InnerSingleton,
			StaticRegisterNativesUItemsStatsData,
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
	return Z_Registration_Info_UClass_UItemsStatsData.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemsStatsData_NoRegister()
{
	return UItemsStatsData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemsStatsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/ItemsStatsData.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/ItemsStatsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "ItemsStatsData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/ItemsStatsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemsStatsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemsStatsData_Statics::NewProp_Stats_ElementProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UItemsStatsData_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemsStatsData, Stats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemsStatsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemsStatsData_Statics::NewProp_Stats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemsStatsData_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsStatsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemsStatsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsStatsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemsStatsData_Statics::ClassParams = {
	&UItemsStatsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemsStatsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemsStatsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsStatsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemsStatsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemsStatsData()
{
	if (!Z_Registration_Info_UClass_UItemsStatsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemsStatsData.OuterSingleton, Z_Construct_UClass_UItemsStatsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemsStatsData.OuterSingleton;
}
UItemsStatsData::UItemsStatsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemsStatsData);
UItemsStatsData::~UItemsStatsData() {}
// ********** End Class UItemsStatsData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemsStatsData, UItemsStatsData::StaticClass, TEXT("UItemsStatsData"), &Z_Registration_Info_UClass_UItemsStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemsStatsData), 1202341673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h__Script_RPGSystem_1385030015(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
