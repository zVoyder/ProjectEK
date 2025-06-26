// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterDragDropReceiver.h"

#ifdef BETTERDRAGSYSTEM_BetterDragDropReceiver_generated_h
#error "BetterDragDropReceiver.generated.h already included, missing '#pragma once' in BetterDragDropReceiver.h"
#endif
#define BETTERDRAGSYSTEM_BetterDragDropReceiver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterDragDropOperation;
class UObject;
class UUserWidget;

// ********** Begin Interface UBetterDragDropReceiver **********************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBetterDragLeave_Implementation(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload) {}; \
	virtual void OnBetterDragEnter_Implementation(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload) {}; \
	virtual void OnBetterDragDrop_Implementation(UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload) {}; \
	DECLARE_FUNCTION(execOnBetterDragLeave); \
	DECLARE_FUNCTION(execOnBetterDragEnter); \
	DECLARE_FUNCTION(execOnBetterDragDrop);


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_CALLBACK_WRAPPERS
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropReceiver_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterDragDropReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDragDropReceiver(UBetterDragDropReceiver&&) = delete; \
	UBetterDragDropReceiver(const UBetterDragDropReceiver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDragDropReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDragDropReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterDragDropReceiver) \
	virtual ~UBetterDragDropReceiver() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterDragDropReceiver(); \
	friend struct Z_Construct_UClass_UBetterDragDropReceiver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropReceiver_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDragDropReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDragDropReceiver_NoRegister) \
	DECLARE_SERIALIZER(UBetterDragDropReceiver)


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterDragDropReceiver() {} \
public: \
	typedef UBetterDragDropReceiver UClassType; \
	typedef IBetterDragDropReceiver ThisClass; \
	static void Execute_OnBetterDragDrop(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload); \
	static void Execute_OnBetterDragEnter(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload); \
	static void Execute_OnBetterDragLeave(UObject* O, UBetterDragDropOperation* DragOperation, UUserWidget* OwnerWidget, UUserWidget* DragVisual, UObject* Payload); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDragDropReceiver;

// ********** End Interface UBetterDragDropReceiver ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Interfaces_BetterDragDropReceiver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
