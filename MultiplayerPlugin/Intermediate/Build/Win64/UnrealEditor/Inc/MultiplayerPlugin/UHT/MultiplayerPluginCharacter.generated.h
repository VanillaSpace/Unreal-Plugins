// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerPluginCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPLUGIN_MultiplayerPluginCharacter_generated_h
#error "MultiplayerPluginCharacter.generated.h already included, missing '#pragma once' in MultiplayerPluginCharacter.h"
#endif
#define MULTIPLAYERPLUGIN_MultiplayerPluginCharacter_generated_h

#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPluginCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerPluginCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPluginCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPluginCharacter)


#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerPluginCharacter(AMultiplayerPluginCharacter&&); \
	AMultiplayerPluginCharacter(const AMultiplayerPluginCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPluginCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPluginCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPluginCharacter) \
	NO_API virtual ~AMultiplayerPluginCharacter();


#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_18_PROLOG
#define FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPLUGIN_API UClass* StaticClass<class AMultiplayerPluginCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerPlugin_Source_MultiplayerPlugin_MultiplayerPluginCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
