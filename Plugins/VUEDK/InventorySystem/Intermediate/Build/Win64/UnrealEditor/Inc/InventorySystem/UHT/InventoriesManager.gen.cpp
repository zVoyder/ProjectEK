// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/InventoriesManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoriesManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoriesManager Function GetItemDataFromRegistry *********************
struct Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics
{
	struct InventoriesManager_eventGetItemDataFromRegistry_Parms
	{
		FGuid ItemDataID;
		UItemDataBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::NewProp_ItemDataID = { "ItemDataID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoriesManager_eventGetItemDataFromRegistry_Parms, ItemDataID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataID_MetaData), NewProp_ItemDataID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoriesManager_eventGetItemDataFromRegistry_Parms, ReturnValue), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::NewProp_ItemDataID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoriesManager, nullptr, "GetItemDataFromRegistry", Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::InventoriesManager_eventGetItemDataFromRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::InventoriesManager_eventGetItemDataFromRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoriesManager::execGetItemDataFromRegistry)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemDataID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemDataBase**)Z_Param__Result=P_THIS->GetItemDataFromRegistry(Z_Param_Out_ItemDataID);
	P_NATIVE_END;
}
// ********** End Class UInventoriesManager Function GetItemDataFromRegistry ***********************

// ********** Begin Class UInventoriesManager Function IsItemInRegistry ****************************
struct Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics
{
	struct InventoriesManager_eventIsItemInRegistry_Parms
	{
		const UItemDataBase* ItemData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/InventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoriesManager_eventIsItemInRegistry_Parms, ItemData), Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
void Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoriesManager_eventIsItemInRegistry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoriesManager_eventIsItemInRegistry_Parms), &Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoriesManager, nullptr, "IsItemInRegistry", Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::InventoriesManager_eventIsItemInRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::InventoriesManager_eventIsItemInRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoriesManager::execIsItemInRegistry)
{
	P_GET_OBJECT(UItemDataBase,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsItemInRegistry(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoriesManager Function IsItemInRegistry ******************************

// ********** Begin Class UInventoriesManager ******************************************************
void UInventoriesManager::StaticRegisterNativesUInventoriesManager()
{
	UClass* Class = UInventoriesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemDataFromRegistry", &UInventoriesManager::execGetItemDataFromRegistry },
		{ "IsItemInRegistry", &UInventoriesManager::execIsItemInRegistry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoriesManager;
UClass* UInventoriesManager::GetPrivateStaticClass()
{
	using TClass = UInventoriesManager;
	if (!Z_Registration_Info_UClass_UInventoriesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoriesManager"),
			Z_Registration_Info_UClass_UInventoriesManager.InnerSingleton,
			StaticRegisterNativesUInventoriesManager,
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
	return Z_Registration_Info_UClass_UInventoriesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoriesManager_NoRegister()
{
	return UInventoriesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoriesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Base/InventoriesManager.h" },
		{ "ModuleRelativePath", "Public/Base/InventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[] = {
		{ "Category", "InventoriesManager" },
		{ "ModuleRelativePath", "Public/Base/InventoriesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Registry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoriesManager_GetItemDataFromRegistry, "GetItemDataFromRegistry" }, // 1654495234
		{ &Z_Construct_UFunction_UInventoriesManager_IsItemInRegistry, "IsItemInRegistry" }, // 2861803991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoriesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoriesManager_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoriesManager, Registry), Z_Construct_UClass_UItemsRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Registry_MetaData), NewProp_Registry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoriesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoriesManager_Statics::NewProp_Registry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoriesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoriesManager_Statics::ClassParams = {
	&UInventoriesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoriesManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoriesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoriesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoriesManager()
{
	if (!Z_Registration_Info_UClass_UInventoriesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoriesManager.OuterSingleton, Z_Construct_UClass_UInventoriesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoriesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoriesManager);
UInventoriesManager::~UInventoriesManager() {}
// ********** End Class UInventoriesManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoriesManager, UInventoriesManager::StaticClass, TEXT("UInventoriesManager"), &Z_Registration_Info_UClass_UInventoriesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoriesManager), 1845439976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h__Script_InventorySystem_2899935491(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
