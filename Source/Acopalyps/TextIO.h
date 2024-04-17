// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ACOPALYPS_API TextIO
{
public:
	TextIO();
	~TextIO();

	static void WriteTextToFile(FString& Text); 
	
};
