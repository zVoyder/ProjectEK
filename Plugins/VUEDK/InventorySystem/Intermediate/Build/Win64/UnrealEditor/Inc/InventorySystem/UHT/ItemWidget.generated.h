// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ItemWidget.h"

#ifdef INVENTORYSYSTEM_ItemWidget_generated_h
#error "ItemWidget.generated.h already included, missing '#pragma once' in ItemWidget.h"
#endif
#define INVENTORYSYSTEM_ItemWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UItemBase;

// ********** Begin Class UItemWidget **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execInit);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemWidget(); \
	friend struct Z_Construct_UClass_UItemWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemWidget, UBetterDropReceiverWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UItemWidget_NoRegister) \
	DECLARE_SERIALIZER(UItemWidget)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemWidget(UItemWidget&&) = delete; \
	UItemWidget(const UItemWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemWidget) \
	NO_API virtual ~UItemWidget();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemWidget;

// ********** End Class UItemWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
