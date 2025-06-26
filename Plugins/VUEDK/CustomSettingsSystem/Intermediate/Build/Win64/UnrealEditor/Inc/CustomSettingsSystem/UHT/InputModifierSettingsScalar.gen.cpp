// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsModifiers/InputModifierSettingsScalar.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModifierSettingsScalar() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsScalar();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsScalar_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputModifierSettingsScalar Function SetScalarValue *********************
struct Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputModifierSettingsScalar, nullptr, "SetScalarValue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputModifierSettingsScalar::execSetScalarValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarValue();
	P_NATIVE_END;
}
// ********** End Class UInputModifierSettingsScalar Function SetScalarValue ***********************

// ********** Begin Class UInputModifierSettingsScalar *********************************************
void UInputModifierSettingsScalar::StaticRegisterNativesUInputModifierSettingsScalar()
{
	UClass* Class = UInputModifierSettingsScalar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetScalarValue", &UInputModifierSettingsScalar::execSetScalarValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputModifierSettingsScalar;
UClass* UInputModifierSettingsScalar::GetPrivateStaticClass()
{
	using TClass = UInputModifierSettingsScalar;
	if (!Z_Registration_Info_UClass_UInputModifierSettingsScalar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputModifierSettingsScalar"),
			Z_Registration_Info_UClass_UInputModifierSettingsScalar.InnerSingleton,
			StaticRegisterNativesUInputModifierSettingsScalar,
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
	return Z_Registration_Info_UClass_UInputModifierSettingsScalar.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputModifierSettingsScalar_NoRegister()
{
	return UInputModifierSettingsScalar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputModifierSettingsScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InputsModifiers/InputModifierSettingsScalar.h" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanScaleXAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanScaleYAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCanScaleZAxis" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScalar_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanScaleXAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanScaleYAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanScaleZAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsScalar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultScalar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
	static void NewProp_bCanScaleXAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanScaleXAxis;
	static void NewProp_bCanScaleYAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanScaleYAxis;
	static void NewProp_bCanScaleZAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanScaleZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputModifierSettingsScalar_SetScalarValue, "SetScalarValue" }, // 229143373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSettingsScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_XTag = { "XTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsScalar, XTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XTag_MetaData), NewProp_XTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_YTag = { "YTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsScalar, YTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YTag_MetaData), NewProp_YTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_ZTag = { "ZTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsScalar, ZTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZTag_MetaData), NewProp_ZTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_DefaultScalar = { "DefaultScalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsScalar, DefaultScalar), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScalar_MetaData), NewProp_DefaultScalar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsScalar, Multiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
void Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleXAxis_SetBit(void* Obj)
{
	((UInputModifierSettingsScalar*)Obj)->bCanScaleXAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleXAxis = { "bCanScaleXAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierSettingsScalar), &Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleXAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanScaleXAxis_MetaData), NewProp_bCanScaleXAxis_MetaData) };
void Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleYAxis_SetBit(void* Obj)
{
	((UInputModifierSettingsScalar*)Obj)->bCanScaleYAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleYAxis = { "bCanScaleYAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierSettingsScalar), &Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanScaleYAxis_MetaData), NewProp_bCanScaleYAxis_MetaData) };
void Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleZAxis_SetBit(void* Obj)
{
	((UInputModifierSettingsScalar*)Obj)->bCanScaleZAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleZAxis = { "bCanScaleZAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierSettingsScalar), &Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanScaleZAxis_MetaData), NewProp_bCanScaleZAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierSettingsScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_XTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_YTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_ZTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_DefaultScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsScalar_Statics::NewProp_bCanScaleZAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierSettingsScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifierSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSettingsScalar_Statics::ClassParams = {
	&UInputModifierSettingsScalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputModifierSettingsScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsScalar_Statics::PropPointers),
	0,
	0x401030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSettingsScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSettingsScalar()
{
	if (!Z_Registration_Info_UClass_UInputModifierSettingsScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSettingsScalar.OuterSingleton, Z_Construct_UClass_UInputModifierSettingsScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSettingsScalar.OuterSingleton;
}
UInputModifierSettingsScalar::UInputModifierSettingsScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSettingsScalar);
UInputModifierSettingsScalar::~UInputModifierSettingsScalar() {}
// ********** End Class UInputModifierSettingsScalar ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifierSettingsScalar, UInputModifierSettingsScalar::StaticClass, TEXT("UInputModifierSettingsScalar"), &Z_Registration_Info_UClass_UInputModifierSettingsScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSettingsScalar), 16088612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h__Script_CustomSettingsSystem_733580405(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
