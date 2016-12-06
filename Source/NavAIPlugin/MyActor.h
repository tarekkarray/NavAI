// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BaseGameEntity.h"
#include "State.h"
#include "MyActor.generated.h"

UCLASS()
class NAVAIPLUGIN_API AMyActor : public AActor, public IBaseGameEntity
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
	void ChangeState(State<AMyActor>* NewState);
	UPROPERTY()
		ELocation CurrentLocation;
	UPROPERTY()
		uint32 Thirst;
	UPROPERTY()
		uint32 GoldCarried;
	UPROPERTY()
		uint32 GoldInBank;
	UPROPERTY()
		uint32 Fatigue;
	UFUNCTION()
		void  ChangeLocation(ELocation NewLocation);
	UFUNCTION()
		void AddToGoldCarried(uint32 AddedGold);
	UFUNCTION()
		void IncreaseFatigue(uint32 AddedFatigue);
	UFUNCTION()
		bool IsThirsty();
	UFUNCTION()
		bool ArePocketsFull();
private:
	State<AMyActor>* CurrentState;
	
	UFUNCTION()
	void CleanUp(class AActor* DestroyedActor);
	UPROPERTY(EditAnywhere)
		uint32 MaxFatigue;
	UPROPERTY(EditAnywhere)
		uint32 MaxThirst;
	UPROPERTY(EditAnywhere)
		uint32 MaxCarriedGold;
	UPROPERTY()
		bool bIsThirsty;
	UPROPERTY()
		bool bIsTired;
	UPROPERTY()
		bool bArePocketsFull;
	

};
