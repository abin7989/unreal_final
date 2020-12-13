// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLE_ABPawn_generated_h
#error "ABPawn.generated.h already included, missing '#pragma once' in ABPawn.h"
#endif
#define SAMPLE_ABPawn_generated_h

#define Sample_Source_Sample_ABPawn_h_13_SPARSE_DATA
#define Sample_Source_Sample_ABPawn_h_13_RPC_WRAPPERS
#define Sample_Source_Sample_ABPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Sample_Source_Sample_ABPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABPawn(); \
	friend struct Z_Construct_UClass_AABPawn_Statics; \
public: \
	DECLARE_CLASS(AABPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABPawn)


#define Sample_Source_Sample_ABPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAABPawn(); \
	friend struct Z_Construct_UClass_AABPawn_Statics; \
public: \
	DECLARE_CLASS(AABPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABPawn)


#define Sample_Source_Sample_ABPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPawn(AABPawn&&); \
	NO_API AABPawn(const AABPawn&); \
public:


#define Sample_Source_Sample_ABPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPawn(AABPawn&&); \
	NO_API AABPawn(const AABPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABPawn)


#define Sample_Source_Sample_ABPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define Sample_Source_Sample_ABPawn_h_10_PROLOG
#define Sample_Source_Sample_ABPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABPawn_h_13_SPARSE_DATA \
	Sample_Source_Sample_ABPawn_h_13_RPC_WRAPPERS \
	Sample_Source_Sample_ABPawn_h_13_INCLASS \
	Sample_Source_Sample_ABPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample_Source_Sample_ABPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABPawn_h_13_SPARSE_DATA \
	Sample_Source_Sample_ABPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample_Source_Sample_ABPawn_h_13_INCLASS_NO_PURE_DECLS \
	Sample_Source_Sample_ABPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLE_API UClass* StaticClass<class AABPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample_Source_Sample_ABPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
