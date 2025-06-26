// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/MenuManager.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuManager() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UMenuManager();
BETTERUI_API UClass* Z_Construct_UClass_UMenuManager_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMenuOpened *********************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics
{
	struct _Script_BetterUI_eventOnMenuOpened_Parms
	{
		UMenuWidget* MenuWidget;
		FGameplayTag MenuTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnMenuOpened_Parms, MenuWidget), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::NewProp_MenuTag = { "MenuTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnMenuOpened_Parms, MenuTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::NewProp_MenuTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnMenuOpened__DelegateSignature", Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::_Script_BetterUI_eventOnMenuOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::_Script_BetterUI_eventOnMenuOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMenuOpened, UMenuWidget* MenuWidget, FGameplayTag MenuTag)
{
	struct _Script_BetterUI_eventOnMenuOpened_Parms
	{
		UMenuWidget* MenuWidget;
		FGameplayTag MenuTag;
	};
	_Script_BetterUI_eventOnMenuOpened_Parms Parms;
	Parms.MenuWidget=MenuWidget;
	Parms.MenuTag=MenuTag;
	OnMenuOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMenuOpened ***********************************************************

// ********** Begin Delegate FOnMenuClosed *********************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics
{
	struct _Script_BetterUI_eventOnMenuClosed_Parms
	{
		UMenuWidget* MenuWidget;
		FGameplayTag MenuTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnMenuClosed_Parms, MenuWidget), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuWidget_MetaData), NewProp_MenuWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::NewProp_MenuTag = { "MenuTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnMenuClosed_Parms, MenuTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::NewProp_MenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::NewProp_MenuTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnMenuClosed__DelegateSignature", Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::_Script_BetterUI_eventOnMenuClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::_Script_BetterUI_eventOnMenuClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuClosed, UMenuWidget* MenuWidget, FGameplayTag MenuTag)
{
	struct _Script_BetterUI_eventOnMenuClosed_Parms
	{
		UMenuWidget* MenuWidget;
		FGameplayTag MenuTag;
	};
	_Script_BetterUI_eventOnMenuClosed_Parms Parms;
	Parms.MenuWidget=MenuWidget;
	Parms.MenuTag=MenuTag;
	OnMenuClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMenuClosed ***********************************************************

// ********** Begin Class UMenuManager Function AddMenu ********************************************
struct Z_Construct_UFunction_UMenuManager_AddMenu_Statics
{
	struct MenuManager_eventAddMenu_Parms
	{
		FGameplayTag MenuTag;
		UMenuWidget* Menu;
		int32 ZOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_MenuTag = { "MenuTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventAddMenu_Parms, MenuTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuTag_MetaData), NewProp_MenuTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventAddMenu_Parms, Menu), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventAddMenu_Parms, ZOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_AddMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_MenuTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_AddMenu_Statics::NewProp_ZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_AddMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_AddMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "AddMenu", Z_Construct_UFunction_UMenuManager_AddMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_AddMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_AddMenu_Statics::MenuManager_eventAddMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_AddMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_AddMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_AddMenu_Statics::MenuManager_eventAddMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_AddMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_AddMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execAddMenu)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_MenuTag);
	P_GET_OBJECT(UMenuWidget,Z_Param_Menu);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMenu(Z_Param_MenuTag,Z_Param_Menu,Z_Param_ZOrder);
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function AddMenu **********************************************

// ********** Begin Class UMenuManager Function CloseCurrentMenu ***********************************
struct Z_Construct_UFunction_UMenuManager_CloseCurrentMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_CloseCurrentMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "CloseCurrentMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_CloseCurrentMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_CloseCurrentMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuManager_CloseCurrentMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_CloseCurrentMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execCloseCurrentMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseCurrentMenu();
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function CloseCurrentMenu *************************************

// ********** Begin Class UMenuManager Function GetCurrentOpenMenu *********************************
struct Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics
{
	struct MenuManager_eventGetCurrentOpenMenu_Parms
	{
		UMenuWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventGetCurrentOpenMenu_Parms, ReturnValue), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "GetCurrentOpenMenu", Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::MenuManager_eventGetCurrentOpenMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::MenuManager_eventGetCurrentOpenMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execGetCurrentOpenMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMenuWidget**)Z_Param__Result=P_THIS->GetCurrentOpenMenu();
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function GetCurrentOpenMenu ***********************************

// ********** Begin Class UMenuManager Function GetMenuByTag ***************************************
struct Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics
{
	struct MenuManager_eventGetMenuByTag_Parms
	{
		FGameplayTag Tag;
		UMenuWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventGetMenuByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventGetMenuByTag_Parms, ReturnValue), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "GetMenuByTag", Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::MenuManager_eventGetMenuByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::MenuManager_eventGetMenuByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_GetMenuByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_GetMenuByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execGetMenuByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMenuWidget**)Z_Param__Result=P_THIS->GetMenuByTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function GetMenuByTag *****************************************

// ********** Begin Class UMenuManager Function IsAnyMenuOpen **************************************
struct Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics
{
	struct MenuManager_eventIsAnyMenuOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuManager_eventIsAnyMenuOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuManager_eventIsAnyMenuOpen_Parms), &Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "IsAnyMenuOpen", Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::MenuManager_eventIsAnyMenuOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::MenuManager_eventIsAnyMenuOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execIsAnyMenuOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnyMenuOpen();
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function IsAnyMenuOpen ****************************************

// ********** Begin Class UMenuManager Function IsMenuOpen *****************************************
struct Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics
{
	struct MenuManager_eventIsMenuOpen_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventIsMenuOpen_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
void Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuManager_eventIsMenuOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuManager_eventIsMenuOpen_Parms), &Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "IsMenuOpen", Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::MenuManager_eventIsMenuOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::MenuManager_eventIsMenuOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_IsMenuOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_IsMenuOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execIsMenuOpen)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMenuOpen(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function IsMenuOpen *******************************************

// ********** Begin Class UMenuManager Function ToggleMenu *****************************************
struct Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics
{
	struct MenuManager_eventToggleMenu_Parms
	{
		FGameplayTag Tag;
		UMenuWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventToggleMenu_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuManager_eventToggleMenu_Parms, ReturnValue), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuManager, nullptr, "ToggleMenu", Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::MenuManager_eventToggleMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::MenuManager_eventToggleMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuManager_ToggleMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuManager_ToggleMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuManager::execToggleMenu)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMenuWidget**)Z_Param__Result=P_THIS->ToggleMenu(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UMenuManager Function ToggleMenu *******************************************

// ********** Begin Class UMenuManager *************************************************************
void UMenuManager::StaticRegisterNativesUMenuManager()
{
	UClass* Class = UMenuManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMenu", &UMenuManager::execAddMenu },
		{ "CloseCurrentMenu", &UMenuManager::execCloseCurrentMenu },
		{ "GetCurrentOpenMenu", &UMenuManager::execGetCurrentOpenMenu },
		{ "GetMenuByTag", &UMenuManager::execGetMenuByTag },
		{ "IsAnyMenuOpen", &UMenuManager::execIsAnyMenuOpen },
		{ "IsMenuOpen", &UMenuManager::execIsMenuOpen },
		{ "ToggleMenu", &UMenuManager::execToggleMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuManager;
UClass* UMenuManager::GetPrivateStaticClass()
{
	using TClass = UMenuManager;
	if (!Z_Registration_Info_UClass_UMenuManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuManager"),
			Z_Registration_Info_UClass_UMenuManager.InnerSingleton,
			StaticRegisterNativesUMenuManager,
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
	return Z_Registration_Info_UClass_UMenuManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuManager_NoRegister()
{
	return UMenuManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/MenuManager.h" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuOpened_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMenuClosed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOpenMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MenuManager.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMenuClosed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOpenMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuManager_AddMenu, "AddMenu" }, // 256198583
		{ &Z_Construct_UFunction_UMenuManager_CloseCurrentMenu, "CloseCurrentMenu" }, // 1087465899
		{ &Z_Construct_UFunction_UMenuManager_GetCurrentOpenMenu, "GetCurrentOpenMenu" }, // 3464471493
		{ &Z_Construct_UFunction_UMenuManager_GetMenuByTag, "GetMenuByTag" }, // 1729576990
		{ &Z_Construct_UFunction_UMenuManager_IsAnyMenuOpen, "IsAnyMenuOpen" }, // 4288534588
		{ &Z_Construct_UFunction_UMenuManager_IsMenuOpen, "IsMenuOpen" }, // 2098060472
		{ &Z_Construct_UFunction_UMenuManager_ToggleMenu, "ToggleMenu" }, // 132072193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_OnMenuOpened = { "OnMenuOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuManager, OnMenuOpened), Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuOpened_MetaData), NewProp_OnMenuOpened_MetaData) }; // 3787654104
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_OnMenuClosed = { "OnMenuClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuManager, OnMenuClosed), Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMenuClosed_MetaData), NewProp_OnMenuClosed_MetaData) }; // 371352276
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_CurrentOpenMenu = { "CurrentOpenMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuManager, CurrentOpenMenu), Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOpenMenu_MetaData), NewProp_CurrentOpenMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap_ValueProp = { "MenuMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap_Key_KeyProp = { "MenuMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap = { "MenuMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuManager, MenuMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuMap_MetaData), NewProp_MenuMap_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuManager_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuManager, Settings), Z_Construct_UClass_UBetterUISettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_OnMenuOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_OnMenuClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_CurrentOpenMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_MenuMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuManager_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuManager_Statics::ClassParams = {
	&UMenuManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuManager()
{
	if (!Z_Registration_Info_UClass_UMenuManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuManager.OuterSingleton, Z_Construct_UClass_UMenuManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuManager.OuterSingleton;
}
UMenuManager::UMenuManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuManager);
UMenuManager::~UMenuManager() {}
// ********** End Class UMenuManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuManager, UMenuManager::StaticClass, TEXT("UMenuManager"), &Z_Registration_Info_UClass_UMenuManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuManager), 2319772534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h__Script_BetterUI_732048187(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Components_MenuManager_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
