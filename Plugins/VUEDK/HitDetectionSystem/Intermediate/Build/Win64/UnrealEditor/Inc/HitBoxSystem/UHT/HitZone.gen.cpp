// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxSystem/Public/Interfaces/HitZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitZone() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZone();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitBoxSystem();
// End Cross Module References

// Begin Interface UHitZone Function GetHitZoneHandler
struct HitZone_eventGetHitZoneHandler_Parms
{
	UHitZoneHandler* ReturnValue;

	/** Constructor, initializes return property only **/
	HitZone_eventGetHitZoneHandler_Parms()
		: ReturnValue(NULL)
	{
	}
};
UHitZoneHandler* IHitZone::GetHitZoneHandler() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitZoneHandler instead.");
	HitZone_eventGetHitZoneHandler_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UHitZone_GetHitZoneHandler = FName(TEXT("GetHitZoneHandler"));
UHitZoneHandler* IHitZone::Execute_GetHitZoneHandler(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHitZone::StaticClass()));
	HitZone_eventGetHitZoneHandler_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHitZone_GetHitZoneHandler);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IHitZone*)(O->GetNativeInterfaceAddress(UHitZone::StaticClass())))
	{
		Parms.ReturnValue = I->GetHitZoneHandler_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZone_eventGetHitZoneHandler_Parms, ReturnValue), Z_Construct_UClass_UHitZoneHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitZone, nullptr, "GetHitZoneHandler", nullptr, nullptr, Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::PropPointers), sizeof(HitZone_eventGetHitZoneHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(HitZone_eventGetHitZoneHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitZone_GetHitZoneHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitZone_GetHitZoneHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHitZone::execGetHitZoneHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHitZoneHandler**)Z_Param__Result=P_THIS->GetHitZoneHandler_Implementation();
	P_NATIVE_END;
}
// End Interface UHitZone Function GetHitZoneHandler

// Begin Interface UHitZone
void UHitZone::StaticRegisterNativesUHitZone()
{
	UClass* Class = UHitZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHitZoneHandler", &IHitZone::execGetHitZoneHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitZone);
UClass* Z_Construct_UClass_UHitZone_NoRegister()
{
	return UHitZone::StaticClass();
}
struct Z_Construct_UClass_UHitZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitZone.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitZone_GetHitZoneHandler, "GetHitZoneHandler" }, // 2770061829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHitZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHitZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HitBoxSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitZone_Statics::ClassParams = {
	&UHitZone::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZone_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitZone()
{
	if (!Z_Registration_Info_UClass_UHitZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitZone.OuterSingleton, Z_Construct_UClass_UHitZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitZone.OuterSingleton;
}
template<> HITBOXSYSTEM_API UClass* StaticClass<UHitZone>()
{
	return UHitZone::StaticClass();
}
UHitZone::UHitZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZone);
UHitZone::~UHitZone() {}
// End Interface UHitZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_Interfaces_HitZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZone, UHitZone::StaticClass, TEXT("UHitZone"), &Z_Registration_Info_UClass_UHitZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZone), 45461433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_Interfaces_HitZone_h_3156897926(TEXT("/Script/HitBoxSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_Interfaces_HitZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_Interfaces_HitZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
