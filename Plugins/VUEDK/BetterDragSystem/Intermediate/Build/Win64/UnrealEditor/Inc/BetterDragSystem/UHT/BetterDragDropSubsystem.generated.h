// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BetterDragDropSubsystem.h"

#ifdef BETTERDRAGSYSTEM_BetterDragDropSubsystem_generated_h
#error "BetterDragDropSubsystem.generated.h already included, missing '#pragma once' in BetterDragDropSubsystem.h"
#endif
#define BETTERDRAGSYSTEM_BetterDragDropSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterDragDropOperation;
class UUserWidget;
struct FEventReply;
struct FKey;
struct FKeyEvent;

// ********** Begin Delegate FBetterDragDropOperationStarted ***************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_13_DELEGATE \
BETTERDRAGSYSTEM_API void FBetterDragDropOperationStarted_DelegateWrapper(const FMulticastScriptDelegate& BetterDragDropOperationStarted, UBetterDragDropOperation* DragDropOperation);


// ********** End Delegate FBetterDragDropOperationStarted *****************************************

// ********** Begin Delegate FBetterDragDropOperationEnded *****************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_18_DELEGATE \
BETTERDRAGSYSTEM_API void FBetterDragDropOperationEnded_DelegateWrapper(const FMulticastScriptDelegate& BetterDragDropOperationEnded, UBetterDragDropOperation* DragDropOperation);


// ********** End Delegate FBetterDragDropOperationEnded *******************************************

// ********** Begin Class UBetterDragDropSubsystem *************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBetterDragDropOperation); \
	DECLARE_FUNCTION(execIsBetterDragDropping); \
	DECLARE_FUNCTION(execTryEndDrag); \
	DECLARE_FUNCTION(execLeaveReceiver); \
	DECLARE_FUNCTION(execEnterReceiver); \
	DECLARE_FUNCTION(execDetectBetterDrag); \
	DECLARE_FUNCTION(execDetectBetterDragIfPressed);


BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterDragDropSubsystem(); \
	friend struct Z_Construct_UClass_UBetterDragDropSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDragDropSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBetterDragDropSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterDragDropSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDragDropSubsystem(UBetterDragDropSubsystem&&) = delete; \
	UBetterDragDropSubsystem(const UBetterDragDropSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDragDropSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDragDropSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBetterDragDropSubsystem) \
	NO_API virtual ~UBetterDragDropSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_20_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDragDropSubsystem;

// ********** End Class UBetterDragDropSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
