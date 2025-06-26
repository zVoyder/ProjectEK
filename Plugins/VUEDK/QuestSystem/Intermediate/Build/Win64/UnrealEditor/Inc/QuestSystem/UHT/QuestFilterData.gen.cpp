// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DataAssets/QuestFilterData.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestFilterData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestFilterData *********************************************************
void UQuestFilterData::StaticRegisterNativesUQuestFilterData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestFilterData;
UClass* UQuestFilterData::GetPrivateStaticClass()
{
	using TClass = UQuestFilterData;
	if (!Z_Registration_Info_UClass_UQuestFilterData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestFilterData"),
			Z_Registration_Info_UClass_UQuestFilterData.InnerSingleton,
			StaticRegisterNativesUQuestFilterData,
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
	return Z_Registration_Info_UClass_UQuestFilterData.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestFilterData_NoRegister()
{
	return UQuestFilterData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestFilterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/DataAssets/QuestFilterData.h" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestFilterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFilterName_MetaData[] = {
		{ "Category", "QuestFilterData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestFilterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFilterIcon_MetaData[] = {
		{ "Category", "QuestFilterData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestFilterData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestFilterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestFilterIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestFilterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestFilterData_Statics::NewProp_QuestFilterName = { "QuestFilterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestFilterData, QuestFilterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFilterName_MetaData), NewProp_QuestFilterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestFilterData_Statics::NewProp_QuestFilterIcon = { "QuestFilterIcon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestFilterData, QuestFilterIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFilterIcon_MetaData), NewProp_QuestFilterIcon_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestFilterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestFilterData_Statics::NewProp_QuestFilterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestFilterData_Statics::NewProp_QuestFilterIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFilterData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestFilterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFilterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestFilterData_Statics::ClassParams = {
	&UQuestFilterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestFilterData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFilterData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFilterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestFilterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestFilterData()
{
	if (!Z_Registration_Info_UClass_UQuestFilterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestFilterData.OuterSingleton, Z_Construct_UClass_UQuestFilterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestFilterData.OuterSingleton;
}
UQuestFilterData::UQuestFilterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestFilterData);
UQuestFilterData::~UQuestFilterData() {}
// ********** End Class UQuestFilterData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestFilterData, UQuestFilterData::StaticClass, TEXT("UQuestFilterData"), &Z_Registration_Info_UClass_UQuestFilterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestFilterData), 3756454755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h__Script_QuestSystem_677005455(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
