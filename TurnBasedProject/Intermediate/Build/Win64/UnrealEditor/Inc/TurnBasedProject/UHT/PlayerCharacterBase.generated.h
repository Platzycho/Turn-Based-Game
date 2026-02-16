// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/PlayerCharacterBase.h"

#ifdef TURNBASEDPROJECT_PlayerCharacterBase_generated_h
#error "PlayerCharacterBase.generated.h already included, missing '#pragma once' in PlayerCharacterBase.h"
#endif
#define TURNBASEDPROJECT_PlayerCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerCharacterBase *****************************************************
TURNBASEDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();

#define FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_APlayerCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TURNBASEDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedProject"), Z_Construct_UClass_APlayerCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(APlayerCharacterBase)


#define FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCharacterBase(APlayerCharacterBase&&) = delete; \
	APlayerCharacterBase(const APlayerCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacterBase) \
	NO_API virtual ~APlayerCharacterBase();


#define FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_9_PROLOG
#define FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCharacterBase;

// ********** End Class APlayerCharacterBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Nesli_Documents_Unreal_Projects_Turn_Based_Game_TurnBasedProject_Source_TurnBasedProject_Characters_PlayerCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
