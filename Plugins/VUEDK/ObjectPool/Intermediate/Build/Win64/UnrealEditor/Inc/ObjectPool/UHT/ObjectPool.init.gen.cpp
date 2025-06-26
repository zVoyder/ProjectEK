// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPool_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObjectPool;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObjectPool()
	{
		if (!Z_Registration_Info_UPackage__Script_ObjectPool.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObjectPool",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAC029A04,
				0xCB4A3523,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObjectPool.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObjectPool.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObjectPool(Z_Construct_UPackage__Script_ObjectPool, TEXT("/Script/ObjectPool"), Z_Registration_Info_UPackage__Script_ObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC029A04, 0xCB4A3523));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
