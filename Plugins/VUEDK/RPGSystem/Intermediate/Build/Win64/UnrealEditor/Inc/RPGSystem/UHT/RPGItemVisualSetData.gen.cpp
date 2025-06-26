// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualSetData.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemVisualSetData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemVisualSetData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemVisualSetData_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemVisualDetails();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItemVisualSetData ****************************************************
void URPGItemVisualSetData::StaticRegisterNativesURPGItemVisualSetData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItemVisualSetData;
UClass* URPGItemVisualSetData::GetPrivateStaticClass()
{
	using TClass = URPGItemVisualSetData;
	if (!Z_Registration_Info_UClass_URPGItemVisualSetData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItemVisualSetData"),
			Z_Registration_Info_UClass_URPGItemVisualSetData.InnerSingleton,
			StaticRegisterNativesURPGItemVisualSetData,
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
	return Z_Registration_Info_UClass_URPGItemVisualSetData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItemVisualSetData_NoRegister()
{
	return URPGItemVisualSetData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItemVisualSetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/Data/Visuals/RPGItemVisualSetData.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualSetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[] = {
		{ "Category", "RPGItemVisualSetData" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/Data/Visuals/RPGItemVisualSetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Visuals_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Visuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemVisualSetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItemVisualSetData_Statics::NewProp_Visuals_ElementProp = { "Visuals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGItemVisualDetails, METADATA_PARAMS(0, nullptr) }; // 191893739
static_assert(TModels_V<CGetTypeHashable, FRPGItemVisualDetails>, "The structure 'FRPGItemVisualDetails' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URPGItemVisualSetData_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemVisualSetData, Visuals), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visuals_MetaData), NewProp_Visuals_MetaData) }; // 191893739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItemVisualSetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemVisualSetData_Statics::NewProp_Visuals_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemVisualSetData_Statics::NewProp_Visuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemVisualSetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGItemVisualSetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemVisualSetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemVisualSetData_Statics::ClassParams = {
	&URPGItemVisualSetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGItemVisualSetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemVisualSetData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemVisualSetData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemVisualSetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemVisualSetData()
{
	if (!Z_Registration_Info_UClass_URPGItemVisualSetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemVisualSetData.OuterSingleton, Z_Construct_UClass_URPGItemVisualSetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemVisualSetData.OuterSingleton;
}
URPGItemVisualSetData::URPGItemVisualSetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemVisualSetData);
URPGItemVisualSetData::~URPGItemVisualSetData() {}
// ********** End Class URPGItemVisualSetData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualSetData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemVisualSetData, URPGItemVisualSetData::StaticClass, TEXT("URPGItemVisualSetData"), &Z_Registration_Info_UClass_URPGItemVisualSetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemVisualSetData), 1561277782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualSetData_h__Script_RPGSystem_2635234222(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualSetData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Visuals_RPGItemVisualSetData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
