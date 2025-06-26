// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Notifies/MeleeWeaponDamageHitboxNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMeleeWeaponDamageHitboxNotify() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponNotifyStateBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMeleeWeaponDamageHitboxNotify *******************************************
void UMeleeWeaponDamageHitboxNotify::StaticRegisterNativesUMeleeWeaponDamageHitboxNotify()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify;
UClass* UMeleeWeaponDamageHitboxNotify::GetPrivateStaticClass()
{
	using TClass = UMeleeWeaponDamageHitboxNotify;
	if (!Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MeleeWeaponDamageHitboxNotify"),
			Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.InnerSingleton,
			StaticRegisterNativesUMeleeWeaponDamageHitboxNotify,
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
	return Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_NoRegister()
{
	return UMeleeWeaponDamageHitboxNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Montages/Notifies/MeleeWeaponDamageHitboxNotify.h" },
		{ "ModuleRelativePath", "Public/Montages/Notifies/MeleeWeaponDamageHitboxNotify.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeWeaponDamageHitboxNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponNotifyStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::ClassParams = {
	&UMeleeWeaponDamageHitboxNotify::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify()
{
	if (!Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.OuterSingleton, Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify.OuterSingleton;
}
UMeleeWeaponDamageHitboxNotify::UMeleeWeaponDamageHitboxNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeWeaponDamageHitboxNotify);
UMeleeWeaponDamageHitboxNotify::~UMeleeWeaponDamageHitboxNotify() {}
// ********** End Class UMeleeWeaponDamageHitboxNotify *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_MeleeWeaponDamageHitboxNotify_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeWeaponDamageHitboxNotify, UMeleeWeaponDamageHitboxNotify::StaticClass, TEXT("UMeleeWeaponDamageHitboxNotify"), &Z_Registration_Info_UClass_UMeleeWeaponDamageHitboxNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeWeaponDamageHitboxNotify), 571291166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_MeleeWeaponDamageHitboxNotify_h__Script_WeaponSystem_3487532056(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_MeleeWeaponDamageHitboxNotify_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_MeleeWeaponDamageHitboxNotify_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
