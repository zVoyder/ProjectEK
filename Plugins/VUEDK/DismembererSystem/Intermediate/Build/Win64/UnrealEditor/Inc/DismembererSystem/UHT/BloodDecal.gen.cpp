// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodDecal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBloodDecal() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ABloodDecal();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ABloodDecal_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodDecalsPool_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABloodDecal **************************************************************
void ABloodDecal::StaticRegisterNativesABloodDecal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABloodDecal;
UClass* ABloodDecal::GetPrivateStaticClass()
{
	using TClass = ABloodDecal;
	if (!Z_Registration_Info_UClass_ABloodDecal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BloodDecal"),
			Z_Registration_Info_UClass_ABloodDecal.InnerSingleton,
			StaticRegisterNativesABloodDecal,
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
	return Z_Registration_Info_UClass_ABloodDecal.InnerSingleton;
}
UClass* Z_Construct_UClass_ABloodDecal_NoRegister()
{
	return ABloodDecal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABloodDecal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodDecal.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BloodDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDecalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecalsPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodDecal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDecalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodDecalsPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodDecal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodDecal_Statics::NewProp_DynamicDecalMaterial = { "DynamicDecalMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodDecal, DynamicDecalMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDecalMaterial_MetaData), NewProp_DynamicDecalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodDecal_Statics::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodDecal, DecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComponent_MetaData), NewProp_DecalComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodDecal_Statics::NewProp_BloodDecalsPool = { "BloodDecalsPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodDecal, BloodDecalsPool), Z_Construct_UClass_UBloodDecalsPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecalsPool_MetaData), NewProp_BloodDecalsPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodDecal_Statics::NewProp_DynamicDecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodDecal_Statics::NewProp_DecalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodDecal_Statics::NewProp_BloodDecalsPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodDecal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloodDecal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodDecal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloodDecal_Statics::ClassParams = {
	&ABloodDecal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloodDecal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloodDecal_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodDecal_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloodDecal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloodDecal()
{
	if (!Z_Registration_Info_UClass_ABloodDecal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloodDecal.OuterSingleton, Z_Construct_UClass_ABloodDecal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloodDecal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodDecal);
ABloodDecal::~ABloodDecal() {}
// ********** End Class ABloodDecal ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecal_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloodDecal, ABloodDecal::StaticClass, TEXT("ABloodDecal"), &Z_Registration_Info_UClass_ABloodDecal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodDecal), 2050745588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecal_h__Script_DismembererSystem_1928502857(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecal_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecal_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
