// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterSettingsCustomOption.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterSettingsCustomOption() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsCustomOption();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsCustomOption_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterSettingsCustomOption Function GetTag **************************
struct BetterSettingsCustomOption_eventGetTag_Parms
{
	FGameplayTag ReturnValue;
};
FGameplayTag IBetterSettingsCustomOption::GetTag() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTag instead.");
	BetterSettingsCustomOption_eventGetTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBetterSettingsCustomOption_GetTag = FName(TEXT("GetTag"));
FGameplayTag IBetterSettingsCustomOption::Execute_GetTag(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterSettingsCustomOption::StaticClass()));
	BetterSettingsCustomOption_eventGetTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterSettingsCustomOption_GetTag);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSettingsCustomOption.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSettingsCustomOption_eventGetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSettingsCustomOption, nullptr, "GetTag", Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::PropPointers), sizeof(BetterSettingsCustomOption_eventGetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterSettingsCustomOption_eventGetTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Interface UBetterSettingsCustomOption Function GetTag ****************************

// ********** Begin Interface UBetterSettingsCustomOption ******************************************
void UBetterSettingsCustomOption::StaticRegisterNativesUBetterSettingsCustomOption()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterSettingsCustomOption;
UClass* UBetterSettingsCustomOption::GetPrivateStaticClass()
{
	using TClass = UBetterSettingsCustomOption;
	if (!Z_Registration_Info_UClass_UBetterSettingsCustomOption.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterSettingsCustomOption"),
			Z_Registration_Info_UClass_UBetterSettingsCustomOption.InnerSingleton,
			StaticRegisterNativesUBetterSettingsCustomOption,
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
	return Z_Registration_Info_UClass_UBetterSettingsCustomOption.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterSettingsCustomOption_NoRegister()
{
	return UBetterSettingsCustomOption::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterSettingsCustomOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/BetterSettingsCustomOption.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterSettingsCustomOption_GetTag, "GetTag" }, // 129100006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterSettingsCustomOption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterSettingsCustomOption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSettingsCustomOption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterSettingsCustomOption_Statics::ClassParams = {
	&UBetterSettingsCustomOption::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSettingsCustomOption_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterSettingsCustomOption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterSettingsCustomOption()
{
	if (!Z_Registration_Info_UClass_UBetterSettingsCustomOption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterSettingsCustomOption.OuterSingleton, Z_Construct_UClass_UBetterSettingsCustomOption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterSettingsCustomOption.OuterSingleton;
}
UBetterSettingsCustomOption::UBetterSettingsCustomOption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterSettingsCustomOption);
// ********** End Interface UBetterSettingsCustomOption ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterSettingsCustomOption, UBetterSettingsCustomOption::StaticClass, TEXT("UBetterSettingsCustomOption"), &Z_Registration_Info_UClass_UBetterSettingsCustomOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterSettingsCustomOption), 966130502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h__Script_BetterUI_3395672850(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
