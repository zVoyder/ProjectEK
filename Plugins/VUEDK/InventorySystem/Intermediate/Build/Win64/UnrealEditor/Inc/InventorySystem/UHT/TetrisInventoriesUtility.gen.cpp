// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/TetrisInventoriesUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisInventoriesUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesUtility();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesUtility_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTetrisInventoriesUtility Function GetTetrisInventoriesManager ***********
struct Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics
{
	struct TetrisInventoriesUtility_eventGetTetrisInventoriesManager_Parms
	{
		UTetrisInventoriesManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventGetTetrisInventoriesManager_Parms, ReturnValue), Z_Construct_UClass_UTetrisInventoriesManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "GetTetrisInventoriesManager", Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::TetrisInventoriesUtility_eventGetTetrisInventoriesManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::TetrisInventoriesUtility_eventGetTetrisInventoriesManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execGetTetrisInventoriesManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTetrisInventoriesManager**)Z_Param__Result=UTetrisInventoriesUtility::GetTetrisInventoriesManager();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function GetTetrisInventoriesManager *************

// ********** Begin Class UTetrisInventoriesUtility Function IsSplitting ***************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics
{
	struct TetrisInventoriesUtility_eventIsSplitting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoriesUtility_eventIsSplitting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoriesUtility_eventIsSplitting_Parms), &Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "IsSplitting", Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::TetrisInventoriesUtility_eventIsSplitting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::TetrisInventoriesUtility_eventIsSplitting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execIsSplitting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTetrisInventoriesUtility::IsSplitting();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function IsSplitting *****************************

// ********** Begin Class UTetrisInventoriesUtility Function RequestCancelSplit ********************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestCancelSplit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestCancelSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestCancelSplit();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestCancelSplit **********************

// ********** Begin Class UTetrisInventoriesUtility Function RequestDiscard ************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestDiscard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestDiscard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestDiscard();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestDiscard **************************

// ********** Begin Class UTetrisInventoriesUtility Function RequestDrag ***************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestDrag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestDrag();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestDrag *****************************

// ********** Begin Class UTetrisInventoriesUtility Function RequestDrop ***************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestDrop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestDrop();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestDrop *****************************

// ********** Begin Class UTetrisInventoriesUtility Function RequestEquipUnequip *******************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics
{
	struct TetrisInventoriesUtility_eventRequestEquipUnequip_Parms
	{
		int32 SwapPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "CPP_Default_SwapPriority", "0" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SwapPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::NewProp_SwapPriority = { "SwapPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventRequestEquipUnequip_Parms, SwapPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapPriority_MetaData), NewProp_SwapPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::NewProp_SwapPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestEquipUnequip", Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::TetrisInventoriesUtility_eventRequestEquipUnequip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::TetrisInventoriesUtility_eventRequestEquipUnequip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestEquipUnequip)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SwapPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestEquipUnequip(Z_Param_SwapPriority);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestEquipUnequip *********************

// ********** Begin Class UTetrisInventoriesUtility Function RequestRotate *************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestRotate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestRotate();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestRotate ***************************

// ********** Begin Class UTetrisInventoriesUtility Function RequestSplit **************************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "RequestSplit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execRequestSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTetrisInventoriesUtility::RequestSplit();
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function RequestSplit ****************************

// ********** Begin Class UTetrisInventoriesUtility Function TryTransferItem ***********************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics
{
	struct TetrisInventoriesUtility_eventTryTransferItem_Parms
	{
		UTetrisItem* Item;
		UTetrisInventory* DestinationInventory;
		FIntPoint DestinationPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventTryTransferItem_Parms, Item), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_DestinationInventory = { "DestinationInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventTryTransferItem_Parms, DestinationInventory), Z_Construct_UClass_UTetrisInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationInventory_MetaData), NewProp_DestinationInventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_DestinationPosition = { "DestinationPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventTryTransferItem_Parms, DestinationPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPosition_MetaData), NewProp_DestinationPosition_MetaData) };
void Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoriesUtility_eventTryTransferItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoriesUtility_eventTryTransferItem_Parms), &Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_DestinationInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_DestinationPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "TryTransferItem", Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::TetrisInventoriesUtility_eventTryTransferItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::TetrisInventoriesUtility_eventTryTransferItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execTryTransferItem)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_Item);
	P_GET_OBJECT(UTetrisInventory,Z_Param_DestinationInventory);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_DestinationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTetrisInventoriesUtility::TryTransferItem(Z_Param_Item,Z_Param_DestinationInventory,Z_Param_Out_DestinationPosition);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function TryTransferItem *************************

