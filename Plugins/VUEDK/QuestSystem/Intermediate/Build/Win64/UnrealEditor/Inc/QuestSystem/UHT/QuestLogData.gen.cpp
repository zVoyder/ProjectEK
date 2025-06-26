// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DataAssets/QuestLogData.h"
#include "Data/Structs/QuestEntryData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestLogData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogData();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEntryData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestLogData ************************************************************
void UQuestLogData::StaticRegisterNativesUQuestLogData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestLogData;
UClass* UQuestLogData::GetPrivateStaticClass()
{
	using TClass = UQuestLogData;
	if (!Z_Registration_Info_UClass_UQuestLogData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestLogData"),
			Z_Registration_Info_UClass_UQuestLogData.InnerSingleton,
			StaticRegisterNativesUQuestLogData,
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
	return Z_Registration_Info_UClass_UQuestLogData.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestLogData_NoRegister()
{
	return UQuestLogData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestLogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/DataAssets/QuestLogData.h" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstTrackedQuest_MetaData[] = {
		{ "Category", "QuestLogData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestLogData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestEntries_MetaData[] = {
		{ "Category", "QuestLogData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/QuestLogData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstTrackedQuest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestEntries_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestEntries_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QuestEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestLogData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_FirstTrackedQuest = { "FirstTrackedQuest", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestLogData, FirstTrackedQuest), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstTrackedQuest_MetaData), NewProp_FirstTrackedQuest_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_ValueProp = { "QuestEntries", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FQuestEntryData, METADATA_PARAMS(0, nullptr) }; // 4253459843
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_Key_KeyProp = { "QuestEntries_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries = { "QuestEntries", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestLogData, QuestEntries), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestEntries_MetaData), NewProp_QuestEntries_MetaData) }; // 4253459843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestLogData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_FirstTrackedQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogData_Statics::NewProp_QuestEntries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestLogData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestLogData_Statics::ClassParams = {
	&UQuestLogData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestLogData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogData_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestLogData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestLogData()
{
	if (!Z_Registration_Info_UClass_UQuestLogData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestLogData.OuterSingleton, Z_Construct_UClass_UQuestLogData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestLogData.OuterSingleton;
}
UQuestLogData::UQuestLogData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestLogData);
UQuestLogData::~UQuestLogData() {}
// ********** End Class UQuestLogData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestLogData, UQuestLogData::StaticClass, TEXT("UQuestLogData"), &Z_Registration_Info_UClass_UQuestLogData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestLogData), 515579025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h__Script_QuestSystem_1532297719(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
