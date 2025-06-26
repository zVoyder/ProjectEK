// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/HandlersFactory.h"

#ifdef WEAPONSYSTEM_HandlersFactory_generated_h
#error "HandlersFactory.generated.h already included, missing '#pragma once' in HandlersFactory.h"
#endif
#define WEAPONSYSTEM_HandlersFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHandlersFactory *********************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHandlersFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandlersFactory(); \
	friend struct Z_Construct_UClass_UHandlersFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHandlersFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandlersFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UHandlersFactory_NoRegister) \
	DECLARE_SERIALIZER(UHandlersFactory)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandlersFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandlersFactory(UHandlersFactory&&) = delete; \
	UHandlersFactory(const UHandlersFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandlersFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandlersFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandlersFactory) \
	NO_API virtual ~UHandlersFactory();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandlersFactory;

// ********** End Class UHandlersFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_HandlersFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
