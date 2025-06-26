// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BetterDragDropOperation.h"

#ifdef BETTERDRAGSYSTEM_BetterDragDropOperation_generated_h
#error "BetterDragDropOperation.generated.h already included, missing '#pragma once' in BetterDragDropOperation.h"
#endif
#define BETTERDRAGSYSTEM_BetterDragDropOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;
struct FKey;

// ********** Begin Class UBetterDragDropOperation *************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDragCancelled_Implementation(); \
	virtual bool OnDragDrop_Implementation(); \
	virtual void OnDragLeave_Implementation(UUserWidget* LeftWidget); \
	virtual void OnDragEnter_Implementation(UUserWidget* EnteredWidget); \
	virtual void OnEndDrag_Implementation(); \
	virtual void OnBeginDrag_Implementation(); \
	virtual void SetDragVisualPosition_Implementation(const FVector2D PositionInViewport) const; \
	virtual void UpdateDrag_Implementation(const FVector2D Size); \
	DECLARE_FUNCTION(execCheckEndDragKeyEvent); \
	DECLARE_FUNCTION(execOnDragCancelled); \
	DECLARE_FUNCTION(execOnDragDrop); \
	DECLARE_FUNCTION(execOnDragLeave); \
	DECLARE_FUNCTION(execOnDragEnter); \
	DECLARE_FUNCTION(execOnEndDrag); \
	DECLARE_FUNCTION(execOnBeginDrag); \
	DECLARE_FUNCTION(execSetDragVisualPosition); \
	DECLARE_FUNCTION(execUpdateDrag); \
	DECLARE_FUNCTION(execCheckEndDragIfReleased); \
	DECLARE_FUNCTION(execCheckEndDrag);


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_CALLBACK_WRAPPERS
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterDragDropOperation(); \
	friend struct Z_Construct_UClass_UBetterDragDropOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDragDropOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDragDropOperation_NoRegister) \
	DECLARE_SERIALIZER(UBetterDragDropOperation)


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDragDropOperation(UBetterDragDropOperation&&) = delete; \
	UBetterDragDropOperation(const UBetterDragDropOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDragDropOperation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBetterDragDropOperation) \
	NO_API virtual ~UBetterDragDropOperation();


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDragDropOperation;

// ********** End Class UBetterDragDropOperation ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
