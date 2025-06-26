// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BetterDragDropOperationFactory.h"

#ifdef BETTERDRAGSYSTEM_BetterDragDropOperationFactory_generated_h
#error "BetterDragDropOperationFactory.generated.h already included, missing '#pragma once' in BetterDragDropOperationFactory.h"
#endif
#define BETTERDRAGSYSTEM_BetterDragDropOperationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterDragDropOperation;
class UObject;
class UUserWidget;
enum class ESlateVisibility : uint8;
struct FKey;

// ********** Begin Class UBetterDragAndDropFactory ************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateBetterDragDropOperationWithKeys); \
	DECLARE_FUNCTION(execCreateBetterDragDropOperation);


BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragAndDropFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterDragAndDropFactory(); \
	friend struct Z_Construct_UClass_UBetterDragAndDropFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragAndDropFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterDragAndDropFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterDragSystem"), Z_Construct_UClass_UBetterDragAndDropFactory_NoRegister) \
	DECLARE_SERIALIZER(UBetterDragAndDropFactory)


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterDragAndDropFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterDragAndDropFactory(UBetterDragAndDropFactory&&) = delete; \
	UBetterDragAndDropFactory(const UBetterDragAndDropFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterDragAndDropFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterDragAndDropFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterDragAndDropFactory) \
	NO_API virtual ~UBetterDragAndDropFactory();


#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterDragAndDropFactory;

// ********** End Class UBetterDragAndDropFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Factories_BetterDragDropOperationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
