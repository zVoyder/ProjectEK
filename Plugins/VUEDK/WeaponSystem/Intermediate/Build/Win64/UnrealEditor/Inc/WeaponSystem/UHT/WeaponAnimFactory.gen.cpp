// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/WeaponAnimFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponAnimFactory() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimFactory();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponAnimFactory *******************************************************
void UWeaponAnimFactory::StaticRegisterNativesUWeaponAnimFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponAnimFactory;
UClass* UWeaponAnimFactory::GetPrivateStaticClass()
{
	using TClass = UWeaponAnimFactory;
	if (!Z_Registration_Info_UClass_UWeaponAnimFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponAnimFactory"),
			Z_Registration_Info_UClass_UWeaponAnimFactory.InnerSingleton,
			StaticRegisterNativesUWeaponAnimFactory,
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
	return Z_Registration_Info_UClass_UWeaponAnimFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponAnimFactory_NoRegister()
{
	return UWeaponAnimFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponAnimFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/WeaponAnimFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/WeaponAnimFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAnimFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponAnimFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAnimFactory_Statics::ClassParams = {
	&UWeaponAnimFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAnimFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponAnimFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponAnimFactory()
{
	if (!Z_Registration_Info_UClass_UWeaponAnimFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponAnimFactory.OuterSingleton, Z_Construct_UClass_UWeaponAnimFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponAnimFactory.OuterSingleton;
}
UWeaponAnimFactory::UWeaponAnimFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAnimFactory);
UWeaponAnimFactory::~UWeaponAnimFactory() {}
// ********** End Class UWeaponAnimFactory *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponAnimFactory, UWeaponAnimFactory::StaticClass, TEXT("UWeaponAnimFactory"), &Z_Registration_Info_UClass_UWeaponAnimFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponAnimFactory), 3966384070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h__Script_WeaponSystem_1697368403(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
