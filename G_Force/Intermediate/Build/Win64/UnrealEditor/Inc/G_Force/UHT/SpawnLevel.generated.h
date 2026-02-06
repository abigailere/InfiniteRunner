// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnLevel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef G_FORCE_SpawnLevel_generated_h
#error "SpawnLevel.generated.h already included, missing '#pragma once' in SpawnLevel.h"
#endif
#define G_FORCE_SpawnLevel_generated_h

#define FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/G_Force"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnLevel(ASpawnLevel&&); \
	ASpawnLevel(const ASpawnLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnLevel) \
	NO_API virtual ~ASpawnLevel();


#define FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_16_PROLOG
#define FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> G_FORCE_API UClass* StaticClass<class ASpawnLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
