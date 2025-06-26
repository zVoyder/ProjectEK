// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Data/AmmoTypeData.h"

#ifdef WEAPONSYSTEM_AmmoTypeData_generated_h
#error "AmmoTypeData.generated.h already included, missing '#pragma once' in AmmoTypeData.h"
#endif
#define WEAPONSYSTEM_AmmoTypeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAmmoTypeData ************************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmmoTypeData(); \
	friend struct Z_Construct_UClass_UAmmoTypeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAmmoTypeData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UAmmoTypeData_NoRegister) \
	DECLARE_SERIALIZER(UAmmoTypeData)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAmmoTypeData(UAmmoTypeData&&) = delete; \
	UAmmoTypeData(const UAmmoTypeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmmoTypeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmmoTypeData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAmmoTypeData) \
	NO_API virtual ~UAmmoTypeData();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAmmoTypeData;

// ********** End Class UAmmoTypeData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_AmmoTypeData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
