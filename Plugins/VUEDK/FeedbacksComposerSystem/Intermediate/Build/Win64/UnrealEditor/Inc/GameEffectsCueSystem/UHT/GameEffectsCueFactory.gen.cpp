// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/GameEffectsCueFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectsCueFactory() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueFactory();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameEffectsCueFactory Function CreateGameEffectsCue *********************
struct Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics
{
	struct GameEffectsCueFactory_eventCreateGameEffectsCue_Parms
	{
		AActor* Instigator;
		UGameEffectsCueData* GameEffectsCueData;
		UGameEffectsCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameEffects|Factory" },
		{ "ModuleRelativePath", "Public/Factories/GameEffectsCueFactory.h" },
		{ "WorldContext", "Instigator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameEffectsCueData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueFactory_eventCreateGameEffectsCue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_GameEffectsCueData = { "GameEffectsCueData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueFactory_eventCreateGameEffectsCue_Parms, GameEffectsCueData), Z_Construct_UClass_UGameEffectsCueData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueFactory_eventCreateGameEffectsCue_Parms, ReturnValue), Z_Construct_UClass_UGameEffectsCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_GameEffectsCueData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCueFactory, nullptr, "CreateGameEffectsCue", Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::GameEffectsCueFactory_eventCreateGameEffectsCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::GameEffectsCueFactory_eventCreateGameEffectsCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCueFactory::execCreateGameEffectsCue)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UGameEffectsCueData,Z_Param_GameEffectsCueData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameEffectsCue**)Z_Param__Result=UGameEffectsCueFactory::CreateGameEffectsCue(Z_Param_Instigator,Z_Param_GameEffectsCueData);
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCueFactory Function CreateGameEffectsCue ***********************

// ********** Begin Class UGameEffectsCueFactory ***************************************************
void UGameEffectsCueFactory::StaticRegisterNativesUGameEffectsCueFactory()
{
	UClass* Class = UGameEffectsCueFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGameEffectsCue", &UGameEffectsCueFactory::execCreateGameEffectsCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectsCueFactory;
UClass* UGameEffectsCueFactory::GetPrivateStaticClass()
{
	using TClass = UGameEffectsCueFactory;
	if (!Z_Registration_Info_UClass_UGameEffectsCueFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectsCueFactory"),
			Z_Registration_Info_UClass_UGameEffectsCueFactory.InnerSingleton,
			StaticRegisterNativesUGameEffectsCueFactory,
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
	return Z_Registration_Info_UClass_UGameEffectsCueFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectsCueFactory_NoRegister()
{
	return UGameEffectsCueFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectsCueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/GameEffectsCueFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/GameEffectsCueFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEffectsCueFactory_CreateGameEffectsCue, "CreateGameEffectsCue" }, // 1779150686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectsCueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameEffectsCueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectsCueFactory_Statics::ClassParams = {
	&UGameEffectsCueFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectsCueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectsCueFactory()
{
	if (!Z_Registration_Info_UClass_UGameEffectsCueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectsCueFactory.OuterSingleton, Z_Construct_UClass_UGameEffectsCueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectsCueFactory.OuterSingleton;
}
UGameEffectsCueFactory::UGameEffectsCueFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectsCueFactory);
UGameEffectsCueFactory::~UGameEffectsCueFactory() {}
// ********** End Class UGameEffectsCueFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectsCueFactory, UGameEffectsCueFactory::StaticClass, TEXT("UGameEffectsCueFactory"), &Z_Registration_Info_UClass_UGameEffectsCueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectsCueFactory), 4219387766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h__Script_GameEffectsCueSystem_3865350664(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Factories_GameEffectsCueFactory_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
