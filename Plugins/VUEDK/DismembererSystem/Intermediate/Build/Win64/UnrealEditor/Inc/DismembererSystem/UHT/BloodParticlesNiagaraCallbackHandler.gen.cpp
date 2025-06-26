// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodParticlesNiagaraCallbackHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBloodParticlesNiagaraCallbackHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBloodParticlesNiagaraCallbackHandler ************************************
void UBloodParticlesNiagaraCallbackHandler::StaticRegisterNativesUBloodParticlesNiagaraCallbackHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler;
UClass* UBloodParticlesNiagaraCallbackHandler::GetPrivateStaticClass()
{
	using TClass = UBloodParticlesNiagaraCallbackHandler;
	if (!Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BloodParticlesNiagaraCallbackHandler"),
			Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.InnerSingleton,
			StaticRegisterNativesUBloodParticlesNiagaraCallbackHandler,
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
	return Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_NoRegister()
{
	return UBloodParticlesNiagaraCallbackHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloodParticlesNiagaraCallbackHandler.h" },
		{ "ModuleRelativePath", "Public/BloodParticlesNiagaraCallbackHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dismemberer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodParticlesNiagaraCallbackHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dismemberer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodParticlesNiagaraCallbackHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::NewProp_Dismemberer = { "Dismemberer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBloodParticlesNiagaraCallbackHandler, Dismemberer), Z_Construct_UClass_UDismemberer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dismemberer_MetaData), NewProp_Dismemberer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::NewProp_Dismemberer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister, (int32)VTABLE_OFFSET(UBloodParticlesNiagaraCallbackHandler, INiagaraParticleCallbackHandler), false },  // 501724942
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::ClassParams = {
	&UBloodParticlesNiagaraCallbackHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler()
{
	if (!Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.OuterSingleton, Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodParticlesNiagaraCallbackHandler);
UBloodParticlesNiagaraCallbackHandler::~UBloodParticlesNiagaraCallbackHandler() {}
// ********** End Class UBloodParticlesNiagaraCallbackHandler **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodParticlesNiagaraCallbackHandler_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler, UBloodParticlesNiagaraCallbackHandler::StaticClass, TEXT("UBloodParticlesNiagaraCallbackHandler"), &Z_Registration_Info_UClass_UBloodParticlesNiagaraCallbackHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBloodParticlesNiagaraCallbackHandler), 2593135175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodParticlesNiagaraCallbackHandler_h__Script_DismembererSystem_2240530617(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodParticlesNiagaraCallbackHandler_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodParticlesNiagaraCallbackHandler_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
