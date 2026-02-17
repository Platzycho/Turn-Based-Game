// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedProject/AHexTile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAHexTile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_AAHexTile();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_AAHexTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAHexTile ****************************************************************
void AAHexTile::StaticRegisterNativesAAHexTile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAHexTile;
UClass* AAHexTile::GetPrivateStaticClass()
{
	using TClass = AAHexTile;
	if (!Z_Registration_Info_UClass_AAHexTile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AHexTile"),
			Z_Registration_Info_UClass_AAHexTile.InnerSingleton,
			StaticRegisterNativesAAHexTile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAHexTile.InnerSingleton;
}
UClass* Z_Construct_UClass_AAHexTile_NoRegister()
{
	return AAHexTile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAHexTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AHexTile.h" },
		{ "ModuleRelativePath", "AHexTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "AHexTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AHexTile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAHexTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAHexTile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAHexTile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAHexTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexTile_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAHexTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAHexTile_Statics::ClassParams = {
	&AAHexTile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAHexTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAHexTile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAHexTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAHexTile()
{
	if (!Z_Registration_Info_UClass_AAHexTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAHexTile.OuterSingleton, Z_Construct_UClass_AAHexTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAHexTile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAHexTile);
AAHexTile::~AAHexTile() {}
// ********** End Class AAHexTile ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexTile_h__Script_TurnBasedProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAHexTile, AAHexTile::StaticClass, TEXT("AAHexTile"), &Z_Registration_Info_UClass_AAHexTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAHexTile), 880937876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexTile_h__Script_TurnBasedProject_2188221968(TEXT("/Script/TurnBasedProject"),
	Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexTile_h__Script_TurnBasedProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexTile_h__Script_TurnBasedProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
