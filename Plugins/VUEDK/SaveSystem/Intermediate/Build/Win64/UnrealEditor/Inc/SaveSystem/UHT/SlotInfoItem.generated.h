// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Saves/SlotInfoItem.h"

#ifdef SAVESYSTEM_SlotInfoItem_generated_h
#error "SlotInfoItem.generated.h already included, missing '#pragma once' in SlotInfoItem.h"
#endif
#define SAVESYSTEM_SlotInfoItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlotInfoItem ************************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlotInfoItem(); \
	friend struct Z_Construct_UClass_USlotInfoItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USlotInfoItem, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USlotInfoItem_NoRegister) \
	DECLARE_SERIALIZER(USlotInfoItem)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlotInfoItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlotInfoItem(USlotInfoItem&&) = delete; \
	USlotInfoItem(const USlotInfoItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotInfoItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotInfoItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlotInfoItem) \
	NO_API virtual ~USlotInfoItem();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlotInfoItem;

// ********** End Class USlotInfoItem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
