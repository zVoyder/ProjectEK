// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/BetterUIUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterUIUtility() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIUtility();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIUtility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterUIUtility Function GetProjectName *********************************
struct Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics
{
	struct BetterUIUtility_eventGetProjectName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterUI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/BetterUIUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIUtility_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIUtility, nullptr, "GetProjectName", Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::BetterUIUtility_eventGetProjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::BetterUIUtility_eventGetProjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterUIUtility_GetProjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIUtility_GetProjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIUtility::execGetProjectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBetterUIUtility::GetProjectName();
	P_NATIVE_END;
}
// ********** End Class UBetterUIUtility Function GetProjectName ***********************************

// ********** Begin Class UBetterUIUtility Function GetProjectVersion ******************************
struct Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics
{
	struct BetterUIUtility_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterUI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/BetterUIUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIUtility_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIUtility, nullptr, "GetProjectVersion", Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::BetterUIUtility_eventGetProjectVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::BetterUIUtility_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIUtility::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBetterUIUtility::GetProjectVersion();
	P_NATIVE_END;
}
// ********** End Class UBetterUIUtility Function GetProjectVersion ********************************

// ********** Begin Class UBetterUIUtility *********************************************************
void UBetterUIUtility::StaticRegisterNativesUBetterUIUtility()
{
	UClass* Class = UBetterUIUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetProjectName", &UBetterUIUtility::execGetProjectName },
		{ "GetProjectVersion", &UBetterUIUtility::execGetProjectVersion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterUIUtility;
UClass* UBetterUIUtility::GetPrivateStaticClass()
{
	using TClass = UBetterUIUtility;
	if (!Z_Registration_Info_UClass_UBetterUIUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterUIUtility"),
			Z_Registration_Info_UClass_UBetterUIUtility.InnerSingleton,
			StaticRegisterNativesUBetterUIUtility,
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
	return Z_Registration_Info_UClass_UBetterUIUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterUIUtility_NoRegister()
{
	return UBetterUIUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterUIUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/BetterUIUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/BetterUIUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterUIUtility_GetProjectName, "GetProjectName" }, // 3862818606
		{ &Z_Construct_UFunction_UBetterUIUtility_GetProjectVersion, "GetProjectVersion" }, // 3429408717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterUIUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterUIUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterUIUtility_Statics::ClassParams = {
	&UBetterUIUtility::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterUIUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterUIUtility()
{
	if (!Z_Registration_Info_UClass_UBetterUIUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterUIUtility.OuterSingleton, Z_Construct_UClass_UBetterUIUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterUIUtility.OuterSingleton;
}
UBetterUIUtility::UBetterUIUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterUIUtility);
UBetterUIUtility::~UBetterUIUtility() {}
// ********** End Class UBetterUIUtility ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterUIUtility, UBetterUIUtility::StaticClass, TEXT("UBetterUIUtility"), &Z_Registration_Info_UClass_UBetterUIUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterUIUtility), 2321008955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h__Script_BetterUI_2675748215(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
