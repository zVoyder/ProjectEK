// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Montages/Data/WeaponAnimMetaData.h"

#ifdef WEAPONSYSTEM_WeaponAnimMetaData_generated_h
#error "WeaponAnimMetaData.generated.h already included, missing '#pragma once' in WeaponAnimMetaData.h"
#endif
#define WEAPONSYSTEM_WeaponAnimMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponAnimMetaData ******************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimMetaData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAnimMetaData(); \
	friend struct Z_Construct_UClass_UWeaponAnimMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponAnimMetaData, UAnimMetaData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UWeaponAnimMetaData_NoRegister) \
	DECLARE_SERIALIZER(UWeaponAnimMetaData)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponAnimMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponAnimMetaData(UWeaponAnimMetaData&&) = delete; \
	UWeaponAnimMetaData(const UWeaponAnimMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAnimMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAnimMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAnimMetaData) \
	NO_API virtual ~UWeaponAnimMetaData();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponAnimMetaData;

// ********** End Class UWeaponAnimMetaData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponAnimMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
