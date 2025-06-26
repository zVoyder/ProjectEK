// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/BetterDropReceiverWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDropReceiverWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropReceiver_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDropReceiverWidget();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDropReceiverWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterDropReceiverWidget Function CanReceiveDrop ************************
struct BetterDropReceiverWidget_eventCanReceiveDrop_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BetterDropReceiverWidget_eventCanReceiveDrop_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBetterDropReceiverWidget_CanReceiveDrop = FName(TEXT("CanReceiveDrop"));
bool UBetterDropReceiverWidget::CanReceiveDrop() const
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterDropReceiverWidget_CanReceiveDrop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterDropReceiverWidget_eventCanReceiveDrop_Parms Parms;
		const_cast<UBetterDropReceiverWidget*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBetterDropReceiverWidget*>(this)->CanReceiveDrop_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterDropReceiverWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDropReceiverWidget_eventCanReceiveDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDropReceiverWidget_eventCanReceiveDrop_Parms), &Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDropReceiverWidget, nullptr, "CanReceiveDrop", Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::PropPointers), sizeof(BetterDropReceiverWidget_eventCanReceiveDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterDropReceiverWidget_eventCanReceiveDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDropReceiverWidget::execCanReceiveDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanReceiveDrop_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterDropReceiverWidget Function CanReceiveDrop **************************

// ********** Begin Class UBetterDropReceiverWidget Function OnDragDropOperationEnded **************
struct Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics
{
	struct BetterDropReceiverWidget_eventOnDragDropOperationEnded_Parms
	{
		UBetterDragDropOperation* DragDropOperation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterDropReceiverWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragDropOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::NewProp_DragDropOperation = { "DragDropOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDropReceiverWidget_eventOnDragDropOperationEnded_Parms, DragDropOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::NewProp_DragDropOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDropReceiverWidget, nullptr, "OnDragDropOperationEnded", Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::BetterDropReceiverWidget_eventOnDragDropOperationEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::BetterDropReceiverWidget_eventOnDragDropOperationEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDropReceiverWidget::execOnDragDropOperationEnded)
{
	P_GET_OBJECT(UBetterDragDropOperation,Z_Param_DragDropOperation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDragDropOperationEnded(Z_Param_DragDropOperation);
	P_NATIVE_END;
}
// ********** End Class UBetterDropReceiverWidget Function OnDragDropOperationEnded ****************

// ********** Begin Class UBetterDropReceiverWidget ************************************************
void UBetterDropReceiverWidget::StaticRegisterNativesUBetterDropReceiverWidget()
{
	UClass* Class = UBetterDropReceiverWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanReceiveDrop", &UBetterDropReceiverWidget::execCanReceiveDrop },
		{ "OnDragDropOperationEnded", &UBetterDropReceiverWidget::execOnDragDropOperationEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDropReceiverWidget;
UClass* UBetterDropReceiverWidget::GetPrivateStaticClass()
{
	using TClass = UBetterDropReceiverWidget;
	if (!Z_Registration_Info_UClass_UBetterDropReceiverWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDropReceiverWidget"),
			Z_Registration_Info_UClass_UBetterDropReceiverWidget.InnerSingleton,
			StaticRegisterNativesUBetterDropReceiverWidget,
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
	return Z_Registration_Info_UClass_UBetterDropReceiverWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDropReceiverWidget_NoRegister()
{
	return UBetterDropReceiverWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDropReceiverWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/BetterDropReceiverWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BetterDropReceiverWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragDropSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterDropReceiverWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragDropSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDropReceiverWidget_CanReceiveDrop, "CanReceiveDrop" }, // 311006734
		{ &Z_Construct_UFunction_UBetterDropReceiverWidget_OnDragDropOperationEnded, "OnDragDropOperationEnded" }, // 3661380979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterDropReceiverWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDropReceiverWidget_Statics::NewProp_DragDropSubsystem = { "DragDropSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDropReceiverWidget, DragDropSubsystem), Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragDropSubsystem_MetaData), NewProp_DragDropSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterDropReceiverWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDropReceiverWidget_Statics::NewProp_DragDropSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDropReceiverWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterDropReceiverWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDropReceiverWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBetterDropReceiverWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBetterDragDropReceiver_NoRegister, (int32)VTABLE_OFFSET(UBetterDropReceiverWidget, IBetterDragDropReceiver), false },  // 964024631
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDropReceiverWidget_Statics::ClassParams = {
	&UBetterDropReceiverWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterDropReceiverWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDropReceiverWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDropReceiverWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDropReceiverWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDropReceiverWidget()
{
	if (!Z_Registration_Info_UClass_UBetterDropReceiverWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDropReceiverWidget.OuterSingleton, Z_Construct_UClass_UBetterDropReceiverWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDropReceiverWidget.OuterSingleton;
}
UBetterDropReceiverWidget::UBetterDropReceiverWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDropReceiverWidget);
UBetterDropReceiverWidget::~UBetterDropReceiverWidget() {}
// ********** End Class UBetterDropReceiverWidget **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDropReceiverWidget, UBetterDropReceiverWidget::StaticClass, TEXT("UBetterDropReceiverWidget"), &Z_Registration_Info_UClass_UBetterDropReceiverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDropReceiverWidget), 1120848559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h__Script_BetterDragSystem_525325847(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
