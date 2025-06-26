// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Handlers/SpreadHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpreadHandler() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterHandlerBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_USpreadHandler();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_USpreadHandler_NoRegister();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStartedChangeSpread ************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnStartedChangeSpread_Parms
	{
		float DefaultSpread;
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::NewProp_DefaultSpread = { "DefaultSpread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnStartedChangeSpread_Parms, DefaultSpread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnStartedChangeSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::NewProp_DefaultSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnStartedChangeSpread__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnStartedChangeSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnStartedChangeSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartedChangeSpread_DelegateWrapper(const FMulticastScriptDelegate& OnStartedChangeSpread, float DefaultSpread, float Spread)
{
	struct _Script_WeaponSystem_eventOnStartedChangeSpread_Parms
	{
		float DefaultSpread;
		float Spread;
	};
	_Script_WeaponSystem_eventOnStartedChangeSpread_Parms Parms;
	Parms.DefaultSpread=DefaultSpread;
	Parms.Spread=Spread;
	OnStartedChangeSpread.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStartedChangeSpread **************************************************

// ********** Begin Delegate FOnProcessingSpread ***************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnProcessingSpread_Parms
	{
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnProcessingSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnProcessingSpread__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnProcessingSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnProcessingSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProcessingSpread_DelegateWrapper(const FMulticastScriptDelegate& OnProcessingSpread, float Spread)
{
	struct _Script_WeaponSystem_eventOnProcessingSpread_Parms
	{
		float Spread;
	};
	_Script_WeaponSystem_eventOnProcessingSpread_Parms Parms;
	Parms.Spread=Spread;
	OnProcessingSpread.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnProcessingSpread *****************************************************

// ********** Begin Delegate FOnCompletedChangeSpread **********************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnCompletedChangeSpread_Parms
	{
		float DefaultSpread;
		float Spread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::NewProp_DefaultSpread = { "DefaultSpread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnCompletedChangeSpread_Parms, DefaultSpread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnCompletedChangeSpread_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::NewProp_DefaultSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnCompletedChangeSpread__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnCompletedChangeSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::_Script_WeaponSystem_eventOnCompletedChangeSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCompletedChangeSpread_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedChangeSpread, float DefaultSpread, float Spread)
{
	struct _Script_WeaponSystem_eventOnCompletedChangeSpread_Parms
	{
		float DefaultSpread;
		float Spread;
	};
	_Script_WeaponSystem_eventOnCompletedChangeSpread_Parms Parms;
	Parms.DefaultSpread=DefaultSpread;
	Parms.Spread=Spread;
	OnCompletedChangeSpread.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCompletedChangeSpread ************************************************

// ********** Begin Class USpreadHandler ***********************************************************
void USpreadHandler::StaticRegisterNativesUSpreadHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpreadHandler;
UClass* USpreadHandler::GetPrivateStaticClass()
{
	using TClass = USpreadHandler;
	if (!Z_Registration_Info_UClass_USpreadHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpreadHandler"),
			Z_Registration_Info_UClass_USpreadHandler.InnerSingleton,
			StaticRegisterNativesUSpreadHandler,
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
	return Z_Registration_Info_UClass_USpreadHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_USpreadHandler_NoRegister()
{
	return USpreadHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpreadHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shooter/Handlers/SpreadHandler.h" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartedChangeSpread_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProcessingSpread_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedChangeSpread_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Handlers/SpreadHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedChangeSpread;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessingSpread;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedChangeSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpreadHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnStartedChangeSpread = { "OnStartedChangeSpread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpreadHandler, OnStartedChangeSpread), Z_Construct_UDelegateFunction_WeaponSystem_OnStartedChangeSpread__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartedChangeSpread_MetaData), NewProp_OnStartedChangeSpread_MetaData) }; // 438189055
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnProcessingSpread = { "OnProcessingSpread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpreadHandler, OnProcessingSpread), Z_Construct_UDelegateFunction_WeaponSystem_OnProcessingSpread__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProcessingSpread_MetaData), NewProp_OnProcessingSpread_MetaData) }; // 3674935849
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnCompletedChangeSpread = { "OnCompletedChangeSpread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpreadHandler, OnCompletedChangeSpread), Z_Construct_UDelegateFunction_WeaponSystem_OnCompletedChangeSpread__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedChangeSpread_MetaData), NewProp_OnCompletedChangeSpread_MetaData) }; // 917467619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpreadHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnStartedChangeSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnProcessingSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadHandler_Statics::NewProp_OnCompletedChangeSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpreadHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpreadHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShooterHandlerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpreadHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpreadHandler_Statics::ClassParams = {
	&USpreadHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpreadHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpreadHandler_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpreadHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_USpreadHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpreadHandler()
{
	if (!Z_Registration_Info_UClass_USpreadHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpreadHandler.OuterSingleton, Z_Construct_UClass_USpreadHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpreadHandler.OuterSingleton;
}
USpreadHandler::USpreadHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpreadHandler);
USpreadHandler::~USpreadHandler() {}
// ********** End Class USpreadHandler *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpreadHandler, USpreadHandler::StaticClass, TEXT("USpreadHandler"), &Z_Registration_Info_UClass_USpreadHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpreadHandler), 3786684696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h__Script_WeaponSystem_2248078122(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
