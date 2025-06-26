// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Features/Gameplay/CurrencySystem/Data/CurrencyData.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCurrencyData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_VUEDKCore();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrencyData();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrencyData_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCurrencyData Function GetMinAmount **************************************
struct Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics
{
	struct CurrencyData_eventGetMinAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrencyData_eventGetMinAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrencyData, nullptr, "GetMinAmount", Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::CurrencyData_eventGetMinAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::CurrencyData_eventGetMinAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrencyData_GetMinAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrencyData_GetMinAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrencyData::execGetMinAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinAmount();
	P_NATIVE_END;
}
// ********** End Class UCurrencyData Function GetMinAmount ****************************************

// ********** Begin Class UCurrencyData ************************************************************
void UCurrencyData::StaticRegisterNativesUCurrencyData()
{
	UClass* Class = UCurrencyData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMinAmount", &UCurrencyData::execGetMinAmount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCurrencyData;
UClass* UCurrencyData::GetPrivateStaticClass()
{
	using TClass = UCurrencyData;
	if (!Z_Registration_Info_UClass_UCurrencyData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CurrencyData"),
			Z_Registration_Info_UClass_UCurrencyData.InnerSingleton,
			StaticRegisterNativesUCurrencyData,
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
	return Z_Registration_Info_UClass_UCurrencyData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCurrencyData_NoRegister()
{
	return UCurrencyData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCurrencyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyID_MetaData[] = {
		{ "Category", "CurrencyData" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyName_MetaData[] = {
		{ "Category", "CurrencyData" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyDescription_MetaData[] = {
		{ "Category", "CurrencyData" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyIcon_MetaData[] = {
		{ "Category", "CurrencyData" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyRange_MetaData[] = {
		{ "Category", "CurrencyData" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/CurrencyData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrencyID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CurrencyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CurrencyDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrencyIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrencyRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrencyData_GetMinAmount, "GetMinAmount" }, // 1335582728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrencyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyID = { "CurrencyID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyData, CurrencyID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyID_MetaData), NewProp_CurrencyID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyName = { "CurrencyName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyData, CurrencyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyName_MetaData), NewProp_CurrencyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyDescription = { "CurrencyDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyData, CurrencyDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyDescription_MetaData), NewProp_CurrencyDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyIcon = { "CurrencyIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyData, CurrencyIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyIcon_MetaData), NewProp_CurrencyIcon_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyRange = { "CurrencyRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrencyData, CurrencyRange), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyRange_MetaData), NewProp_CurrencyRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrencyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrencyData_Statics::NewProp_CurrencyRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurrencyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VUEDKCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurrencyData_Statics::ClassParams = {
	&UCurrencyData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurrencyData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrencyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurrencyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurrencyData()
{
	if (!Z_Registration_Info_UClass_UCurrencyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurrencyData.OuterSingleton, Z_Construct_UClass_UCurrencyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurrencyData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrencyData);
UCurrencyData::~UCurrencyData() {}
// ********** End Class UCurrencyData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h__Script_VUEDKCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurrencyData, UCurrencyData::StaticClass, TEXT("UCurrencyData"), &Z_Registration_Info_UClass_UCurrencyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurrencyData), 1481617771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h__Script_VUEDKCore_1113803335(TEXT("/Script/VUEDKCore"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h__Script_VUEDKCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h__Script_VUEDKCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
