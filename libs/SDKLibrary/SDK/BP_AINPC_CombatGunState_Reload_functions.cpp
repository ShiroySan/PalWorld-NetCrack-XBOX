#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_Reload

#include "Basic.hpp"

#include "BP_AINPC_CombatGunState_Reload_classes.hpp"
#include "BP_AINPC_CombatGunState_Reload_parameters.hpp"


namespace SDK
{

// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.ExecuteUbergraph_BP_AINPC_CombatGunState_Reload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_Reload_C::ExecuteUbergraph_BP_AINPC_CombatGunState_Reload(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_Reload");

	Params::BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_Reload_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_Reload_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}

}

