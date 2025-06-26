// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterSwitcherObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterSwitcherObject() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitcherObject();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitcherObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterSwitcherObject Function SwitcherActivatedWidget ***************
void IBetterSwitcherObject::SwitcherActivatedWidget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SwitcherActivatedWidget instead.");
}
static FName NAME_UBetterSwitcherObject_SwitcherActivatedWidget = FName(TEXT("SwitcherActivatedWidget"));
void IBetterSwitcherObject::Execute_SwitcherActivatedWidget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterSwitcherObject::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBetterSwitcherObject_SwitcherActivatedWidget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBetterSwitcherObject*)(O->GetNativeInterfaceAddress(UBetterSwitcherObject::StaticClass())))
	{
		I->SwitcherActivatedWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSwitcherObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitcherObject, nullptr, "SwitcherActivatedWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterSwitcherObject::execSwitcherActivatedWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitcherActivatedWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBetterSwitcherObject Function SwitcherActivatedWidget *****************

// ********** Begin Interface UBetterSwitcherObject ************************************************
void UBetterSwitcherObject::StaticRegisterNativesUBetterSwitcherObject()
{
	UClass* Class = UBetterSwitcherObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitcherActivatedWidget", &IBetterSwitcherObject::execSwitcherActivatedWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterSwitcherObject;
UClass* UBetterSwitcherObject::GetPrivateStaticClass()
{
	using TClass = UBetterSwitcherObject;
	if (!Z_Registration_Info_UClass_UBetterSwitcherObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterSwitcherObject"),
			Z_Registration_Info_UClass_UBetterSwitcherObject.InnerSingleton,
			StaticRegisterNativesUBetterSwitcherObject,
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
	return Z_Registration_Info_UClass_UBetterSwitcherObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterSwitcherObject_NoRegister()
{
	return UBetterSwitcherObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterSwitcherObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSwitcherObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterSwitcherObject_SwitcherActivatedWidget, "SwitcherActivatedWidget" }, // 1931704562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterSwitcherObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterSwitcherObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitcherObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterSwitcherObject_Statics::ClassParams = {
	&UBetterSwitcherObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitcherObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterSwitcherObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterSwitcherObject()
{
	if (!Z_Registration_Info_UClass_UBetterSwitcherObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterSwitcherObject.OuterSingleton, Z_Construct_UClass_UBetterSwitcherObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterSwitcherObject.OuterSingleton;
}
UBetterSwitcherObject::UBetterSwitcherObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterSwitcherObject);
// ********** End Interface UBetterSwitcherObject **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterSwitcherObject, UBetterSwitcherObject::StaticClass, TEXT("UBetterSwitcherObject"), &Z_Registration_Info_UClass_UBetterSwitcherObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterSwitcherObject), 3114382289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h__Script_BetterUI_3421718675(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
