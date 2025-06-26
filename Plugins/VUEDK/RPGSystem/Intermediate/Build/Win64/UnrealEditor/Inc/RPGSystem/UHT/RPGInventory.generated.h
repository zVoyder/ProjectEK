// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/RPGInventory.h"

#ifdef RPGSYSTEM_RPGInventory_generated_h
#error "RPGInventory.generated.h already included, missing '#pragma once' in RPGInventory.h"
#endif
#define RPGSYSTEM_RPGInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGInventory ************************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventory(); \
	friend struct Z_Construct_UClass_URPGInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInventory, UTetrisInventory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGInventory_NoRegister) \
	DECLARE_SERIALIZER(URPGInventory)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInventory(URPGInventory&&) = delete; \
	URPGInventory(const URPGInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInventory) \
	NO_API virtual ~URPGInventory();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInventory;

// ********** End Class URPGInventory **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
