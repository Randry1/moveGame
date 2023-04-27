// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "MyFirstActor.generated.h"

UCLASS()
class RPG_API AMyFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="myComponent")
	UStaticMeshComponent* myMeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyScene")
	USceneComponent* mySceneComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyComponent")
	USphereComponent * mySphere;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="myVariables")
	bool myBool2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "myVariables")
	FVector myVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "myVariables")
	FTransform myTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "myVariables")
	FText myText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "myVariables")
	AActor* myActor;
};
