// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/DismembererFactory.h"

#ifdef DISMEMBERERSYSTEM_DismembererFactory_generated_h
#error "DismembererFactory.generated.h already included, missing '#pragma once' in DismembererFactory.h"
#endif
#define DISMEMBERERSYSTEM_DismembererFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDismembererFactory ******************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismembererFactory(); \
	friend struct Z_Construct_UClass_UDismembererFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismembererFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DismembererSystem"), Z_Construct_UClass_UDismembererFactory_NoRegister) \
	DECLARE_SERIALIZER(UDismembererFactory)


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDismembererFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismembererFactory(UDismembererFactory&&) = delete; \
	UDismembererFactory(const UDismembererFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembererFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembererFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismembererFactory) \
	NO_API virtual ~UDismembererFactory();


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismembererFactory;

// ********** End Class UDismembererFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Utility_DismembererFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
