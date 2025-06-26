// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Stats/RPGGearItemStatsContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemStatsContainer() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemStatsContainer();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGGearItemStatsContainer ***********************************************
void URPGGearItemStatsContainer::StaticRegisterNativesURPGGearItemStatsContainer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItemStatsContainer;
UClass* URPGGearItemStatsContainer::GetPrivateStaticClass()
{
	using TClass = URPGGearItemStatsContainer;
	if (!Z_Registration_Info_UClass_URPGGearItemStatsContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItemStatsContainer"),
			Z_Registration_Info_UClass_URPGGearItemStatsContainer.InnerSingleton,
			StaticRegisterNativesURPGGearItemStatsContainer,
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
	return Z_Registration_Info_UClass_URPGGearItemStatsContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister()
{
	return URPGGearItemStatsContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItemStatsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Stats/RPGGearItemStatsContainer.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Stats/RPGGearItemStatsContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItemStatsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGGearItemStatsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCoreStatsContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemStatsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItemStatsContainer_Statics::ClassParams = {
	&URPGGearItemStatsContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItemStatsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItemStatsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItemStatsContainer()
{
	if (!Z_Registration_Info_UClass_URPGGearItemStatsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItemStatsContainer.OuterSingleton, Z_Construct_UClass_URPGGearItemStatsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItemStatsContainer.OuterSingleton;
}
URPGGearItemStatsContainer::URPGGearItemStatsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItemStatsContainer);
URPGGearItemStatsContainer::~URPGGearItemStatsContainer() {}
// ********** End Class URPGGearItemStatsContainer *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItemStatsContainer, URPGGearItemStatsContainer::StaticClass, TEXT("URPGGearItemStatsContainer"), &Z_Registration_Info_UClass_URPGGearItemStatsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItemStatsContainer), 1369426462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h__Script_RPGSystem_1629818886(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
