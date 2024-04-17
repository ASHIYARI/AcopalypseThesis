// Fill out your copyright notice in the Description page of Project Settings.


#include "TextIO.h"

TextIO::TextIO()
{
}

TextIO::~TextIO()
{
}

void TextIO::WriteTextToFile(FString& Text)
{
	/*if(FPaths::FileExists(FPaths::GameDevelopersDir().Append(TEXT("thesislog.txt"))))
	{
		UE_LOG(LogTemp, Warning, TEXT("file exists"))
	}else
		UE_LOG(LogTemp, Warning, TEXT("no file"))*/
	
	FFileHelper::SaveStringToFile(Text,  *FPaths::ProjectLogDir().Append(TEXT("audioArtifactLog.txt")), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *FPaths::GameDevelopersDir())
}

