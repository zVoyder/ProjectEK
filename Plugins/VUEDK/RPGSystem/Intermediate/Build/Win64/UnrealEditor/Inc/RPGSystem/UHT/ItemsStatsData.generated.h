// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGItemsGeneration/Data/ItemsStatsData.h"

#ifdef RPGSYSTEM_ItemsStatsData_generated_h
#error "ItemsStatsData.generated.h already included, missing '#pragma once' in ItemsStatsData.h"
#endif
#define RPGSYSTEM_ItemsStatsData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UItemsStatsData **********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UItemsStatsData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemsStatsData(); \
	friend struct Z_Construct_UClass_UItemsStatsData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UItemsStatsData_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemsStatsData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UItemsStatsData_NoRegister) \
	DECLARE_SERIALIZER(UItemsStatsData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemsStatsData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemsStatsData(UItemsStatsData&&) = delete; \
	UItemsStatsData(const UItemsStatsData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemsStatsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemsStatsData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemsStatsData) \
	NO_API virtual ~UItemsStatsData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemsStatsData;

// ********** End Class UItemsStatsData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_ItemsStatsData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
