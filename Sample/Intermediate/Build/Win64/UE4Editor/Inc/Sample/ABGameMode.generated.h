// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLE_ABGameMode_generated_h
#error "ABGameMode.generated.h already included, missing '#pragma once' in ABGameMode.h"
#endif
#define SAMPLE_ABGameMode_generated_h

#define Sample_Source_Sample_ABGameMode_h_15_SPARSE_DATA
#define Sample_Source_Sample_ABGameMode_h_15_RPC_WRAPPERS
#define Sample_Source_Sample_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Sample_Source_Sample_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend struct Z_Construct_UClass_AABGameMode_Statics; \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode)


#define Sample_Source_Sample_ABGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend struct Z_Construct_UClass_AABGameMode_Statics; \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode)


#define Sample_Source_Sample_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public:


#define Sample_Source_Sample_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameMode)


#define Sample_Source_Sample_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define Sample_Source_Sample_ABGameMode_h_12_PROLOG
#define Sample_Source_Sample_ABGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABGameMode_h_15_SPARSE_DATA \
	Sample_Source_Sample_ABGameMode_h_15_RPC_WRAPPERS \
	Sample_Source_Sample_ABGameMode_h_15_INCLASS \
	Sample_Source_Sample_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample_Source_Sample_ABGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABGameMode_h_15_SPARSE_DATA \
	Sample_Source_Sample_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample_Source_Sample_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Sample_Source_Sample_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLE_API UClass* StaticClass<class AABGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample_Source_Sample_ABGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
