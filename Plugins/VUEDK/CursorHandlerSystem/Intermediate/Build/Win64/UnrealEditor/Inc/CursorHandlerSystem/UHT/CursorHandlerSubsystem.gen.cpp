// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CursorHandlerSubsystem.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCursorHandlerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSubsystem();
CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSubsystem_NoRegister();
CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSystemSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CursorHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCursorHandlerSubsystem Function CheckUsingGamepad ***********************
struct Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct CursorHandlerSubsystem_eventCheckUsingGamepad_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CursorHandlerSubsystem_eventCheckUsingGamepad_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CursorHandlerSubsystem_eventCheckUsingGamepad_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCursorHandlerSubsystem, nullptr, "CheckUsingGamepad", Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::CursorHandlerSubsystem_eventCheckUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::CursorHandlerSubsystem_eventCheckUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCursorHandlerSubsystem::execCheckUsingGamepad)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckUsingGamepad(Z_Param_UserId,Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UCursorHandlerSubsystem Function CheckUsingGamepad *************************

// ********** Begin Class UCursorHandlerSubsystem **************************************************
void UCursorHandlerSubsystem::StaticRegisterNativesUCursorHandlerSubsystem()
{
	UClass* Class = UCursorHandlerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckUsingGamepad", &UCursorHandlerSubsystem::execCheckUsingGamepad },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCursorHandlerSubsystem;
UClass* UCursorHandlerSubsystem::GetPrivateStaticClass()
{
	using TClass = UCursorHandlerSubsystem;
	if (!Z_Registration_Info_UClass_UCursorHandlerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CursorHandlerSubsystem"),
			Z_Registration_Info_UClass_UCursorHandlerSubsystem.InnerSingleton,
			StaticRegisterNativesUCursorHandlerSubsystem,
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
	return Z_Registration_Info_UClass_UCursorHandlerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCursorHandlerSubsystem_NoRegister()
{
	return UCursorHandlerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCursorHandlerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CursorHandlerSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorHandlerSystemSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadCursorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseCursorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CursorHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputDeviceSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorHandlerSystemSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadCursorWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseCursorWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCursorHandlerSubsystem_CheckUsingGamepad, "CheckUsingGamepad" }, // 2805249986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCursorHandlerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSubsystem, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_InputDeviceSubsystem = { "InputDeviceSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSubsystem, InputDeviceSubsystem), Z_Construct_UClass_UInputDeviceSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDeviceSubsystem_MetaData), NewProp_InputDeviceSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_CursorHandlerSystemSettings = { "CursorHandlerSystemSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSubsystem, CursorHandlerSystemSettings), Z_Construct_UClass_UCursorHandlerSystemSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorHandlerSystemSettings_MetaData), NewProp_CursorHandlerSystemSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_GamepadCursorWidget = { "GamepadCursorWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSubsystem, GamepadCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadCursorWidget_MetaData), NewProp_GamepadCursorWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_MouseCursorWidget = { "MouseCursorWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorHandlerSubsystem, MouseCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseCursorWidget_MetaData), NewProp_MouseCursorWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCursorHandlerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_InputDeviceSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_CursorHandlerSystemSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_GamepadCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorHandlerSubsystem_Statics::NewProp_MouseCursorWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCursorHandlerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CursorHandlerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCursorHandlerSubsystem_Statics::ClassParams = {
	&UCursorHandlerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCursorHandlerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorHandlerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCursorHandlerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCursorHandlerSubsystem()
{
	if (!Z_Registration_Info_UClass_UCursorHandlerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCursorHandlerSubsystem.OuterSingleton, Z_Construct_UClass_UCursorHandlerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCursorHandlerSubsystem.OuterSingleton;
}
UCursorHandlerSubsystem::UCursorHandlerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCursorHandlerSubsystem);
UCursorHandlerSubsystem::~UCursorHandlerSubsystem() {}
// ********** End Class UCursorHandlerSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h__Script_CursorHandlerSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCursorHandlerSubsystem, UCursorHandlerSubsystem::StaticClass, TEXT("UCursorHandlerSubsystem"), &Z_Registration_Info_UClass_UCursorHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCursorHandlerSubsystem), 3929203410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h__Script_CursorHandlerSystem_1122270066(TEXT("/Script/CursorHandlerSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h__Script_CursorHandlerSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h__Script_CursorHandlerSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
