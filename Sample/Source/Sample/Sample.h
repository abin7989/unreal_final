// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Sample, Log, All);
#define ABLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define ABLOG_S(Verbosity) UE_LOG(Sample, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)
#define ABLOG(Verbosity, Format, ...) UE_LOG(Sample, Verbosity, TEXT("%s%s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define ABCHECK(Expr, ...) {if(!(Expr)) {ABLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__;}}