// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/SSSlotsUtility.h"

#ifdef SAVESYSTEM_SSSlotsUtility_generated_h
#error "SSSlotsUtility.generated.h already included, missing '#pragma once' in SSSlotsUtility.h"
#endif
#define SAVESYSTEM_SSSlotsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ESaveTypeFilter : uint8;
struct FSlotInfoData;

// ********** Begin Class USSSlotsUtility **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSharedSlot); \
	DECLARE_FUNCTION(execGetMostRecentSlotInfoPlayedTime); \
	DECLARE_FUNCTION(execTrySelectMostAncientSaveGame); \
	DECLARE_FUNCTION(execTrySelectMostRecentSaveGame); \
	DECLARE_FUNCTION(execTrySelectSaveGameSlot); \
	DECLARE_FUNCTION(execTryGetMostAncientSlotInfoData); \
	DECLARE_FUNCTION(execTryGetMostRecentSlotInfoData); \
	DECLARE_FUNCTION(execTryGetSlotInfosOfType); \
	DECLARE_FUNCTION(execTryGetSharedSlotInfoData); \
	DECLARE_FUNCTION(execGetTotalManualSaveSlots); \
	DECLARE_FUNCTION(execGetTotalAutoSaveSlots); \
	DECLARE_FUNCTION(execGetTotalSlots); \
	DECLARE_FUNCTION(execTryGetAllSaveFileNames); \
	DECLARE_FUNCTION(execDoesAnySlotFileExist); \
	DECLARE_FUNCTION(execDoesSharedSlotFileExist); \
	DECLARE_FUNCTION(execDoesSlotFileExist); \
	DECLARE_FUNCTION(execIsSelectedSlotValid); \
	DECLARE_FUNCTION(execGetSelectedSlotName); \
	DECLARE_FUNCTION(execClearSelectedSlotName);


SAVESYSTEM_API UClass* Z_Construct_UClass_USSSlotsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSSSlotsUtility(); \
	friend struct Z_Construct_UClass_USSSlotsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USSSlotsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(USSSlotsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USSSlotsUtility_NoRegister) \
	DECLARE_SERIALIZER(USSSlotsUtility)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USSSlotsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USSSlotsUtility(USSSlotsUtility&&) = delete; \
	USSSlotsUtility(const USSSlotsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USSSlotsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSSlotsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USSSlotsUtility) \
	NO_API virtual ~USSSlotsUtility();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USSSlotsUtility;

// ********** End Class USSSlotsUtility ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
