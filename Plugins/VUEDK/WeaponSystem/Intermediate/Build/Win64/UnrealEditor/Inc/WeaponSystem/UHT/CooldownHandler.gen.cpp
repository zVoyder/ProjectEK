// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Handlers/CooldownHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCooldownHandler() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UCooldownHandler();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UCooldownHandler_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterHandlerBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCooldownHandler *********************************************************
void UCooldownHandler::StaticRegisterNativesUCooldownHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCooldownHandler;
UClass* UCooldownHandler::GetPrivateStaticClass()
{
	using TClass = UCooldownHandler;
	if (!Z_Registration_Info_UClass_UCooldownHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CooldownHandler"),
			Z_Registration_Info_UClass_UCooldownHandler.InnerSingleton,
			StaticRegisterNativesUCooldownHandler,
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
	return Z_Registration_Info_UClass_UCooldownHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UCooldownHandler_NoRegister()
{
	return UCooldownHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCooldownHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shooter/Handlers/CooldownHandler.h" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/CooldownHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCooldownHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCooldownHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShooterHandlerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCooldownHandler_Statics::ClassParams = {
	&UCooldownHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCooldownHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UCooldownHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCooldownHandler()
{
	if (!Z_Registration_Info_UClass_UCooldownHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCooldownHandler.OuterSingleton, Z_Construct_UClass_UCooldownHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCooldownHandler.OuterSingleton;
}
UCooldownHandler::UCooldownHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCooldownHandler);
UCooldownHandler::~UCooldownHandler() {}
// ********** End Class UCooldownHandler ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCooldownHandler, UCooldownHandler::StaticClass, TEXT("UCooldownHandler"), &Z_Registration_Info_UClass_UCooldownHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCooldownHandler), 4121943869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h__Script_WeaponSystem_2422670346(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
