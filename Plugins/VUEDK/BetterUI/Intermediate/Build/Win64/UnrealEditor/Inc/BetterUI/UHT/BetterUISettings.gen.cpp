// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterUISettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterUISettings() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings_NoRegister();
BETTERUI_API UEnum* Z_Construct_UEnum_BetterUI_EMenuBehaviour();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterUISettings ********************************************************
void UBetterUISettings::StaticRegisterNativesUBetterUISettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterUISettings;
UClass* UBetterUISettings::GetPrivateStaticClass()
{
	using TClass = UBetterUISettings;
	if (!Z_Registration_Info_UClass_UBetterUISettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterUISettings"),
			Z_Registration_Info_UClass_UBetterUISettings.InnerSingleton,
			StaticRegisterNativesUBetterUISettings,
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
	return Z_Registration_Info_UClass_UBetterUISettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterUISettings_NoRegister()
{
	return UBetterUISettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterUISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "BetterUI Settings" },
		{ "IncludePath", "BetterUISettings.h" },
		{ "ModuleRelativePath", "Public/BetterUISettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuBehaviour_MetaData[] = {
		{ "Category", "Menus Settings" },
		{ "ModuleRelativePath", "Public/BetterUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTabNavigation_MetaData[] = {
		{ "Category", "UI Navigation" },
		{ "ModuleRelativePath", "Public/BetterUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogNavigation_MetaData[] = {
		{ "Category", "UI Navigation" },
		{ "ModuleRelativePath", "Public/BetterUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeyNavigation_MetaData[] = {
		{ "Category", "UI Navigation" },
		{ "ModuleRelativePath", "Public/BetterUISettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuBehaviour_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuBehaviour;
	static void NewProp_bTabNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTabNavigation;
	static void NewProp_bAnalogNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogNavigation;
	static void NewProp_bKeyNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyNavigation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterUISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBetterUISettings_Statics::NewProp_MenuBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBetterUISettings_Statics::NewProp_MenuBehaviour = { "MenuBehaviour", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUISettings, MenuBehaviour), Z_Construct_UEnum_BetterUI_EMenuBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuBehaviour_MetaData), NewProp_MenuBehaviour_MetaData) }; // 808151441
void Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bTabNavigation_SetBit(void* Obj)
{
	((UBetterUISettings*)Obj)->bTabNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bTabNavigation = { "bTabNavigation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterUISettings), &Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bTabNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTabNavigation_MetaData), NewProp_bTabNavigation_MetaData) };
void Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bAnalogNavigation_SetBit(void* Obj)
{
	((UBetterUISettings*)Obj)->bAnalogNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bAnalogNavigation = { "bAnalogNavigation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterUISettings), &Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bAnalogNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnalogNavigation_MetaData), NewProp_bAnalogNavigation_MetaData) };
void Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bKeyNavigation_SetBit(void* Obj)
{
	((UBetterUISettings*)Obj)->bKeyNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bKeyNavigation = { "bKeyNavigation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterUISettings), &Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bKeyNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeyNavigation_MetaData), NewProp_bKeyNavigation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISettings_Statics::NewProp_MenuBehaviour_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISettings_Statics::NewProp_MenuBehaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bTabNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bAnalogNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUISettings_Statics::NewProp_bKeyNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterUISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterUISettings_Statics::ClassParams = {
	&UBetterUISettings::StaticClass,
	"BetterUISettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBetterUISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterUISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterUISettings()
{
	if (!Z_Registration_Info_UClass_UBetterUISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterUISettings.OuterSingleton, Z_Construct_UClass_UBetterUISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterUISettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterUISettings);
UBetterUISettings::~UBetterUISettings() {}
// ********** End Class UBetterUISettings **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterUISettings, UBetterUISettings::StaticClass, TEXT("UBetterUISettings"), &Z_Registration_Info_UClass_UBetterUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterUISettings), 951088421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h__Script_BetterUI_2198110433(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
