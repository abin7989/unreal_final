// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SAMPLE_Barghest_generated_h
#error "Barghest.generated.h already included, missing '#pragma once' in Barghest.h"
#endif
#define SAMPLE_Barghest_generated_h

#define Sample3_Source_Sample_Barghest_h_12_SPARSE_DATA
#define Sample3_Source_Sample_Barghest_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSeeTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SeeTarget(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageReceive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DamageReceive(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define Sample3_Source_Sample_Barghest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSeeTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SeeTarget(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageReceive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DamageReceive(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define Sample3_Source_Sample_Barghest_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarghest(); \
	friend struct Z_Construct_UClass_ABarghest_Statics; \
public: \
	DECLARE_CLASS(ABarghest, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(ABarghest)


#define Sample3_Source_Sample_Barghest_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABarghest(); \
	friend struct Z_Construct_UClass_ABarghest_Statics; \
public: \
	DECLARE_CLASS(ABarghest, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(ABarghest)


#define Sample3_Source_Sample_Barghest_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarghest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarghest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarghest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarghest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarghest(ABarghest&&); \
	NO_API ABarghest(const ABarghest&); \
public:


#define Sample3_Source_Sample_Barghest_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarghest(ABarghest&&); \
	NO_API ABarghest(const ABarghest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarghest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarghest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarghest)


#define Sample3_Source_Sample_Barghest_h_12_PRIVATE_PROPERTY_OFFSET
#define Sample3_Source_Sample_Barghest_h_9_PROLOG
#define Sample3_Source_Sample_Barghest_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample3_Source_Sample_Barghest_h_12_PRIVATE_PROPERTY_OFFSET \
	Sample3_Source_Sample_Barghest_h_12_SPARSE_DATA \
	Sample3_Source_Sample_Barghest_h_12_RPC_WRAPPERS \
	Sample3_Source_Sample_Barghest_h_12_INCLASS \
	Sample3_Source_Sample_Barghest_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample3_Source_Sample_Barghest_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample3_Source_Sample_Barghest_h_12_PRIVATE_PROPERTY_OFFSET \
	Sample3_Source_Sample_Barghest_h_12_SPARSE_DATA \
	Sample3_Source_Sample_Barghest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample3_Source_Sample_Barghest_h_12_INCLASS_NO_PURE_DECLS \
	Sample3_Source_Sample_Barghest_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLE_API UClass* StaticClass<class ABarghest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample3_Source_Sample_Barghest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
