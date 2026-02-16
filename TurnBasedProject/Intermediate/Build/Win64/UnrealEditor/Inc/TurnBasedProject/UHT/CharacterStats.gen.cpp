// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedProject/Characters/CharacterStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterStats() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_UCharacterStats();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterStats **********************************************************
void UCharacterStats::StaticRegisterNativesUCharacterStats()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterStats;
UClass* UCharacterStats::GetPrivateStaticClass()
{
	using TClass = UCharacterStats;
	if (!Z_Registration_Info_UClass_UCharacterStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterStats"),
			Z_Registration_Info_UClass_UCharacterStats.InnerSingleton,
			StaticRegisterNativesUCharacterStats,
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
	return Z_Registration_Info_UClass_UCharacterStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterStats_NoRegister()
{
	return UCharacterStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/CharacterStats.h" },
		{ "ModuleRelativePath", "Characters/CharacterStats.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStats_Statics::ClassParams = {
	&UCharacterStats::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterStats()
{
	if (!Z_Registration_Info_UClass_UCharacterStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterStats.OuterSingleton, Z_Construct_UClass_UCharacterStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStats);
UCharacterStats::~UCharacterStats() {}
// ********** End Class UCharacterStats ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_CharacterStats_h__Script_TurnBasedProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterStats, UCharacterStats::StaticClass, TEXT("UCharacterStats"), &Z_Registration_Info_UClass_UCharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterStats), 3525502754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_CharacterStats_h__Script_TurnBasedProject_2496667948(TEXT("/Script/TurnBasedProject"),
	Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_CharacterStats_h__Script_TurnBasedProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_CharacterStats_h__Script_TurnBasedProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
