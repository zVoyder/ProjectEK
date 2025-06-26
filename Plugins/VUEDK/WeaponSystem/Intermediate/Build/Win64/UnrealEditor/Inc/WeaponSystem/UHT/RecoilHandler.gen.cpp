// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Handlers/RecoilHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRecoilHandler() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_URecoilHandler();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_URecoilHandler_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterHandlerBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URecoilHandler ***********************************************************
void URecoilHandler::StaticRegisterNativesURecoilHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URecoilHandler;
UClass* URecoilHandler::GetPrivateStaticClass()
{
	using TClass = URecoilHandler;
	if (!Z_Registration_Info_UClass_URecoilHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RecoilHandler"),
			Z_Registration_Info_UClass_URecoilHandler.InnerSingleton,
			StaticRegisterNativesURecoilHandler,
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
	return Z_Registration_Info_UClass_URecoilHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_URecoilHandler_NoRegister()
{
	return URecoilHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URecoilHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shooter/Handlers/RecoilHandler.h" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/RecoilHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecoilHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URecoilHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShooterHandlerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecoilHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecoilHandler_Statics::ClassParams = {
	&URecoilHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecoilHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_URecoilHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecoilHandler()
{
	if (!Z_Registration_Info_UClass_URecoilHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecoilHandler.OuterSingleton, Z_Construct_UClass_URecoilHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecoilHandler.OuterSingleton;
}
URecoilHandler::URecoilHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecoilHandler);
URecoilHandler::~URecoilHandler() {}
// ********** End Class URecoilHandler *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URecoilHandler, URecoilHandler::StaticClass, TEXT("URecoilHandler"), &Z_Registration_Info_UClass_URecoilHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecoilHandler), 4020561368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h__Script_WeaponSystem_1462373624(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
