// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/CameraShakeFeedback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCameraShakeFeedback() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UCameraShakeFeedback();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UCameraShakeFeedback_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCameraShakeFeedback *****************************************************
void UCameraShakeFeedback::StaticRegisterNativesUCameraShakeFeedback()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCameraShakeFeedback;
UClass* UCameraShakeFeedback::GetPrivateStaticClass()
{
	using TClass = UCameraShakeFeedback;
	if (!Z_Registration_Info_UClass_UCameraShakeFeedback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CameraShakeFeedback"),
			Z_Registration_Info_UClass_UCameraShakeFeedback.InnerSingleton,
			StaticRegisterNativesUCameraShakeFeedback,
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
	return Z_Registration_Info_UClass_UCameraShakeFeedback.InnerSingleton;
}
UClass* Z_Construct_UClass_UCameraShakeFeedback_NoRegister()
{
	return UCameraShakeFeedback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCameraShakeFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Effects/CameraShakeFeedback.h" },
		{ "ModuleRelativePath", "Public/Effects/CameraShakeFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "GameEffect|Camera Shake" },
		{ "ModuleRelativePath", "Public/Effects/CameraShakeFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "GameEffect|Camera Shake" },
		{ "ModuleRelativePath", "Public/Effects/CameraShakeFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
		{ "Category", "GameEffect|Camera Shake" },
		{ "ModuleRelativePath", "Public/Effects/CameraShakeFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserPlaySpaceRot_MetaData[] = {
		{ "Category", "GameEffect|Camera Shake" },
		{ "ModuleRelativePath", "Public/Effects/CameraShakeFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeFeedback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeFeedback, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeClass_MetaData), NewProp_CameraShakeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeFeedback, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeFeedback, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySpace_MetaData), NewProp_PlaySpace_MetaData) }; // 2661961121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeFeedback, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserPlaySpaceRot_MetaData), NewProp_UserPlaySpaceRot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_CameraShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeFeedback_Statics::NewProp_UserPlaySpaceRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeFeedback_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraShakeFeedback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeFeedback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeFeedback_Statics::ClassParams = {
	&UCameraShakeFeedback::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraShakeFeedback_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeFeedback_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeFeedback_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraShakeFeedback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraShakeFeedback()
{
	if (!Z_Registration_Info_UClass_UCameraShakeFeedback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakeFeedback.OuterSingleton, Z_Construct_UClass_UCameraShakeFeedback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraShakeFeedback.OuterSingleton;
}
UCameraShakeFeedback::UCameraShakeFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeFeedback);
UCameraShakeFeedback::~UCameraShakeFeedback() {}
// ********** End Class UCameraShakeFeedback *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_CameraShakeFeedback_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraShakeFeedback, UCameraShakeFeedback::StaticClass, TEXT("UCameraShakeFeedback"), &Z_Registration_Info_UClass_UCameraShakeFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakeFeedback), 823349469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_CameraShakeFeedback_h__Script_GameEffectsCueSystem_4286894612(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_CameraShakeFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_CameraShakeFeedback_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
