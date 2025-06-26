// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/TetrisInventoriesManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisInventoriesManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTetrisInventoriesManager Function TryTransferItem ***********************
struct Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics
{
	struct TetrisInventoriesManager_eventTryTransferItem_Parms
	{
		UTetrisItem* Item;
		UTetrisInventory* DestinationInventory;
		FIntPoint DestinationPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesManager_eventTryTransferItem_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_DestinationInventory = { "DestinationInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesManager_eventTryTransferItem_Parms, DestinationInventory), Z_Construct_UClass_UTetrisInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationInventory_MetaData), NewProp_DestinationInventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_DestinationPosition = { "DestinationPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesManager_eventTryTransferItem_Parms, DestinationPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPosition_MetaData), NewProp_DestinationPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoriesManager_eventTryTransferItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoriesManager_eventTryTransferItem_Parms), &Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_DestinationInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_DestinationPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesManager, nullptr, "TryTransferItem", Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::TetrisInventoriesManager_eventTryTransferItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::TetrisInventoriesManager_eventTryTransferItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesManager::execTryTransferItem)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_Item);
	P_GET_OBJECT(UTetrisInventory,Z_Param_DestinationInventory);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_DestinationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryTransferItem(Z_Param_Item,Z_Param_DestinationInventory,Z_Param_Out_DestinationPosition);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesManager Function TryTransferItem *************************

// ********** Begin Class UTetrisInventoriesManager Function TryTransferSwitchItems ****************
struct Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics
{
	struct TetrisInventoriesManager_eventTryTransferSwitchItems_Parms
	{
		UTetrisItem* ItemA;
		UTetrisItem* ItemB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoriesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesManager_eventTryTransferSwitchItems_Parms, ItemA), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesManager_eventTryTransferSwitchItems_Parms, ItemB), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoriesManager_eventTryTransferSwitchItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoriesManager_eventTryTransferSwitchItems_Parms), &Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesManager, nullptr, "TryTransferSwitchItems", Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::TetrisInventoriesManager_eventTryTransferSwitchItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::TetrisInventoriesManager_eventTryTransferSwitchItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesManager::execTryTransferSwitchItems)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemA);
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryTransferSwitchItems(Z_Param_ItemA,Z_Param_ItemB);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesManager Function TryTransferSwitchItems ******************

// ********** Begin Class UTetrisInventoriesManager ************************************************
void UTetrisInventoriesManager::StaticRegisterNativesUTetrisInventoriesManager()
{
	UClass* Class = UTetrisInventoriesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryTransferItem", &UTetrisInventoriesManager::execTryTransferItem },
		{ "TryTransferSwitchItems", &UTetrisInventoriesManager::execTryTransferSwitchItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisInventoriesManager;
UClass* UTetrisInventoriesManager::GetPrivateStaticClass()
{
	using TClass = UTetrisInventoriesManager;
	if (!Z_Registration_Info_UClass_UTetrisInventoriesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisInventoriesManager"),
			Z_Registration_Info_UClass_UTetrisInventoriesManager.InnerSingleton,
			StaticRegisterNativesUTetrisInventoriesManager,
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
	return Z_Registration_Info_UClass_UTetrisInventoriesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisInventoriesManager_NoRegister()
{
	return UTetrisInventoriesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisInventoriesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TetrisInventory/TetrisInventoriesManager.h" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoriesManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferItem, "TryTransferItem" }, // 769555615
		{ &Z_Construct_UFunction_UTetrisInventoriesManager_TryTransferSwitchItems, "TryTransferSwitchItems" }, // 2019850314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisInventoriesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTetrisInventoriesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoriesManager,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoriesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisInventoriesManager_Statics::ClassParams = {
	&UTetrisInventoriesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoriesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisInventoriesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisInventoriesManager()
{
	if (!Z_Registration_Info_UClass_UTetrisInventoriesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisInventoriesManager.OuterSingleton, Z_Construct_UClass_UTetrisInventoriesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisInventoriesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisInventoriesManager);
UTetrisInventoriesManager::~UTetrisInventoriesManager() {}
// ********** End Class UTetrisInventoriesManager **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisInventoriesManager, UTetrisInventoriesManager::StaticClass, TEXT("UTetrisInventoriesManager"), &Z_Registration_Info_UClass_UTetrisInventoriesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisInventoriesManager), 561642768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h__Script_InventorySystem_1801833570(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
