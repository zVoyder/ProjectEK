// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEffectsCueNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectsCueNotify() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueNotify();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameEffectsCueNotify ****************************************************
void UGameEffectsCueNotify::StaticRegisterNativesUGameEffectsCueNotify()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectsCueNotify;
UClass* UGameEffectsCueNotify::GetPrivateStaticClass()
{
	using TClass = UGameEffectsCueNotify;
	if (!Z_Registration_Info_UClass_UGameEffectsCueNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectsCueNotify"),
			Z_Registration_Info_UClass_UGameEffectsCueNotify.InnerSingleton,
			StaticRegisterNativesUGameEffectsCueNotify,
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
	return Z_Registration_Info_UClass_UGameEffectsCueNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectsCueNotify_NoRegister()
{
	return UGameEffectsCueNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectsCueNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameEffectsCueNotify.h" },
		{ "ModuleRelativePath", "Public/GameEffectsCueNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueData_MetaData[] = {
		{ "Category", "GameEffects|Cue" },
		{ "ModuleRelativePath", "Public/GameEffectsCueNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectsCueNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEffectsCueNotify_Statics::NewProp_CueData = { "CueData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCueNotify, CueData), Z_Construct_UClass_UGameEffectsCueData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueData_MetaData), NewProp_CueData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEffectsCueNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCueNotify_Statics::NewProp_CueData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEffectsCueNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectsCueNotify_Statics::ClassParams = {
	&UGameEffectsCueNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameEffectsCueNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectsCueNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectsCueNotify()
{
	if (!Z_Registration_Info_UClass_UGameEffectsCueNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectsCueNotify.OuterSingleton, Z_Construct_UClass_UGameEffectsCueNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectsCueNotify.OuterSingleton;
}
UGameEffectsCueNotify::UGameEffectsCueNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectsCueNotify);
UGameEffectsCueNotify::~UGameEffectsCueNotify() {}
// ********** End Class UGameEffectsCueNotify ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueNotify_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectsCueNotify, UGameEffectsCueNotify::StaticClass, TEXT("UGameEffectsCueNotify"), &Z_Registration_Info_UClass_UGameEffectsCueNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectsCueNotify), 2075569570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueNotify_h__Script_GameEffectsCueSystem_2088608018(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueNotify_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueNotify_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
