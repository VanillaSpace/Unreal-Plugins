// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerPluginGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPLUGIN_MultiplayerPluginGameMode_generated_h
#error "MultiplayerPluginGameMode.generated.h already included, missing '#pragma once' in MultiplayerPluginGameMode.h"
#endif
#define MULTIPLAYERPLUGIN_MultiplayerPluginGameMode_generated_h

#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPluginGameMode(); \
	friend struct Z_Construct_UClass_AMultiplayerPluginGameMode_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPluginGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPlugin"), MULTIPLAYERPLUGIN_API) \
	DECLARE_SERIALIZER(AMultiplayerPluginGameMode)


#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerPluginGameMode(AMultiplayerPluginGameMode&&); \
	AMultiplayerPluginGameMode(const AMultiplayerPluginGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERPLUGIN_API, AMultiplayerPluginGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPluginGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPluginGameMode) \
	MULTIPLAYERPLUGIN_API virtual ~AMultiplayerPluginGameMode();


#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_9_PROLOG
#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPLUGIN_API UClass* StaticClass<class AMultiplayerPluginGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
