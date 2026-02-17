#include "CurrencyPickup.h"
#include "CurrencyManager.h"

ACurrencyPickup::ACurrencyPickup()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);
}

void ACurrencyPickup::Collect(UPickupManager* PickupManagerComponent)
{
	if (!PickupManagerComponent || bIsMoving)
		return;

	if (UCurrencyManager* CurrencyManagerComponent = Cast<UCurrencyManager>(PickupManagerComponent))
	{
		Target = PickupManagerComponent;
		bIsMoving = true;

		SetActorEnableCollision(false);
	}
}

void ACurrencyPickup::BeginPlay()
{
	Super::BeginPlay();
}

void ACurrencyPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APickupBase::Tick(DeltaTime);

	if (UCurrencyManager* CurrencyPickupManager = Cast<UCurrencyManager>(Target); CurrencyPickupManager && FVector::Dist(GetActorLocation(), Target->GetCollectionPointLocation()) < 10.f)
	{
		CurrencyPickupManager->AddCurrency(CurrencyValue);
		Destroy();
	}
}

