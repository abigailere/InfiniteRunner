// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G_Force/G_ForceGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG_ForceGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
G_FORCE_API UClass* Z_Construct_UClass_AG_ForceGameMode();
G_FORCE_API UClass* Z_Construct_UClass_AG_ForceGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_G_Force();
// End Cross Module References

// Begin Class AG_ForceGameMode
void AG_ForceGameMode::StaticRegisterNativesAG_ForceGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AG_ForceGameMode);
UClass* Z_Construct_UClass_AG_ForceGameMode_NoRegister()
{
	return AG_ForceGameMode::StaticClass();
}
struct Z_Construct_UClass_AG_ForceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "G_ForceGameMode.h" },
		{ "ModuleRelativePath", "G_ForceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG_ForceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AG_ForceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_G_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AG_ForceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AG_ForceGameMode_Statics::ClassParams = {
	&AG_ForceGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AG_ForceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AG_ForceGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AG_ForceGameMode()
{
	if (!Z_Registration_Info_UClass_AG_ForceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AG_ForceGameMode.OuterSingleton, Z_Construct_UClass_AG_ForceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AG_ForceGameMode.OuterSingleton;
}
template<> G_FORCE_API UClass* StaticClass<AG_ForceGameMode>()
{
	return AG_ForceGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AG_ForceGameMode);
AG_ForceGameMode::~AG_ForceGameMode() {}
// End Class AG_ForceGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_G_ForceGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AG_ForceGameMode, AG_ForceGameMode::StaticClass, TEXT("AG_ForceGameMode"), &Z_Registration_Info_UClass_AG_ForceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AG_ForceGameMode), 2032887210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_G_ForceGameMode_h_1394698727(TEXT("/Script/G_Force"),
	Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_G_ForceGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_G_ForceGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
