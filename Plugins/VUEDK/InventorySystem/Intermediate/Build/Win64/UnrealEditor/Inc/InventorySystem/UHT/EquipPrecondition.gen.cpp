// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/EquipPrecondition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquipPrecondition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipPrecondition();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipPrecondition_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEquipPrecondition Function IsPreconditionMet ****************************
struct EquipPrecondition_eventIsPreconditionMet_Parms
{
	UItemBase* Item;
	UEquipment* Equipment;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	EquipPrecondition_eventIsPreconditionMet_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UEquipPrecondition_IsPreconditionMet = FName(TEXT("IsPreconditionMet"));
bool UEquipPrecondition::IsPreconditionMet(UItemBase* Item, UEquipment* Equipment) const
{
	UFunction* Func = FindFunctionChecked(NAME_UEquipPrecondition_IsPreconditionMet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EquipPrecondition_eventIsPreconditionMet_Parms Parms;
		Parms.Item=Item;
		Parms.Equipment=Equipment;
		const_cast<UEquipPrecondition*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UEquipPrecondition*>(this)->IsPreconditionMet_Implementation(Item, Equipment);
	}
}
struct Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipPrecondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipPrecondition_eventIsPreconditionMet_Parms, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipPrecondition_eventIsPreconditionMet_Parms, Equipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
void Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EquipPrecondition_eventIsPreconditionMet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipPrecondition_eventIsPreconditionMet_Parms), &Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquipPrecondition, nullptr, "IsPreconditionMet", Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::PropPointers), sizeof(EquipPrecondition_eventIsPreconditionMet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(EquipPrecondition_eventIsPreconditionMet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipPrecondition::execIsPreconditionMet)
{
	P_GET_OBJECT(UItemBase,Z_Param_Item);
	P_GET_OBJECT(UEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreconditionMet_Implementation(Z_Param_Item,Z_Param_Equipment);
	P_NATIVE_END;
}
// ********** End Class UEquipPrecondition Function IsPreconditionMet ******************************

// ********** Begin Class UEquipPrecondition *******************************************************
void UEquipPrecondition::StaticRegisterNativesUEquipPrecondition()
{
	UClass* Class = UEquipPrecondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPreconditionMet", &UEquipPrecondition::execIsPreconditionMet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEquipPrecondition;
UClass* UEquipPrecondition::GetPrivateStaticClass()
{
	using TClass = UEquipPrecondition;
	if (!Z_Registration_Info_UClass_UEquipPrecondition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EquipPrecondition"),
			Z_Registration_Info_UClass_UEquipPrecondition.InnerSingleton,
			StaticRegisterNativesUEquipPrecondition,
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
	return Z_Registration_Info_UClass_UEquipPrecondition.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquipPrecondition_NoRegister()
{
	return UEquipPrecondition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquipPrecondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EquipmentSystem/EquipPrecondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/EquipPrecondition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipPrecondition_IsPreconditionMet, "IsPreconditionMet" }, // 3110742483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipPrecondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipPrecondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipPrecondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipPrecondition_Statics::ClassParams = {
	&UEquipPrecondition::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipPrecondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipPrecondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipPrecondition()
{
	if (!Z_Registration_Info_UClass_UEquipPrecondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipPrecondition.OuterSingleton, Z_Construct_UClass_UEquipPrecondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipPrecondition.OuterSingleton;
}
UEquipPrecondition::UEquipPrecondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipPrecondition);
UEquipPrecondition::~UEquipPrecondition() {}
// ********** End Class UEquipPrecondition *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipPrecondition, UEquipPrecondition::StaticClass, TEXT("UEquipPrecondition"), &Z_Registration_Info_UClass_UEquipPrecondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipPrecondition), 1785988083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h__Script_InventorySystem_1839818997(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
