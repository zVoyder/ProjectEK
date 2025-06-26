// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Savers/TransformSaver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransformSaver() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaver();
SAVESYSTEM_API UClass* Z_Construct_UClass_UTransformSaver();
SAVESYSTEM_API UClass* Z_Construct_UClass_UTransformSaver_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTransformSaver Function GetOwnerTransform *******************************
struct Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics
{
	struct TransformSaver_eventGetOwnerTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/TransformSaver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformSaver_eventGetOwnerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformSaver, nullptr, "GetOwnerTransform", Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::TransformSaver_eventGetOwnerTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::TransformSaver_eventGetOwnerTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformSaver_GetOwnerTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformSaver_GetOwnerTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformSaver::execGetOwnerTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetOwnerTransform();
	P_NATIVE_END;
}
// ********** End Class UTransformSaver Function GetOwnerTransform *********************************

// ********** Begin Class UTransformSaver **********************************************************
void UTransformSaver::StaticRegisterNativesUTransformSaver()
{
	UClass* Class = UTransformSaver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwnerTransform", &UTransformSaver::execGetOwnerTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransformSaver;
UClass* UTransformSaver::GetPrivateStaticClass()
{
	using TClass = UTransformSaver;
	if (!Z_Registration_Info_UClass_UTransformSaver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransformSaver"),
			Z_Registration_Info_UClass_UTransformSaver.InnerSingleton,
			StaticRegisterNativesUTransformSaver,
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
	return Z_Registration_Info_UClass_UTransformSaver.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransformSaver_NoRegister()
{
	return UTransformSaver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransformSaver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Savers/TransformSaver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Savers/TransformSaver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransformSaver_GetOwnerTransform, "GetOwnerTransform" }, // 3358684099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformSaver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTransformSaver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaver,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformSaver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformSaver_Statics::ClassParams = {
	&UTransformSaver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformSaver_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformSaver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformSaver()
{
	if (!Z_Registration_Info_UClass_UTransformSaver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformSaver.OuterSingleton, Z_Construct_UClass_UTransformSaver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformSaver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformSaver);
UTransformSaver::~UTransformSaver() {}
// ********** End Class UTransformSaver ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransformSaver, UTransformSaver::StaticClass, TEXT("UTransformSaver"), &Z_Registration_Info_UClass_UTransformSaver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformSaver), 3007298076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h__Script_SaveSystem_3700596175(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
