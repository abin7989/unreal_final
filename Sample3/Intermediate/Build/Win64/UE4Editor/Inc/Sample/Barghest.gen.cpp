// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sample/Barghest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarghest() {}
// Cross Module References
	SAMPLE_API UClass* Z_Construct_UClass_ABarghest_NoRegister();
	SAMPLE_API UClass* Z_Construct_UClass_ABarghest();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Sample();
	SAMPLE_API UFunction* Z_Construct_UFunction_ABarghest_DamageReceive();
	SAMPLE_API UFunction* Z_Construct_UFunction_ABarghest_SeeTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void ABarghest::StaticRegisterNativesABarghest()
	{
		UClass* Class = ABarghest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageReceive", &ABarghest::execDamageReceive },
			{ "SeeTarget", &ABarghest::execSeeTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABarghest_DamageReceive_Statics
	{
		struct Barghest_eventDamageReceive_Parms
		{
			float Damage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Barghest_eventDamageReceive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Barghest_eventDamageReceive_Parms), &Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Barghest_eventDamageReceive_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarghest_DamageReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarghest_DamageReceive_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarghest_DamageReceive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Barghest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarghest_DamageReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarghest, nullptr, "DamageReceive", nullptr, nullptr, sizeof(Barghest_eventDamageReceive_Parms), Z_Construct_UFunction_ABarghest_DamageReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarghest_DamageReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarghest_DamageReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarghest_DamageReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarghest_DamageReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABarghest_DamageReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABarghest_SeeTarget_Statics
	{
		struct Barghest_eventSeeTarget_Parms
		{
			UObject* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarghest_SeeTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Barghest_eventSeeTarget_Parms, target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarghest_SeeTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarghest_SeeTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarghest_SeeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Barghest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarghest_SeeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarghest, nullptr, "SeeTarget", nullptr, nullptr, sizeof(Barghest_eventSeeTarget_Parms), Z_Construct_UFunction_ABarghest_SeeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarghest_SeeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarghest_SeeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarghest_SeeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarghest_SeeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABarghest_SeeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABarghest_NoRegister()
	{
		return ABarghest::StaticClass();
	}
	struct Z_Construct_UClass_ABarghest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarghest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Sample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABarghest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABarghest_DamageReceive, "DamageReceive" }, // 2875418595
		{ &Z_Construct_UFunction_ABarghest_SeeTarget, "SeeTarget" }, // 3769666916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarghest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Barghest.h" },
		{ "ModuleRelativePath", "Barghest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarghest_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Barghest" },
		{ "ModuleRelativePath", "Barghest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarghest_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarghest, Player), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarghest_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarghest_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarghest_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Barghest" },
		{ "ModuleRelativePath", "Barghest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarghest_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarghest, Health), METADATA_PARAMS(Z_Construct_UClass_ABarghest_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarghest_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarghest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarghest_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarghest_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarghest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarghest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarghest_Statics::ClassParams = {
		&ABarghest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABarghest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarghest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarghest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarghest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarghest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarghest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarghest, 770790192);
	template<> SAMPLE_API UClass* StaticClass<ABarghest>()
	{
		return ABarghest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarghest(Z_Construct_UClass_ABarghest, &ABarghest::StaticClass, TEXT("/Script/Sample"), TEXT("ABarghest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarghest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
