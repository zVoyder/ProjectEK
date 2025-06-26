// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsHandlerSystemSettings.h"
#include "Data/InputModeGameplay.h"
#include "Data/InputModeUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputsHandlerSystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSystemSettings();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister();
INPUTSHANDLERSYSTEM_API UEnum* Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour();
INPUTSHANDLERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputModeGameplay();
INPUTSHANDLERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputModeUI();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputsHandlerSystemSettings *********************************************
void UInputsHandlerSystemSettings::StaticRegisterNativesUInputsHandlerSystemSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputsHandlerSystemSettings;
UClass* UInputsHandlerSystemSettings::GetPrivateStaticClass()
{
	using TClass = UInputsHandlerSystemSettings;
	if (!Z_Registration_Info_UClass_UInputsHandlerSystemSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputsHandlerSystemSettings"),
			Z_Registration_Info_UClass_UInputsHandlerSystemSettings.InnerSingleton,
			StaticRegisterNativesUInputsHandlerSystemSettings,
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
	return Z_Registration_Info_UClass_UInputsHandlerSystemSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister()
{
	return UInputsHandlerSystemSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputsHandlerSystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Inputs Handler System Settings" },
		{ "IncludePath", "InputsHandlerSystemSettings.h" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonContexts_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping contexts that are always active and shared across all input setups." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayContexts_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping contexts that are only active when the game is in gameplay mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIContexts_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping contexts that are only active when the game is in UI mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextsBehaviour_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIContextsPriority_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ContextsBehaviour == EContextsBehaviour::Priority" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedContexts_MetaData[] = {
		{ "Category", "Mapping Contexts" },
		{ "EditCondition", "ContextsBehaviour == EContextsBehaviour::Priority" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input mapping contexts that are excluded when the game is in UI mode with priority." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeGameplay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeUI_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsHandlerSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CommonContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CommonContexts;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GameplayContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_GameplayContexts;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UIContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_UIContexts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContextsBehaviour_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContextsBehaviour;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIContextsPriority;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExcludedContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExcludedContexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputModeGameplay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputModeUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputsHandlerSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_CommonContexts_ElementProp = { "CommonContexts", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_CommonContexts = { "CommonContexts", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, CommonContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonContexts_MetaData), NewProp_CommonContexts_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_GameplayContexts_ElementProp = { "GameplayContexts", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_GameplayContexts = { "GameplayContexts", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, GameplayContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayContexts_MetaData), NewProp_GameplayContexts_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContexts_ElementProp = { "UIContexts", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContexts = { "UIContexts", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, UIContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIContexts_MetaData), NewProp_UIContexts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ContextsBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ContextsBehaviour = { "ContextsBehaviour", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, ContextsBehaviour), Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextsBehaviour_MetaData), NewProp_ContextsBehaviour_MetaData) }; // 1627090170
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContextsPriority = { "UIContextsPriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, UIContextsPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIContextsPriority_MetaData), NewProp_UIContextsPriority_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ExcludedContexts_ElementProp = { "ExcludedContexts", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ExcludedContexts = { "ExcludedContexts", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, ExcludedContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedContexts_MetaData), NewProp_ExcludedContexts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_InputModeGameplay = { "InputModeGameplay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, InputModeGameplay), Z_Construct_UScriptStruct_FInputModeGameplay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeGameplay_MetaData), NewProp_InputModeGameplay_MetaData) }; // 3892960342
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_InputModeUI = { "InputModeUI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSystemSettings, InputModeUI), Z_Construct_UScriptStruct_FInputModeUI, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeUI_MetaData), NewProp_InputModeUI_MetaData) }; // 538002330
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_CommonContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_CommonContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_GameplayContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_GameplayContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ContextsBehaviour_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ContextsBehaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_UIContextsPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ExcludedContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_ExcludedContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_InputModeGameplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::NewProp_InputModeUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::ClassParams = {
	&UInputsHandlerSystemSettings::StaticClass,
	"InputsHandlerSystemSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputsHandlerSystemSettings()
{
	if (!Z_Registration_Info_UClass_UInputsHandlerSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputsHandlerSystemSettings.OuterSingleton, Z_Construct_UClass_UInputsHandlerSystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputsHandlerSystemSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputsHandlerSystemSettings);
UInputsHandlerSystemSettings::~UInputsHandlerSystemSettings() {}
// ********** End Class UInputsHandlerSystemSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputsHandlerSystemSettings, UInputsHandlerSystemSettings::StaticClass, TEXT("UInputsHandlerSystemSettings"), &Z_Registration_Info_UClass_UInputsHandlerSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputsHandlerSystemSettings), 1677439958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h__Script_InputsHandlerSystem_3884387799(TEXT("/Script/InputsHandlerSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h__Script_InputsHandlerSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h__Script_InputsHandlerSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
