// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbacksComposerSystem/Public/FeedbacksCueNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbacksCueNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueData_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueNotify();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem();
// End Cross Module References

// Begin Class UFeedbacksCueNotify
void UFeedbacksCueNotify::StaticRegisterNativesUFeedbacksCueNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbacksCueNotify);
UClass* Z_Construct_UClass_UFeedbacksCueNotify_NoRegister()
{
	return UFeedbacksCueNotify::StaticClass();
}
struct Z_Construct_UClass_UFeedbacksCueNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "FeedbacksCueNotify.h" },
		{ "ModuleRelativePath", "Public/FeedbacksCueNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbacksCueData_MetaData[] = {
		{ "Category", "Feedbacks|Cue" },
		{ "ModuleRelativePath", "Public/FeedbacksCueNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbacksCueData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbacksCueNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbacksCueNotify_Statics::NewProp_FeedbacksCueData = { "FeedbacksCueData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCueNotify, FeedbacksCueData), Z_Construct_UClass_UFeedbacksCueData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbacksCueData_MetaData), NewProp_FeedbacksCueData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbacksCueNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCueNotify_Statics::NewProp_FeedbacksCueData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFeedbacksCueNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbacksCueNotify_Statics::ClassParams = {
	&UFeedbacksCueNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFeedbacksCueNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCueNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbacksCueNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFeedbacksCueNotify()
{
	if (!Z_Registration_Info_UClass_UFeedbacksCueNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbacksCueNotify.OuterSingleton, Z_Construct_UClass_UFeedbacksCueNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFeedbacksCueNotify.OuterSingleton;
}
template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<UFeedbacksCueNotify>()
{
	return UFeedbacksCueNotify::StaticClass();
}
UFeedbacksCueNotify::UFeedbacksCueNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbacksCueNotify);
UFeedbacksCueNotify::~UFeedbacksCueNotify() {}
// End Class UFeedbacksCueNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCueNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbacksCueNotify, UFeedbacksCueNotify::StaticClass, TEXT("UFeedbacksCueNotify"), &Z_Registration_Info_UClass_UFeedbacksCueNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbacksCueNotify), 3228922702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCueNotify_h_2076566324(TEXT("/Script/FeedbacksComposerSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCueNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCueNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
