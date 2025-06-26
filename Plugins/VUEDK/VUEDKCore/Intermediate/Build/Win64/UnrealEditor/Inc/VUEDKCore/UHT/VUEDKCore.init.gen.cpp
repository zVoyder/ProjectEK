// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVUEDKCore_init() {}
	VUEDKCORE_API UFunction* Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VUEDKCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VUEDKCore()
	{
		if (!Z_Registration_Info_UPackage__Script_VUEDKCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VUEDKCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD0BE019B,
				0x4AA7A761,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VUEDKCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VUEDKCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VUEDKCore(Z_Construct_UPackage__Script_VUEDKCore, TEXT("/Script/VUEDKCore"), Z_Registration_Info_UPackage__Script_VUEDKCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD0BE019B, 0x4AA7A761));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
