// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Engine/Texture2D.h"
#include "HAL/UnrealMemory.h"

#include "TextureFunctionLibrary.generated.h"

class UTexture2D;
/**
 * 
 */
UCLASS()
class MONODEPTHESTIMATION_API UTextureFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Texture processing")
	static UTexture2D* CreateTexture2d(int32 SrcWidth, int32 SrcHeight)
	{
		return UTexture2D::CreateTransient(SrcWidth, SrcHeight, PF_G8);
	}

    UFUNCTION(BlueprintCallable, Category = "Texture processing")
    static void CopyByteArrayToTexture2D(const TArray<uint8>& SrcData, UPARAM(ref) UTexture2D* Tex2D)
	{
		FTexture2DMipMap& Mip = Tex2D->PlatformData->Mips[0];
		void* TextureData = Mip.BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(TextureData, SrcData.GetData(), SrcData.Num());
		Mip.BulkData.Unlock();
		Tex2D->UpdateResource();
	}
};
