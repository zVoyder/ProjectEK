// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/MenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UMenuManager_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UMenuWidget();
BETTERUI_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMenuWidgetOpened ***************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnMenuWidgetOpened__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuWidgetOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMenuWidgetOpened)
{
	OnMenuWidgetOpened.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMenuWidgetOpened *****************************************************

// ********** Begin Delegate FOnMenuWidgetClosed ***************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnMenuWidgetClosed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuWidgetClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuWidgetClosed)
{
	OnMenuWidgetClosed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMenuWidgetClosed *****************************************************

// ********** Begin Class UMenuWidget Function Close ***********************************************
struct Z_Construct_UFunction_UMenuWidget_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_Close_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "Close", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuWidget_Close_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuWidget_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuWidget::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// ********** End Class UMenuWidget Function Close *************************************************

// ********** Begin Class UMenuWidget Function IsOpen **********************************************
struct Z_Construct_UFunction_UMenuWidget_IsOpen_Statics
{
	struct MenuWidget_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuWidget_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuWidget_eventIsOpen_Parms), &Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "IsOpen", Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::MenuWidget_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::MenuWidget_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuWidget_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuWidget::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// ********** End Class UMenuWidget Function IsOpen ************************************************

// ********** Begin Class UMenuWidget Function OnClose *********************************************
static FName NAME_UMenuWidget_OnClose = FName(TEXT("OnClose"));
void UMenuWidget::OnClose()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuWidget_OnClose);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnClose_Implementation();
	}
}
struct Z_Construct_UFunction_UMenuWidget_OnClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnClose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnClose", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuWidget_OnClose_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuWidget_OnClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuWidget::execOnClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClose_Implementation();
	P_NATIVE_END;
}
// ********** End Class UMenuWidget Function OnClose ***********************************************

// ********** Begin Class UMenuWidget Function OnOpen **********************************************
static FName NAME_UMenuWidget_OnOpen = FName(TEXT("OnOpen"));
void UMenuWidget::OnOpen()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuWidget_OnOpen);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnOpen_Implementation();
	}
}
struct Z_Construct_UFunction_UMenuWidget_OnOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnOpen", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuWidget_OnOpen_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuWidget_OnOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuWidget::execOnOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOpen_Implementation();
	P_NATIVE_END;
}
// ********** End Class UMenuWidget Function OnOpen ************************************************

// ********** Begin Class UMenuWidget **************************************************************
void UMenuWidget::StaticRegisterNativesUMenuWidget()
{
	UClass* Class = UMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UMenuWidget::execClose },
		{ "IsOpen", &UMenuWidget::execIsOpen },
		{ "OnClose", &UMenuWidget::execOnClose },
		{ "OnOpen", &UMenuWidget::execOnOpen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuWidget;
UClass* UMenuWidget::GetPrivateStaticClass()
{
	using TClass = UMenuWidget;
	if (!Z_Registration_Info_UClass_UMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuWidget"),
			Z_Registration_Info_UClass_UMenuWidget.InnerSingleton,
			StaticRegisterNativesUMenuWidget,
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
	return Z_Registration_Info_UClass_UMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
{
	return UMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/MenuWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuOpened_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuClosed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenVisibility_MetaData[] = {
		{ "Category", "MenuWidget" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseVisibility_MetaData[] = {
		{ "Category", "MenuWidget" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "Category", "MenuWidget" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuClosed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpenVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenVisibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CloseVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CloseVisibility;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidget_Close, "Close" }, // 763820324
		{ &Z_Construct_UFunction_UMenuWidget_IsOpen, "IsOpen" }, // 4013950183
		{ &Z_Construct_UFunction_UMenuWidget_OnClose, "OnClose" }, // 1375222727
		{ &Z_Construct_UFunction_UMenuWidget_OnOpen, "OnOpen" }, // 2031228701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_OnMenuOpened = { "OnMenuOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, OnMenuOpened), Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuOpened_MetaData), NewProp_OnMenuOpened_MetaData) }; // 154078263
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_OnMenuClosed = { "OnMenuClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, OnMenuClosed), Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuClosed_MetaData), NewProp_OnMenuClosed_MetaData) }; // 1638299407
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_OpenVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_OpenVisibility = { "OpenVisibility", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, OpenVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenVisibility_MetaData), NewProp_OpenVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_CloseVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_CloseVisibility = { "CloseVisibility", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, CloseVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseVisibility_MetaData), NewProp_CloseVisibility_MetaData) }; // 2974316103
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_MenuManager = { "MenuManager", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuWidget, MenuManager), Z_Construct_UClass_UMenuManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuManager_MetaData), NewProp_MenuManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_OnMenuOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_OnMenuClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_OpenVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_OpenVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_CloseVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_CloseVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_MenuManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
	&UMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuWidget.OuterSingleton, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
UMenuWidget::~UMenuWidget() {}
// ********** End Class UMenuWidget ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuWidget, UMenuWidget::StaticClass, TEXT("UMenuWidget"), &Z_Registration_Info_UClass_UMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuWidget), 1572489489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h__Script_BetterUI_2503549855(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_MenuWidget_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
