// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BaseGameEntity.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBaseGameEntity : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class NAVAIPLUGIN_API IBaseGameEntity
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	void SetID(uint32 NewID);
	uint32 GetID()const { return ID; }
	IBaseGameEntity();

private:
	uint32 ID;
	static uint32 NextValidID;
};
