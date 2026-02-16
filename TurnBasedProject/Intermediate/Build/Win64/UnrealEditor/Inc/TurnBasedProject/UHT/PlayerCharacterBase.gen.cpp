// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedProject/Characters/PlayerCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase();
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerCharacterBase *****************************************************
void APlayerCharacterBase::StaticRegisterNativesAPlayerCharacterBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCharacterBase;
UClass* APlayerCharacterBase::GetPrivateStaticClass()
{
	using TClass = APlayerCharacterBase;
	if (!Z_Registration_Info_UClass_APlayerCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerCharacterBase"),
			Z_Registration_Info_UClass_APlayerCharacterBase.InnerSingleton,
			StaticRegisterNativesAPlayerCharacterBase,
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
	return Z_Registration_Info_UClass_APlayerCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister()
{
	return APlayerCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/PlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Characters/PlayerCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams = {
	&APlayerCharacterBase::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacterBase()
{
	if (!Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton, Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterBase);
APlayerCharacterBase::~APlayerCharacterBase() {}
// ********** End Class APlayerCharacterBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h__Script_TurnBasedProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterBase, APlayerCharacterBase::StaticClass, TEXT("APlayerCharacterBase"), &Z_Registration_Info_UClass_APlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterBase), 756693702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h__Script_TurnBasedProject_360631800(TEXT("/Script/TurnBasedProject"),
	Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h__Script_TurnBasedProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h__Script_TurnBasedProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
