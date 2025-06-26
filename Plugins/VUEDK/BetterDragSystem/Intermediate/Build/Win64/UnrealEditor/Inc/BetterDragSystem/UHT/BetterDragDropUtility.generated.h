// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/BetterDragDropUtility.h"

#ifdef BETTERDRAGSYSTEM_BetterDragDropUtility_generated_h
#error "BetterDragDropUtility.generated.h already included, missing '#pragma once' in BetterDragDropUtility.h"
#endif
#define BETTERDRAGSYSTEM_BetterDragDropUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterDragDropOperation;
class UBetterDragDropSubsystem;
class UUserWidget;
struct FEventReply;
struct FKey;
struct FKeyEvent;

// ********** Begin Class UBetterDragDropUtility ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBetterDragDropSubsystem); \
	DECLARE_FUNCTION(execGetBetterDragDropOperation); \
	DECLARE_FUNCTION(execIsBetterDragDropping); \
	DECLARE_FUNCTION(execTryEndDrag); \
	DECLARE_FUNCTION(execLeaveReceiver); \
	DECLARE_FUNCTION(execEnterReceiver); \
	DECLARE_FUNCTION(execDetectBetterDrag); \
	DECLARE_FUNCTION(execDetectBetterDragIfPressed);


BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterDragDropUtility(); \
	friend struct Z_Construct_UClass_UBetterDragDropUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDragDropUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDragDropUtility_NoRegister) \
	DECLARE_SERIALIZER(UBetterDragDropUtility)


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterDragDropUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDragDropUtility(UBetterDragDropUtility&&) = delete; \
	UBetterDragDropUtility(const UBetterDragDropUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDragDropUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDragDropUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterDragDropUtility) \
	NO_API virtual ~UBetterDragDropUtility();


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDragDropUtility;

// ********** End Class UBetterDragDropUtility *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
