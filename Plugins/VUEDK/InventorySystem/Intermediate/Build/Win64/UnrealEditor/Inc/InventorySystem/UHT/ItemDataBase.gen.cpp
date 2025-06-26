// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/Data/ItemDataBase.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDataBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipPrecondition_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EPreconditionsMode();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemDataBase ************************************************************
void UItemDataBase::StaticRegisterNativesUItemDataBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDataBase;
UClass* UItemDataBase::GetPrivateStaticClass()
{
	using TClass = UItemDataBase;
	if (!Z_Registration_Info_UClass_UItemDataBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDataBase"),
			Z_Registration_Info_UClass_UItemDataBase.InnerSingleton,
			StaticRegisterNativesUItemDataBase,
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
	return Z_Registration_Info_UClass_UItemDataBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemDataBase_NoRegister()
{
	return UItemDataBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/Data/ItemDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataID_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeID_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDropActorClass_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidgetClass_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnique_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the inventory is limited to a single instance of this item type id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the item can be consumed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeUponUse_MetaData[] = {
		{ "Category", "ItemDataBase" },
		{ "EditCondition", "bIsConsumable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the item will be consumed upon use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotKey_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreconditions_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditCondition", "EquipSlotKey != nullptr" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreconditionsMode_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditCondition", "bUsePreconditions && EquipSlotKey != nullptr" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how the preconditions are evaluated when equipping this item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipPreconditions_Inner_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditCondition", "bUsePreconditions && EquipSlotKey != nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of preconditions that must be met to equip this item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipPreconditions_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditCondition", "bUsePreconditions && EquipSlotKey != nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemDataBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of preconditions that must be met to equip this item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemTypeID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDropActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemWidgetClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static void NewProp_bIsUnique_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnique;
	static void NewProp_bIsConsumable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumable;
	static void NewProp_bConsumeUponUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeUponUse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSlotKey;
	static void NewProp_bUsePreconditions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreconditions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreconditionsMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipPreconditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipPreconditions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDataID = { "ItemDataID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemDataID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataID_MetaData), NewProp_ItemDataID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemTypeID = { "ItemTypeID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypeID_MetaData), NewProp_ItemTypeID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDropActorClass = { "ItemDropActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemDropActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemDropActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDropActorClass_MetaData), NewProp_ItemDropActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemWidgetClass = { "ItemWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidgetClass_MetaData), NewProp_ItemWidgetClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) }; // 963227394
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
void Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsUnique_SetBit(void* Obj)
{
	((UItemDataBase*)Obj)->bIsUnique = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsUnique = { "bIsUnique", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemDataBase), &Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnique_MetaData), NewProp_bIsUnique_MetaData) };
void Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
{
	((UItemDataBase*)Obj)->bIsConsumable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemDataBase), &Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConsumable_MetaData), NewProp_bIsConsumable_MetaData) };
void Z_Construct_UClass_UItemDataBase_Statics::NewProp_bConsumeUponUse_SetBit(void* Obj)
{
	((UItemDataBase*)Obj)->bConsumeUponUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_bConsumeUponUse = { "bConsumeUponUse", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemDataBase), &Z_Construct_UClass_UItemDataBase_Statics::NewProp_bConsumeUponUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeUponUse_MetaData), NewProp_bConsumeUponUse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, EquipSlotKey), Z_Construct_UClass_UEquipSlotKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotKey_MetaData), NewProp_EquipSlotKey_MetaData) };
void Z_Construct_UClass_UItemDataBase_Statics::NewProp_bUsePreconditions_SetBit(void* Obj)
{
	((UItemDataBase*)Obj)->bUsePreconditions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_bUsePreconditions = { "bUsePreconditions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemDataBase), &Z_Construct_UClass_UItemDataBase_Statics::NewProp_bUsePreconditions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePreconditions_MetaData), NewProp_bUsePreconditions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_PreconditionsMode = { "PreconditionsMode", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, PreconditionsMode), Z_Construct_UEnum_InventorySystem_EPreconditionsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreconditionsMode_MetaData), NewProp_PreconditionsMode_MetaData) }; // 127141454
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipPreconditions_Inner = { "EquipPreconditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquipPrecondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipPreconditions_Inner_MetaData), NewProp_EquipPreconditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipPreconditions = { "EquipPreconditions", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataBase, EquipPreconditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipPreconditions_MetaData), NewProp_EquipPreconditions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDataID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemTypeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDropActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsUnique,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_bIsConsumable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_bConsumeUponUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_bUsePreconditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_PreconditionsMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipPreconditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataBase_Statics::NewProp_EquipPreconditions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDataBase_Statics::ClassParams = {
	&UItemDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDataBase()
{
	if (!Z_Registration_Info_UClass_UItemDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataBase.OuterSingleton, Z_Construct_UClass_UItemDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDataBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataBase);
UItemDataBase::~UItemDataBase() {}
// ********** End Class UItemDataBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataBase, UItemDataBase::StaticClass, TEXT("UItemDataBase"), &Z_Registration_Info_UClass_UItemDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataBase), 1231613883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h__Script_InventorySystem_2068623443(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
