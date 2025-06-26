// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbacksComposerSystem/Public/Data/FeedbacksCueData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbacksCueData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCue_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueData();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueData_NoRegister();
UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem();
// End Cross Module References

// Begin Class UFeedbacksCueData
void UFeedbacksCueData::StaticRegisterNativesUFeedbacksCueData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbacksCueData);
UClass* Z_Construct_UClass_UFeedbacksCueData_NoRegister()
{
	return UFeedbacksCueData::StaticClass();
}
struct Z_Construct_UClass_UFeedbacksCueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/FeedbacksCueData.h" },
		{ "ModuleRelativePath", "Public/Data/FeedbacksCueData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbacksCue_MetaData[] = {
		{ "Category", "Feedbacks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/FeedbacksCueData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbacksCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbacksCueData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbacksCueData_Statics::NewProp_FeedbacksCue = { "FeedbacksCue", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCueData, FeedbacksCue), Z_Construct_UClass_UFeedbacksCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbacksCue_MetaData), NewProp_FeedbacksCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbacksCueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCueData_Statics::NewProp_FeedbacksCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFeedbacksCueData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbacksCueData_Statics::ClassParams = {
	&UFeedbacksCueData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFeedbacksCueData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbacksCueData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFeedbacksCueData()
{
	if (!Z_Registration_Info_UClass_UFeedbacksCueData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbacksCueData.OuterSingleton, Z_Construct_UClass_UFeedbacksCueData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFeedbacksCueData.OuterSingleton;
}
template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<UFeedbacksCueData>()
{
	return UFeedbacksCueData::StaticClass();
}
UFeedbacksCueData::UFeedbacksCueData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbacksCueData);
UFeedbacksCueData::~UFeedbacksCueData() {}
// End Class UFeedbacksCueData

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Data_FeedbacksCueData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbacksCueData, UFeedbacksCueData::StaticClass, TEXT("UFeedbacksCueData"), &Z_Registration_Info_UClass_UFeedbacksCueData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbacksCueData), 2869376967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Data_FeedbacksCueData_h_1490440397(TEXT("/Script/FeedbacksComposerSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Data_FeedbacksCueData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_Data_FeedbacksCueData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
