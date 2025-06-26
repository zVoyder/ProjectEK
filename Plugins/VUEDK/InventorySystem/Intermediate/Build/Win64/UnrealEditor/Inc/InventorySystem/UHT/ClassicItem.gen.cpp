// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/ClassicItem.h"
#include "ClassicInventory/Data/ClassicItemSlotData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicItem() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItem_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItemData_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSlotData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UClassicItem Function GetClassicItemData *********************************
struct Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics
{
	struct ClassicItem_eventGetClassicItemData_Parms
	{
		UClassicItemData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassicItem_eventGetClassicItemData_Parms, ReturnValue), Z_Construct_UClass_UClassicItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UClassicItem, nullptr, "GetClassicItemData", Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::ClassicItem_eventGetClassicItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::ClassicItem_eventGetClassicItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClassicItem_GetClassicItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassicItem_GetClassicItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClassicItem::execGetClassicItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClassicItemData**)Z_Param__Result=P_THIS->GetClassicItemData();
	P_NATIVE_END;
}
// ********** End Class UClassicItem Function GetClassicItemData ***********************************

// ********** Begin Class UClassicItem Function GetMinRequiredSlots ********************************
struct Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics
{
	struct ClassicItem_eventGetMinRequiredSlots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassicItem_eventGetMinRequiredSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UClassicItem, nullptr, "GetMinRequiredSlots", Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::ClassicItem_eventGetMinRequiredSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::ClassicItem_eventGetMinRequiredSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClassicItem::execGetMinRequiredSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinRequiredSlots();
	P_NATIVE_END;
}
// ********** End Class UClassicItem Function GetMinRequiredSlots **********************************

// ********** Begin Class UClassicItem Function GetRequiredSlots ***********************************
struct Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics
{
	struct ClassicItem_eventGetRequiredSlots_Parms
	{
		TArray<FClassicItemSlotData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClassicItemSlotData, METADATA_PARAMS(0, nullptr) }; // 126303998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassicItem_eventGetRequiredSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 126303998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UClassicItem, nullptr, "GetRequiredSlots", Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::ClassicItem_eventGetRequiredSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::ClassicItem_eventGetRequiredSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClassicItem_GetRequiredSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassicItem_GetRequiredSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClassicItem::execGetRequiredSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FClassicItemSlotData>*)Z_Param__Result=P_THIS->GetRequiredSlots();
	P_NATIVE_END;
}
// ********** End Class UClassicItem Function GetRequiredSlots *************************************

// ********** Begin Class UClassicItem *************************************************************
void UClassicItem::StaticRegisterNativesUClassicItem()
{
	UClass* Class = UClassicItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClassicItemData", &UClassicItem::execGetClassicItemData },
		{ "GetMinRequiredSlots", &UClassicItem::execGetMinRequiredSlots },
		{ "GetRequiredSlots", &UClassicItem::execGetRequiredSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClassicItem;
UClass* UClassicItem::GetPrivateStaticClass()
{
	using TClass = UClassicItem;
	if (!Z_Registration_Info_UClass_UClassicItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ClassicItem"),
			Z_Registration_Info_UClass_UClassicItem.InnerSingleton,
			StaticRegisterNativesUClassicItem,
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
	return Z_Registration_Info_UClass_UClassicItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UClassicItem_NoRegister()
{
	return UClassicItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UClassicItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassicInventory/ClassicItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClassicItem_GetClassicItemData, "GetClassicItemData" }, // 1399904873
		{ &Z_Construct_UFunction_UClassicItem_GetMinRequiredSlots, "GetMinRequiredSlots" }, // 955694449
		{ &Z_Construct_UFunction_UClassicItem_GetRequiredSlots, "GetRequiredSlots" }, // 2695350894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassicItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClassicItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassicItem_Statics::ClassParams = {
	&UClassicItem::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassicItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassicItem()
{
	if (!Z_Registration_Info_UClass_UClassicItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassicItem.OuterSingleton, Z_Construct_UClass_UClassicItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassicItem.OuterSingleton;
}
UClassicItem::UClassicItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassicItem);
UClassicItem::~UClassicItem() {}
// ********** End Class UClassicItem ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClassicItem, UClassicItem::StaticClass, TEXT("UClassicItem"), &Z_Registration_Info_UClass_UClassicItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassicItem), 3315522462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h__Script_InventorySystem_3266699625(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
