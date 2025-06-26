// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Projectiles/ProjectileGrenade.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileGrenade() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileExplosive();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileGrenade();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectileGrenade *******************************************************
void AProjectileGrenade::StaticRegisterNativesAProjectileGrenade()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileGrenade;
UClass* AProjectileGrenade::GetPrivateStaticClass()
{
	using TClass = AProjectileGrenade;
	if (!Z_Registration_Info_UClass_AProjectileGrenade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileGrenade"),
			Z_Registration_Info_UClass_AProjectileGrenade.InnerSingleton,
			StaticRegisterNativesAProjectileGrenade,
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
	return Z_Registration_Info_UClass_AProjectileGrenade.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileGrenade_NoRegister()
{
	return AProjectileGrenade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter/Projectiles/ProjectileGrenade.h" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExplodeOnHit_MetaData[] = {
		{ "Category", "ProjectileGrenade" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplodeOnHitChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ECollisionChannel" },
		{ "Category", "ProjectileGrenade" },
		{ "EditCondition", "bExplodeOnHit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplodeOnImpactActors_MetaData[] = {
		{ "Category", "ProjectileGrenade" },
		{ "EditCondition", "bExplodeOnHit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToExplosion_MetaData[] = {
		{ "Category", "ProjectileGrenade" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileGrenade.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bExplodeOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplodeOnHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExplodeOnHitChannelMask;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ExplodeOnImpactActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplodeOnImpactActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileGrenade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_bExplodeOnHit_SetBit(void* Obj)
{
	((AProjectileGrenade*)Obj)->bExplodeOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_bExplodeOnHit = { "bExplodeOnHit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectileGrenade), &Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_bExplodeOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExplodeOnHit_MetaData), NewProp_bExplodeOnHit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnHitChannelMask = { "ExplodeOnHitChannelMask", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileGrenade, ExplodeOnHitChannelMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplodeOnHitChannelMask_MetaData), NewProp_ExplodeOnHitChannelMask_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnImpactActors_Inner = { "ExplodeOnImpactActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnImpactActors = { "ExplodeOnImpactActors", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileGrenade, ExplodeOnImpactActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplodeOnImpactActors_MetaData), NewProp_ExplodeOnImpactActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_TimeToExplosion = { "TimeToExplosion", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileGrenade, TimeToExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToExplosion_MetaData), NewProp_TimeToExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_bExplodeOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnHitChannelMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnImpactActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_ExplodeOnImpactActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileGrenade_Statics::NewProp_TimeToExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileGrenade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectileExplosive,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams = {
	&AProjectileGrenade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileGrenade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileGrenade()
{
	if (!Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton, Z_Construct_UClass_AProjectileGrenade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileGrenade.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileGrenade);
AProjectileGrenade::~AProjectileGrenade() {}
// ********** End Class AProjectileGrenade *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileGrenade, AProjectileGrenade::StaticClass, TEXT("AProjectileGrenade"), &Z_Registration_Info_UClass_AProjectileGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileGrenade), 1570881426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h__Script_WeaponSystem_3566623735(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileGrenade_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
