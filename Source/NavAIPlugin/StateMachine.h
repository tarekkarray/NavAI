// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
template<class entity_type>
class NAVAIPLUGIN_API StateMachine
{

public:
	StateMachine(entity_type* StateOwner) :Owner(StateOwner), CurrentState(NULL),PreviousState(NULL),GlobalState(NULL){}		
	~StateMachine() {};
	void SetCurrentState(State<entity_type>*NewState) { CurrentState = NewState; }
	void SetGlobalState(State<entity_type>* NewState) { GlobalState = NewState; }
	void SetPreviousState(State<entity_type>* NewState) { PreviousState = newState; }
	void Update() const {
		if (GlobalState)
		{
			GlobalState->Execute(Owner);
		}
		if (CurrentState)
		{
			CurrentState->Execute(Owner);
		}
	}
	void ChangeState(State<entity_type>* NewState)
	{
			check(NewState  && "StateMachine::ChangeState : trying to change to a null state");
			PreviousState = CurrentState;
			CurrentState->Exit(Owner);
			CurrentState = NewState;
			CurrentState->Enter(Owner);
			
	}

	void RevertToPreviousState()
	{
		ChangeState(PreviousState);
	}

	State<entity_type>* GetCurrentState()const { return CurrentState };
	State<entity_type>* GetPreviousState()const { return PreviousState };
	State<entity_type>* GetGlobalState()const { return GlobalState };
	bool IsInState(const State<entity_type>& st)const;

private:
	entity_type* Owner;
	State<entity_type>* CurrentState;
	State<entity_type>* PreviousState;
	State<entity_type>* GlobalState;
};


