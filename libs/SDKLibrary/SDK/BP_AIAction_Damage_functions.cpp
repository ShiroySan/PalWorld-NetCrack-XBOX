#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Damage

#include "Basic.hpp"

#include "BP_AIAction_Damage_classes.hpp"
#include "BP_AIAction_Damage_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Damage_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Damage_C", "ActionStart");

	Params::BP_AIAction_Damage_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ExecuteUbergraph_BP_AIAction_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Damage_C::ExecuteUbergraph_BP_AIAction_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Damage_C", "ExecuteUbergraph_BP_AIAction_Damage");

	Params::BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

