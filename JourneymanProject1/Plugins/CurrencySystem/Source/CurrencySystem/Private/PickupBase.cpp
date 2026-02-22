#include "PickupBase.h"
#include "PickupManager.h"

APickupBase::APickupBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	RootComponent = Collision;

	Collision->SetSimulatePhysics(true);
	Collision->SetEnableGravity(true);
	Collision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Collision->SetCollisionObjectType(ECC_PhysicsBody);
	Collision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	Collision->SetMobility(EComponentMobility::Movable);

	Collision->BodyInstance.bLockRotation = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

void APickupBase::BeginPlay()
{
	Super::BeginPlay();
}

void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsAttracted && !Collision->IsAnyRigidBodyAwake())
	{
		SetActorRotation(GetActorRotation() + FRotator(0.f, RotationRate * DeltaTime, 0.f));
		SetActorLocation(GetActorLocation() + FVector(0.f, 0.f, FMath::Sin(GetWorld()->GetTimeSeconds() * 2.f * PI * OscillationFrequency) * OscillationAmplitude * DeltaTime));
	}

	if (Target)
	{
		Collision->SetSimulatePhysics(false);

		bIsAttracted = true;
		SetActorEnableCollision(false);

		ElapsedTime += DeltaTime;
		SpeedCoefficient = 0.6f * FMath::Pow(ElapsedTime, ElapsedTime) - 0.6f;

		FVector Direction = (Target->GetCollectionPointLocation() - GetActorLocation()).GetSafeNormal();
		FVector NewLocation = GetActorLocation() + Direction * AttractionStrength * SpeedCoefficient * DeltaTime;

		SetActorLocation(NewLocation);
	}
}