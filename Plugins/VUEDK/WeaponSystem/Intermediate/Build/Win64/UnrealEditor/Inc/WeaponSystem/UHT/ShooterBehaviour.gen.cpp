// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Interfaces/ShooterBehaviour.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterBehaviour() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviour();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviour_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UShooterBehaviour ****************************************************
void UShooterBehaviour::StaticRegisterNativesUShooterBehaviour()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterBehaviour;
UClass* UShooterBehaviour::GetPrivateStaticClass()
{
	using TClass = UShooterBehaviour;
	if (!Z_Registration_Info_UClass_UShooterBehaviour.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterBehaviour"),
			Z_Registration_Info_UClass_UShooterBehaviour.InnerSingleton,
			StaticRegisterNativesUShooterBehaviour,
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
	return Z_Registration_Info_UClass_UShooterBehaviour.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterBehaviour_NoRegister()
{
	return UShooterBehaviour::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Interfaces/ShooterBehaviour.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IShooterBehaviour>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShooterBehaviour_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviour_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterBehaviour_Statics::ClassParams = {
	&UShooterBehaviour::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterBehaviour_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterBehaviour()
{
	if (!Z_Registration_Info_UClass_UShooterBehaviour.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterBehaviour.OuterSingleton, Z_Construct_UClass_UShooterBehaviour_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterBehaviour.OuterSingleton;
}
UShooterBehaviour::UShooterBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterBehaviour);
// ********** End Interface UShooterBehaviour ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterBehaviour, UShooterBehaviour::StaticClass, TEXT("UShooterBehaviour"), &Z_Registration_Info_UClass_UShooterBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterBehaviour), 4169035516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h__Script_WeaponSystem_1807667617(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
