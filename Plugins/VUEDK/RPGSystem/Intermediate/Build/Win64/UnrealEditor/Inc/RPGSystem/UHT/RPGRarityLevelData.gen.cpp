// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGRarityLevelData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGRarityLevelData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGRarityLevelData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGRarityLevelData ******************************************************
void URPGRarityLevelData::StaticRegisterNativesURPGRarityLevelData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGRarityLevelData;
UClass* URPGRarityLevelData::GetPrivateStaticClass()
{
	using TClass = URPGRarityLevelData;
	if (!Z_Registration_Info_UClass_URPGRarityLevelData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGRarityLevelData"),
			Z_Registration_Info_UClass_URPGRarityLevelData.InnerSingleton,
			StaticRegisterNativesURPGRarityLevelData,
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
	return Z_Registration_Info_UClass_URPGRarityLevelData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGRarityLevelData_NoRegister()
{
	return URPGRarityLevelData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGRarityLevelData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityID_MetaData[] = {
		{ "Category", "RPGRarityLevelData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityName_MetaData[] = {
		{ "Category", "RPGRarityLevelData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityColor_MetaData[] = {
		{ "Category", "RPGRarityLevelData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "RPGRarityLevelData" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityValue_MetaData[] = {
		{ "Category", "RPGRarityLevelData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Rarities/RPGRarityLevelData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RarityID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RarityName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RarityColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RarityValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGRarityLevelData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityID = { "RarityID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRarityLevelData, RarityID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityID_MetaData), NewProp_RarityID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityName = { "RarityName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRarityLevelData, RarityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityName_MetaData), NewProp_RarityName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityColor = { "RarityColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRarityLevelData, RarityColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityColor_MetaData), NewProp_RarityColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRarityLevelData, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityValue = { "RarityValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRarityLevelData, RarityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityValue_MetaData), NewProp_RarityValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGRarityLevelData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_Probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRarityLevelData_Statics::NewProp_RarityValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRarityLevelData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGRarityLevelData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRarityLevelData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGRarityLevelData_Statics::ClassParams = {
	&URPGRarityLevelData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGRarityLevelData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGRarityLevelData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRarityLevelData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGRarityLevelData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGRarityLevelData()
{
	if (!Z_Registration_Info_UClass_URPGRarityLevelData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGRarityLevelData.OuterSingleton, Z_Construct_UClass_URPGRarityLevelData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGRarityLevelData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGRarityLevelData);
URPGRarityLevelData::~URPGRarityLevelData() {}
// ********** End Class URPGRarityLevelData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Rarities_RPGRarityLevelData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGRarityLevelData, URPGRarityLevelData::StaticClass, TEXT("URPGRarityLevelData"), &Z_Registration_Info_UClass_URPGRarityLevelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGRarityLevelData), 1844359101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Rarities_RPGRarityLevelData_h__Script_RPGSystem_1804789455(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Rarities_RPGRarityLevelData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Rarities_RPGRarityLevelData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
