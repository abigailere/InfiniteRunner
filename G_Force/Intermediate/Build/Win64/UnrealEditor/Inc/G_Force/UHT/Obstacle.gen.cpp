// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G_Force/Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
G_FORCE_API UClass* Z_Construct_UClass_AObstacle();
G_FORCE_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
UPackage* Z_Construct_UPackage__Script_G_Force();
// End Cross Module References

// Begin Class AObstacle
void AObstacle::StaticRegisterNativesAObstacle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
UClass* Z_Construct_UClass_AObstacle_NoRegister()
{
	return AObstacle::StaticClass();
}
struct Z_Construct_UClass_AObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_G_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
	&AObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacle()
{
	if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
}
template<> G_FORCE_API UClass* StaticClass<AObstacle>()
{
	return AObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
AObstacle::~AObstacle() {}
// End Class AObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_Obstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 213542491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_Obstacle_h_2131367461(TEXT("/Script/G_Force"),
	Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_Obstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
