// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Generations/Base/RPGItemBaseGenerationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemBaseGenerationData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemVisualSetData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItemBaseGenerationData ***********************************************
void URPGItemBaseGenerationData::StaticRegisterNativesURPGItemBaseGenerationData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItemBaseGenerationData;
UClass* URPGItemBaseGenerationData::GetPrivateStaticClass()
{
	using TClass = URPGItemBaseGenerationData;
	if (!Z_Registration_Info_UClass_URPGItemBaseGenerationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItemBaseGenerationData"),
			Z_Registration_Info_UClass_URPGItemBaseGenerationData.InnerSingleton,
			StaticRegisterNativesURPGItemBaseGenerationData,
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
	return Z_Registration_Info_UClass_URPGItemBaseGenerationData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister()
{
	return URPGItemBaseGenerationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItemBaseGenerationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RPGItemsGeneration/Data/Generations/Base/RPGItemBaseGenerationData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/Base/RPGItemBaseGenerationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemVisualDetailsSet_MetaData[] = {
		{ "Category", "RPGItemBaseGenerationData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/Base/RPGItemBaseGenerationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemVisualDetailsSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemBaseGenerationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGItemBaseGenerationData_Statics::NewProp_ItemVisualDetailsSet = { "ItemVisualDetailsSet", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemBaseGenerationData, ItemVisualDetailsSet), Z_Construct_UClass_URPGItemVisualSetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemVisualDetailsSet_MetaData), NewProp_ItemVisualDetailsSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItemBaseGenerationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBaseGenerationData_Statics::NewProp_ItemVisualDetailsSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseGenerationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGItemBaseGenerationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseGenerationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemBaseGenerationData_Statics::ClassParams = {
	&URPGItemBaseGenerationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGItemBaseGenerationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseGenerationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseGenerationData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemBaseGenerationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemBaseGenerationData()
{
	if (!Z_Registration_Info_UClass_URPGItemBaseGenerationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemBaseGenerationData.OuterSingleton, Z_Construct_UClass_URPGItemBaseGenerationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemBaseGenerationData.OuterSingleton;
}
URPGItemBaseGenerationData::URPGItemBaseGenerationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemBaseGenerationData);
URPGItemBaseGenerationData::~URPGItemBaseGenerationData() {}
// ********** End Class URPGItemBaseGenerationData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemBaseGenerationData, URPGItemBaseGenerationData::StaticClass, TEXT("URPGItemBaseGenerationData"), &Z_Registration_Info_UClass_URPGItemBaseGenerationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemBaseGenerationData), 539918813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h__Script_RPGSystem_880822776(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
