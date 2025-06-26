// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterSettingsPanel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterSettingsPanel() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsPanel();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsPanel_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterSettingsPanel Function ResetSettingsToDefaults ****************
void IBetterSettingsPanel::ResetSettingsToDefaults()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetSettingsToDefaults instead.");
}
static FName NAME_UBetterSettingsPanel_ResetSettingsToDefaults = FName(TEXT("ResetSettingsToDefaults"));
void IBetterSettingsPanel::Execute_ResetSettingsToDefaults(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterSettingsPanel::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBetterSettingsPanel_ResetSettingsToDefaults);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSettingsPanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSettingsPanel, nullptr, "ResetSettingsToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Interface UBetterSettingsPanel Function ResetSettingsToDefaults ******************

// ********** Begin Interface UBetterSettingsPanel *************************************************
void UBetterSettingsPanel::StaticRegisterNativesUBetterSettingsPanel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterSettingsPanel;
UClass* UBetterSettingsPanel::GetPrivateStaticClass()
{
	using TClass = UBetterSettingsPanel;
	if (!Z_Registration_Info_UClass_UBetterSettingsPanel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterSettingsPanel"),
			Z_Registration_Info_UClass_UBetterSettingsPanel.InnerSingleton,
			StaticRegisterNativesUBetterSettingsPanel,
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
	return Z_Registration_Info_UClass_UBetterSettingsPanel.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterSettingsPanel_NoRegister()
{
	return UBetterSettingsPanel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterSettingsPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/BetterSettingsPanel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterSettingsPanel_ResetSettingsToDefaults, "ResetSettingsToDefaults" }, // 2342714311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterSettingsPanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterSettingsPanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSettingsPanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterSettingsPanel_Statics::ClassParams = {
	&UBetterSettingsPanel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSettingsPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterSettingsPanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterSettingsPanel()
{
	if (!Z_Registration_Info_UClass_UBetterSettingsPanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterSettingsPanel.OuterSingleton, Z_Construct_UClass_UBetterSettingsPanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterSettingsPanel.OuterSingleton;
}
UBetterSettingsPanel::UBetterSettingsPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterSettingsPanel);
// ********** End Interface UBetterSettingsPanel ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterSettingsPanel, UBetterSettingsPanel::StaticClass, TEXT("UBetterSettingsPanel"), &Z_Registration_Info_UClass_UBetterSettingsPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterSettingsPanel), 2669545677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h__Script_BetterUI_1089585881(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsPanel_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
