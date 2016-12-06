// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/**
 * 
 */
template<class entity_type>
class NAVAIPLUGIN_API State
{
public:
	State<entity_type>::State(){}
	State<entity_type>::~State(){}
	virtual void Execute(entity_type* Actor) = 0;
	virtual void Enter(entity_type* Actor) = 0;
	virtual void Exit(entity_type* Actor) = 0;
};


