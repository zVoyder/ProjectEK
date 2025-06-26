// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/CharacterStats/CharacterCoreStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterCoreStats() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterCoreStats();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterCoreStats_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterCoreStats ******************************************************
void UCharacterCoreStats::StaticRegisterNativesUCharacterCoreStats()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterCoreStats;
UClass* UCharacterCoreStats::GetPrivateStaticClass()
{
	using TClass = UCharacterCoreStats;
	if (!Z_Registration_Info_UClass_UCharacterCoreStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterCoreStats"),
			Z_Registration_Info_UClass_UCharacterCoreStats.InnerSingleton,
			StaticRegisterNativesUCharacterCoreStats,
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
	return Z_Registration_Info_UClass_UCharacterCoreStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterCoreStats_NoRegister()
{
	return UCharacterCoreStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterCoreStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/CharacterStats/CharacterCoreStats.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterCoreStats.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCoreStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterCoreStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCoreStatsContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCoreStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCoreStats_Statics::ClassParams = {
	&UCharacterCoreStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCoreStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCoreStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCoreStats()
{
	if (!Z_Registration_Info_UClass_UCharacterCoreStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCoreStats.OuterSingleton, Z_Construct_UClass_UCharacterCoreStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCoreStats.OuterSingleton;
}
UCharacterCoreStats::UCharacterCoreStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCoreStats);
UCharacterCoreStats::~UCharacterCoreStats() {}
// ********** End Class UCharacterCoreStats ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCoreStats, UCharacterCoreStats::StaticClass, TEXT("UCharacterCoreStats"), &Z_Registration_Info_UClass_UCharacterCoreStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCoreStats), 1744319351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h__Script_RPGSystem_3913858168(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
