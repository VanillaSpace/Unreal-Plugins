// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPlugin/MultiplayerPluginGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPluginGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerPluginGameMode();
MULTIPLAYERPLUGIN_API UClass* Z_Construct_UClass_AMultiplayerPluginGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPlugin();
// End Cross Module References

// Begin Class AMultiplayerPluginGameMode
void AMultiplayerPluginGameMode::StaticRegisterNativesAMultiplayerPluginGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerPluginGameMode);
UClass* Z_Construct_UClass_AMultiplayerPluginGameMode_NoRegister()
{
	return AMultiplayerPluginGameMode::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerPluginGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerPluginGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerPluginGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerPluginGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::ClassParams = {
	&AMultiplayerPluginGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerPluginGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiplayerPluginGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerPluginGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerPluginGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerPluginGameMode.OuterSingleton;
}
template<> MULTIPLAYERPLUGIN_API UClass* StaticClass<AMultiplayerPluginGameMode>()
{
	return AMultiplayerPluginGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerPluginGameMode);
AMultiplayerPluginGameMode::~AMultiplayerPluginGameMode() {}
// End Class AMultiplayerPluginGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerPluginGameMode, AMultiplayerPluginGameMode::StaticClass, TEXT("AMultiplayerPluginGameMode"), &Z_Registration_Info_UClass_AMultiplayerPluginGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerPluginGameMode), 3532968817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_177012985(TEXT("/Script/MultiplayerPlugin"),
	Z_CompiledInDeferFile_FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
