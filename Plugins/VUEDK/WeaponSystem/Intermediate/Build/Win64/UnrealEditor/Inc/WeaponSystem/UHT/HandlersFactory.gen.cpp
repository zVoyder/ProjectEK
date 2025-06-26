// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/HandlersFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandlersFactory() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHandlersFactory();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHandlersFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHandlersFactory *********************************************************
void UHandlersFactory::StaticRegisterNativesUHandlersFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandlersFactory;
UClass* UHandlersFactory::GetPrivateStaticClass()
{
	using TClass = UHandlersFactory;
	if (!Z_Registration_Info_UClass_UHandlersFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandlersFactory"),
			Z_Registration_Info_UClass_UHandlersFactory.InnerSingleton,
			StaticRegisterNativesUHandlersFactory,
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
	return Z_Registration_Info_UClass_UHandlersFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandlersFactory_NoRegister()
{
	return UHandlersFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandlersFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/HandlersFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/HandlersFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandlersFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandlersFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandlersFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandlersFactory_Statics::ClassParams = {
	&UHandlersFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandlersFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandlersFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandlersFactory()
{
	if (!Z_Registration_Info_UClass_UHandlersFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandlersFactory.OuterSingleton, Z_Construct_UClass_UHandlersFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandlersFactory.OuterSingleton;
}
UHandlersFactory::UHandlersFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlersFactory);
UHandlersFactory::~UHandlersFactory() {}
// ********** End Class UHandlersFactory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandlersFactory, UHandlersFactory::StaticClass, TEXT("UHandlersFactory"), &Z_Registration_Info_UClass_UHandlersFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandlersFactory), 1041244505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h__Script_WeaponSystem_4100014405(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
