// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsModifiers/InputModifiersSettingsNegate.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModifiersSettingsNegate() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifiersSettingsNegate();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifiersSettingsNegate_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputModifiersSettingsNegate ********************************************
void UInputModifiersSettingsNegate::StaticRegisterNativesUInputModifiersSettingsNegate()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputModifiersSettingsNegate;
UClass* UInputModifiersSettingsNegate::GetPrivateStaticClass()
{
	using TClass = UInputModifiersSettingsNegate;
	if (!Z_Registration_Info_UClass_UInputModifiersSettingsNegate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputModifiersSettingsNegate"),
			Z_Registration_Info_UClass_UInputModifiersSettingsNegate.InnerSingleton,
			StaticRegisterNativesUInputModifiersSettingsNegate,
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
	return Z_Registration_Info_UClass_UInputModifiersSettingsNegate.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputModifiersSettingsNegate_NoRegister()
{
	return UInputModifiersSettingsNegate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputModifiersSettingsNegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InputsModifiers/InputModifiersSettingsNegate.h" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxisTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanInvertXAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanInvertYAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanInvertZAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInvertXAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInvertYAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInvertZAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifiersSettingsNegate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XAxisTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YAxisTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxisTag;
	static void NewProp_bCanInvertXAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInvertXAxis;
	static void NewProp_bCanInvertYAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInvertYAxis;
	static void NewProp_bCanInvertZAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInvertZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifiersSettingsNegate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_XAxisTag = { "XAxisTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifiersSettingsNegate, XAxisTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxisTag_MetaData), NewProp_XAxisTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_YAxisTag = { "YAxisTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifiersSettingsNegate, YAxisTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisTag_MetaData), NewProp_YAxisTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_ZAxisTag = { "ZAxisTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifiersSettingsNegate, ZAxisTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxisTag_MetaData), NewProp_ZAxisTag_MetaData) }; // 133831994
void Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertXAxis_SetBit(void* Obj)
{
	((UInputModifiersSettingsNegate*)Obj)->bCanInvertXAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertXAxis = { "bCanInvertXAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifiersSettingsNegate), &Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertXAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInvertXAxis_MetaData), NewProp_bCanInvertXAxis_MetaData) };
void Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertYAxis_SetBit(void* Obj)
{
	((UInputModifiersSettingsNegate*)Obj)->bCanInvertYAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertYAxis = { "bCanInvertYAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifiersSettingsNegate), &Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInvertYAxis_MetaData), NewProp_bCanInvertYAxis_MetaData) };
void Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertZAxis_SetBit(void* Obj)
{
	((UInputModifiersSettingsNegate*)Obj)->bCanInvertZAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertZAxis = { "bCanInvertZAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifiersSettingsNegate), &Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInvertZAxis_MetaData), NewProp_bCanInvertZAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_XAxisTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_YAxisTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_ZAxisTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::NewProp_bCanInvertZAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifierSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::ClassParams = {
	&UInputModifiersSettingsNegate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::PropPointers),
	0,
	0x401030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifiersSettingsNegate()
{
	if (!Z_Registration_Info_UClass_UInputModifiersSettingsNegate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifiersSettingsNegate.OuterSingleton, Z_Construct_UClass_UInputModifiersSettingsNegate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifiersSettingsNegate.OuterSingleton;
}
UInputModifiersSettingsNegate::UInputModifiersSettingsNegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifiersSettingsNegate);
UInputModifiersSettingsNegate::~UInputModifiersSettingsNegate() {}
// ********** End Class UInputModifiersSettingsNegate **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifiersSettingsNegate_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifiersSettingsNegate, UInputModifiersSettingsNegate::StaticClass, TEXT("UInputModifiersSettingsNegate"), &Z_Registration_Info_UClass_UInputModifiersSettingsNegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifiersSettingsNegate), 1929461540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifiersSettingsNegate_h__Script_CustomSettingsSystem_2016821857(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifiersSettingsNegate_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifiersSettingsNegate_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
