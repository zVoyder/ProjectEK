// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/GameEffectsCueData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectsCueData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameEffectsCueData ******************************************************
void UGameEffectsCueData::StaticRegisterNativesUGameEffectsCueData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectsCueData;
UClass* UGameEffectsCueData::GetPrivateStaticClass()
{
	using TClass = UGameEffectsCueData;
	if (!Z_Registration_Info_UClass_UGameEffectsCueData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectsCueData"),
			Z_Registration_Info_UClass_UGameEffectsCueData.InnerSingleton,
			StaticRegisterNativesUGameEffectsCueData,
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
	return Z_Registration_Info_UClass_UGameEffectsCueData.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister()
{
	return UGameEffectsCueData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectsCueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/GameEffectsCueData.h" },
		{ "ModuleRelativePath", "Public/Data/GameEffectsCueData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameEffectsCue_MetaData[] = {
		{ "Category", "GameEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/GameEffectsCueData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameEffectsCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectsCueData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEffectsCueData_Statics::NewProp_GameEffectsCue = { "GameEffectsCue", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCueData, GameEffectsCue), Z_Construct_UClass_UGameEffectsCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameEffectsCue_MetaData), NewProp_GameEffectsCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEffectsCueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCueData_Statics::NewProp_GameEffectsCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEffectsCueData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectsCueData_Statics::ClassParams = {
	&UGameEffectsCueData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameEffectsCueData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectsCueData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectsCueData()
{
	if (!Z_Registration_Info_UClass_UGameEffectsCueData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectsCueData.OuterSingleton, Z_Construct_UClass_UGameEffectsCueData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectsCueData.OuterSingleton;
}
UGameEffectsCueData::UGameEffectsCueData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectsCueData);
UGameEffectsCueData::~UGameEffectsCueData() {}
// ********** End Class UGameEffectsCueData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectsCueData, UGameEffectsCueData::StaticClass, TEXT("UGameEffectsCueData"), &Z_Registration_Info_UClass_UGameEffectsCueData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectsCueData), 2724166362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h__Script_GameEffectsCueSystem_280149797(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Data_GameEffectsCueData_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
