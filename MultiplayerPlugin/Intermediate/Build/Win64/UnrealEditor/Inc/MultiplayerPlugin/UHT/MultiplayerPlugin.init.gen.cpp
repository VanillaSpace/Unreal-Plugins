// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFD3B8C4C,
				0x3D914BAF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerPlugin(Z_Construct_UPackage__Script_MultiplayerPlugin, TEXT("/Script/MultiplayerPlugin"), Z_Registration_Info_UPackage__Script_MultiplayerPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD3B8C4C, 0x3D914BAF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
