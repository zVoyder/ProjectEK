// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BetterDragDropOperationFactory.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDragDropOperationFactory() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragAndDropFactory();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragAndDropFactory_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterDragAndDropFactory Function CreateBetterDragDropOperation *********
struct Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics
{
	struct BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms
	{
		const TSubclassOf<UBetterDragDropOperation> DragDropOperationClass;
		UUserWidget* OwnerWidget;
		UUserWidget* DragVisual;
		UObject* Payload;
		ESlateVisibility OwnerWidgetVisibility;
		UBetterDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Factories/BetterDragDropOperationFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragDropOperationClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidgetVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragDropOperationClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OwnerWidgetVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OwnerWidgetVisibility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_DragDropOperationClass = { "DragDropOperationClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, DragDropOperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragDropOperationClass_MetaData), NewProp_DragDropOperationClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidgetVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidgetVisibility = { "OwnerWidgetVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, OwnerWidgetVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidgetVisibility_MetaData), NewProp_OwnerWidgetVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms, ReturnValue), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_DragDropOperationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidgetVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_OwnerWidgetVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragAndDropFactory, nullptr, "CreateBetterDragDropOperation", Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::BetterDragAndDropFactory_eventCreateBetterDragDropOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragAndDropFactory::execCreateBetterDragDropOperation)
{
	P_GET_OBJECT(UClass,Z_Param_DragDropOperationClass);
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_DragVisual);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_GET_ENUM(ESlateVisibility,Z_Param_OwnerWidgetVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterDragDropOperation**)Z_Param__Result=UBetterDragAndDropFactory::CreateBetterDragDropOperation(Z_Param_DragDropOperationClass,Z_Param_OwnerWidget,Z_Param_DragVisual,Z_Param_Payload,ESlateVisibility(Z_Param_OwnerWidgetVisibility));
	P_NATIVE_END;
}
// ********** End Class UBetterDragAndDropFactory Function CreateBetterDragDropOperation ***********

// ********** Begin Class UBetterDragAndDropFactory Function CreateBetterDragDropOperationWithKeys *
struct Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics
{
	struct BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms
	{
		const TSubclassOf<UBetterDragDropOperation> DragDropOperationClass;
		UUserWidget* OwnerWidget;
		UUserWidget* DragVisual;
		UObject* Payload;
		ESlateVisibility OwnerWidgetVisibility;
		TArray<FKey> DropKeys;
		UBetterDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Factories/BetterDragDropOperationFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragDropOperationClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidgetVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragDropOperationClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OwnerWidgetVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OwnerWidgetVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DropKeys;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DragDropOperationClass = { "DragDropOperationClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, DragDropOperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragDropOperationClass_MetaData), NewProp_DragDropOperationClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DragVisual = { "DragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, DragVisual), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisual_MetaData), NewProp_DragVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidgetVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidgetVisibility = { "OwnerWidgetVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, OwnerWidgetVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidgetVisibility_MetaData), NewProp_OwnerWidgetVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DropKeys_Inner = { "DropKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DropKeys = { "DropKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, DropKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms, ReturnValue), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DragDropOperationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DragVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidgetVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_OwnerWidgetVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DropKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_DropKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragAndDropFactory, nullptr, "CreateBetterDragDropOperationWithKeys", Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::BetterDragAndDropFactory_eventCreateBetterDragDropOperationWithKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragAndDropFactory::execCreateBetterDragDropOperationWithKeys)
{
	P_GET_OBJECT(UClass,Z_Param_DragDropOperationClass);
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_DragVisual);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_GET_ENUM(ESlateVisibility,Z_Param_OwnerWidgetVisibility);
	P_GET_TARRAY(FKey,Z_Param_DropKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterDragDropOperation**)Z_Param__Result=UBetterDragAndDropFactory::CreateBetterDragDropOperationWithKeys(Z_Param_DragDropOperationClass,Z_Param_OwnerWidget,Z_Param_DragVisual,Z_Param_Payload,ESlateVisibility(Z_Param_OwnerWidgetVisibility),Z_Param_DropKeys);
	P_NATIVE_END;
}
// ********** End Class UBetterDragAndDropFactory Function CreateBetterDragDropOperationWithKeys ***

// ********** Begin Class UBetterDragAndDropFactory ************************************************
void UBetterDragAndDropFactory::StaticRegisterNativesUBetterDragAndDropFactory()
{
	UClass* Class = UBetterDragAndDropFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBetterDragDropOperation", &UBetterDragAndDropFactory::execCreateBetterDragDropOperation },
		{ "CreateBetterDragDropOperationWithKeys", &UBetterDragAndDropFactory::execCreateBetterDragDropOperationWithKeys },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDragAndDropFactory;
UClass* UBetterDragAndDropFactory::GetPrivateStaticClass()
{
	using TClass = UBetterDragAndDropFactory;
	if (!Z_Registration_Info_UClass_UBetterDragAndDropFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDragAndDropFactory"),
			Z_Registration_Info_UClass_UBetterDragAndDropFactory.InnerSingleton,
			StaticRegisterNativesUBetterDragAndDropFactory,
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
	return Z_Registration_Info_UClass_UBetterDragAndDropFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDragAndDropFactory_NoRegister()
{
	return UBetterDragAndDropFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDragAndDropFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/BetterDragDropOperationFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/BetterDragDropOperationFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperation, "CreateBetterDragDropOperation" }, // 2870131950
		{ &Z_Construct_UFunction_UBetterDragAndDropFactory_CreateBetterDragDropOperationWithKeys, "CreateBetterDragDropOperationWithKeys" }, // 4094128926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterDragAndDropFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterDragAndDropFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragAndDropFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDragAndDropFactory_Statics::ClassParams = {
	&UBetterDragAndDropFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragAndDropFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDragAndDropFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDragAndDropFactory()
{
	if (!Z_Registration_Info_UClass_UBetterDragAndDropFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDragAndDropFactory.OuterSingleton, Z_Construct_UClass_UBetterDragAndDropFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDragAndDropFactory.OuterSingleton;
}
UBetterDragAndDropFactory::UBetterDragAndDropFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDragAndDropFactory);
UBetterDragAndDropFactory::~UBetterDragAndDropFactory() {}
// ********** End Class UBetterDragAndDropFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDragAndDropFactory, UBetterDragAndDropFactory::StaticClass, TEXT("UBetterDragAndDropFactory"), &Z_Registration_Info_UClass_UBetterDragAndDropFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDragAndDropFactory), 3966020563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h__Script_BetterDragSystem_3314047210(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
