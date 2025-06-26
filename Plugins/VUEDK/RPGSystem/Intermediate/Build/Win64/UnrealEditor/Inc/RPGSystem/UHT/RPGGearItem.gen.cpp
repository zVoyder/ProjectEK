// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Items/RPGGearItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItem() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGGearItem Function AddItemStatWithOperation ***************************
struct Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics
{
	struct RPGGearItem_eventAddItemStatWithOperation_Parms
	{
		UCoreStatData* Stat;
		UStatOperation* Operation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGGearItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGearItem_eventAddItemStatWithOperation_Parms, Stat), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGearItem_eventAddItemStatWithOperation_Parms, Operation), Z_Construct_UClass_UStatOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGGearItem, nullptr, "AddItemStatWithOperation", Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::RPGGearItem_eventAddItemStatWithOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::RPGGearItem_eventAddItemStatWithOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGGearItem::execAddItemStatWithOperation)
{
	P_GET_OBJECT(UCoreStatData,Z_Param_Stat);
	P_GET_OBJECT(UStatOperation,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemStatWithOperation(Z_Param_Stat,Z_Param_Operation);
	P_NATIVE_END;
}
// ********** End Class URPGGearItem Function AddItemStatWithOperation *****************************

// ********** Begin Class URPGGearItem Function AddItemStatWithValue *******************************
struct Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics
{
	struct RPGGearItem_eventAddItemStatWithValue_Parms
	{
		UCoreStatData* Stat;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGGearItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGearItem_eventAddItemStatWithValue_Parms, Stat), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGearItem_eventAddItemStatWithValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGGearItem, nullptr, "AddItemStatWithValue", Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::RPGGearItem_eventAddItemStatWithValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::RPGGearItem_eventAddItemStatWithValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGGearItem::execAddItemStatWithValue)
{
	P_GET_OBJECT(UCoreStatData,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemStatWithValue(Z_Param_Stat,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URPGGearItem Function AddItemStatWithValue *********************************

// ********** Begin Class URPGGearItem Function GetRPGGearItemData *********************************
struct Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics
{
	struct RPGGearItem_eventGetRPGGearItemData_Parms
	{
		URPGGearItemData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGGearItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGGearItem_eventGetRPGGearItemData_Parms, ReturnValue), Z_Construct_UClass_URPGGearItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGGearItem, nullptr, "GetRPGGearItemData", Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::RPGGearItem_eventGetRPGGearItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::RPGGearItem_eventGetRPGGearItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGGearItem::execGetRPGGearItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGGearItemData**)Z_Param__Result=P_THIS->GetRPGGearItemData();
	P_NATIVE_END;
}
// ********** End Class URPGGearItem Function GetRPGGearItemData ***********************************

// ********** Begin Class URPGGearItem *************************************************************
void URPGGearItem::StaticRegisterNativesURPGGearItem()
{
	UClass* Class = URPGGearItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemStatWithOperation", &URPGGearItem::execAddItemStatWithOperation },
		{ "AddItemStatWithValue", &URPGGearItem::execAddItemStatWithValue },
		{ "GetRPGGearItemData", &URPGGearItem::execGetRPGGearItemData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGGearItem;
UClass* URPGGearItem::GetPrivateStaticClass()
{
	using TClass = URPGGearItem;
	if (!Z_Registration_Info_UClass_URPGGearItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGGearItem"),
			Z_Registration_Info_UClass_URPGGearItem.InnerSingleton,
			StaticRegisterNativesURPGGearItem,
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
	return Z_Registration_Info_UClass_URPGGearItem.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGGearItem_NoRegister()
{
	return URPGGearItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGGearItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Items/RPGGearItem.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGGearItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearStatsContainer_MetaData[] = {
		{ "Category", "RPGGearItem" },
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGGearItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GearStatsContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGGearItem_AddItemStatWithOperation, "AddItemStatWithOperation" }, // 1745673547
		{ &Z_Construct_UFunction_URPGGearItem_AddItemStatWithValue, "AddItemStatWithValue" }, // 2663520704
		{ &Z_Construct_UFunction_URPGGearItem_GetRPGGearItemData, "GetRPGGearItemData" }, // 1672409418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGearItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGearItem_Statics::NewProp_GearStatsContainer = { "GearStatsContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGGearItem, GearStatsContainer), Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearStatsContainer_MetaData), NewProp_GearStatsContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGearItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGearItem_Statics::NewProp_GearStatsContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGGearItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGItem,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGGearItem_Statics::ClassParams = {
	&URPGGearItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGGearItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGGearItem_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGGearItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGGearItem()
{
	if (!Z_Registration_Info_UClass_URPGGearItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGGearItem.OuterSingleton, Z_Construct_UClass_URPGGearItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGGearItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGearItem);
URPGGearItem::~URPGGearItem() {}
// ********** End Class URPGGearItem ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGGearItem, URPGGearItem::StaticClass, TEXT("URPGGearItem"), &Z_Registration_Info_UClass_URPGGearItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGGearItem), 2040846443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h__Script_RPGSystem_502757459(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
