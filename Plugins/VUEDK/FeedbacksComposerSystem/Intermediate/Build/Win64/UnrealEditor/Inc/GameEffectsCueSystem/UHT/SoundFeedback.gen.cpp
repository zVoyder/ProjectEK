// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/SoundFeedback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoundFeedback() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_USoundFeedback();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_USoundFeedback_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USoundFeedback ***********************************************************
void USoundFeedback::StaticRegisterNativesUSoundFeedback()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USoundFeedback;
UClass* USoundFeedback::GetPrivateStaticClass()
{
	using TClass = USoundFeedback;
	if (!Z_Registration_Info_UClass_USoundFeedback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoundFeedback"),
			Z_Registration_Info_UClass_USoundFeedback.InnerSingleton,
			StaticRegisterNativesUSoundFeedback,
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
	return Z_Registration_Info_UClass_USoundFeedback.InnerSingleton;
}
UClass* Z_Construct_UClass_USoundFeedback_NoRegister()
{
	return USoundFeedback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USoundFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Effects/SoundFeedback.h" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIs2D_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[] = {
		{ "Category", "GameEffect|Sound" },
		{ "ModuleRelativePath", "Public/Effects/SoundFeedback.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIs2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs2D;
	static void NewProp_bIsUISound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundFeedback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIs2D_SetBit(void* Obj)
{
	((USoundFeedback*)Obj)->bIs2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIs2D = { "bIs2D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundFeedback), &Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIs2D_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIs2D_MetaData), NewProp_bIs2D_MetaData) };
void Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIsUISound_SetBit(void* Obj)
{
	((USoundFeedback*)Obj)->bIsUISound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundFeedback), &Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUISound_MetaData), NewProp_bIsUISound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundFeedback, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundFeedback, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundFeedback, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundFeedback, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundFeedback_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundFeedback, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrencySettings_MetaData), NewProp_ConcurrencySettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIs2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_bIsUISound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFeedback_Statics::NewProp_ConcurrencySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundFeedback_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundFeedback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundFeedback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundFeedback_Statics::ClassParams = {
	&USoundFeedback::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundFeedback_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundFeedback_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundFeedback_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundFeedback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundFeedback()
{
	if (!Z_Registration_Info_UClass_USoundFeedback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundFeedback.OuterSingleton, Z_Construct_UClass_USoundFeedback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundFeedback.OuterSingleton;
}
USoundFeedback::USoundFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundFeedback);
USoundFeedback::~USoundFeedback() {}
// ********** End Class USoundFeedback *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_SoundFeedback_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundFeedback, USoundFeedback::StaticClass, TEXT("USoundFeedback"), &Z_Registration_Info_UClass_USoundFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundFeedback), 2513645577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_SoundFeedback_h__Script_GameEffectsCueSystem_930893787(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_SoundFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_SoundFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
