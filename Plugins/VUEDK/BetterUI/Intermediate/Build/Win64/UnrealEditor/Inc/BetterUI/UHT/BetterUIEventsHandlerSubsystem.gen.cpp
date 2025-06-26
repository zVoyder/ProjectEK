// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterUIEventsHandlerSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterUIEventsHandlerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_NoRegister();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRequestBack **********************************************************
struct Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "RequestBack__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestBack_DelegateWrapper(const FMulticastScriptDelegate& RequestBack)
{
	RequestBack.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FRequestBack ************************************************************

// ********** Begin Delegate FRequestConfirm *******************************************************
struct Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "RequestConfirm__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestConfirm_DelegateWrapper(const FMulticastScriptDelegate& RequestConfirm)
{
	RequestConfirm.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FRequestConfirm *********************************************************

// ********** Begin Delegate FRequestRightSelect ***************************************************
struct Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "RequestRightSelect__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestRightSelect_DelegateWrapper(const FMulticastScriptDelegate& RequestRightSelect)
{
	RequestRightSelect.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FRequestRightSelect *****************************************************

// ********** Begin Delegate FRequestLeftSelect ****************************************************
struct Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "RequestLeftSelect__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestLeftSelect_DelegateWrapper(const FMulticastScriptDelegate& RequestLeftSelect)
{
	RequestLeftSelect.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FRequestLeftSelect ******************************************************

// ********** Begin Class UBetterUIEventsHandlerSubsystem Function RequestBack *********************
struct Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Better UI|Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIEventsHandlerSubsystem, nullptr, "RequestBack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIEventsHandlerSubsystem::execRequestBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestBack();
	P_NATIVE_END;
}
// ********** End Class UBetterUIEventsHandlerSubsystem Function RequestBack ***********************

// ********** Begin Class UBetterUIEventsHandlerSubsystem Function RequestConfirm ******************
struct Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Better UI|Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIEventsHandlerSubsystem, nullptr, "RequestConfirm", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIEventsHandlerSubsystem::execRequestConfirm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestConfirm();
	P_NATIVE_END;
}
// ********** End Class UBetterUIEventsHandlerSubsystem Function RequestConfirm ********************

// ********** Begin Class UBetterUIEventsHandlerSubsystem Function RequestLeftSelect ***************
struct Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Better UI|Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIEventsHandlerSubsystem, nullptr, "RequestLeftSelect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIEventsHandlerSubsystem::execRequestLeftSelect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLeftSelect();
	P_NATIVE_END;
}
// ********** End Class UBetterUIEventsHandlerSubsystem Function RequestLeftSelect *****************

// ********** Begin Class UBetterUIEventsHandlerSubsystem Function RequestRightSelect **************
struct Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Better UI|Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIEventsHandlerSubsystem, nullptr, "RequestRightSelect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIEventsHandlerSubsystem::execRequestRightSelect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRightSelect();
	P_NATIVE_END;
}
// ********** End Class UBetterUIEventsHandlerSubsystem Function RequestRightSelect ****************

// ********** Begin Class UBetterUIEventsHandlerSubsystem ******************************************
void UBetterUIEventsHandlerSubsystem::StaticRegisterNativesUBetterUIEventsHandlerSubsystem()
{
	UClass* Class = UBetterUIEventsHandlerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestBack", &UBetterUIEventsHandlerSubsystem::execRequestBack },
		{ "RequestConfirm", &UBetterUIEventsHandlerSubsystem::execRequestConfirm },
		{ "RequestLeftSelect", &UBetterUIEventsHandlerSubsystem::execRequestLeftSelect },
		{ "RequestRightSelect", &UBetterUIEventsHandlerSubsystem::execRequestRightSelect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem;
UClass* UBetterUIEventsHandlerSubsystem::GetPrivateStaticClass()
{
	using TClass = UBetterUIEventsHandlerSubsystem;
	if (!Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterUIEventsHandlerSubsystem"),
			Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.InnerSingleton,
			StaticRegisterNativesUBetterUIEventsHandlerSubsystem,
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
	return Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_NoRegister()
{
	return UBetterUIEventsHandlerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BetterUIEventsHandlerSubsystem.h" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestBack_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestConfirm_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestRightSelect_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestLeftSelect_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/BetterUIEventsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestBack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestConfirm;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestRightSelect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestLeftSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestBack, "RequestBack" }, // 721213120
		{ &Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestConfirm, "RequestConfirm" }, // 2144433191
		{ &Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestLeftSelect, "RequestLeftSelect" }, // 3745291256
		{ &Z_Construct_UFunction_UBetterUIEventsHandlerSubsystem_RequestRightSelect, "RequestRightSelect" }, // 2942335649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterUIEventsHandlerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestBack = { "OnRequestBack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUIEventsHandlerSubsystem, OnRequestBack), Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestBack_MetaData), NewProp_OnRequestBack_MetaData) }; // 1434491064
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestConfirm = { "OnRequestConfirm", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUIEventsHandlerSubsystem, OnRequestConfirm), Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestConfirm_MetaData), NewProp_OnRequestConfirm_MetaData) }; // 869823525
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestRightSelect = { "OnRequestRightSelect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUIEventsHandlerSubsystem, OnRequestRightSelect), Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestRightSelect_MetaData), NewProp_OnRequestRightSelect_MetaData) }; // 1992829372
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestLeftSelect = { "OnRequestLeftSelect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterUIEventsHandlerSubsystem, OnRequestLeftSelect), Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestLeftSelect_MetaData), NewProp_OnRequestLeftSelect_MetaData) }; // 2627480857
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestConfirm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestRightSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::NewProp_OnRequestLeftSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::ClassParams = {
	&UBetterUIEventsHandlerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterUIEventsHandlerSubsystem()
{
	if (!Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.OuterSingleton, Z_Construct_UClass_UBetterUIEventsHandlerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem.OuterSingleton;
}
UBetterUIEventsHandlerSubsystem::UBetterUIEventsHandlerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterUIEventsHandlerSubsystem);
UBetterUIEventsHandlerSubsystem::~UBetterUIEventsHandlerSubsystem() {}
// ********** End Class UBetterUIEventsHandlerSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterUIEventsHandlerSubsystem, UBetterUIEventsHandlerSubsystem::StaticClass, TEXT("UBetterUIEventsHandlerSubsystem"), &Z_Registration_Info_UClass_UBetterUIEventsHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterUIEventsHandlerSubsystem), 3099055317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h__Script_BetterUI_934042996(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUIEventsHandlerSubsystem_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
