#pragma once
#include "CoreMinimal.h"
#include "GetPlayerSummariesDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPlayerSummariesNode.generated.h"

class UGetPlayerSummariesNode;

UCLASS()
class UWORKSWEB_API UGetPlayerSummariesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerSummariesDelegate Completed;
    
    UGetPlayerSummariesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayerSummariesNode* GetPlayerSummariesNode(const FString& Key, const FString& SteamIDs);
    
};

