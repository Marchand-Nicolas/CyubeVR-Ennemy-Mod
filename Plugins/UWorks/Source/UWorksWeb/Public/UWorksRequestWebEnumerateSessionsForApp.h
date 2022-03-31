#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EnumerateSessionsForAppDelegateDelegate.h"
#include "EnumerateSessionsForAppMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebEnumerateSessionsForApp.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateSessionsForAppDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateSessionsForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEnumerateSessionsForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

