// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterUISubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterUISubsystem() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISubsystem();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterUISubsystem *******************************************************
void UBetterUISubsystem::StaticRegisterNativesUBetterUISubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterUISubsystem;
UClass* UBetterUISubsystem::GetPrivateStaticClass()
{
	using TClass = UBetterUISubsystem;
	if (!Z_Registration_Info_UClass_UBetterUISubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterUISubsystem"),
			Z_Registration_Info_UClass_UBetterUISubsystem.InnerSingleton,
			StaticRegisterNativesUBetterUISubsystem,
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
	return Z_Registration_Info_UClass_UBetterUISubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterUISubsystem_NoRegister()
{
	return UBetterUISubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BetterUISubsystem.h" },
		{ "ModuleRelativePath", "Public/BetterUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterUISubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterUISubsystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUISubsystem, Settings), Z_Construct_UClass_UBetterUISettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterUISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISubsystem_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterUISubsystem_Statics::ClassParams = {
	&UBetterUISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBetterUISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterUISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterUISubsystem()
{
	if (!Z_Registration_Info_UClass_UBetterUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterUISubsystem.OuterSingleton, Z_Construct_UClass_UBetterUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterUISubsystem.OuterSingleton;
}
UBetterUISubsystem::UBetterUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterUISubsystem);
UBetterUISubsystem::~UBetterUISubsystem() {}
// ********** End Class UBetterUISubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterUISubsystem, UBetterUISubsystem::StaticClass, TEXT("UBetterUISubsystem"), &Z_Registration_Info_UClass_UBetterUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterUISubsystem), 2039039268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h__Script_BetterUI_2956088742(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
