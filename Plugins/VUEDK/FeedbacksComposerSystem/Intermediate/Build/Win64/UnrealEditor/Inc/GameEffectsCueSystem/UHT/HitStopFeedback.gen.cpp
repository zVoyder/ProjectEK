// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/HitStopFeedback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitStopFeedback() {}

// ********** Begin Cross Module References ********************************************************
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UHitStopFeedback();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UHitStopFeedback_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitStopFeedback *********************************************************
void UHitStopFeedback::StaticRegisterNativesUHitStopFeedback()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitStopFeedback;
UClass* UHitStopFeedback::GetPrivateStaticClass()
{
	using TClass = UHitStopFeedback;
	if (!Z_Registration_Info_UClass_UHitStopFeedback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitStopFeedback"),
			Z_Registration_Info_UClass_UHitStopFeedback.InnerSingleton,
			StaticRegisterNativesUHitStopFeedback,
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
	return Z_Registration_Info_UClass_UHitStopFeedback.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitStopFeedback_NoRegister()
{
	return UHitStopFeedback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitStopFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Effects/HitStopFeedback.h" },
		{ "ModuleRelativePath", "Public/Effects/HitStopFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[] = {
		{ "Category", "GameEffect|Hit Stop" },
		{ "ModuleRelativePath", "Public/Effects/HitStopFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitStopFeedback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitStopFeedback_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitStopFeedback, TimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDilation_MetaData), NewProp_TimeDilation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitStopFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitStopFeedback_Statics::NewProp_TimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitStopFeedback_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitStopFeedback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitStopFeedback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitStopFeedback_Statics::ClassParams = {
	&UHitStopFeedback::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitStopFeedback_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitStopFeedback_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitStopFeedback_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitStopFeedback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitStopFeedback()
{
	if (!Z_Registration_Info_UClass_UHitStopFeedback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitStopFeedback.OuterSingleton, Z_Construct_UClass_UHitStopFeedback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitStopFeedback.OuterSingleton;
}
UHitStopFeedback::UHitStopFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitStopFeedback);
UHitStopFeedback::~UHitStopFeedback() {}
// ********** End Class UHitStopFeedback ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_HitStopFeedback_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitStopFeedback, UHitStopFeedback::StaticClass, TEXT("UHitStopFeedback"), &Z_Registration_Info_UClass_UHitStopFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitStopFeedback), 619870567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_HitStopFeedback_h__Script_GameEffectsCueSystem_1873813849(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_HitStopFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_HitStopFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
