// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedProject/AHexGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAHexGrid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_AAHexGrid();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_AAHexGrid_NoRegister();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_AAHexTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAHexGrid ****************************************************************
void AAHexGrid::StaticRegisterNativesAAHexGrid()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAHexGrid;
UClass* AAHexGrid::GetPrivateStaticClass()
{
	using TClass = AAHexGrid;
	if (!Z_Registration_Info_UClass_AAHexGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AHexGrid"),
			Z_Registration_Info_UClass_AAHexGrid.InnerSingleton,
			StaticRegisterNativesAAHexGrid,
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
	return Z_Registration_Info_UClass_AAHexGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_AAHexGrid_NoRegister()
{
	return AAHexGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAHexGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AHexGrid.h" },
		{ "ModuleRelativePath", "AHexGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexTileClass_MetaData[] = {
		{ "Category", "AHexGrid" },
		{ "ModuleRelativePath", "AHexGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridRadius_MetaData[] = {
		{ "Category", "AHexGrid" },
		{ "ModuleRelativePath", "AHexGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexSize_MetaData[] = {
		{ "Category", "AHexGrid" },
		{ "ModuleRelativePath", "AHexGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMap_MetaData[] = {
		{ "Category", "AHexGrid" },
		{ "ModuleRelativePath", "AHexGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HexTileClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HexSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TileMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAHexGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_HexTileClass = { "HexTileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAHexGrid, HexTileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAHexTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexTileClass_MetaData), NewProp_HexTileClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_GridRadius = { "GridRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAHexGrid, GridRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridRadius_MetaData), NewProp_GridRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_HexSize = { "HexSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAHexGrid, HexSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexSize_MetaData), NewProp_HexSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap_ValueProp = { "TileMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AAHexTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap_Key_KeyProp = { "TileMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAHexGrid, TileMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMap_MetaData), NewProp_TileMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAHexGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_HexTileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_GridRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_HexSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAHexGrid_Statics::NewProp_TileMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAHexGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAHexGrid_Statics::ClassParams = {
	&AAHexGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAHexGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAHexGrid_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAHexGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AAHexGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAHexGrid()
{
	if (!Z_Registration_Info_UClass_AAHexGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAHexGrid.OuterSingleton, Z_Construct_UClass_AAHexGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAHexGrid.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAHexGrid);
AAHexGrid::~AAHexGrid() {}
// ********** End Class AAHexGrid ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexGrid_h__Script_TurnBasedProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAHexGrid, AAHexGrid::StaticClass, TEXT("AAHexGrid"), &Z_Registration_Info_UClass_AAHexGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAHexGrid), 2155130532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexGrid_h__Script_TurnBasedProject_1281389931(TEXT("/Script/TurnBasedProject"),
	Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexGrid_h__Script_TurnBasedProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_AHexGrid_h__Script_TurnBasedProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
