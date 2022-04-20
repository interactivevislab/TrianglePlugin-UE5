// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrianglePlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TrianglePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TrianglePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TrianglePlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TrianglePlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3A374DC6,
				0x1546087D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TrianglePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TrianglePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TrianglePlugin(Z_Construct_UPackage__Script_TrianglePlugin, TEXT("/Script/TrianglePlugin"), Z_Registration_Info_UPackage__Script_TrianglePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3A374DC6, 0x1546087D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
