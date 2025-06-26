// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/WeaponAnimFactory.h"

#ifdef WEAPONSYSTEM_WeaponAnimFactory_generated_h
#error "WeaponAnimFactory.generated.h already included, missing '#pragma once' in WeaponAnimFactory.h"
#endif
#define WEAPONSYSTEM_WeaponAnimFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponAnimFactory *******************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAnimFactory(); \
	friend struct Z_Construct_UClass_UWeaponAnimFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponAnimFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UWeaponAnimFactory_NoRegister) \
	DECLARE_SERIALIZER(UWeaponAnimFactory)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponAnimFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponAnimFactory(UWeaponAnimFactory&&) = delete; \
	UWeaponAnimFactory(const UWeaponAnimFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAnimFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAnimFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAnimFactory) \
	NO_API virtual ~UWeaponAnimFactory();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponAnimFactory;

// ********** End Class UWeaponAnimFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Factories_WeaponAnimFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
