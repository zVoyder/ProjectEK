// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/RPGItemsGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemsGenerator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemsGenerator();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemsGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItemsGenerator Function TryGenerateRPGGearItem ***********************
struct Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics
{
	struct RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms
	{
		URPGGearItem* GearItem;
		const URPGGearItemGenerationData* GenerationData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGItemsGenerator" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemsGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GearItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_GearItem = { "GearItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms, GearItem), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms, GenerationData), Z_Construct_UClass_URPGGearItemGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
void Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms), &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_GearItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGItemsGenerator, nullptr, "TryGenerateRPGGearItem", Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::RPGItemsGenerator_eventTryGenerateRPGGearItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGItemsGenerator::execTryGenerateRPGGearItem)
{
	P_GET_OBJECT(URPGGearItem,Z_Param_GearItem);
	P_GET_OBJECT(URPGGearItemGenerationData,Z_Param_GenerationData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URPGItemsGenerator::TryGenerateRPGGearItem(Z_Param_GearItem,Z_Param_GenerationData);
	P_NATIVE_END;
}
// ********** End Class URPGItemsGenerator Function TryGenerateRPGGearItem *************************

// ********** Begin Class URPGItemsGenerator Function TryGenerateRPGGearItemWithFixedStats *********
struct Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics
{
	struct RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms
	{
		URPGGearItem* GearItem;
		const URPGGearItemFixedStatsGenerationData* GenerationData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGItemsGenerator" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemsGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GearItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_GearItem = { "GearItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms, GearItem), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms, GenerationData), Z_Construct_UClass_URPGGearItemFixedStatsGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
void Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms), &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_GearItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGItemsGenerator, nullptr, "TryGenerateRPGGearItemWithFixedStats", Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::RPGItemsGenerator_eventTryGenerateRPGGearItemWithFixedStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGItemsGenerator::execTryGenerateRPGGearItemWithFixedStats)
{
	P_GET_OBJECT(URPGGearItem,Z_Param_GearItem);
	P_GET_OBJECT(URPGGearItemFixedStatsGenerationData,Z_Param_GenerationData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URPGItemsGenerator::TryGenerateRPGGearItemWithFixedStats(Z_Param_GearItem,Z_Param_GenerationData);
	P_NATIVE_END;
}
// ********** End Class URPGItemsGenerator Function TryGenerateRPGGearItemWithFixedStats ***********

// ********** Begin Class URPGItemsGenerator Function TryGenerateRPGItem ***************************
struct Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics
{
	struct RPGItemsGenerator_eventTryGenerateRPGItem_Parms
	{
		URPGItem* Item;
		const URPGItemBaseGenerationData* GenerationData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|RPGItemsGenerator" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemsGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGItem_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_GenerationData = { "GenerationData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItemsGenerator_eventTryGenerateRPGItem_Parms, GenerationData), Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationData_MetaData), NewProp_GenerationData_MetaData) };
void Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGItemsGenerator_eventTryGenerateRPGItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGItemsGenerator_eventTryGenerateRPGItem_Parms), &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_GenerationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGItemsGenerator, nullptr, "TryGenerateRPGItem", Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::RPGItemsGenerator_eventTryGenerateRPGItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::RPGItemsGenerator_eventTryGenerateRPGItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGItemsGenerator::execTryGenerateRPGItem)
{
	P_GET_OBJECT(URPGItem,Z_Param_Item);
	P_GET_OBJECT(URPGItemBaseGenerationData,Z_Param_GenerationData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URPGItemsGenerator::TryGenerateRPGItem(Z_Param_Item,Z_Param_GenerationData);
	P_NATIVE_END;
}
// ********** End Class URPGItemsGenerator Function TryGenerateRPGItem *****************************

// ********** Begin Class URPGItemsGenerator *******************************************************
void URPGItemsGenerator::StaticRegisterNativesURPGItemsGenerator()
{
	UClass* Class = URPGItemsGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryGenerateRPGGearItem", &URPGItemsGenerator::execTryGenerateRPGGearItem },
		{ "TryGenerateRPGGearItemWithFixedStats", &URPGItemsGenerator::execTryGenerateRPGGearItemWithFixedStats },
		{ "TryGenerateRPGItem", &URPGItemsGenerator::execTryGenerateRPGItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItemsGenerator;
UClass* URPGItemsGenerator::GetPrivateStaticClass()
{
	using TClass = URPGItemsGenerator;
	if (!Z_Registration_Info_UClass_URPGItemsGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItemsGenerator"),
			Z_Registration_Info_UClass_URPGItemsGenerator.InnerSingleton,
			StaticRegisterNativesURPGItemsGenerator,
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
	return Z_Registration_Info_UClass_URPGItemsGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItemsGenerator_NoRegister()
{
	return URPGItemsGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItemsGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/RPGItemsGenerator.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemsGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItem, "TryGenerateRPGGearItem" }, // 3204501084
		{ &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGGearItemWithFixedStats, "TryGenerateRPGGearItemWithFixedStats" }, // 1674376930
		{ &Z_Construct_UFunction_URPGItemsGenerator_TryGenerateRPGItem, "TryGenerateRPGItem" }, // 1186912839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemsGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGItemsGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemsGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemsGenerator_Statics::ClassParams = {
	&URPGItemsGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemsGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemsGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemsGenerator()
{
	if (!Z_Registration_Info_UClass_URPGItemsGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemsGenerator.OuterSingleton, Z_Construct_UClass_URPGItemsGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemsGenerator.OuterSingleton;
}
URPGItemsGenerator::URPGItemsGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemsGenerator);
URPGItemsGenerator::~URPGItemsGenerator() {}
// ********** End Class URPGItemsGenerator *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemsGenerator, URPGItemsGenerator::StaticClass, TEXT("URPGItemsGenerator"), &Z_Registration_Info_UClass_URPGItemsGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemsGenerator), 201742425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h__Script_RPGSystem_3565063529(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
