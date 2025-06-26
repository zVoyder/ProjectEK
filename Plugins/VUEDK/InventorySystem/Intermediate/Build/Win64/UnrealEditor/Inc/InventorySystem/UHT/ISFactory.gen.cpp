// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ISFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeISFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISFactory();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISFactory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UISFactory Function CreateItem *******************************************
struct Z_Construct_UFunction_UISFactory_CreateItem_Statics
{
	struct ISFactory_eventCreateItem_Parms
	{
		UObject* WorldContextObject;
		UItemDataBase* Data;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Inventory System" },
		{ "ModuleRelativePath", "Public/Factories/ISFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItem_Parms, Data), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISFactory_CreateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISFactory_CreateItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISFactory, nullptr, "CreateItem", Z_Construct_UFunction_UISFactory_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISFactory_CreateItem_Statics::ISFactory_eventCreateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISFactory_CreateItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISFactory_CreateItem_Statics::ISFactory_eventCreateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISFactory_CreateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISFactory_CreateItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISFactory::execCreateItem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UItemDataBase,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=UISFactory::CreateItem(Z_Param_WorldContextObject,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UISFactory Function CreateItem *********************************************

// ********** Begin Class UISFactory Function CreateItemDropActor **********************************
struct Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics
{
	struct ISFactory_eventCreateItemDropActor_Parms
	{
		const UObject* WorldContextObject;
		UItemBase* Item;
		AItemDropActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Inventory System" },
		{ "ModuleRelativePath", "Public/Factories/ISFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItemDropActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItemDropActor_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItemDropActor_Parms, ReturnValue), Z_Construct_UClass_AItemDropActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISFactory, nullptr, "CreateItemDropActor", Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::ISFactory_eventCreateItemDropActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::ISFactory_eventCreateItemDropActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISFactory_CreateItemDropActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISFactory_CreateItemDropActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISFactory::execCreateItemDropActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AItemDropActor**)Z_Param__Result=UISFactory::CreateItemDropActor(Z_Param_WorldContextObject,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UISFactory Function CreateItemDropActor ************************************

// ********** Begin Class UISFactory Function CreateItems ******************************************
struct Z_Construct_UFunction_UISFactory_CreateItems_Statics
{
	struct ISFactory_eventCreateItems_Parms
	{
		UObject* WorldContextObject;
		UItemDataBase* Data;
		int32 OutOverflow;
		int32 Quantity;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Inventory System" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/Factories/ISFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutOverflow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItems_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItems_Parms, Data), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_OutOverflow = { "OutOverflow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItems_Parms, OutOverflow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItems_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISFactory_eventCreateItems_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISFactory_CreateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_OutOverflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISFactory_CreateItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISFactory_CreateItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UISFactory, nullptr, "CreateItems", Z_Construct_UFunction_UISFactory_CreateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISFactory_CreateItems_Statics::ISFactory_eventCreateItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISFactory_CreateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISFactory_CreateItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UISFactory_CreateItems_Statics::ISFactory_eventCreateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISFactory_CreateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISFactory_CreateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISFactory::execCreateItems)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UItemDataBase,Z_Param_Data);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutOverflow);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=UISFactory::CreateItems(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_Out_OutOverflow,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UISFactory Function CreateItems ********************************************

// ********** Begin Class UISFactory ***************************************************************
void UISFactory::StaticRegisterNativesUISFactory()
{
	UClass* Class = UISFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateItem", &UISFactory::execCreateItem },
		{ "CreateItemDropActor", &UISFactory::execCreateItemDropActor },
		{ "CreateItems", &UISFactory::execCreateItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UISFactory;
UClass* UISFactory::GetPrivateStaticClass()
{
	using TClass = UISFactory;
	if (!Z_Registration_Info_UClass_UISFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ISFactory"),
			Z_Registration_Info_UClass_UISFactory.InnerSingleton,
			StaticRegisterNativesUISFactory,
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
	return Z_Registration_Info_UClass_UISFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UISFactory_NoRegister()
{
	return UISFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UISFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/ISFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/ISFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UISFactory_CreateItem, "CreateItem" }, // 3535851094
		{ &Z_Construct_UFunction_UISFactory_CreateItemDropActor, "CreateItemDropActor" }, // 4043033875
		{ &Z_Construct_UFunction_UISFactory_CreateItems, "CreateItems" }, // 72642673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UISFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISFactory_Statics::ClassParams = {
	&UISFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UISFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISFactory()
{
	if (!Z_Registration_Info_UClass_UISFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISFactory.OuterSingleton, Z_Construct_UClass_UISFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISFactory.OuterSingleton;
}
UISFactory::UISFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISFactory);
UISFactory::~UISFactory() {}
// ********** End Class UISFactory *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UISFactory, UISFactory::StaticClass, TEXT("UISFactory"), &Z_Registration_Info_UClass_UISFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISFactory), 1718086325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h__Script_InventorySystem_3633023704(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
