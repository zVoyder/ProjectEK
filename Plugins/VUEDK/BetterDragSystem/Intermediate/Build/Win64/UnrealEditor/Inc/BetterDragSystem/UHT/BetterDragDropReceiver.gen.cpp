// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterDragDropReceiver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDragDropReceiver() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropReceiver();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropReceiver_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterDragDropReceiver Function OnBetterDragDrop ********************
struct BetterDragDropReceiver_eventOnBetterDragDrop_Parms
{
	UBetterDragDropOperation* DragOperation;
	UUserWidget* OwnerWidget;
	UUserWidget* DragVisual;
	UObject* Payload;
};
void IBetterDragDropReceiver::OnBetterDragDrop(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBetterDragDrop instead.");
}
static FName NAME_UBetterDragDropReceiver_OnBetterDragDrop = FName(TEXT("OnBetterDragDrop"));
void IBetterDragDropReceiver::Execute_OnBetterDragDrop(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterDragDropReceiver::StaticClass()));
	BetterDragDropReceiver_eventOnBetterDragDrop_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterDragDropReceiver_OnBetterDragDrop);
	if (Func)
	{
		Parms.DragOperation=DragOperation;
		Parms.OwnerWidget=OwnerWidget;
		Parms.DragVisual=DragVisual;
		Parms.Payload=Payload;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBetterDragDropReceiver*)(O->GetNativeInterfaceAddress(UBetterDragDropReceiver::StaticClass())))
	{
		I->OnBetterDragDrop_Implementation(DragOperation,OwnerWidget,DragVisual,Payload);
	}
}
struct Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterDragDropReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragDrop_Parms, DragOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragDrop_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragDrop_Parms, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragDrop_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_DragOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropReceiver, nullptr, "OnBetterDragDrop", Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::PropPointers), sizeof(BetterDragDropReceiver_eventOnBetterDragDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropReceiver_eventOnBetterDragDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterDragDropReceiver::execOnBetterDragDrop)
{
	P_GET_OBJECT(UBetterDragDropOperation,Z_Param_DragOperation);
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_DragVisual);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetterDragDrop_Implementation(Z_Param_DragOperation,Z_Param_OwnerWidget,Z_Param_DragVisual,Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Interface UBetterDragDropReceiver Function OnBetterDragDrop **********************

// ********** Begin Interface UBetterDragDropReceiver Function OnBetterDragEnter *******************
struct BetterDragDropReceiver_eventOnBetterDragEnter_Parms
{
	UBetterDragDropOperation* DragOperation;
	UUserWidget* OwnerWidget;
	UUserWidget* DragVisual;
	UObject* Payload;
};
void IBetterDragDropReceiver::OnBetterDragEnter(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBetterDragEnter instead.");
}
static FName NAME_UBetterDragDropReceiver_OnBetterDragEnter = FName(TEXT("OnBetterDragEnter"));
void IBetterDragDropReceiver::Execute_OnBetterDragEnter(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterDragDropReceiver::StaticClass()));
	BetterDragDropReceiver_eventOnBetterDragEnter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterDragDropReceiver_OnBetterDragEnter);
	if (Func)
	{
		Parms.DragOperation=DragOperation;
		Parms.OwnerWidget=OwnerWidget;
		Parms.DragVisual=DragVisual;
		Parms.Payload=Payload;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBetterDragDropReceiver*)(O->GetNativeInterfaceAddress(UBetterDragDropReceiver::StaticClass())))
	{
		I->OnBetterDragEnter_Implementation(DragOperation,OwnerWidget,DragVisual,Payload);
	}
}
struct Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterDragDropReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragEnter_Parms, DragOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragEnter_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragEnter_Parms, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragEnter_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_DragOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropReceiver, nullptr, "OnBetterDragEnter", Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::PropPointers), sizeof(BetterDragDropReceiver_eventOnBetterDragEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropReceiver_eventOnBetterDragEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterDragDropReceiver::execOnBetterDragEnter)
{
	P_GET_OBJECT(UBetterDragDropOperation,Z_Param_DragOperation);
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_DragVisual);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetterDragEnter_Implementation(Z_Param_DragOperation,Z_Param_OwnerWidget,Z_Param_DragVisual,Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Interface UBetterDragDropReceiver Function OnBetterDragEnter *********************

// ********** Begin Interface UBetterDragDropReceiver Function OnBetterDragLeave *******************
struct BetterDragDropReceiver_eventOnBetterDragLeave_Parms
{
	UBetterDragDropOperation* DragOperation;
	UUserWidget* OwnerWidget;
	UUserWidget* DragVisual;
	UObject* Payload;
};
void IBetterDragDropReceiver::OnBetterDragLeave(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBetterDragLeave instead.");
}
static FName NAME_UBetterDragDropReceiver_OnBetterDragLeave = FName(TEXT("OnBetterDragLeave"));
void IBetterDragDropReceiver::Execute_OnBetterDragLeave(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterDragDropReceiver::StaticClass()));
	BetterDragDropReceiver_eventOnBetterDragLeave_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterDragDropReceiver_OnBetterDragLeave);
	if (Func)
	{
		Parms.DragOperation=DragOperation;
		Parms.OwnerWidget=OwnerWidget;
		Parms.DragVisual=DragVisual;
		Parms.Payload=Payload;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBetterDragDropReceiver*)(O->GetNativeInterfaceAddress(UBetterDragDropReceiver::StaticClass())))
	{
		I->OnBetterDragLeave_Implementation(DragOperation,OwnerWidget,DragVisual,Payload);
	}
}
struct Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterDragDropReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragLeave_Parms, DragOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragLeave_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragLeave_Parms, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropReceiver_eventOnBetterDragLeave_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_DragOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropReceiver, nullptr, "OnBetterDragLeave", Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::PropPointers), sizeof(BetterDragDropReceiver_eventOnBetterDragLeave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDragDropReceiver_eventOnBetterDragLeave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterDragDropReceiver::execOnBetterDragLeave)
{
	P_GET_OBJECT(UBetterDragDropOperation,Z_Param_DragOperation);
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_DragVisual);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetterDragLeave_Implementation(Z_Param_DragOperation,Z_Param_OwnerWidget,Z_Param_DragVisual,Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Interface UBetterDragDropReceiver Function OnBetterDragLeave *********************

// ********** Begin Interface UBetterDragDropReceiver **********************************************
void UBetterDragDropReceiver::StaticRegisterNativesUBetterDragDropReceiver()
{
	UClass* Class = UBetterDragDropReceiver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBetterDragDrop", &IBetterDragDropReceiver::execOnBetterDragDrop },
		{ "OnBetterDragEnter", &IBetterDragDropReceiver::execOnBetterDragEnter },
		{ "OnBetterDragLeave", &IBetterDragDropReceiver::execOnBetterDragLeave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDragDropReceiver;
UClass* UBetterDragDropReceiver::GetPrivateStaticClass()
{
	using TClass = UBetterDragDropReceiver;
	if (!Z_Registration_Info_UClass_UBetterDragDropReceiver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDragDropReceiver"),
			Z_Registration_Info_UClass_UBetterDragDropReceiver.InnerSingleton,
			StaticRegisterNativesUBetterDragDropReceiver,
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
	return Z_Registration_Info_UClass_UBetterDragDropReceiver.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDragDropReceiver_NoRegister()
{
	return UBetterDragDropReceiver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDragDropReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterDragDropReceiver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragDrop, "OnBetterDragDrop" }, // 2914628907
		{ &Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragEnter, "OnBetterDragEnter" }, // 3696796252
		{ &Z_Construct_UFunction_UBetterDragDropReceiver_OnBetterDragLeave, "OnBetterDragLeave" }, // 3356976133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterDragDropReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterDragDropReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDragDropReceiver_Statics::ClassParams = {
	&UBetterDragDropReceiver::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDragDropReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDragDropReceiver()
{
	if (!Z_Registration_Info_UClass_UBetterDragDropReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDragDropReceiver.OuterSingleton, Z_Construct_UClass_UBetterDragDropReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDragDropReceiver.OuterSingleton;
}
UBetterDragDropReceiver::UBetterDragDropReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDragDropReceiver);
// ********** End Interface UBetterDragDropReceiver ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDragDropReceiver, UBetterDragDropReceiver::StaticClass, TEXT("UBetterDragDropReceiver"), &Z_Registration_Info_UClass_UBetterDragDropReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDragDropReceiver), 964024631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h__Script_BetterDragSystem_151171574(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
