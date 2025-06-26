// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/EquipActorSwitcher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquipActorSwitcher() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipActorSwitcher();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipActorSwitcher_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnActorHold **********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnActorHold_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnActorHold_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnActorHold__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorHold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorHold_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorHold_DelegateWrapper(const FMulticastScriptDelegate& OnActorHold, AActor* Actor)
{
	struct _Script_InventorySystem_eventOnActorHold_Parms
	{
		AActor* Actor;
	};
	_Script_InventorySystem_eventOnActorHold_Parms Parms;
	Parms.Actor=Actor;
	OnActorHold.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActorHold ************************************************************

// ********** Begin Delegate FOnActorWithdraw ******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnActorWithdraw_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnActorWithdraw_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnActorWithdraw__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorWithdraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorWithdraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorWithdraw_DelegateWrapper(const FMulticastScriptDelegate& OnActorWithdraw, AActor* Actor)
{
	struct _Script_InventorySystem_eventOnActorWithdraw_Parms
	{
		AActor* Actor;
	};
	_Script_InventorySystem_eventOnActorWithdraw_Parms Parms;
	Parms.Actor=Actor;
	OnActorWithdraw.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActorWithdraw ********************************************************

// ********** Begin Delegate FOnActorDisposed ******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnActorDisposed_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnActorDisposed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnActorDisposed__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorDisposed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::_Script_InventorySystem_eventOnActorDisposed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorDisposed_DelegateWrapper(const FMulticastScriptDelegate& OnActorDisposed, AActor* Actor)
{
	struct _Script_InventorySystem_eventOnActorDisposed_Parms
	{
		AActor* Actor;
	};
	_Script_InventorySystem_eventOnActorDisposed_Parms Parms;
	Parms.Actor=Actor;
	OnActorDisposed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActorDisposed ********************************************************

// ********** Begin Delegate FOnEquipActorsChanged *************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnEquipActorsChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipActorsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipActorsChanged)
{
	OnEquipActorsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEquipActorsChanged ***************************************************

// ********** Begin Class UEquipActorSwitcher Function CanAddActor *********************************
struct EquipActorSwitcher_eventCanAddActor_Parms
{
	const UItemBase* Item;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	EquipActorSwitcher_eventCanAddActor_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UEquipActorSwitcher_CanAddActor = FName(TEXT("CanAddActor"));
bool UEquipActorSwitcher::CanAddActor(const UItemBase* Item) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_CanAddActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventCanAddActor_Parms Parms;
		Parms.Item=Item;
		const_cast<UEquipActorSwitcher*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UEquipActorSwitcher*>(this)->CanAddActor_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventCanAddActor_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EquipActorSwitcher_eventCanAddActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipActorSwitcher_eventCanAddActor_Parms), &Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "CanAddActor", Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::PropPointers), sizeof(EquipActorSwitcher_eventCanAddActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventCanAddActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execCanAddActor)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddActor_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function CanAddActor ***********************************

// ********** Begin Class UEquipActorSwitcher Function CreateActorToHold ***************************
struct EquipActorSwitcher_eventCreateActorToHold_Parms
{
	UItemBase* Item;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	EquipActorSwitcher_eventCreateActorToHold_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UEquipActorSwitcher_CreateActorToHold = FName(TEXT("CreateActorToHold"));
AActor* UEquipActorSwitcher::CreateActorToHold(UItemBase* Item) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_CreateActorToHold);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventCreateActorToHold_Parms Parms;
		Parms.Item=Item;
		const_cast<UEquipActorSwitcher*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UEquipActorSwitcher*>(this)->CreateActorToHold_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventCreateActorToHold_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventCreateActorToHold_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "CreateActorToHold", Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::PropPointers), sizeof(EquipActorSwitcher_eventCreateActorToHold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventCreateActorToHold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execCreateActorToHold)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->CreateActorToHold_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function CreateActorToHold *****************************

// ********** Begin Class UEquipActorSwitcher Function DisposeActor ********************************
struct EquipActorSwitcher_eventDisposeActor_Parms
{
	AActor* Actor;
};
static FName NAME_UEquipActorSwitcher_DisposeActor = FName(TEXT("DisposeActor"));
void UEquipActorSwitcher::DisposeActor(AActor* Actor)
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_DisposeActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventDisposeActor_Parms Parms;
		Parms.Actor=Actor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DisposeActor_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventDisposeActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "DisposeActor", Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::PropPointers), sizeof(EquipActorSwitcher_eventDisposeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventDisposeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execDisposeActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisposeActor_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function DisposeActor **********************************

// ********** Begin Class UEquipActorSwitcher Function GetCurrentActors ****************************
struct Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics
{
	struct EquipActorSwitcher_eventGetCurrentActors_Parms
	{
		TMap<int32,AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventGetCurrentActors_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "GetCurrentActors", Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::EquipActorSwitcher_eventGetCurrentActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::EquipActorSwitcher_eventGetCurrentActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execGetCurrentActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<int32,AActor*>*)Z_Param__Result=P_THIS->GetCurrentActors();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function GetCurrentActors ******************************

// ********** Begin Class UEquipActorSwitcher Function GetHeldActor ********************************
struct Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics
{
	struct EquipActorSwitcher_eventGetHeldActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventGetHeldActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "GetHeldActor", Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::EquipActorSwitcher_eventGetHeldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::EquipActorSwitcher_eventGetHeldActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execGetHeldActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetHeldActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function GetHeldActor **********************************

// ********** Begin Class UEquipActorSwitcher Function HoldActorAtSlot *****************************
struct Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics
{
	struct EquipActorSwitcher_eventHoldActorAtSlot_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventHoldActorAtSlot_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "HoldActorAtSlot", Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::EquipActorSwitcher_eventHoldActorAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::EquipActorSwitcher_eventHoldActorAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execHoldActorAtSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldActorAtSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function HoldActorAtSlot *******************************

// ********** Begin Class UEquipActorSwitcher Function HoldFirstActor ******************************
struct Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "HoldFirstActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execHoldFirstActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldFirstActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function HoldFirstActor ********************************

// ********** Begin Class UEquipActorSwitcher Function HoldLastActor *******************************
struct Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "HoldLastActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execHoldLastActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldLastActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function HoldLastActor *********************************

// ********** Begin Class UEquipActorSwitcher Function HoldNextActor *******************************
struct Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "HoldNextActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execHoldNextActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldNextActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function HoldNextActor *********************************

// ********** Begin Class UEquipActorSwitcher Function HoldPreviousActor ***************************
struct Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "HoldPreviousActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execHoldPreviousActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoldPreviousActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function HoldPreviousActor *****************************

// ********** Begin Class UEquipActorSwitcher Function Init ****************************************
struct Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics
{
	struct EquipActorSwitcher_eventInit_Parms
	{
		UEquipment* InEquipment;
		USceneComponent* InAttachToComponentEquipped;
		FName InEquipppedAttachSocketName;
		USceneComponent* InAttachToComponentUnequipped;
		FName InUnequipppedAttachSocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEquipment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttachToComponentEquipped_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttachToComponentUnequipped_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttachToComponentEquipped;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEquipppedAttachSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttachToComponentUnequipped;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InUnequipppedAttachSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InEquipment = { "InEquipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventInit_Parms, InEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEquipment_MetaData), NewProp_InEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InAttachToComponentEquipped = { "InAttachToComponentEquipped", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventInit_Parms, InAttachToComponentEquipped), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttachToComponentEquipped_MetaData), NewProp_InAttachToComponentEquipped_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InEquipppedAttachSocketName = { "InEquipppedAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventInit_Parms, InEquipppedAttachSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InAttachToComponentUnequipped = { "InAttachToComponentUnequipped", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventInit_Parms, InAttachToComponentUnequipped), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttachToComponentUnequipped_MetaData), NewProp_InAttachToComponentUnequipped_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InUnequipppedAttachSocketName = { "InUnequipppedAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventInit_Parms, InUnequipppedAttachSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InAttachToComponentEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InEquipppedAttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InAttachToComponentUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::NewProp_InUnequipppedAttachSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "Init", Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::EquipActorSwitcher_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::EquipActorSwitcher_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execInit)
{
	P_GET_OBJECT(UEquipment,Z_Param_InEquipment);
	P_GET_OBJECT(USceneComponent,Z_Param_InAttachToComponentEquipped);
	P_GET_PROPERTY(FNameProperty,Z_Param_InEquipppedAttachSocketName);
	P_GET_OBJECT(USceneComponent,Z_Param_InAttachToComponentUnequipped);
	P_GET_PROPERTY(FNameProperty,Z_Param_InUnequipppedAttachSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InEquipment,Z_Param_InAttachToComponentEquipped,Z_Param_InEquipppedAttachSocketName,Z_Param_InAttachToComponentUnequipped,Z_Param_InUnequipppedAttachSocketName);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function Init ******************************************

// ********** Begin Class UEquipActorSwitcher Function IsHoldingActor ******************************
struct Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics
{
	struct EquipActorSwitcher_eventIsHoldingActor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EquipActorSwitcher_eventIsHoldingActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipActorSwitcher_eventIsHoldingActor_Parms), &Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "IsHoldingActor", Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::EquipActorSwitcher_eventIsHoldingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::EquipActorSwitcher_eventIsHoldingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execIsHoldingActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHoldingActor();
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function IsHoldingActor ********************************

// ********** Begin Class UEquipActorSwitcher Function OnActorDisposed *****************************
struct EquipActorSwitcher_eventOnActorDisposed_Parms
{
	AActor* Actor;
};
static FName NAME_UEquipActorSwitcher_OnActorDisposed = FName(TEXT("OnActorDisposed"));
void UEquipActorSwitcher::OnActorDisposed(AActor* Actor) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_OnActorDisposed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventOnActorDisposed_Parms Parms;
		Parms.Actor=Actor;
		const_cast<UEquipActorSwitcher*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UEquipActorSwitcher*>(this)->OnActorDisposed_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnActorDisposed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnActorDisposed", Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::PropPointers), sizeof(EquipActorSwitcher_eventOnActorDisposed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventOnActorDisposed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnActorDisposed)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorDisposed_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnActorDisposed *******************************

// ********** Begin Class UEquipActorSwitcher Function OnAnyItemEquipped ***************************
struct Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics
{
	struct EquipActorSwitcher_eventOnAnyItemEquipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipped_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipped_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnAnyItemEquipped", Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::EquipActorSwitcher_eventOnAnyItemEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::EquipActorSwitcher_eventOnAnyItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnAnyItemEquipped)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyItemEquipped(Z_Param_EquipSlotKey,Z_Param_SlotIndex,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnAnyItemEquipped *****************************

// ********** Begin Class UEquipActorSwitcher Function OnAnyItemEquipSlotChanged *******************
struct Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics
{
	struct EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		int32 NewSlotIndex;
		int32 OldSlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_NewSlotIndex = { "NewSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms, NewSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_OldSlotIndex = { "OldSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms, OldSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_NewSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::NewProp_OldSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnAnyItemEquipSlotChanged", Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::EquipActorSwitcher_eventOnAnyItemEquipSlotChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnAnyItemEquipSlotChanged)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyItemEquipSlotChanged(Z_Param_EquipSlotKey,Z_Param_Item,Z_Param_NewSlotIndex,Z_Param_OldSlotIndex);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnAnyItemEquipSlotChanged *********************

// ********** Begin Class UEquipActorSwitcher Function OnAnyItemSwapWithInventoryItem **************
struct Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics
{
	struct EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* Item;
		UItemBase* InventoryItem;
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms, InventoryItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_InventoryItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnAnyItemSwapWithInventoryItem", Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::EquipActorSwitcher_eventOnAnyItemSwapWithInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnAnyItemSwapWithInventoryItem)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(UItemBase,Z_Param_InventoryItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyItemSwapWithInventoryItem(Z_Param_EquipSlotKey,Z_Param_Item,Z_Param_InventoryItem,Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnAnyItemSwapWithInventoryItem ****************

// ********** Begin Class UEquipActorSwitcher Function OnAnyItemUnequipped *************************
struct Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics
{
	struct EquipActorSwitcher_eventOnAnyItemUnequipped_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		int32 SlotIndex;
		UItemBase* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemUnequipped_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemUnequipped_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnAnyItemUnequipped_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnAnyItemUnequipped", Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::EquipActorSwitcher_eventOnAnyItemUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::EquipActorSwitcher_eventOnAnyItemUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnAnyItemUnequipped)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyItemUnequipped(Z_Param_EquipSlotKey,Z_Param_SlotIndex,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnAnyItemUnequipped ***************************

// ********** Begin Class UEquipActorSwitcher Function OnHoldActor *********************************
struct EquipActorSwitcher_eventOnHoldActor_Parms
{
	AActor* Actor;
};
static FName NAME_UEquipActorSwitcher_OnHoldActor = FName(TEXT("OnHoldActor"));
void UEquipActorSwitcher::OnHoldActor(AActor* Actor) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_OnHoldActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventOnHoldActor_Parms Parms;
		Parms.Actor=Actor;
		const_cast<UEquipActorSwitcher*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UEquipActorSwitcher*>(this)->OnHoldActor_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnHoldActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnHoldActor", Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::PropPointers), sizeof(EquipActorSwitcher_eventOnHoldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventOnHoldActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnHoldActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoldActor_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnHoldActor ***********************************

// ********** Begin Class UEquipActorSwitcher Function OnItemsSwitchedSlots ************************
struct Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics
{
	struct EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms
	{
		UEquipSlotKey* EquipSlotKey;
		UItemBase* ItemA;
		UItemBase* ItemB;
		int32 OldSlotIndexItemA;
		int32 OldSlotIndexItemB;
		int32 NewSlotIndexItemA;
		int32 NewSlotIndexItemB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldSlotIndexItemB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotIndexItemB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, ItemA), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, ItemB), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemA = { "OldSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemB = { "OldSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, OldSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemA = { "NewSlotIndexItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemB = { "NewSlotIndexItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms, NewSlotIndexItemB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_OldSlotIndexItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::NewProp_NewSlotIndexItemB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnItemsSwitchedSlots", Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::EquipActorSwitcher_eventOnItemsSwitchedSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnItemsSwitchedSlots)
{
	P_GET_OBJECT(UEquipSlotKey,Z_Param_EquipSlotKey);
	P_GET_OBJECT(UItemBase,Z_Param_ItemA);
	P_GET_OBJECT(UItemBase,Z_Param_ItemB);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSlotIndexItemA);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldSlotIndexItemB);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotIndexItemA);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotIndexItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemsSwitchedSlots(Z_Param_EquipSlotKey,Z_Param_ItemA,Z_Param_ItemB,Z_Param_OldSlotIndexItemA,Z_Param_OldSlotIndexItemB,Z_Param_NewSlotIndexItemA,Z_Param_NewSlotIndexItemB);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnItemsSwitchedSlots **************************

// ********** Begin Class UEquipActorSwitcher Function OnWithdrawActor *****************************
struct EquipActorSwitcher_eventOnWithdrawActor_Parms
{
	AActor* Actor;
};
static FName NAME_UEquipActorSwitcher_OnWithdrawActor = FName(TEXT("OnWithdrawActor"));
void UEquipActorSwitcher::OnWithdrawActor(AActor* Actor) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipActorSwitcher_OnWithdrawActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipActorSwitcher_eventOnWithdrawActor_Parms Parms;
		Parms.Actor=Actor;
		const_cast<UEquipActorSwitcher*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UEquipActorSwitcher*>(this)->OnWithdrawActor_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventOnWithdrawActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "OnWithdrawActor", Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::PropPointers), sizeof(EquipActorSwitcher_eventOnWithdrawActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipActorSwitcher_eventOnWithdrawActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execOnWithdrawActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWithdrawActor_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function OnWithdrawActor *******************************

// ********** Begin Class UEquipActorSwitcher Function WithdrawActorAtSlot *************************
struct Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics
{
	struct EquipActorSwitcher_eventWithdrawActorAtSlot_Parms
	{
		int32 SlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipActorSwitcher_eventWithdrawActorAtSlot_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipActorSwitcher, nullptr, "WithdrawActorAtSlot", Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::EquipActorSwitcher_eventWithdrawActorAtSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::EquipActorSwitcher_eventWithdrawActorAtSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipActorSwitcher::execWithdrawActorAtSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WithdrawActorAtSlot(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UEquipActorSwitcher Function WithdrawActorAtSlot ***************************

// ********** Begin Class UEquipActorSwitcher ******************************************************
void UEquipActorSwitcher::StaticRegisterNativesUEquipActorSwitcher()
{
	UClass* Class = UEquipActorSwitcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAddActor", &UEquipActorSwitcher::execCanAddActor },
		{ "CreateActorToHold", &UEquipActorSwitcher::execCreateActorToHold },
		{ "DisposeActor", &UEquipActorSwitcher::execDisposeActor },
		{ "GetCurrentActors", &UEquipActorSwitcher::execGetCurrentActors },
		{ "GetHeldActor", &UEquipActorSwitcher::execGetHeldActor },
		{ "HoldActorAtSlot", &UEquipActorSwitcher::execHoldActorAtSlot },
		{ "HoldFirstActor", &UEquipActorSwitcher::execHoldFirstActor },
		{ "HoldLastActor", &UEquipActorSwitcher::execHoldLastActor },
		{ "HoldNextActor", &UEquipActorSwitcher::execHoldNextActor },
		{ "HoldPreviousActor", &UEquipActorSwitcher::execHoldPreviousActor },
		{ "Init", &UEquipActorSwitcher::execInit },
		{ "IsHoldingActor", &UEquipActorSwitcher::execIsHoldingActor },
		{ "OnActorDisposed", &UEquipActorSwitcher::execOnActorDisposed },
		{ "OnAnyItemEquipped", &UEquipActorSwitcher::execOnAnyItemEquipped },
		{ "OnAnyItemEquipSlotChanged", &UEquipActorSwitcher::execOnAnyItemEquipSlotChanged },
		{ "OnAnyItemSwapWithInventoryItem", &UEquipActorSwitcher::execOnAnyItemSwapWithInventoryItem },
		{ "OnAnyItemUnequipped", &UEquipActorSwitcher::execOnAnyItemUnequipped },
		{ "OnHoldActor", &UEquipActorSwitcher::execOnHoldActor },
		{ "OnItemsSwitchedSlots", &UEquipActorSwitcher::execOnItemsSwitchedSlots },
		{ "OnWithdrawActor", &UEquipActorSwitcher::execOnWithdrawActor },
		{ "WithdrawActorAtSlot", &UEquipActorSwitcher::execWithdrawActorAtSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEquipActorSwitcher;
UClass* UEquipActorSwitcher::GetPrivateStaticClass()
{
	using TClass = UEquipActorSwitcher;
	if (!Z_Registration_Info_UClass_UEquipActorSwitcher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EquipActorSwitcher"),
			Z_Registration_Info_UClass_UEquipActorSwitcher.InnerSingleton,
			StaticRegisterNativesUEquipActorSwitcher,
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
	return Z_Registration_Info_UClass_UEquipActorSwitcher.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquipActorSwitcher_NoRegister()
{
	return UEquipActorSwitcher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquipActorSwitcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Useful class for spawning and attaching actors to the player based on the current equipment.\n */" },
#endif
		{ "IncludePath", "EquipmentSystem/EquipActorSwitcher.h" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Useful class for spawning and attaching actors to the player based on the current equipment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHoldActorEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWithdrawActorEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDisposedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipActorsChangedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEquipSlotKey_MetaData[] = {
		{ "Category", "EquipActorSwitcher" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponentEquipped_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponentUnequipped_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipActorSwitcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoldActorEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWithdrawActorEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDisposedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipActorsChangedEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEquipSlotKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponentEquipped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponentUnequipped;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActors_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipActorSwitcher_CanAddActor, "CanAddActor" }, // 821498567
		{ &Z_Construct_UFunction_UEquipActorSwitcher_CreateActorToHold, "CreateActorToHold" }, // 2479068962
		{ &Z_Construct_UFunction_UEquipActorSwitcher_DisposeActor, "DisposeActor" }, // 316607774
		{ &Z_Construct_UFunction_UEquipActorSwitcher_GetCurrentActors, "GetCurrentActors" }, // 665698407
		{ &Z_Construct_UFunction_UEquipActorSwitcher_GetHeldActor, "GetHeldActor" }, // 559242999
		{ &Z_Construct_UFunction_UEquipActorSwitcher_HoldActorAtSlot, "HoldActorAtSlot" }, // 3923679207
		{ &Z_Construct_UFunction_UEquipActorSwitcher_HoldFirstActor, "HoldFirstActor" }, // 2079286865
		{ &Z_Construct_UFunction_UEquipActorSwitcher_HoldLastActor, "HoldLastActor" }, // 2611758985
		{ &Z_Construct_UFunction_UEquipActorSwitcher_HoldNextActor, "HoldNextActor" }, // 1962324251
		{ &Z_Construct_UFunction_UEquipActorSwitcher_HoldPreviousActor, "HoldPreviousActor" }, // 1726914592
		{ &Z_Construct_UFunction_UEquipActorSwitcher_Init, "Init" }, // 3250061653
		{ &Z_Construct_UFunction_UEquipActorSwitcher_IsHoldingActor, "IsHoldingActor" }, // 342519023
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnActorDisposed, "OnActorDisposed" }, // 2532994742
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipped, "OnAnyItemEquipped" }, // 4031044969
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemEquipSlotChanged, "OnAnyItemEquipSlotChanged" }, // 173245604
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemSwapWithInventoryItem, "OnAnyItemSwapWithInventoryItem" }, // 4075667041
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnAnyItemUnequipped, "OnAnyItemUnequipped" }, // 2520774359
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnHoldActor, "OnHoldActor" }, // 3134262301
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnItemsSwitchedSlots, "OnItemsSwitchedSlots" }, // 1447360328
		{ &Z_Construct_UFunction_UEquipActorSwitcher_OnWithdrawActor, "OnWithdrawActor" }, // 1765006920
		{ &Z_Construct_UFunction_UEquipActorSwitcher_WithdrawActorAtSlot, "WithdrawActorAtSlot" }, // 1803819970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipActorSwitcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnHoldActorEvent = { "OnHoldActorEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, OnHoldActorEvent), Z_Construct_UDelegateFunction_InventorySystem_OnActorHold__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHoldActorEvent_MetaData), NewProp_OnHoldActorEvent_MetaData) }; // 2347208657
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnWithdrawActorEvent = { "OnWithdrawActorEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, OnWithdrawActorEvent), Z_Construct_UDelegateFunction_InventorySystem_OnActorWithdraw__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWithdrawActorEvent_MetaData), NewProp_OnWithdrawActorEvent_MetaData) }; // 4264044974
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnActorDisposedEvent = { "OnActorDisposedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, OnActorDisposedEvent), Z_Construct_UDelegateFunction_InventorySystem_OnActorDisposed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorDisposedEvent_MetaData), NewProp_OnActorDisposedEvent_MetaData) }; // 834199320
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnEquipActorsChangedEvent = { "OnEquipActorsChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, OnEquipActorsChangedEvent), Z_Construct_UDelegateFunction_InventorySystem_OnEquipActorsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquipActorsChangedEvent_MetaData), NewProp_OnEquipActorsChangedEvent_MetaData) }; // 1826136358
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_TargetEquipSlotKey = { "TargetEquipSlotKey", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, TargetEquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEquipSlotKey_MetaData), NewProp_TargetEquipSlotKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, Equipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_AttachToComponentEquipped = { "AttachToComponentEquipped", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, AttachToComponentEquipped), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponentEquipped_MetaData), NewProp_AttachToComponentEquipped_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_AttachToComponentUnequipped = { "AttachToComponentUnequipped", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, AttachToComponentUnequipped), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponentUnequipped_MetaData), NewProp_AttachToComponentUnequipped_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_HeldActor = { "HeldActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, HeldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldActor_MetaData), NewProp_HeldActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors_ValueProp = { "CurrentActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors_Key_KeyProp = { "CurrentActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors = { "CurrentActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipActorSwitcher, CurrentActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActors_MetaData), NewProp_CurrentActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipActorSwitcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnHoldActorEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnWithdrawActorEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnActorDisposedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_OnEquipActorsChangedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_TargetEquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_AttachToComponentEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_AttachToComponentUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_HeldActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipActorSwitcher_Statics::NewProp_CurrentActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipActorSwitcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipActorSwitcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipActorSwitcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipActorSwitcher_Statics::ClassParams = {
	&UEquipActorSwitcher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipActorSwitcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipActorSwitcher_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipActorSwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipActorSwitcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipActorSwitcher()
{
	if (!Z_Registration_Info_UClass_UEquipActorSwitcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipActorSwitcher.OuterSingleton, Z_Construct_UClass_UEquipActorSwitcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipActorSwitcher.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipActorSwitcher);
UEquipActorSwitcher::~UEquipActorSwitcher() {}
// ********** End Class UEquipActorSwitcher ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipActorSwitcher, UEquipActorSwitcher::StaticClass, TEXT("UEquipActorSwitcher"), &Z_Registration_Info_UClass_UEquipActorSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipActorSwitcher), 3498179736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h__Script_InventorySystem_2822568559(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
