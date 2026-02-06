// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G_Force/SpawnLevel.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnLevel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
G_FORCE_API UClass* Z_Construct_UClass_ABase_Level_NoRegister();
G_FORCE_API UClass* Z_Construct_UClass_ASpawnLevel();
G_FORCE_API UClass* Z_Construct_UClass_ASpawnLevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_G_Force();
// End Cross Module References

// Begin Class ASpawnLevel Function OnOverlapBegin
struct Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics
{
	struct SpawnLevel_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//is this the first level?\n" },
#endif
		{ "ModuleRelativePath", "SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "is this the first level?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SpawnLevel_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnLevel_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::SpawnLevel_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::SpawnLevel_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnLevel::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASpawnLevel Function OnOverlapBegin

// Begin Class ASpawnLevel Function SpawnLevel
struct Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics
{
	struct SpawnLevel_eventSpawnLevel_Parms
	{
		bool isFirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst_SetBit(void* Obj)
{
	((SpawnLevel_eventSpawnLevel_Parms*)Obj)->isFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst = { "isFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnLevel_eventSpawnLevel_Parms), &Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "SpawnLevel", nullptr, nullptr, Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::SpawnLevel_eventSpawnLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::SpawnLevel_eventSpawnLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnLevel_SpawnLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnLevel::execSpawnLevel)
{
	P_GET_UBOOL(Z_Param_isFirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnLevel(Z_Param_isFirst);
	P_NATIVE_END;
}
// End Class ASpawnLevel Function SpawnLevel

// Begin Class ASpawnLevel
void ASpawnLevel::StaticRegisterNativesASpawnLevel()
{
	UClass* Class = ASpawnLevel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ASpawnLevel::execOnOverlapBegin },
		{ "SpawnLevel", &ASpawnLevel::execSpawnLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnLevel);
UClass* Z_Construct_UClass_ASpawnLevel_NoRegister()
{
	return ASpawnLevel::StaticClass();
}
struct Z_Construct_UClass_ASpawnLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnLevel.h" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level1_MetaData[] = {
		{ "Category", "SpawnLevel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//will be able to edit in the blueprint\n" },
#endif
		{ "ModuleRelativePath", "SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "will be able to edit in the blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level2_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level3_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level4_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level5_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Level1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Level2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Level3;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Level4;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Level5;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin, "OnOverlapBegin" }, // 2634863176
		{ &Z_Construct_UFunction_ASpawnLevel_SpawnLevel, "SpawnLevel" }, // 2586709592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1 = { "Level1", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, Level1), Z_Construct_UClass_UClass, Z_Construct_UClass_ABase_Level_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level1_MetaData), NewProp_Level1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2 = { "Level2", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, Level2), Z_Construct_UClass_UClass, Z_Construct_UClass_ABase_Level_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level2_MetaData), NewProp_Level2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3 = { "Level3", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, Level3), Z_Construct_UClass_UClass, Z_Construct_UClass_ABase_Level_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level3_MetaData), NewProp_Level3_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4 = { "Level4", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, Level4), Z_Construct_UClass_UClass, Z_Construct_UClass_ABase_Level_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level4_MetaData), NewProp_Level4_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5 = { "Level5", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, Level5), Z_Construct_UClass_UClass, Z_Construct_UClass_ABase_Level_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level5_MetaData), NewProp_Level5_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_G_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnLevel_Statics::ClassParams = {
	&ASpawnLevel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnLevel()
{
	if (!Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton, Z_Construct_UClass_ASpawnLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton;
}
template<> G_FORCE_API UClass* StaticClass<ASpawnLevel>()
{
	return ASpawnLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnLevel);
ASpawnLevel::~ASpawnLevel() {}
// End Class ASpawnLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnLevel, ASpawnLevel::StaticClass, TEXT("ASpawnLevel"), &Z_Registration_Info_UClass_ASpawnLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnLevel), 4278797594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_521218196(TEXT("/Script/G_Force"),
	Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Unreal_Projects_G_Force_Game_G_Force_Source_G_Force_SpawnLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