// ********** Begin Class UTetrisInventoriesUtility Function TryTransferSwitchItems ****************
struct Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics
{
	struct TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms
	{
		UTetrisItem* ItemA;
		UTetrisItem* ItemB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Gameplay|Tetris Inventory System" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms, ItemA), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms, ItemB), Z_Construct_UClass_UTetrisItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms), &Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisInventoriesUtility, nullptr, "TryTransferSwitchItems", Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::TetrisInventoriesUtility_eventTryTransferSwitchItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisInventoriesUtility::execTryTransferSwitchItems)
{
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemA);
	P_GET_OBJECT(UTetrisItem,Z_Param_ItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTetrisInventoriesUtility::TryTransferSwitchItems(Z_Param_ItemA,Z_Param_ItemB);
	P_NATIVE_END;
}
// ********** End Class UTetrisInventoriesUtility Function TryTransferSwitchItems ******************

// ********** Begin Class UTetrisInventoriesUtility ************************************************
void UTetrisInventoriesUtility::StaticRegisterNativesUTetrisInventoriesUtility()
{
	UClass* Class = UTetrisInventoriesUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTetrisInventoriesManager", &UTetrisInventoriesUtility::execGetTetrisInventoriesManager },
		{ "IsSplitting", &UTetrisInventoriesUtility::execIsSplitting },
		{ "RequestCancelSplit", &UTetrisInventoriesUtility::execRequestCancelSplit },
		{ "RequestDiscard", &UTetrisInventoriesUtility::execRequestDiscard },
		{ "RequestDrag", &UTetrisInventoriesUtility::execRequestDrag },
		{ "RequestDrop", &UTetrisInventoriesUtility::execRequestDrop },
		{ "RequestEquipUnequip", &UTetrisInventoriesUtility::execRequestEquipUnequip },
		{ "RequestRotate", &UTetrisInventoriesUtility::execRequestRotate },
		{ "RequestSplit", &UTetrisInventoriesUtility::execRequestSplit },
		{ "TryTransferItem", &UTetrisInventoriesUtility::execTryTransferItem },
		{ "TryTransferSwitchItems", &UTetrisInventoriesUtility::execTryTransferSwitchItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisInventoriesUtility;
UClass* UTetrisInventoriesUtility::GetPrivateStaticClass()
{
	using TClass = UTetrisInventoriesUtility;
	if (!Z_Registration_Info_UClass_UTetrisInventoriesUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisInventoriesUtility"),
			Z_Registration_Info_UClass_UTetrisInventoriesUtility.InnerSingleton,
			StaticRegisterNativesUTetrisInventoriesUtility,
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
	return Z_Registration_Info_UClass_UTetrisInventoriesUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisInventoriesUtility_NoRegister()
{
	return UTetrisInventoriesUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisInventoriesUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/TetrisInventoriesUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/TetrisInventoriesUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_GetTetrisInventoriesManager, "GetTetrisInventoriesManager" }, // 623445045
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_IsSplitting, "IsSplitting" }, // 1039643692
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestCancelSplit, "RequestCancelSplit" }, // 3774665356
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDiscard, "RequestDiscard" }, // 4147176718
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrag, "RequestDrag" }, // 822805489
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestDrop, "RequestDrop" }, // 1259719286
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestEquipUnequip, "RequestEquipUnequip" }, // 2677089082
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestRotate, "RequestRotate" }, // 3600860317
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_RequestSplit, "RequestSplit" }, // 3717864585
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferItem, "TryTransferItem" }, // 2256809803
		{ &Z_Construct_UFunction_UTetrisInventoriesUtility_TryTransferSwitchItems, "TryTransferSwitchItems" }, // 616905771
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisInventoriesUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTetrisInventoriesUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoriesUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisInventoriesUtility_Statics::ClassParams = {
	&UTetrisInventoriesUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventoriesUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisInventoriesUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisInventoriesUtility()
{
	if (!Z_Registration_Info_UClass_UTetrisInventoriesUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisInventoriesUtility.OuterSingleton, Z_Construct_UClass_UTetrisInventoriesUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisInventoriesUtility.OuterSingleton;
}
UTetrisInventoriesUtility::UTetrisInventoriesUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisInventoriesUtility);
UTetrisInventoriesUtility::~UTetrisInventoriesUtility() {}
// ********** End Class UTetrisInventoriesUtility **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisInventoriesUtility, UTetrisInventoriesUtility::StaticClass, TEXT("UTetrisInventoriesUtility"), &Z_Registration_Info_UClass_UTetrisInventoriesUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisInventoriesUtility), 3335657471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h__Script_InventorySystem_500714906(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
