// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/SSUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSSUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USSUtility();
SAVESYSTEM_API UClass* Z_Construct_UClass_USSUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USSUtility Function GetAutoSaveManager ***********************************
struct Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics
{
	struct SSUtility_eventGetAutoSaveManager_Parms
	{
		UAutoSaveManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventGetAutoSaveManager_Parms, ReturnValue), Z_Construct_UClass_UAutoSaveManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "GetAutoSaveManager", Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::SSUtility_eventGetAutoSaveManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::SSUtility_eventGetAutoSaveManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_GetAutoSaveManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_GetAutoSaveManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execGetAutoSaveManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAutoSaveManager**)Z_Param__Result=USSUtility::GetAutoSaveManager();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function GetAutoSaveManager *************************************

// ********** Begin Class USSUtility Function GetSaveGame ******************************************
struct Z_Construct_UFunction_USSUtility_GetSaveGame_Statics
{
	struct SSUtility_eventGetSaveGame_Parms
	{
		UDefaultSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventGetSaveGame_Parms, ReturnValue), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "GetSaveGame", Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::SSUtility_eventGetSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::SSUtility_eventGetSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_GetSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_GetSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execGetSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDefaultSaveGame**)Z_Param__Result=USSUtility::GetSaveGame();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function GetSaveGame ********************************************

// ********** Begin Class USSUtility Function GetSaveManager ***************************************
struct Z_Construct_UFunction_USSUtility_GetSaveManager_Statics
{
	struct SSUtility_eventGetSaveManager_Parms
	{
		USaveManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventGetSaveManager_Parms, ReturnValue), Z_Construct_UClass_USaveManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "GetSaveManager", Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::SSUtility_eventGetSaveManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::SSUtility_eventGetSaveManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_GetSaveManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_GetSaveManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execGetSaveManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveManager**)Z_Param__Result=USSUtility::GetSaveManager();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function GetSaveManager *****************************************

