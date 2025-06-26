// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Data/CoreStatData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreStatData() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreStatData ************************************************************
void UCoreStatData::StaticRegisterNativesUCoreStatData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreStatData;
UClass* UCoreStatData::GetPrivateStaticClass()
{
	using TClass = UCoreStatData;
	if (!Z_Registration_Info_UClass_UCoreStatData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreStatData"),
			Z_Registration_Info_UClass_UCoreStatData.InnerSingleton,
			StaticRegisterNativesUCoreStatData,
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
	return Z_Registration_Info_UClass_UCoreStatData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreStatData_NoRegister()
{
	return UCoreStatData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreStatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsSystem/Data/CoreStatData.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/CoreStatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeasurementSymbol_MetaData[] = {
		{ "Category", "CoreStatData" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/CoreStatData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeasurementSymbol;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStatData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreStatData_Statics::NewProp_MeasurementSymbol = { "MeasurementSymbol", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreStatData, MeasurementSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeasurementSymbol_MetaData), NewProp_MeasurementSymbol_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatData_Statics::NewProp_MeasurementSymbol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreStatData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreStatData_Statics::ClassParams = {
	&UCoreStatData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreStatData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreStatData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreStatData()
{
	if (!Z_Registration_Info_UClass_UCoreStatData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreStatData.OuterSingleton, Z_Construct_UClass_UCoreStatData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreStatData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStatData);
UCoreStatData::~UCoreStatData() {}
// ********** End Class UCoreStatData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreStatData, UCoreStatData::StaticClass, TEXT("UCoreStatData"), &Z_Registration_Info_UClass_UCoreStatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreStatData), 3888659365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h__Script_RPGSystem_2462608401(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
