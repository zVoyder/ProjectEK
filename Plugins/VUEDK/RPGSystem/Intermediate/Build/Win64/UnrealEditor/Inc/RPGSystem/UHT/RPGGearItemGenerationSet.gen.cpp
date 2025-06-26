// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Generations/RPGGearItemGenerationSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemGenerationSet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationSet();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationSet_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGGearItemGenerationSet ************************************************
void URPGGearItemGenerationSet::StaticRegisterNativesURPGGearItemGenerationSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItemGenerationSet;
UClass* URPGGearItemGenerationSet::GetPrivateStaticClass()
{
	using TClass = URPGGearItemGenerationSet;
	if (!Z_Registration_Info_UClass_URPGGearItemGenerationSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItemGenerationSet"),
			Z_Registration_Info_UClass_URPGGearItemGenerationSet.InnerSingleton,
			StaticRegisterNativesURPGGearItemGenerationSet,
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
	return Z_Registration_Info_UClass_URPGGearItemGenerationSet.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItemGenerationSet_NoRegister()
{
	return URPGGearItemGenerationSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItemGenerationSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/Generations/RPGGearItemGenerationSet.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generations_MetaData[] = {
		{ "Category", "RPGGearItemGenerationSet" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Generations/RPGGearItemGenerationSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Generations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItemGenerationSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGearItemGenerationSet_Statics::NewProp_Generations_Inner = { "Generations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPGGearItemGenerationSet_Statics::NewProp_Generations = { "Generations", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItemGenerationSet, Generations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generations_MetaData), NewProp_Generations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGearItemGenerationSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationSet_Statics::NewProp_Generations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItemGenerationSet_Statics::NewProp_Generations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGGearItemGenerationSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItemGenerationSet_Statics::ClassParams = {
	&URPGGearItemGenerationSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGGearItemGenerationSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemGenerationSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItemGenerationSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItemGenerationSet()
{
	if (!Z_Registration_Info_UClass_URPGGearItemGenerationSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItemGenerationSet.OuterSingleton, Z_Construct_UClass_URPGGearItemGenerationSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItemGenerationSet.OuterSingleton;
}
URPGGearItemGenerationSet::URPGGearItemGenerationSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItemGenerationSet);
URPGGearItemGenerationSet::~URPGGearItemGenerationSet() {}
// ********** End Class URPGGearItemGenerationSet **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationSet_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItemGenerationSet, URPGGearItemGenerationSet::StaticClass, TEXT("URPGGearItemGenerationSet"), &Z_Registration_Info_UClass_URPGGearItemGenerationSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItemGenerationSet), 2576760133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationSet_h__Script_RPGSystem_3631673268(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationSet_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationSet_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