// ********** Begin Class USSUtility Function GetSaveMasterID **************************************
struct Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics
{
	struct SSUtility_eventGetSaveMasterID_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventGetSaveMasterID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "GetSaveMasterID", Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::SSUtility_eventGetSaveMasterID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::SSUtility_eventGetSaveMasterID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_GetSaveMasterID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_GetSaveMasterID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execGetSaveMasterID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=USSUtility::GetSaveMasterID();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function GetSaveMasterID ****************************************

// ********** Begin Class USSUtility Function GetSharedSaveGame ************************************
struct Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics
{
	struct SSUtility_eventGetSharedSaveGame_Parms
	{
		UDefaultSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventGetSharedSaveGame_Parms, ReturnValue), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "GetSharedSaveGame", Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::SSUtility_eventGetSharedSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::SSUtility_eventGetSharedSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_GetSharedSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_GetSharedSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execGetSharedSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDefaultSaveGame**)Z_Param__Result=USSUtility::GetSharedSaveGame();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function GetSharedSaveGame **************************************

// ********** Begin Class USSUtility Function HasInstanceEverLoaded ********************************
struct Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics
{
	struct SSUtility_eventHasInstanceEverLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSUtility_eventHasInstanceEverLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventHasInstanceEverLoaded_Parms), &Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "HasInstanceEverLoaded", Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::SSUtility_eventHasInstanceEverLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::SSUtility_eventHasInstanceEverLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execHasInstanceEverLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSUtility::HasInstanceEverLoaded();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function HasInstanceEverLoaded **********************************

// ********** Begin Class USSUtility Function HasInstanceEverSaved *********************************
struct Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics
{
	struct SSUtility_eventHasInstanceEverSaved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSUtility_eventHasInstanceEverSaved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventHasInstanceEverSaved_Parms), &Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "HasInstanceEverSaved", Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::SSUtility_eventHasInstanceEverSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::SSUtility_eventHasInstanceEverSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_HasInstanceEverSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_HasInstanceEverSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execHasInstanceEverSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSUtility::HasInstanceEverSaved();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function HasInstanceEverSaved ***********************************

// ********** Begin Class USSUtility Function HasSharedInstanceEverLoaded **************************
struct Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics
{
	struct SSUtility_eventHasSharedInstanceEverLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSUtility_eventHasSharedInstanceEverLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventHasSharedInstanceEverLoaded_Parms), &Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "HasSharedInstanceEverLoaded", Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::SSUtility_eventHasSharedInstanceEverLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::SSUtility_eventHasSharedInstanceEverLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execHasSharedInstanceEverLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSUtility::HasSharedInstanceEverLoaded();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function HasSharedInstanceEverLoaded ****************************

// ********** Begin Class USSUtility Function HasSharedInstanceEverSaved ***************************
struct Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics
{
	struct SSUtility_eventHasSharedInstanceEverSaved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSUtility_eventHasSharedInstanceEverSaved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventHasSharedInstanceEverSaved_Parms), &Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "HasSharedInstanceEverSaved", Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::SSUtility_eventHasSharedInstanceEverSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::SSUtility_eventHasSharedInstanceEverSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execHasSharedInstanceEverSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSUtility::HasSharedInstanceEverSaved();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function HasSharedInstanceEverSaved *****************************

// ********** Begin Class USSUtility Function LoadSelectedSlot *************************************
struct Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics
{
	struct SSUtility_eventLoadSelectedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventLoadSelectedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "LoadSelectedSlot", Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::SSUtility_eventLoadSelectedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::SSUtility_eventLoadSelectedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_LoadSelectedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_LoadSelectedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execLoadSelectedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::LoadSelectedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function LoadSelectedSlot ***************************************

// ********** Begin Class USSUtility Function LoadSelectedSlotAndSharedSlot ************************
struct Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics
{
	struct SSUtility_eventLoadSelectedSlotAndSharedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventLoadSelectedSlotAndSharedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "LoadSelectedSlotAndSharedSlot", Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::SSUtility_eventLoadSelectedSlotAndSharedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::SSUtility_eventLoadSelectedSlotAndSharedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execLoadSelectedSlotAndSharedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::LoadSelectedSlotAndSharedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function LoadSelectedSlotAndSharedSlot **************************

// ********** Begin Class USSUtility Function LoadSharedSlot ***************************************
struct Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics
{
	struct SSUtility_eventLoadSharedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventLoadSharedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "LoadSharedSlot", Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::SSUtility_eventLoadSharedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::SSUtility_eventLoadSharedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_LoadSharedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_LoadSharedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execLoadSharedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::LoadSharedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function LoadSharedSlot *****************************************

// ********** Begin Class USSUtility Function ManualAndSharedSave **********************************
struct Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics
{
	struct SSUtility_eventManualAndSharedSave_Parms
	{
		UObject* Instigator;
		bool bOverrideCurrentSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bOverrideCurrentSlot", "false" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_bOverrideCurrentSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventManualAndSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot_SetBit(void* Obj)
{
	((SSUtility_eventManualAndSharedSave_Parms*)Obj)->bOverrideCurrentSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot = { "bOverrideCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventManualAndSharedSave_Parms), &Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "ManualAndSharedSave", Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::SSUtility_eventManualAndSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::SSUtility_eventManualAndSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_ManualAndSharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_ManualAndSharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execManualAndSharedSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_GET_UBOOL(Z_Param_bOverrideCurrentSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::ManualAndSharedSave(Z_Param_Instigator,Z_Param_bOverrideCurrentSlot);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function ManualAndSharedSave ************************************

// ********** Begin Class USSUtility Function ManualSave *******************************************
struct Z_Construct_UFunction_USSUtility_ManualSave_Statics
{
	struct SSUtility_eventManualSave_Parms
	{
		UObject* Instigator;
		bool bOverrideCurrentSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bOverrideCurrentSlot", "false" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_bOverrideCurrentSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventManualSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_bOverrideCurrentSlot_SetBit(void* Obj)
{
	((SSUtility_eventManualSave_Parms*)Obj)->bOverrideCurrentSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_bOverrideCurrentSlot = { "bOverrideCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSUtility_eventManualSave_Parms), &Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_bOverrideCurrentSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentSlot_MetaData), NewProp_bOverrideCurrentSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_ManualSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_ManualSave_Statics::NewProp_bOverrideCurrentSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_ManualSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "ManualSave", Z_Construct_UFunction_USSUtility_ManualSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_ManualSave_Statics::SSUtility_eventManualSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_ManualSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_ManualSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_ManualSave_Statics::SSUtility_eventManualSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_ManualSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_ManualSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execManualSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_GET_UBOOL(Z_Param_bOverrideCurrentSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::ManualSave(Z_Param_Instigator,Z_Param_bOverrideCurrentSlot);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function ManualSave *********************************************

// ********** Begin Class USSUtility Function SelectAndSaveOnSlot **********************************
struct Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics
{
	struct SSUtility_eventSelectAndSaveOnSlot_Parms
	{
		FString SlotName;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventSelectAndSaveOnSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventSelectAndSaveOnSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "SelectAndSaveOnSlot", Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::SSUtility_eventSelectAndSaveOnSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::SSUtility_eventSelectAndSaveOnSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execSelectAndSaveOnSlot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::SelectAndSaveOnSlot(Z_Param_SlotName,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function SelectAndSaveOnSlot ************************************

// ********** Begin Class USSUtility Function SetSaveMasterID **************************************
struct Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics
{
	struct SSUtility_eventSetSaveMasterID_Parms
	{
		FName SaveMasterID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveMasterID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SaveMasterID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::NewProp_SaveMasterID = { "SaveMasterID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventSetSaveMasterID_Parms, SaveMasterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveMasterID_MetaData), NewProp_SaveMasterID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::NewProp_SaveMasterID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "SetSaveMasterID", Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::SSUtility_eventSetSaveMasterID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::SSUtility_eventSetSaveMasterID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_SetSaveMasterID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_SetSaveMasterID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execSetSaveMasterID)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SaveMasterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::SetSaveMasterID(Z_Param_Out_SaveMasterID);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function SetSaveMasterID ****************************************

// ********** Begin Class USSUtility Function SharedSave *******************************************
struct Z_Construct_UFunction_USSUtility_SharedSave_Statics
{
	struct SSUtility_eventSharedSave_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSUtility_SharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSUtility_eventSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSUtility_SharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSUtility_SharedSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_SharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "SharedSave", Z_Construct_UFunction_USSUtility_SharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SharedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSUtility_SharedSave_Statics::SSUtility_eventSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_SharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_SharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSUtility_SharedSave_Statics::SSUtility_eventSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSUtility_SharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_SharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execSharedSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::SharedSave(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USSUtility Function SharedSave *********************************************

// ********** Begin Class USSUtility Function StartNewSaveGame *************************************
struct Z_Construct_UFunction_USSUtility_StartNewSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_StartNewSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "StartNewSaveGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_StartNewSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_StartNewSaveGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USSUtility_StartNewSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_StartNewSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execStartNewSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::StartNewSaveGame();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function StartNewSaveGame ***************************************

// ********** Begin Class USSUtility Function StartTimePlayedTimer *********************************
struct Z_Construct_UFunction_USSUtility_StartTimePlayedTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSUtility_StartTimePlayedTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSUtility, nullptr, "StartTimePlayedTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSUtility_StartTimePlayedTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSUtility_StartTimePlayedTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USSUtility_StartTimePlayedTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSUtility_StartTimePlayedTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSUtility::execStartTimePlayedTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USSUtility::StartTimePlayedTimer();
	P_NATIVE_END;
}
// ********** End Class USSUtility Function StartTimePlayedTimer ***********************************

// ********** Begin Class USSUtility ***************************************************************
void USSUtility::StaticRegisterNativesUSSUtility()
{
	UClass* Class = USSUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAutoSaveManager", &USSUtility::execGetAutoSaveManager },
		{ "GetSaveGame", &USSUtility::execGetSaveGame },
		{ "GetSaveManager", &USSUtility::execGetSaveManager },
		{ "GetSaveMasterID", &USSUtility::execGetSaveMasterID },
		{ "GetSharedSaveGame", &USSUtility::execGetSharedSaveGame },
		{ "HasInstanceEverLoaded", &USSUtility::execHasInstanceEverLoaded },
		{ "HasInstanceEverSaved", &USSUtility::execHasInstanceEverSaved },
		{ "HasSharedInstanceEverLoaded", &USSUtility::execHasSharedInstanceEverLoaded },
		{ "HasSharedInstanceEverSaved", &USSUtility::execHasSharedInstanceEverSaved },
		{ "LoadSelectedSlot", &USSUtility::execLoadSelectedSlot },
		{ "LoadSelectedSlotAndSharedSlot", &USSUtility::execLoadSelectedSlotAndSharedSlot },
		{ "LoadSharedSlot", &USSUtility::execLoadSharedSlot },
		{ "ManualAndSharedSave", &USSUtility::execManualAndSharedSave },
		{ "ManualSave", &USSUtility::execManualSave },
		{ "SelectAndSaveOnSlot", &USSUtility::execSelectAndSaveOnSlot },
		{ "SetSaveMasterID", &USSUtility::execSetSaveMasterID },
		{ "SharedSave", &USSUtility::execSharedSave },
		{ "StartNewSaveGame", &USSUtility::execStartNewSaveGame },
		{ "StartTimePlayedTimer", &USSUtility::execStartTimePlayedTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USSUtility;
UClass* USSUtility::GetPrivateStaticClass()
{
	using TClass = USSUtility;
	if (!Z_Registration_Info_UClass_USSUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SSUtility"),
			Z_Registration_Info_UClass_USSUtility.InnerSingleton,
			StaticRegisterNativesUSSUtility,
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
	return Z_Registration_Info_UClass_USSUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_USSUtility_NoRegister()
{
	return USSUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USSUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/SSUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/SSUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USSUtility_GetAutoSaveManager, "GetAutoSaveManager" }, // 2646783491
		{ &Z_Construct_UFunction_USSUtility_GetSaveGame, "GetSaveGame" }, // 2321987467
		{ &Z_Construct_UFunction_USSUtility_GetSaveManager, "GetSaveManager" }, // 874645422
		{ &Z_Construct_UFunction_USSUtility_GetSaveMasterID, "GetSaveMasterID" }, // 442417959
		{ &Z_Construct_UFunction_USSUtility_GetSharedSaveGame, "GetSharedSaveGame" }, // 3482635599
		{ &Z_Construct_UFunction_USSUtility_HasInstanceEverLoaded, "HasInstanceEverLoaded" }, // 394806128
		{ &Z_Construct_UFunction_USSUtility_HasInstanceEverSaved, "HasInstanceEverSaved" }, // 2095533604
		{ &Z_Construct_UFunction_USSUtility_HasSharedInstanceEverLoaded, "HasSharedInstanceEverLoaded" }, // 3808175586
		{ &Z_Construct_UFunction_USSUtility_HasSharedInstanceEverSaved, "HasSharedInstanceEverSaved" }, // 4276221163
		{ &Z_Construct_UFunction_USSUtility_LoadSelectedSlot, "LoadSelectedSlot" }, // 687319743
		{ &Z_Construct_UFunction_USSUtility_LoadSelectedSlotAndSharedSlot, "LoadSelectedSlotAndSharedSlot" }, // 3845434935
		{ &Z_Construct_UFunction_USSUtility_LoadSharedSlot, "LoadSharedSlot" }, // 1991241769
		{ &Z_Construct_UFunction_USSUtility_ManualAndSharedSave, "ManualAndSharedSave" }, // 753573737
		{ &Z_Construct_UFunction_USSUtility_ManualSave, "ManualSave" }, // 3441084121
		{ &Z_Construct_UFunction_USSUtility_SelectAndSaveOnSlot, "SelectAndSaveOnSlot" }, // 1168642390
		{ &Z_Construct_UFunction_USSUtility_SetSaveMasterID, "SetSaveMasterID" }, // 3330327012
		{ &Z_Construct_UFunction_USSUtility_SharedSave, "SharedSave" }, // 4092351813
		{ &Z_Construct_UFunction_USSUtility_StartNewSaveGame, "StartNewSaveGame" }, // 1720802059
		{ &Z_Construct_UFunction_USSUtility_StartTimePlayedTimer, "StartTimePlayedTimer" }, // 2320683318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USSUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USSUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USSUtility_Statics::ClassParams = {
	&USSUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USSUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_USSUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USSUtility()
{
	if (!Z_Registration_Info_UClass_USSUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USSUtility.OuterSingleton, Z_Construct_UClass_USSUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USSUtility.OuterSingleton;
}
USSUtility::USSUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USSUtility);
USSUtility::~USSUtility() {}
// ********** End Class USSUtility *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USSUtility, USSUtility::StaticClass, TEXT("USSUtility"), &Z_Registration_Info_UClass_USSUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USSUtility), 2807084145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h__Script_SaveSystem_4141941359(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
