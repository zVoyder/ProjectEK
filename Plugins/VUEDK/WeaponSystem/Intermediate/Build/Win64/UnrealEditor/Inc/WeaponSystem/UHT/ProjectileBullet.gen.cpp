// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Projectiles/ProjectileBullet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileBullet() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBullet();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectileBullet ********************************************************
void AProjectileBullet::StaticRegisterNativesAProjectileBullet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileBullet;
UClass* AProjectileBullet::GetPrivateStaticClass()
{
	using TClass = AProjectileBullet;
	if (!Z_Registration_Info_UClass_AProjectileBullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileBullet"),
			Z_Registration_Info_UClass_AProjectileBullet.InnerSingleton,
			StaticRegisterNativesAProjectileBullet,
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
	return Z_Registration_Info_UClass_AProjectileBullet.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileBullet_NoRegister()
{
	return AProjectileBullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter/Projectiles/ProjectileBullet.h" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBullet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectileBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBullet_Statics::ClassParams = {
	&AProjectileBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileBullet()
{
	if (!Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton, Z_Construct_UClass_AProjectileBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileBullet.OuterSingleton;
}
AProjectileBullet::AProjectileBullet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBullet);
AProjectileBullet::~AProjectileBullet() {}
// ********** End Class AProjectileBullet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileBullet, AProjectileBullet::StaticClass, TEXT("AProjectileBullet"), &Z_Registration_Info_UClass_AProjectileBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileBullet), 2518220941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h__Script_WeaponSystem_3765509325(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBullet_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
