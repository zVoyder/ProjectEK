// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/CrosshairsFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCrosshairsFactory() {}

// ********** Begin Cross Module References ********************************************************
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsFactory();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsFactory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CrosshairSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCrosshairsFactory *******************************************************
void UCrosshairsFactory::StaticRegisterNativesUCrosshairsFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCrosshairsFactory;
UClass* UCrosshairsFactory::GetPrivateStaticClass()
{
	using TClass = UCrosshairsFactory;
	if (!Z_Registration_Info_UClass_UCrosshairsFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CrosshairsFactory"),
			Z_Registration_Info_UClass_UCrosshairsFactory.InnerSingleton,
			StaticRegisterNativesUCrosshairsFactory,
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
	return Z_Registration_Info_UClass_UCrosshairsFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UCrosshairsFactory_NoRegister()
{
	return UCrosshairsFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCrosshairsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/CrosshairsFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/CrosshairsFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrosshairsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CrosshairSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairsFactory_Statics::ClassParams = {
	&UCrosshairsFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrosshairsFactory()
{
	if (!Z_Registration_Info_UClass_UCrosshairsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairsFactory.OuterSingleton, Z_Construct_UClass_UCrosshairsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrosshairsFactory.OuterSingleton;
}
UCrosshairsFactory::UCrosshairsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairsFactory);
UCrosshairsFactory::~UCrosshairsFactory() {}
// ********** End Class UCrosshairsFactory *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h__Script_CrosshairSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairsFactory, UCrosshairsFactory::StaticClass, TEXT("UCrosshairsFactory"), &Z_Registration_Info_UClass_UCrosshairsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairsFactory), 2598264692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h__Script_CrosshairSystem_2216115259(TEXT("/Script/CrosshairSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h__Script_CrosshairSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h__Script_CrosshairSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
