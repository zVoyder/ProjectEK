// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisInventoryEventsHandlerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestDrag ********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestDrag__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestDrag_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDrag)
{
	OnRequestDrag.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestDrag **********************************************************

// ********** Begin Delegate FOnRequestDrop ********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestDrop__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestDrop_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDrop)
{
	OnRequestDrop.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestDrop **********************************************************

// ********** Begin Delegate FOnRequestRotate ******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestRotate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestRotate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestRotate)
{
	OnRequestRotate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestRotate ********************************************************

// ********** Begin Delegate FOnRequestEquipUnequip ************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnRequestEquipUnequip_Parms
	{
		int32 SwapPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwapPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::NewProp_SwapPriority = { "SwapPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnRequestEquipUnequip_Parms, SwapPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::NewProp_SwapPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestEquipUnequip__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::_Script_InventorySystem_eventOnRequestEquipUnequip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::_Script_InventorySystem_eventOnRequestEquipUnequip_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEquipUnequip_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEquipUnequip, int32 SwapPriority)
{
	struct _Script_InventorySystem_eventOnRequestEquipUnequip_Parms
	{
		int32 SwapPriority;
	};
	_Script_InventorySystem_eventOnRequestEquipUnequip_Parms Parms;
	Parms.SwapPriority=SwapPriority;
	OnRequestEquipUnequip.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEquipUnequip **************************************************

// ********** Begin Delegate FOnRequestDiscard *****************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestDiscard__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestDiscard_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDiscard)
{
	OnRequestDiscard.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestDiscard *******************************************************

// ********** Begin Delegate FOnRequestSplit *******************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestSplit__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestSplit_DelegateWrapper(const FMulticastScriptDelegate& OnRequestSplit)
{
	OnRequestSplit.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestSplit *********************************************************

// ********** Begin Delegate FOnRequestCancelSplit *************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnRequestCancelSplit__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestCancelSplit_DelegateWrapper(const FMulticastScriptDelegate& OnRequestCancelSplit)
{
	OnRequestCancelSplit.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestCancelSplit ***************************************************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function IsSplitting **************
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics
{
	struct TetrisInventoryEventsHandlerSubsystem_eventIsSplitting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoryEventsHandlerSubsystem_eventIsSplitting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoryEventsHandlerSubsystem_eventIsSplitting_Parms), &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "IsSplitting", Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::TetrisInventoryEventsHandlerSubsystem_eventIsSplitting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::TetrisInventoryEventsHandlerSubsystem_eventIsSplitting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execIsSplitting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSplitting();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function IsSplitting ****************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestCancelSplit *******
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestCancelSplit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestCancelSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCancelSplit();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestCancelSplit *********

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestDiscard ***********
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestDiscard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestDiscard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDiscard();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestDiscard *************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestDrag **************
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestDrag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDrag();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestDrag ****************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestDrop **************
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestDrop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDrop();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestDrop ****************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestEquipUnequip ******
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics
{
	struct TetrisInventoryEventsHandlerSubsystem_eventRequestEquipUnequip_Parms
	{
		int32 SwapPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_SwapPriority", "0" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwapPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::NewProp_SwapPriority = { "SwapPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoryEventsHandlerSubsystem_eventRequestEquipUnequip_Parms, SwapPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapPriority_MetaData), NewProp_SwapPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::NewProp_SwapPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestEquipUnequip", Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::TetrisInventoryEventsHandlerSubsystem_eventRequestEquipUnequip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::TetrisInventoryEventsHandlerSubsystem_eventRequestEquipUnequip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestEquipUnequip)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SwapPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEquipUnequip(Z_Param_SwapPriority);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestEquipUnequip ********

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestRotate ************
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestRotate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRotate();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestRotate **************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem Function RequestSplit *************
struct Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, nullptr, "RequestSplit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoryEventsHandlerSubsystem::execRequestSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSplit();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem Function RequestSplit ***************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem ***********************************
void UTetrisInventoryEventsHandlerSubsystem::StaticRegisterNativesUTetrisInventoryEventsHandlerSubsystem()
{
	UClass* Class = UTetrisInventoryEventsHandlerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsSplitting", &UTetrisInventoryEventsHandlerSubsystem::execIsSplitting },
		{ "RequestCancelSplit", &UTetrisInventoryEventsHandlerSubsystem::execRequestCancelSplit },
		{ "RequestDiscard", &UTetrisInventoryEventsHandlerSubsystem::execRequestDiscard },
		{ "RequestDrag", &UTetrisInventoryEventsHandlerSubsystem::execRequestDrag },
		{ "RequestDrop", &UTetrisInventoryEventsHandlerSubsystem::execRequestDrop },
		{ "RequestEquipUnequip", &UTetrisInventoryEventsHandlerSubsystem::execRequestEquipUnequip },
		{ "RequestRotate", &UTetrisInventoryEventsHandlerSubsystem::execRequestRotate },
		{ "RequestSplit", &UTetrisInventoryEventsHandlerSubsystem::execRequestSplit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem;
UClass* UTetrisInventoryEventsHandlerSubsystem::GetPrivateStaticClass()
{
	using TClass = UTetrisInventoryEventsHandlerSubsystem;
	if (!Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisInventoryEventsHandlerSubsystem"),
			Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.InnerSingleton,
			StaticRegisterNativesUTetrisInventoryEventsHandlerSubsystem,
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
	return Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_NoRegister()
{
	return UTetrisInventoryEventsHandlerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestDrag_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestDrop_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestRotate_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestEquipUnequip_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestDiscard_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestSplit_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestCancelSplit_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestDrag;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestDrop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestRotate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestEquipUnequip;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestDiscard;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestSplit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestCancelSplit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_IsSplitting, "IsSplitting" }, // 1759531240
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestCancelSplit, "RequestCancelSplit" }, // 4165157193
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDiscard, "RequestDiscard" }, // 22837955
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrag, "RequestDrag" }, // 3756310350
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestDrop, "RequestDrop" }, // 1076791297
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestEquipUnequip, "RequestEquipUnequip" }, // 4155417786
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestRotate, "RequestRotate" }, // 589642711
		{ &Z_Construct_UFunction_UTetrisInventoryEventsHandlerSubsystem_RequestSplit, "RequestSplit" }, // 1628905608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisInventoryEventsHandlerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDrag = { "OnRequestDrag", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestDrag), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrag__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestDrag_MetaData), NewProp_OnRequestDrag_MetaData) }; // 1967988567
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDrop = { "OnRequestDrop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestDrop), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDrop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestDrop_MetaData), NewProp_OnRequestDrop_MetaData) }; // 624402146
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestRotate = { "OnRequestRotate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestRotate), Z_Construct_UDelegateFunction_InventorySystem_OnRequestRotate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestRotate_MetaData), NewProp_OnRequestRotate_MetaData) }; // 833883335
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestEquipUnequip = { "OnRequestEquipUnequip", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestEquipUnequip), Z_Construct_UDelegateFunction_InventorySystem_OnRequestEquipUnequip__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestEquipUnequip_MetaData), NewProp_OnRequestEquipUnequip_MetaData) }; // 3512965321
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDiscard = { "OnRequestDiscard", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestDiscard), Z_Construct_UDelegateFunction_InventorySystem_OnRequestDiscard__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestDiscard_MetaData), NewProp_OnRequestDiscard_MetaData) }; // 572112109
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestSplit = { "OnRequestSplit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestSplit), Z_Construct_UDelegateFunction_InventorySystem_OnRequestSplit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestSplit_MetaData), NewProp_OnRequestSplit_MetaData) }; // 1656827640
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestCancelSplit = { "OnRequestCancelSplit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventoryEventsHandlerSubsystem, OnRequestCancelSplit), Z_Construct_UDelegateFunction_InventorySystem_OnRequestCancelSplit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestCancelSplit_MetaData), NewProp_OnRequestCancelSplit_MetaData) }; // 1937840373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestEquipUnequip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestDiscard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestSplit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::NewProp_OnRequestCancelSplit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::ClassParams = {
	&UTetrisInventoryEventsHandlerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem()
{
	if (!Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.OuterSingleton, Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem.OuterSingleton;
}
UTetrisInventoryEventsHandlerSubsystem::UTetrisInventoryEventsHandlerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisInventoryEventsHandlerSubsystem);
UTetrisInventoryEventsHandlerSubsystem::~UTetrisInventoryEventsHandlerSubsystem() {}
// ********** End Class UTetrisInventoryEventsHandlerSubsystem *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem, UTetrisInventoryEventsHandlerSubsystem::StaticClass, TEXT("UTetrisInventoryEventsHandlerSubsystem"), &Z_Registration_Info_UClass_UTetrisInventoryEventsHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisInventoryEventsHandlerSubsystem), 4255858224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h__Script_InventorySystem_94459554(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
