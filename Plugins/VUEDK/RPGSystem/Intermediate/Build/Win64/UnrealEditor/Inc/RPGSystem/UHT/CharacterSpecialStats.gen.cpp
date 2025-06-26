// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/CharacterStats/CharacterSpecialStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterSpecialStats() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSpecialStats();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSpecialStats_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterSpecialStats ***************************************************
void UCharacterSpecialStats::StaticRegisterNativesUCharacterSpecialStats()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterSpecialStats;
UClass* UCharacterSpecialStats::GetPrivateStaticClass()
{
	using TClass = UCharacterSpecialStats;
	if (!Z_Registration_Info_UClass_UCharacterSpecialStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterSpecialStats"),
			Z_Registration_Info_UClass_UCharacterSpecialStats.InnerSingleton,
			StaticRegisterNativesUCharacterSpecialStats,
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
	return Z_Registration_Info_UClass_UCharacterSpecialStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterSpecialStats_NoRegister()
{
	return UCharacterSpecialStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterSpecialStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/CharacterStats/CharacterSpecialStats.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/CharacterStats/CharacterSpecialStats.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSpecialStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterSpecialStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpecialStatsContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSpecialStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSpecialStats_Statics::ClassParams = {
	&UCharacterSpecialStats::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSpecialStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSpecialStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSpecialStats()
{
	if (!Z_Registration_Info_UClass_UCharacterSpecialStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSpecialStats.OuterSingleton, Z_Construct_UClass_UCharacterSpecialStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSpecialStats.OuterSingleton;
}
UCharacterSpecialStats::UCharacterSpecialStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSpecialStats);
UCharacterSpecialStats::~UCharacterSpecialStats() {}
// ********** End Class UCharacterSpecialStats *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSpecialStats, UCharacterSpecialStats::StaticClass, TEXT("UCharacterSpecialStats"), &Z_Registration_Info_UClass_UCharacterSpecialStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSpecialStats), 556249547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h__Script_RPGSystem_1998392809(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
