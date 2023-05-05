#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT2_API AMyActor : public AActor
{
    GENERATED_BODY()
    
public:
    AMyActor();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnSelectKeyPressed();
    
    void Tick(float DeltaTime);

private:
    UInputComponent* InputComponent;
};

