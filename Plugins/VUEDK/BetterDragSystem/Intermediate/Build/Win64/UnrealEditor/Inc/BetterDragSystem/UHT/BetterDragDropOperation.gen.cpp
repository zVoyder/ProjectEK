// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterDragDropOperation.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDragDropOperation() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterDragDropOperation Function CheckEndDrag ***************************
struct Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics
{
	struct BetterDragDropOperation_eventCheckEndDrag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropOperation_eventCheckEndDrag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropOperation_eventCheckEndDrag_Parms), &Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "CheckEndDrag", Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::BetterDragDropOperation_eventCheckEndDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::BetterDragDropOperation_eventCheckEndDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execCheckEndDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckEndDrag();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function CheckEndDrag *****************************

// ********** Begin Class UBetterDragDropOperation Function CheckEndDragIfReleased *****************
struct Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics
{
	struct BetterDragDropOperation_eventCheckEndDragIfReleased_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventCheckEndDragIfReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
void Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropOperation_eventCheckEndDragIfReleased_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropOperation_eventCheckEndDragIfReleased_Parms), &Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "CheckEndDragIfReleased", Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::BetterDragDropOperation_eventCheckEndDragIfReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::BetterDragDropOperation_eventCheckEndDragIfReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execCheckEndDragIfReleased)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckEndDragIfReleased(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function CheckEndDragIfReleased *******************

// ********** Begin Class UBetterDragDropOperation Function CheckEndDragKeyEvent *******************
struct Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics
{
	struct BetterDragDropOperation_eventCheckEndDragKeyEvent_Parms
	{
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventCheckEndDragKeyEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "CheckEndDragKeyEvent", Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::BetterDragDropOperation_eventCheckEndDragKeyEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::BetterDragDropOperation_eventCheckEndDragKeyEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execCheckEndDragKeyEvent)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckEndDragKeyEvent(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function CheckEndDragKeyEvent *********************

// ********** Begin Class UBetterDragDropOperation Function OnBeginDrag ****************************
static FName NAME_UBetterDragDropOperation_OnBeginDrag = FName(TEXT("OnBeginDrag"));
void UBetterDragDropOperation::OnBeginDrag()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnBeginDrag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnBeginDrag_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnBeginDrag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnBeginDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginDrag_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnBeginDrag ******************************

// ********** Begin Class UBetterDragDropOperation Function OnDragCancelled ************************
static FName NAME_UBetterDragDropOperation_OnDragCancelled = FName(TEXT("OnDragCancelled"));
void UBetterDragDropOperation::OnDragCancelled()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnDragCancelled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDragCancelled_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnDragCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnDragCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragCancelled_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnDragCancelled **************************

// ********** Begin Class UBetterDragDropOperation Function OnDragDrop *****************************
struct BetterDragDropOperation_eventOnDragDrop_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BetterDragDropOperation_eventOnDragDrop_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBetterDragDropOperation_OnDragDrop = FName(TEXT("OnDragDrop"));
bool UBetterDragDropOperation::OnDragDrop()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnDragDrop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDragDropOperation_eventOnDragDrop_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return OnDragDrop_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when the drag operation is dropped.\n\x09 * @return True if the drag operation is confirmed, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when the drag operation is dropped.\n@return True if the drag operation is confirmed, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropOperation_eventOnDragDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropOperation_eventOnDragDrop_Parms), &Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnDragDrop", Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::PropPointers), sizeof(BetterDragDropOperation_eventOnDragDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropOperation_eventOnDragDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnDragDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDragDrop_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnDragDrop *******************************

// ********** Begin Class UBetterDragDropOperation Function OnDragEnter ****************************
struct BetterDragDropOperation_eventOnDragEnter_Parms
{
	UUserWidget* EnteredWidget;
};
static FName NAME_UBetterDragDropOperation_OnDragEnter = FName(TEXT("OnDragEnter"));
void UBetterDragDropOperation::OnDragEnter(UUserWidget* EnteredWidget)
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnDragEnter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDragDropOperation_eventOnDragEnter_Parms Parms;
		Parms.EnteredWidget=EnteredWidget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnDragEnter_Implementation(EnteredWidget);
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnteredWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::NewProp_EnteredWidget = { "EnteredWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventOnDragEnter_Parms, EnteredWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredWidget_MetaData), NewProp_EnteredWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::NewProp_EnteredWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnDragEnter", Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::PropPointers), sizeof(BetterDragDropOperation_eventOnDragEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropOperation_eventOnDragEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnDragEnter)
{
	P_GET_OBJECT(UUserWidget,Z_Param_EnteredWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragEnter_Implementation(Z_Param_EnteredWidget);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnDragEnter ******************************

// ********** Begin Class UBetterDragDropOperation Function OnDragLeave ****************************
struct BetterDragDropOperation_eventOnDragLeave_Parms
{
	UUserWidget* LeftWidget;
};
static FName NAME_UBetterDragDropOperation_OnDragLeave = FName(TEXT("OnDragLeave"));
void UBetterDragDropOperation::OnDragLeave(UUserWidget* LeftWidget)
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnDragLeave);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDragDropOperation_eventOnDragLeave_Parms Parms;
		Parms.LeftWidget=LeftWidget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnDragLeave_Implementation(LeftWidget);
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::NewProp_LeftWidget = { "LeftWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventOnDragLeave_Parms, LeftWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftWidget_MetaData), NewProp_LeftWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::NewProp_LeftWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnDragLeave", Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::PropPointers), sizeof(BetterDragDropOperation_eventOnDragLeave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropOperation_eventOnDragLeave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnDragLeave)
{
	P_GET_OBJECT(UUserWidget,Z_Param_LeftWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragLeave_Implementation(Z_Param_LeftWidget);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnDragLeave ******************************

// ********** Begin Class UBetterDragDropOperation Function OnEndDrag ******************************
static FName NAME_UBetterDragDropOperation_OnEndDrag = FName(TEXT("OnEndDrag"));
void UBetterDragDropOperation::OnEndDrag()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_OnEndDrag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEndDrag_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "OnEndDrag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execOnEndDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndDrag_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function OnEndDrag ********************************

// ********** Begin Class UBetterDragDropOperation Function SetDragVisualPosition ******************
struct BetterDragDropOperation_eventSetDragVisualPosition_Parms
{
	FVector2D PositionInViewport;
};
static FName NAME_UBetterDragDropOperation_SetDragVisualPosition = FName(TEXT("SetDragVisualPosition"));
void UBetterDragDropOperation::SetDragVisualPosition(const FVector2D PositionInViewport) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_SetDragVisualPosition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDragDropOperation_eventSetDragVisualPosition_Parms Parms;
		Parms.PositionInViewport=PositionInViewport;
		const_cast<UBetterDragDropOperation*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UBetterDragDropOperation*>(this)->SetDragVisualPosition_Implementation(PositionInViewport);
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionInViewport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionInViewport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::NewProp_PositionInViewport = { "PositionInViewport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventSetDragVisualPosition_Parms, PositionInViewport), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionInViewport_MetaData), NewProp_PositionInViewport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::NewProp_PositionInViewport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "SetDragVisualPosition", Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::PropPointers), sizeof(BetterDragDropOperation_eventSetDragVisualPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropOperation_eventSetDragVisualPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execSetDragVisualPosition)
{
	P_GET_STRUCT(FVector2D,Z_Param_PositionInViewport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDragVisualPosition_Implementation(Z_Param_PositionInViewport);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function SetDragVisualPosition ********************

// ********** Begin Class UBetterDragDropOperation Function UpdateDrag *****************************
struct BetterDragDropOperation_eventUpdateDrag_Parms
{
	FVector2D Size;
};
static FName NAME_UBetterDragDropOperation_UpdateDrag = FName(TEXT("UpdateDrag"));
void UBetterDragDropOperation::UpdateDrag(const FVector2D Size)
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDragDropOperation_UpdateDrag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDragDropOperation_eventUpdateDrag_Parms Parms;
		Parms.Size=Size;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateDrag_Implementation(Size);
	}
}
struct Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropOperation_eventUpdateDrag_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropOperation, nullptr, "UpdateDrag", Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::PropPointers), sizeof(BetterDragDropOperation_eventUpdateDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropOperation_eventUpdateDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropOperation::execUpdateDrag)
{
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDrag_Implementation(Z_Param_Size);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropOperation Function UpdateDrag *******************************

// ********** Begin Class UBetterDragDropOperation *************************************************
void UBetterDragDropOperation::StaticRegisterNativesUBetterDragDropOperation()
{
	UClass* Class = UBetterDragDropOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckEndDrag", &UBetterDragDropOperation::execCheckEndDrag },
		{ "CheckEndDragIfReleased", &UBetterDragDropOperation::execCheckEndDragIfReleased },
		{ "CheckEndDragKeyEvent", &UBetterDragDropOperation::execCheckEndDragKeyEvent },
		{ "OnBeginDrag", &UBetterDragDropOperation::execOnBeginDrag },
		{ "OnDragCancelled", &UBetterDragDropOperation::execOnDragCancelled },
		{ "OnDragDrop", &UBetterDragDropOperation::execOnDragDrop },
		{ "OnDragEnter", &UBetterDragDropOperation::execOnDragEnter },
		{ "OnDragLeave", &UBetterDragDropOperation::execOnDragLeave },
		{ "OnEndDrag", &UBetterDragDropOperation::execOnEndDrag },
		{ "SetDragVisualPosition", &UBetterDragDropOperation::execSetDragVisualPosition },
		{ "UpdateDrag", &UBetterDragDropOperation::execUpdateDrag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDragDropOperation;
UClass* UBetterDragDropOperation::GetPrivateStaticClass()
{
	using TClass = UBetterDragDropOperation;
	if (!Z_Registration_Info_UClass_UBetterDragDropOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDragDropOperation"),
			Z_Registration_Info_UClass_UBetterDragDropOperation.InnerSingleton,
			StaticRegisterNativesUBetterDragDropOperation,
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
	return Z_Registration_Info_UClass_UBetterDragDropOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister()
{
	return UBetterDragDropOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDragDropOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BetterDragDropOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "Category", "BetterDragDropOperation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "Category", "BetterDragDropOperation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "BetterDragDropOperation" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "BetterDragDropOperation" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropReceiver_MetaData[] = {
		{ "Category", "BetterDragDropOperation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BetterDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropReceiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDrag, "CheckEndDrag" }, // 1258092421
		{ &Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragIfReleased, "CheckEndDragIfReleased" }, // 1633210137
		{ &Z_Construct_UFunction_UBetterDragDropOperation_CheckEndDragKeyEvent, "CheckEndDragKeyEvent" }, // 1782404190
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnBeginDrag, "OnBeginDrag" }, // 883314514
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnDragCancelled, "OnDragCancelled" }, // 1795615709
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnDragDrop, "OnDragDrop" }, // 2408536312
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnDragEnter, "OnDragEnter" }, // 2042697562
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnDragLeave, "OnDragLeave" }, // 351062354
		{ &Z_Construct_UFunction_UBetterDragDropOperation_OnEndDrag, "OnEndDrag" }, // 785764701
		{ &Z_Construct_UFunction_UBetterDragDropOperation_SetDragVisualPosition, "SetDragVisualPosition" }, // 1251134855
		{ &Z_Construct_UFunction_UBetterDragDropOperation_UpdateDrag, "UpdateDrag" }, // 380517977
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterDragDropOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropOperation, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropOperation, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropOperation, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropOperation, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_DropReceiver = { "DropReceiver", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropOperation, DropReceiver), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropReceiver_MetaData), NewProp_DropReceiver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropOperation_Statics::NewProp_DropReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterDragDropOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDragDropOperation_Statics::ClassParams = {
	&UBetterDragDropOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterDragDropOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropOperation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDragDropOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDragDropOperation()
{
	if (!Z_Registration_Info_UClass_UBetterDragDropOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDragDropOperation.OuterSingleton, Z_Construct_UClass_UBetterDragDropOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDragDropOperation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDragDropOperation);
UBetterDragDropOperation::~UBetterDragDropOperation() {}
// ********** End Class UBetterDragDropOperation ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDragDropOperation, UBetterDragDropOperation::StaticClass, TEXT("UBetterDragDropOperation"), &Z_Registration_Info_UClass_UBetterDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDragDropOperation), 3298212970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h__Script_BetterDragSystem_2499111420(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
