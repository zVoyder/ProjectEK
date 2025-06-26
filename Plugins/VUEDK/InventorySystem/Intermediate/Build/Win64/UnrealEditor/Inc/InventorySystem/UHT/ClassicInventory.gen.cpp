// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/ClassicInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicInventory() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventory();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UClassicInventory Function GetTotalMinRequiredSlotsCount *****************
struct Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics
{
	struct ClassicInventory_eventGetTotalMinRequiredSlotsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClassicInventory_eventGetTotalMinRequiredSlotsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UClassicInventory, nullptr, "GetTotalMinRequiredSlotsCount", Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::ClassicInventory_eventGetTotalMinRequiredSlotsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::ClassicInventory_eventGetTotalMinRequiredSlotsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClassicInventory::execGetTotalMinRequiredSlotsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalMinRequiredSlotsCount();
	P_NATIVE_END;
}
// ********** End Class UClassicInventory Function GetTotalMinRequiredSlotsCount *******************

// ********** Begin Class UClassicInventory Function IsSatisfyingAllRequiredSlots ******************
struct Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics
{
	struct ClassicInventory_eventIsSatisfyingAllRequiredSlots_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicInventory.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClassicInventory_eventIsSatisfyingAllRequiredSlots_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClassicInventory_eventIsSatisfyingAllRequiredSlots_Parms), &Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UClassicInventory, nullptr, "IsSatisfyingAllRequiredSlots", Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::ClassicInventory_eventIsSatisfyingAllRequiredSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::ClassicInventory_eventIsSatisfyingAllRequiredSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClassicInventory::execIsSatisfyingAllRequiredSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSatisfyingAllRequiredSlots();
	P_NATIVE_END;
}
// ********** End Class UClassicInventory Function IsSatisfyingAllRequiredSlots ********************

// ********** Begin Class UClassicInventory ********************************************************
void UClassicInventory::StaticRegisterNativesUClassicInventory()
{
	UClass* Class = UClassicInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTotalMinRequiredSlotsCount", &UClassicInventory::execGetTotalMinRequiredSlotsCount },
		{ "IsSatisfyingAllRequiredSlots", &UClassicInventory::execIsSatisfyingAllRequiredSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClassicInventory;
UClass* UClassicInventory::GetPrivateStaticClass()
{
	using TClass = UClassicInventory;
	if (!Z_Registration_Info_UClass_UClassicInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ClassicInventory"),
			Z_Registration_Info_UClass_UClassicInventory.InnerSingleton,
			StaticRegisterNativesUClassicInventory,
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
	return Z_Registration_Info_UClass_UClassicInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UClassicInventory_NoRegister()
{
	return UClassicInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UClassicInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ClassicInventory/ClassicInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClassicInventory/ClassicInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClassicInventory_GetTotalMinRequiredSlotsCount, "GetTotalMinRequiredSlotsCount" }, // 4062397078
		{ &Z_Construct_UFunction_UClassicInventory_IsSatisfyingAllRequiredSlots, "IsSatisfyingAllRequiredSlots" }, // 3170501356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassicInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClassicInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassicInventory_Statics::ClassParams = {
	&UClassicInventory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassicInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassicInventory()
{
	if (!Z_Registration_Info_UClass_UClassicInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassicInventory.OuterSingleton, Z_Construct_UClass_UClassicInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassicInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassicInventory);
UClassicInventory::~UClassicInventory() {}
// ********** End Class UClassicInventory **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClassicInventory, UClassicInventory::StaticClass, TEXT("UClassicInventory"), &Z_Registration_Info_UClass_UClassicInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassicInventory), 2040176255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h__Script_InventorySystem_1077602880(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
