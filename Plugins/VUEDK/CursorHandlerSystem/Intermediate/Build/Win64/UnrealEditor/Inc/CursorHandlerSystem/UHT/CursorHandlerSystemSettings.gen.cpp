// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CursorHandlerSystemSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCursorHandlerSystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSystemSettings();
CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSystemSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CursorHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCursorHandlerSystemSettings *********************************************
void UCursorHandlerSystemSettings::StaticRegisterNativesUCursorHandlerSystemSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCursorHandlerSystemSettings;
UClass* UCursorHandlerSystemSettings::GetPrivateStaticClass()
{
	using TClass = UCursorHandlerSystemSettings;
	if (!Z_Registration_Info_UClass_UCursorHandlerSystemSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CursorHandlerSystemSettings"),
			Z_Registration_Info_UClass_UCursorHandlerSystemSettings.InnerSingleton,
			StaticRegisterNativesUCursorHandlerSystemSettings,
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
	return Z_Registration_Info_UClass_UCursorHandlerSystemSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCursorHandlerSystemSettings_NoRegister()
{
	return UCursorHandlerSystemSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCursorHandlerSystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Cursor Handler System Settings" },
		{ "IncludePath", "CursorHandlerSystemSettings.h" },
		{ "ModuleRelativePath", "Public/CursorHandlerSystemSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StickCursorSensitivity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CursorHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadCursorWidget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CursorHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseCursorWidget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CursorHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorStick_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CursorHandlerSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StickCursorSensitivity;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GamepadCursorWidget;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MouseCursorWidget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CursorStick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCursorHandlerSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_StickCursorSensitivity = { "StickCursorSensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSystemSettings, StickCursorSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StickCursorSensitivity_MetaData), NewProp_StickCursorSensitivity_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_GamepadCursorWidget = { "GamepadCursorWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSystemSettings, GamepadCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadCursorWidget_MetaData), NewProp_GamepadCursorWidget_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_MouseCursorWidget = { "MouseCursorWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSystemSettings, MouseCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseCursorWidget_MetaData), NewProp_MouseCursorWidget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_CursorStick = { "CursorStick", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSystemSettings, CursorStick), Z_Construct_UEnum_Engine_EControllerAnalogStick, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorStick_MetaData), NewProp_CursorStick_MetaData) }; // 3426242276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_StickCursorSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_GamepadCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_MouseCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::NewProp_CursorStick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CursorHandlerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::ClassParams = {
	&UCursorHandlerSystemSettings::StaticClass,
	"CursorHandlerSystemSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCursorHandlerSystemSettings()
{
	if (!Z_Registration_Info_UClass_UCursorHandlerSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCursorHandlerSystemSettings.OuterSingleton, Z_Construct_UClass_UCursorHandlerSystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCursorHandlerSystemSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCursorHandlerSystemSettings);
UCursorHandlerSystemSettings::~UCursorHandlerSystemSettings() {}
// ********** End Class UCursorHandlerSystemSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSystemSettings_h__Script_CursorHandlerSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCursorHandlerSystemSettings, UCursorHandlerSystemSettings::StaticClass, TEXT("UCursorHandlerSystemSettings"), &Z_Registration_Info_UClass_UCursorHandlerSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCursorHandlerSystemSettings), 2784466135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSystemSettings_h__Script_CursorHandlerSystem_305207073(TEXT("/Script/CursorHandlerSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSystemSettings_h__Script_CursorHandlerSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSystemSettings_h__Script_CursorHandlerSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
