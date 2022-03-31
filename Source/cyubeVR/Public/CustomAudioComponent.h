#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "CustomAudioComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UCustomAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UCustomAudioComponent();
};

