// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/ItemDropActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDropActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AItemDropActor Function OnInit *******************************************
static FName NAME_AItemDropActor_OnInit = FName(TEXT("OnInit"));
void AItemDropActor::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_AItemDropActor_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_AItemDropActor_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemDropActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemDropActor_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AItemDropActor, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemDropActor_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemDropActor_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AItemDropActor_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemDropActor_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemDropActor::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class AItemDropActor Function OnInit *********************************************

// ********** Begin Class AItemDropActor Function OnItemMeshLoaded *********************************
struct Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics
{
	struct ItemDropActor_eventOnItemMeshLoaded_Parms
	{
		UStaticMesh* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base/ItemDropActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemDropActor_eventOnItemMeshLoaded_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AItemDropActor, nullptr, "OnItemMeshLoaded", Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::ItemDropActor_eventOnItemMeshLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::ItemDropActor_eventOnItemMeshLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemDropActor::execOnItemMeshLoaded)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemMeshLoaded(Z_Param_Mesh);
	P_NATIVE_END;
}
// ********** End Class AItemDropActor Function OnItemMeshLoaded ***********************************

// ********** Begin Class AItemDropActor ***********************************************************
void AItemDropActor::StaticRegisterNativesAItemDropActor()
{
	UClass* Class = AItemDropActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInit", &AItemDropActor::execOnInit },
		{ "OnItemMeshLoaded", &AItemDropActor::execOnItemMeshLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AItemDropActor;
UClass* AItemDropActor::GetPrivateStaticClass()
{
	using TClass = AItemDropActor;
	if (!Z_Registration_Info_UClass_AItemDropActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDropActor"),
			Z_Registration_Info_UClass_AItemDropActor.InnerSingleton,
			StaticRegisterNativesAItemDropActor,
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
	return Z_Registration_Info_UClass_AItemDropActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AItemDropActor_NoRegister()
{
	return AItemDropActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItemDropActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/ItemDropActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/ItemDropActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedItem_MetaData[] = {
		{ "Category", "ItemDropActor" },
		{ "ModuleRelativePath", "Public/Base/ItemDropActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropMesh_MetaData[] = {
		{ "Category", "ItemDropActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/ItemDropActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemDropActor_OnInit, "OnInit" }, // 3526966999
		{ &Z_Construct_UFunction_AItemDropActor_OnItemMeshLoaded, "OnItemMeshLoaded" }, // 2296913873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemDropActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemDropActor_Statics::NewProp_RelatedItem = { "RelatedItem", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemDropActor, RelatedItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedItem_MetaData), NewProp_RelatedItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemDropActor_Statics::NewProp_DropMesh = { "DropMesh", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemDropActor, DropMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropMesh_MetaData), NewProp_DropMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemDropActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDropActor_Statics::NewProp_RelatedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemDropActor_Statics::NewProp_DropMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemDropActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemDropActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemDropActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemDropActor_Statics::ClassParams = {
	&AItemDropActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemDropActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemDropActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemDropActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemDropActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemDropActor()
{
	if (!Z_Registration_Info_UClass_AItemDropActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemDropActor.OuterSingleton, Z_Construct_UClass_AItemDropActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemDropActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemDropActor);
AItemDropActor::~AItemDropActor() {}
// ********** End Class AItemDropActor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemDropActor, AItemDropActor::StaticClass, TEXT("AItemDropActor"), &Z_Registration_Info_UClass_AItemDropActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemDropActor), 2098961417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h__Script_InventorySystem_2609066664(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
