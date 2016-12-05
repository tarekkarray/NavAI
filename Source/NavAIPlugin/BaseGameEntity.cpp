// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "BaseGameEntity.h"


// This function does not need to be modified.
UBaseGameEntity::UBaseGameEntity(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	
}

// Add default functionality here for any IBaseGameEntity functions that are not pure virtual.
void IBaseGameEntity::SetID(uint32 NewID)
{
	this->ID = NewID;
}

uint32 IBaseGameEntity::NextValidID = 1;

IBaseGameEntity::IBaseGameEntity()
{
	SetID(++NextValidID);
}
