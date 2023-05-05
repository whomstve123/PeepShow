#include "MyActor.h"
#include "Engine/InputDelegateBinding.h"
#include "Components/InputComponent.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true;
    InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("InputComponent"));
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    if (InputComponent)
    {
        InputComponent->BindKey(EKeys::J, EInputEvent::IE_Pressed, this, &AMyActor::OnSelectKeyPressed);
    }
}

void AMyActor::OnSelectKeyPressed()
{
    // Do something when the select key is pressed
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
