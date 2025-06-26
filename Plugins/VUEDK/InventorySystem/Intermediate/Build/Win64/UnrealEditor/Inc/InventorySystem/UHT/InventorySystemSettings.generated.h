// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySystemSettings.h"

#ifdef INVENTORYSYSTEM_InventorySystemSettings_generated_h
#error "InventorySystemSettings.generated.h already included, missing '#pragma once' in InventorySystemSettings.h"
#endif
#define INVENTORYSYSTEM_InventorySystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInventorySystemSettings *************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventorySystemSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySystemSettings(); \
	friend struct Z_Construct_UClass_UInventorySystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventorySystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventorySystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UInventorySystemSettings_NoRegister) \
	DECLARE_SERIALIZER(UInventorySystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("InventorySystemSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySystemSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventorySystemSettings(UInventorySystemSettings&&) = delete; \
	UInventorySystemSettings(const UInventorySystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySystemSettings) \
	NO_API virtual ~UInventorySystemSettings();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventorySystemSettings;

// ********** End Class UInventorySystemSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
