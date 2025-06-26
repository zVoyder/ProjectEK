// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/BetterDropReceiverWidget.h"

#ifdef BETTERDRAGSYSTEM_BetterDropReceiverWidget_generated_h
#error "BetterDropReceiverWidget.generated.h already included, missing '#pragma once' in BetterDropReceiverWidget.h"
#endif
#define BETTERDRAGSYSTEM_BetterDropReceiverWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterDragDropOperation;

// ********** Begin Class UBetterDropReceiverWidget ************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanReceiveDrop_Implementation() const; \
	DECLARE_FUNCTION(execOnDragDropOperationEnded); \
	DECLARE_FUNCTION(execCanReceiveDrop);


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_CALLBACK_WRAPPERS
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDropReceiverWidget_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterDropReceiverWidget(); \
	friend struct Z_Construct_UClass_UBetterDropReceiverWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDropReceiverWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDropReceiverWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDropReceiverWidget_NoRegister) \
	DECLARE_SERIALIZER(UBetterDropReceiverWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UBetterDropReceiverWidget*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterDropReceiverWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDropReceiverWidget(UBetterDropReceiverWidget&&) = delete; \
	UBetterDropReceiverWidget(const UBetterDropReceiverWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDropReceiverWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDropReceiverWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterDropReceiverWidget) \
	NO_API virtual ~UBetterDropReceiverWidget();


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDropReceiverWidget;

// ********** End Class UBetterDropReceiverWidget **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Widgets_BetterDropReceiverWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
