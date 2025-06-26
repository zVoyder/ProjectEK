// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemGenerationData() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemStatOperation_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatOperationWithProbability();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStatOperationWithProbability *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStatOperationWithProbability;
class UScriptStruct* FStatOperationWithProbability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatOperationWithProbability, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("StatOperationWithProbability"));
	}
	return Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatOperation_MetaData[] = {
		{ "Category", "StatOperationWithProbability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "StatOperationWithProbability" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatOperation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatOperationWithProbability>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::NewProp_StatOperation = { "StatOperation", nullptr, (EPropertyFlags)0x001200000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatOperationWithProbability, StatOperation), Z_Construct_UClass_URPGItemStatOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatOperation_MetaData), NewProp_StatOperation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatOperationWithProbability, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::NewProp_StatOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::NewProp_Probability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"StatOperationWithProbability",
	Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::PropPointers),
	sizeof(FStatOperationWithProbability),
	alignof(FStatOperationWithProbability),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatOperationWithProbability()
{
	if (!Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.InnerSingleton, Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStatOperationWithProbability.InnerSingleton;
}
// ********** End ScriptStruct FStatOperationWithProbability ***************************************

// ********** Begin Class URPGGearItemGenerationData ***********************************************
void URPGGearItemGenerationData::StaticRegisterNativesURPGGearItemGenerationData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItemGenerationData;
UClass* URPGGearItemGenerationData::GetPrivateStaticClass()
{
	using TClass = URPGGearItemGenerationData;
	if (!Z_Registration_Info_UClass_URPGGearItemGenerationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItemGenerationData"),
			Z_Registration_Info_UClass_URPGGearItemGenerationData.InnerSingleton,
			StaticRegisterNativesURPGGearItemGenerationData,
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
	return Z_Registration_Info_UClass_URPGGearItemGenerationData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister()
{
	return URPGGearItemGenerationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItemGenerationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsModifiers_ValueProp_MetaData[] = {
		{ "Category", "RPGGearItemGenerationData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsModifiers_MetaData[] = {
		{ "Category", "RPGGearItemGenerationData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalStatsModifiers_MetaData[] = {
		{ "Category", "RPGGearItemGenerationData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsModifiers_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatsModifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalStatsModifiers_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalStatsModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalStatsModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItemGenerationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers_ValueProp = { "StatsModifiers", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URPGItemStatOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsModifiers_ValueProp_MetaData), NewProp_StatsModifiers_ValueProp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers_Key_KeyProp = { "StatsModifiers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers = { "StatsModifiers", nullptr, (EPropertyFlags)0x001000800001000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItemGenerationData, StatsModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsModifiers_MetaData), NewProp_StatsModifiers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers_ValueProp = { "AdditionalStatsModifiers", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStatOperationWithProbability, METADATA_PARAMS(0, nullptr) }; // 1475752773
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers_Key_KeyProp = { "AdditionalStatsModifiers_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers = { "AdditionalStatsModifiers", nullptr, (EPropertyFlags)0x0010008000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItemGenerationData, AdditionalStatsModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalStatsModifiers_MetaData), NewProp_AdditionalStatsModifiers_MetaData) }; // 1475752773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGearItemGenerationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_StatsModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationData_Statics::NewProp_AdditionalStatsModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGGearItemGenerationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGItemBaseGenerationData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItemGenerationData_Statics::ClassParams = {
	&URPGGearItemGenerationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGGearItemGenerationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItemGenerationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItemGenerationData()
{
	if (!Z_Registration_Info_UClass_URPGGearItemGenerationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItemGenerationData.OuterSingleton, Z_Construct_UClass_URPGGearItemGenerationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItemGenerationData.OuterSingleton;
}
URPGGearItemGenerationData::URPGGearItemGenerationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItemGenerationData);
URPGGearItemGenerationData::~URPGGearItemGenerationData() {}
// ********** End Class URPGGearItemGenerationData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatOperationWithProbability::StaticStruct, Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics::NewStructOps, TEXT("StatOperationWithProbability"), &Z_Registration_Info_UScriptStruct_FStatOperationWithProbability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatOperationWithProbability), 1475752773U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItemGenerationData, URPGGearItemGenerationData::StaticClass, TEXT("URPGGearItemGenerationData"), &Z_Registration_Info_UClass_URPGGearItemGenerationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItemGenerationData), 3170610914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_3398008063(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
