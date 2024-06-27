#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_AimMove

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_AimMove_classes.hpp"
#include "BP_AINPC_CombatGunState_AimMove_parameters.hpp"


namespace SDK
{

// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.CanMove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_CanMove                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::CanMove(bool* Param_CanMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "CanMove");

	Params::BP_AINPC_CombatGunState_AimMove_C_CanMove Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanMove != nullptr)
		*Param_CanMove = Parms.Param_CanMove;
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove");

	Params::BP_AINPC_CombatGunState_AimMove_C_ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.FindMoveGoal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GoalPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::FindMoveGoal(bool* Success, struct FVector* GoalPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "FindMoveGoal");

	Params::BP_AINPC_CombatGunState_AimMove_C_FindMoveGoal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (GoalPos != nullptr)
		*GoalPos = std::move(Parms.GoalPos);
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.MoveDIrectionWorldSpace
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::MoveDIrectionWorldSpace(struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "MoveDIrectionWorldSpace");

	Params::BP_AINPC_CombatGunState_AimMove_C_MoveDIrectionWorldSpace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_AimMove_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_AimMove_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateTick");

	Params::BP_AINPC_CombatGunState_AimMove_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

