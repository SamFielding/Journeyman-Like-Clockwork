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
	Collision->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Block);
	Collision->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);
	Collision->SetMobility(EComponentMobility::Movable);
	Collision->BodyInstance.bNotifyRigidBodyCollision = true;
	Collision->BodyInstance.bLockXRotation = true;
	Collision->BodyInstance.bLockYRotation = true;

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

	if (!bIsAttracted)
	{
		Mesh->SetRelativeRotation(Mesh->GetRelativeRotation() + FRotator(0.f, RotationRate * DeltaTime, 0.f));
		Mesh->SetRelativeLocation(Mesh->GetRelativeLocation() + FVector(0.f, 0.f, FMath::Sin(GetWorld()->GetTimeSeconds() * 2.f * PI * OscillationFrequency) * OscillationAmplitude * DeltaTime));
	}

	if (Target)
	{
		bIsAttracted = true;
		Collision->SetSimulatePhysics(false);
		SetActorEnableCollision(false);

		ElapsedTime += DeltaTime;
		SpeedCoefficient = 0.6f * FMath::Pow(ElapsedTime, ElapsedTime) - 0.6f;

		FVector Direction = (Target->GetCollectionPointLocation() - GetActorLocation()).GetSafeNormal();
		FVector NewLocation = GetActorLocation() + Direction * AttractionStrength * SpeedCoefficient * DeltaTime;

		SetActorLocation(NewLocation);
	}
}