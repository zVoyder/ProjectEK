// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/TetrisSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisSlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisSlot();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTetrisSlot Function FreeSlot ********************************************
struct Z_Construct_UFunction_UTetrisSlot_FreeSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisSlot_FreeSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisSlot, nullptr, "FreeSlot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_FreeSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisSlot_FreeSlot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisSlot_FreeSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisSlot_FreeSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisSlot::execFreeSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FreeSlot();
	P_NATIVE_END;
}
// ********** End Class UTetrisSlot Function FreeSlot **********************************************

// ********** Begin Class UTetrisSlot Function GetSlotItem *****************************************
struct Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics
{
	struct TetrisSlot_eventGetSlotItem_Parms
	{
		UTetrisItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisSlot_eventGetSlotItem_Parms, ReturnValue), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisSlot, nullptr, "GetSlotItem", Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::TetrisSlot_eventGetSlotItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::TetrisSlot_eventGetSlotItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisSlot_GetSlotItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisSlot_GetSlotItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisSlot::execGetSlotItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTetrisItem**)Z_Param__Result=P_THIS->GetSlotItem();
	P_NATIVE_END;
}
// ********** End Class UTetrisSlot Function GetSlotItem *******************************************

// ********** Begin Class UTetrisSlot Function GetSlotPosition *************************************
struct Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics
{
	struct TetrisSlot_eventGetSlotPosition_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisSlot_eventGetSlotPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisSlot, nullptr, "GetSlotPosition", Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::TetrisSlot_eventGetSlotPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::TetrisSlot_eventGetSlotPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisSlot_GetSlotPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisSlot_GetSlotPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisSlot::execGetSlotPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetSlotPosition();
	P_NATIVE_END;
}
// ********** End Class UTetrisSlot Function GetSlotPosition ***************************************

// ********** Begin Class UTetrisSlot Function IsOccupied ******************************************
struct Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics
{
	struct TetrisSlot_eventIsOccupied_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisSlot_eventIsOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisSlot_eventIsOccupied_Parms), &Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisSlot, nullptr, "IsOccupied", Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::TetrisSlot_eventIsOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::TetrisSlot_eventIsOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisSlot_IsOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisSlot_IsOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisSlot::execIsOccupied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOccupied();
	P_NATIVE_END;
}
// ********** End Class UTetrisSlot Function IsOccupied ********************************************

// ********** Begin Class UTetrisSlot Function OccupySlot ******************************************
struct Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics
{
	struct TetrisSlot_eventOccupySlot_Parms
	{
		UTetrisItem* InItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisSlot_eventOccupySlot_Parms, InItem), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::NewProp_InItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisSlot, nullptr, "OccupySlot", Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::TetrisSlot_eventOccupySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::TetrisSlot_eventOccupySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisSlot_OccupySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisSlot_OccupySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisSlot::execOccupySlot)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_InItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OccupySlot(Z_Param_InItem);
	P_NATIVE_END;
}
// ********** End Class UTetrisSlot Function OccupySlot ********************************************

// ********** Begin Class UTetrisSlot **************************************************************
void UTetrisSlot::StaticRegisterNativesUTetrisSlot()
{
	UClass* Class = UTetrisSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FreeSlot", &UTetrisSlot::execFreeSlot },
		{ "GetSlotItem", &UTetrisSlot::execGetSlotItem },
		{ "GetSlotPosition", &UTetrisSlot::execGetSlotPosition },
		{ "IsOccupied", &UTetrisSlot::execIsOccupied },
		{ "OccupySlot", &UTetrisSlot::execOccupySlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisSlot;
UClass* UTetrisSlot::GetPrivateStaticClass()
{
	using TClass = UTetrisSlot;
	if (!Z_Registration_Info_UClass_UTetrisSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisSlot"),
			Z_Registration_Info_UClass_UTetrisSlot.InnerSingleton,
			StaticRegisterNativesUTetrisSlot,
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
	return Z_Registration_Info_UClass_UTetrisSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisSlot_NoRegister()
{
	return UTetrisSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetrisInventory/TetrisSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedInventory_MetaData[] = {
		{ "Category", "TetrisSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisSlot_FreeSlot, "FreeSlot" }, // 2033091784
		{ &Z_Construct_UFunction_UTetrisSlot_GetSlotItem, "GetSlotItem" }, // 1410222435
		{ &Z_Construct_UFunction_UTetrisSlot_GetSlotPosition, "GetSlotPosition" }, // 701398244
		{ &Z_Construct_UFunction_UTetrisSlot_IsOccupied, "IsOccupied" }, // 1351575405
		{ &Z_Construct_UFunction_UTetrisSlot_OccupySlot, "OccupySlot" }, // 956861658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetrisSlot_Statics::NewProp_RelatedInventory = { "RelatedInventory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisSlot, RelatedInventory), Z_Construct_UClass_UTetrisInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedInventory_MetaData), NewProp_RelatedInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetrisSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisSlot, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisSlot_Statics::NewProp_RelatedInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisSlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisSlot_Statics::ClassParams = {
	&UTetrisSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTetrisSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisSlot_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisSlot()
{
	if (!Z_Registration_Info_UClass_UTetrisSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisSlot.OuterSingleton, Z_Construct_UClass_UTetrisSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisSlot.OuterSingleton;
}
UTetrisSlot::UTetrisSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisSlot);
UTetrisSlot::~UTetrisSlot() {}
// ********** End Class UTetrisSlot ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisSlot, UTetrisSlot::StaticClass, TEXT("UTetrisSlot"), &Z_Registration_Info_UClass_UTetrisSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisSlot), 1963754188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h__Script_InventorySystem_2837040874(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
