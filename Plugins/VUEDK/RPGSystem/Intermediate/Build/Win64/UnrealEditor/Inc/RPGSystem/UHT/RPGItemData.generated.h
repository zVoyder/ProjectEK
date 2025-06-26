// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Data/RPGItemData.h"

#ifdef RPGSYSTEM_RPGItemData_generated_h
#error "RPGItemData.generated.h already included, missing '#pragma once' in RPGItemData.h"
#endif
#define RPGSYSTEM_RPGItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGItemData *************************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItemData(); \
	friend struct Z_Construct_UClass_URPGItemData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGItemData, UTetrisItemData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGItemData_NoRegister) \
	DECLARE_SERIALIZER(URPGItemData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGItemData(URPGItemData&&) = delete; \
	URPGItemData(const URPGItemData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGItemData) \
	NO_API virtual ~URPGItemData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGItemData;

// ********** End Class URPGItemData ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
