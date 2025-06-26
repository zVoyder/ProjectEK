// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Generations/RPGGearItemFixedStatsGenerationData.h"
#include "RPGItemsGeneration/Data/FixedStatData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemFixedStatsGenerationData() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFixedStat();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGGearItemFixedStatsGenerationData *************************************
void URPGGearItemFixedStatsGenerationData::StaticRegisterNativesURPGGearItemFixedStatsGenerationData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData;
UClass* URPGGearItemFixedStatsGenerationData::GetPrivateStaticClass()
{
	using TClass = URPGGearItemFixedStatsGenerationData;
	if (!Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItemFixedStatsGenerationData"),
			Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.InnerSingleton,
			StaticRegisterNativesURPGGearItemFixedStatsGenerationData,
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
	return Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister()
{
	return URPGGearItemFixedStatsGenerationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/Generations/RPGGearItemFixedStatsGenerationData.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemFixedStatsGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "RPGGearItemFixedStatsGenerationData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemFixedStatsGenerationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItemFixedStatsGenerationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFixedStat, METADATA_PARAMS(0, nullptr) }; // 3083110846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItemFixedStatsGenerationData, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 3083110846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::NewProp_Stats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGItemBaseGenerationData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::ClassParams = {
	&URPGGearItemFixedStatsGenerationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData()
{
	if (!Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.OuterSingleton, Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData.OuterSingleton;
}
URPGGearItemFixedStatsGenerationData::URPGGearItemFixedStatsGenerationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItemFixedStatsGenerationData);
URPGGearItemFixedStatsGenerationData::~URPGGearItemFixedStatsGenerationData() {}
// ********** End Class URPGGearItemFixedStatsGenerationData ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemFixedStatsGenerationData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItemFixedStatsGenerationData, URPGGearItemFixedStatsGenerationData::StaticClass, TEXT("URPGGearItemFixedStatsGenerationData"), &Z_Registration_Info_UClass_URPGGearItemFixedStatsGenerationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItemFixedStatsGenerationData), 3238480287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemFixedStatsGenerationData_h__Script_RPGSystem_3713721280(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemFixedStatsGenerationData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemFixedStatsGenerationData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
