// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/TetrisItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItemData_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnItemRotated ********************************************************
struct Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventOnItemRotated_Parms
	{
		FIntPoint RelativeSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::NewProp_RelativeSize = { "RelativeSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventOnItemRotated_Parms, RelativeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::NewProp_RelativeSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "OnItemRotated__DelegateSignature", Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRotated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::_Script_InventorySystem_eventOnItemRotated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRotated_DelegateWrapper(const FMulticastScriptDelegate& OnItemRotated, FIntPoint RelativeSize)
{
	struct _Script_InventorySystem_eventOnItemRotated_Parms
	{
		FIntPoint RelativeSize;
	};
	_Script_InventorySystem_eventOnItemRotated_Parms Parms;
	Parms.RelativeSize=RelativeSize;
	OnItemRotated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemRotated **********************************************************

// ********** Begin Class UTetrisItem Function CanRotate *******************************************
struct Z_Construct_UFunction_UTetrisItem_CanRotate_Statics
{
	struct TetrisItem_eventCanRotate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisItem_eventCanRotate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisItem_eventCanRotate_Parms), &Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "CanRotate", Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::TetrisItem_eventCanRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::TetrisItem_eventCanRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_CanRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_CanRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execCanRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRotate();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function CanRotate *********************************************

// ********** Begin Class UTetrisItem Function GetCachedRotation ***********************************
struct Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics
{
	struct TetrisItem_eventGetCachedRotation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisItem_eventGetCachedRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisItem_eventGetCachedRotation_Parms), &Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "GetCachedRotation", Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::TetrisItem_eventGetCachedRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::TetrisItem_eventGetCachedRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_GetCachedRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_GetCachedRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execGetCachedRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCachedRotation();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function GetCachedRotation *************************************

// ********** Begin Class UTetrisItem Function GetCachedSize ***************************************
struct Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics
{
	struct TetrisItem_eventGetCachedSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisItem_eventGetCachedSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "GetCachedSize", Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::TetrisItem_eventGetCachedSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::TetrisItem_eventGetCachedSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_GetCachedSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_GetCachedSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execGetCachedSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetCachedSize();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function GetCachedSize *****************************************

// ********** Begin Class UTetrisItem Function GetCurrentPosition **********************************
struct Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics
{
	struct TetrisItem_eventGetCurrentPosition_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisItem_eventGetCurrentPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "GetCurrentPosition", Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::TetrisItem_eventGetCurrentPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::TetrisItem_eventGetCurrentPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_GetCurrentPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_GetCurrentPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execGetCurrentPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetCurrentPosition();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function GetCurrentPosition ************************************

// ********** Begin Class UTetrisItem Function GetRelativeSize *************************************
struct Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics
{
	struct TetrisItem_eventGetRelativeSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisItem_eventGetRelativeSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "GetRelativeSize", Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::TetrisItem_eventGetRelativeSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::TetrisItem_eventGetRelativeSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_GetRelativeSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_GetRelativeSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execGetRelativeSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetRelativeSize();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function GetRelativeSize ***************************************

// ********** Begin Class UTetrisItem Function GetTetrisItemData ***********************************
struct Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics
{
	struct TetrisItem_eventGetTetrisItemData_Parms
	{
		UTetrisItemData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TetrisItem_eventGetTetrisItemData_Parms, ReturnValue), Z_Construct_UClass_UTetrisItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "GetTetrisItemData", Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::TetrisItem_eventGetTetrisItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::TetrisItem_eventGetTetrisItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_GetTetrisItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_GetTetrisItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execGetTetrisItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTetrisItemData**)Z_Param__Result=P_THIS->GetTetrisItemData();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function GetTetrisItemData *************************************

// ********** Begin Class UTetrisItem Function IsRotated *******************************************
struct Z_Construct_UFunction_UTetrisItem_IsRotated_Statics
{
	struct TetrisItem_eventIsRotated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TetrisItem_eventIsRotated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisItem_eventIsRotated_Parms), &Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "IsRotated", Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::TetrisItem_eventIsRotated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::TetrisItem_eventIsRotated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_IsRotated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_IsRotated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execIsRotated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRotated();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function IsRotated *********************************************

// ********** Begin Class UTetrisItem Function ResetToCachedRotation *******************************
struct Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "ResetToCachedRotation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execResetToCachedRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToCachedRotation();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function ResetToCachedRotation *********************************

// ********** Begin Class UTetrisItem Function Rotate **********************************************
struct Z_Construct_UFunction_UTetrisItem_Rotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_Rotate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "Rotate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_Rotate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTetrisItem_Rotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_Rotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Rotate();
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function Rotate ************************************************

// ********** Begin Class UTetrisItem Function SetRotation *****************************************
struct Z_Construct_UFunction_UTetrisItem_SetRotation_Statics
{
	struct TetrisItem_eventSetRotation_Parms
	{
		bool bNewRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::NewProp_bNewRotation_SetBit(void* Obj)
{
	((TetrisItem_eventSetRotation_Parms*)Obj)->bNewRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::NewProp_bNewRotation = { "bNewRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TetrisItem_eventSetRotation_Parms), &Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::NewProp_bNewRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewRotation_MetaData), NewProp_bNewRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::NewProp_bNewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTetrisItem, nullptr, "SetRotation", Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::TetrisItem_eventSetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::TetrisItem_eventSetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTetrisItem_SetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTetrisItem_SetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTetrisItem::execSetRotation)
{
	P_GET_UBOOL(Z_Param_bNewRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRotation(Z_Param_bNewRotation);
	P_NATIVE_END;
}
// ********** End Class UTetrisItem Function SetRotation *******************************************

// ********** Begin Class UTetrisItem **************************************************************
void UTetrisItem::StaticRegisterNativesUTetrisItem()
{
	UClass* Class = UTetrisItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanRotate", &UTetrisItem::execCanRotate },
		{ "GetCachedRotation", &UTetrisItem::execGetCachedRotation },
		{ "GetCachedSize", &UTetrisItem::execGetCachedSize },
		{ "GetCurrentPosition", &UTetrisItem::execGetCurrentPosition },
		{ "GetRelativeSize", &UTetrisItem::execGetRelativeSize },
		{ "GetTetrisItemData", &UTetrisItem::execGetTetrisItemData },
		{ "IsRotated", &UTetrisItem::execIsRotated },
		{ "ResetToCachedRotation", &UTetrisItem::execResetToCachedRotation },
		{ "Rotate", &UTetrisItem::execRotate },
		{ "SetRotation", &UTetrisItem::execSetRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisItem;
UClass* UTetrisItem::GetPrivateStaticClass()
{
	using TClass = UTetrisItem;
	if (!Z_Registration_Info_UClass_UTetrisItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisItem"),
			Z_Registration_Info_UClass_UTetrisItem.InnerSingleton,
			StaticRegisterNativesUTetrisItem,
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
	return Z_Registration_Info_UClass_UTetrisItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisItem_NoRegister()
{
	return UTetrisItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetrisInventory/TetrisItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRotated_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopLeftCornerPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current position of the item's top-left corner in the inventory grid\n" },
#endif
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current position of the item's top-left corner in the inventory grid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetrisInventory/TetrisItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRotated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopLeftCornerPosition;
	static void NewProp_bIsRotated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSize;
	static void NewProp_bCachedRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTetrisItem_CanRotate, "CanRotate" }, // 1137304598
		{ &Z_Construct_UFunction_UTetrisItem_GetCachedRotation, "GetCachedRotation" }, // 2533461031
		{ &Z_Construct_UFunction_UTetrisItem_GetCachedSize, "GetCachedSize" }, // 1909154082
		{ &Z_Construct_UFunction_UTetrisItem_GetCurrentPosition, "GetCurrentPosition" }, // 3573896806
		{ &Z_Construct_UFunction_UTetrisItem_GetRelativeSize, "GetRelativeSize" }, // 4180031168
		{ &Z_Construct_UFunction_UTetrisItem_GetTetrisItemData, "GetTetrisItemData" }, // 269012228
		{ &Z_Construct_UFunction_UTetrisItem_IsRotated, "IsRotated" }, // 10133745
		{ &Z_Construct_UFunction_UTetrisItem_ResetToCachedRotation, "ResetToCachedRotation" }, // 1612906345
		{ &Z_Construct_UFunction_UTetrisItem_Rotate, "Rotate" }, // 2507512108
		{ &Z_Construct_UFunction_UTetrisItem_SetRotation, "SetRotation" }, // 3836513054
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTetrisItem_Statics::NewProp_OnItemRotated = { "OnItemRotated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisItem, OnItemRotated), Z_Construct_UDelegateFunction_InventorySystem_OnItemRotated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRotated_MetaData), NewProp_OnItemRotated_MetaData) }; // 2132806386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisItem_Statics::NewProp_TopLeftCornerPosition = { "TopLeftCornerPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisItem, TopLeftCornerPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopLeftCornerPosition_MetaData), NewProp_TopLeftCornerPosition_MetaData) };
void Z_Construct_UClass_UTetrisItem_Statics::NewProp_bIsRotated_SetBit(void* Obj)
{
	((UTetrisItem*)Obj)->bIsRotated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetrisItem_Statics::NewProp_bIsRotated = { "bIsRotated", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTetrisItem), &Z_Construct_UClass_UTetrisItem_Statics::NewProp_bIsRotated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRotated_MetaData), NewProp_bIsRotated_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisItem_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisItem, CachedSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSize_MetaData), NewProp_CachedSize_MetaData) };
void Z_Construct_UClass_UTetrisItem_Statics::NewProp_bCachedRotation_SetBit(void* Obj)
{
	((UTetrisItem*)Obj)->bCachedRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetrisItem_Statics::NewProp_bCachedRotation = { "bCachedRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTetrisItem), &Z_Construct_UClass_UTetrisItem_Statics::NewProp_bCachedRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedRotation_MetaData), NewProp_bCachedRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItem_Statics::NewProp_OnItemRotated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItem_Statics::NewProp_TopLeftCornerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItem_Statics::NewProp_bIsRotated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItem_Statics::NewProp_CachedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItem_Statics::NewProp_bCachedRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisItem_Statics::ClassParams = {
	&UTetrisItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTetrisItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisItem()
{
	if (!Z_Registration_Info_UClass_UTetrisItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisItem.OuterSingleton, Z_Construct_UClass_UTetrisItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisItem);
UTetrisItem::~UTetrisItem() {}
// ********** End Class UTetrisItem ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisItem, UTetrisItem::StaticClass, TEXT("UTetrisItem"), &Z_Registration_Info_UClass_UTetrisItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisItem), 3517595919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h__Script_InventorySystem_744226764(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
