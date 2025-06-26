// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CrosshairsFactory.h"

#ifdef CROSSHAIRSYSTEM_CrosshairsFactory_generated_h
#error "CrosshairsFactory.generated.h already included, missing '#pragma once' in CrosshairsFactory.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCrosshairsFactory *******************************************************
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairsFactory(); \
	friend struct Z_Construct_UClass_UCrosshairsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairsFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairsFactory_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairsFactory)


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairsFactory(UCrosshairsFactory&&) = delete; \
	UCrosshairsFactory(const UCrosshairsFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairsFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairsFactory) \
	NO_API virtual ~UCrosshairsFactory();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairsFactory;

// ********** End Class UCrosshairsFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Factories_CrosshairsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
