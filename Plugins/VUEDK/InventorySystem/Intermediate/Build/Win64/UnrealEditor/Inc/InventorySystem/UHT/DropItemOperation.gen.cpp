// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/DropItemOperation.h"
#include "Base/ItemDropActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDropItemOperation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDropItemOperation();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDropItemOperation_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDropItemOperation Function DropItem *************************************
struct DropItemOperation_eventDropItem_Parms
{
	UItemBase* Item;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DropItemOperation_eventDropItem_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UDropItemOperation_DropItem = FName(TEXT("DropItem"));
bool UDropItemOperation::DropItem(UItemBase* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UDropItemOperation_DropItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DropItemOperation_eventDropItem_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return DropItem_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UDropItemOperation_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventDropItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DropItemOperation_eventDropItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DropItemOperation_eventDropItem_Parms), &Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDropItemOperation, nullptr, "DropItem", Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::PropPointers), sizeof(DropItemOperation_eventDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DropItemOperation_eventDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDropItemOperation_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropItemOperation_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDropItemOperation::execDropItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DropItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UDropItemOperation Function DropItem ***************************************

// ********** Begin Class UDropItemOperation Function TryDropItemAroundActor ***********************
struct Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics
{
	struct DropItemOperation_eventTryDropItemAroundActor_Parms
	{
		UItemBase* Item;
		AActor* Actor;
		AItemDropActor* OutItemDropActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n \x09* @brief Tries to drop an item around the specified actor using the set drop parameters.\n \x09* @param Item The item to drop.\n \x09* @param Actor The actor to drop the item around.\n \x09* @param OutItemDropActor Reference to the item drop actor that will be created if the drop is successful.\n \x09* @return True if the item was dropped successfully, false otherwise.\n \x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Tries to drop an item around the specified actor using the set drop parameters.\n@param Item The item to drop.\n@param Actor The actor to drop the item around.\n@param OutItemDropActor Reference to the item drop actor that will be created if the drop is successful.\n@return True if the item was dropped successfully, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutItemDropActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventTryDropItemAroundActor_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventTryDropItemAroundActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_OutItemDropActor = { "OutItemDropActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventTryDropItemAroundActor_Parms, OutItemDropActor), Z_Construct_UClass_AItemDropActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DropItemOperation_eventTryDropItemAroundActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DropItemOperation_eventTryDropItemAroundActor_Parms), &Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_OutItemDropActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDropItemOperation, nullptr, "TryDropItemAroundActor", Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::DropItemOperation_eventTryDropItemAroundActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::DropItemOperation_eventTryDropItemAroundActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDropItemOperation::execTryDropItemAroundActor)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT_REF(AItemDropActor,Z_Param_Out_OutItemDropActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryDropItemAroundActor(Z_Param_Item,Z_Param_Actor,P_ARG_GC_BARRIER(Z_Param_Out_OutItemDropActor));
	P_NATIVE_END;
}
// ********** End Class UDropItemOperation Function TryDropItemAroundActor *************************

// ********** Begin Class UDropItemOperation Function TryDropItemAroundPlayer **********************
struct Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics
{
	struct DropItemOperation_eventTryDropItemAroundPlayer_Parms
	{
		UItemBase* Item;
		AItemDropActor* OutItemDropActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Tries to drop an item around the player using the set drop parameters.\n\x09 * @param Item The item to drop.\n\x09 * @param OutItemDropActor Reference to the item drop actor that will be created if the drop is successful.\n\x09 * @return True if the item was dropped successfully, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Tries to drop an item around the player using the set drop parameters.\n@param Item The item to drop.\n@param OutItemDropActor Reference to the item drop actor that will be created if the drop is successful.\n@return True if the item was dropped successfully, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutItemDropActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventTryDropItemAroundPlayer_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_OutItemDropActor = { "OutItemDropActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropItemOperation_eventTryDropItemAroundPlayer_Parms, OutItemDropActor), Z_Construct_UClass_AItemDropActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DropItemOperation_eventTryDropItemAroundPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DropItemOperation_eventTryDropItemAroundPlayer_Parms), &Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_OutItemDropActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDropItemOperation, nullptr, "TryDropItemAroundPlayer", Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::DropItemOperation_eventTryDropItemAroundPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::DropItemOperation_eventTryDropItemAroundPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDropItemOperation::execTryDropItemAroundPlayer)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT_REF(AItemDropActor,Z_Param_Out_OutItemDropActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryDropItemAroundPlayer(Z_Param_Item,P_ARG_GC_BARRIER(Z_Param_Out_OutItemDropActor));
	P_NATIVE_END;
}
// ********** End Class UDropItemOperation Function TryDropItemAroundPlayer ************************

// ********** Begin Class UDropItemOperation *******************************************************
void UDropItemOperation::StaticRegisterNativesUDropItemOperation()
{
	UClass* Class = UDropItemOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItem", &UDropItemOperation::execDropItem },
		{ "TryDropItemAroundActor", &UDropItemOperation::execTryDropItemAroundActor },
		{ "TryDropItemAroundPlayer", &UDropItemOperation::execTryDropItemAroundPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDropItemOperation;
UClass* UDropItemOperation::GetPrivateStaticClass()
{
	using TClass = UDropItemOperation;
	if (!Z_Registration_Info_UClass_UDropItemOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DropItemOperation"),
			Z_Registration_Info_UClass_UDropItemOperation.InnerSingleton,
			StaticRegisterNativesUDropItemOperation,
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
	return Z_Registration_Info_UClass_UDropItemOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UDropItemOperation_NoRegister()
{
	return UDropItemOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDropItemOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/DropItemOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRangeDrop_MetaData[] = {
		{ "Category", "Around Actor Drop Parameters" },
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeDrop_MetaData[] = {
		{ "Category", "Around Actor Drop Parameters" },
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropHeight_MetaData[] = {
		{ "Category", "Around Actor Drop Parameters" },
		{ "ModuleRelativePath", "Public/Base/DropItemOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRangeDrop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeDrop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropItemOperation_DropItem, "DropItem" }, // 4224311903
		{ &Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundActor, "TryDropItemAroundActor" }, // 3060289043
		{ &Z_Construct_UFunction_UDropItemOperation_TryDropItemAroundPlayer, "TryDropItemAroundPlayer" }, // 867423001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropItemOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropItemOperation_Statics::NewProp_MinRangeDrop = { "MinRangeDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropItemOperation, MinRangeDrop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRangeDrop_MetaData), NewProp_MinRangeDrop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropItemOperation_Statics::NewProp_MaxRangeDrop = { "MaxRangeDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropItemOperation, MaxRangeDrop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeDrop_MetaData), NewProp_MaxRangeDrop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropItemOperation_Statics::NewProp_DropHeight = { "DropHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropItemOperation, DropHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropHeight_MetaData), NewProp_DropHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropItemOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItemOperation_Statics::NewProp_MinRangeDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItemOperation_Statics::NewProp_MaxRangeDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropItemOperation_Statics::NewProp_DropHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropItemOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDropItemOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropItemOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropItemOperation_Statics::ClassParams = {
	&UDropItemOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDropItemOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDropItemOperation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropItemOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropItemOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDropItemOperation()
{
	if (!Z_Registration_Info_UClass_UDropItemOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropItemOperation.OuterSingleton, Z_Construct_UClass_UDropItemOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDropItemOperation.OuterSingleton;
}
UDropItemOperation::UDropItemOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDropItemOperation);
UDropItemOperation::~UDropItemOperation() {}
// ********** End Class UDropItemOperation *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDropItemOperation, UDropItemOperation::StaticClass, TEXT("UDropItemOperation"), &Z_Registration_Info_UClass_UDropItemOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropItemOperation), 488301781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h__Script_InventorySystem_3999707466(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
