// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DataAssets/CountTaskData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCountTaskData() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTaskData();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTaskData_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCountTaskData ***********************************************************
void UCountTaskData::StaticRegisterNativesUCountTaskData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCountTaskData;
UClass* UCountTaskData::GetPrivateStaticClass()
{
	using TClass = UCountTaskData;
	if (!Z_Registration_Info_UClass_UCountTaskData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CountTaskData"),
			Z_Registration_Info_UClass_UCountTaskData.InnerSingleton,
			StaticRegisterNativesUCountTaskData,
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
	return Z_Registration_Info_UClass_UCountTaskData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCountTaskData_NoRegister()
{
	return UCountTaskData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCountTaskData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/DataAssets/CountTaskData.h" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/CountTaskData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountToAchieve_MetaData[] = {
		{ "Category", "CountTaskData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/CountTaskData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountToAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCountTaskData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCountTaskData_Statics::NewProp_CountToAchieve = { "CountToAchieve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCountTaskData, CountToAchieve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountToAchieve_MetaData), NewProp_CountToAchieve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCountTaskData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountTaskData_Statics::NewProp_CountToAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTaskData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCountTaskData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskData,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTaskData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCountTaskData_Statics::ClassParams = {
	&UCountTaskData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCountTaskData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCountTaskData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTaskData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCountTaskData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCountTaskData()
{
	if (!Z_Registration_Info_UClass_UCountTaskData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCountTaskData.OuterSingleton, Z_Construct_UClass_UCountTaskData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCountTaskData.OuterSingleton;
}
UCountTaskData::UCountTaskData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCountTaskData);
UCountTaskData::~UCountTaskData() {}
// ********** End Class UCountTaskData *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCountTaskData, UCountTaskData::StaticClass, TEXT("UCountTaskData"), &Z_Registration_Info_UClass_UCountTaskData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCountTaskData), 2676540017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h__Script_QuestSystem_3648782126(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
