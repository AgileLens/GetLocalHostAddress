// GetLocalHostAddress.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetLocalHostAddress.generated.h"

UCLASS()
class GETLOCALHOSTADDRESS_API UGetLocalHostAddressFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Agile Lens|Networking", meta = (DisplayName = "Get Local Host Address"))
    static void GetLocalHostAddress(FString& OutIP, bool& Success);
};