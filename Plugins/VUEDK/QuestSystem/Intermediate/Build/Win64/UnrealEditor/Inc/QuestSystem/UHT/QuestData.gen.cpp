// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DataAssets/QuestData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestData ***************************************************************
void UQuestData::StaticRegisterNativesUQuestData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestData;
UClass* UQuestData::GetPrivateStaticClass()
{
	using TClass = UQuestData;
	if (!Z_Registration_Info_UClass_UQuestData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestData"),
			Z_Registration_Info_UClass_UQuestData.InnerSingleton,
			StaticRegisterNativesUQuestData,
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
	return Z_Registration_Info_UClass_UQuestData.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestData_NoRegister()
{
	return UQuestData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/DataAssets/QuestData.h" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFilter_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TasksData_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TasksData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestFilter = { "QuestFilter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, QuestFilter), Z_Construct_UClass_UQuestFilterData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFilter_MetaData), NewProp_QuestFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_TasksData_Inner = { "TasksData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_TasksData = { "TasksData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestData, TasksData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TasksData_MetaData), NewProp_TasksData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_TasksData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_TasksData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestData_Statics::ClassParams = {
	&UQuestData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestData()
{
	if (!Z_Registration_Info_UClass_UQuestData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestData.OuterSingleton, Z_Construct_UClass_UQuestData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestData.OuterSingleton;
}
UQuestData::UQuestData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestData);
UQuestData::~UQuestData() {}
// ********** End Class UQuestData *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestData, UQuestData::StaticClass, TEXT("UQuestData"), &Z_Registration_Info_UClass_UQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestData), 713954757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h__Script_QuestSystem_3662919010(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
