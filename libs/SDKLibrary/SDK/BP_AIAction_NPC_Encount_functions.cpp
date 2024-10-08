#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Encount

#include "Basic.hpp"

#include "BP_AIAction_NPC_Encount_classes.hpp"
#include "BP_AIAction_NPC_Encount_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "ActionStart");

	Params::BP_AIAction_NPC_Encount_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.ExecuteUbergraph_BP_AIAction_NPC_Encount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::ExecuteUbergraph_BP_AIAction_NPC_Encount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "ExecuteUbergraph_BP_AIAction_NPC_Encount");

	Params::BP_AIAction_NPC_Encount_C_ExecuteUbergraph_BP_AIAction_NPC_Encount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.GetShooter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalShooterComponent*             ShooterComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::GetShooter(class UPalShooterComponent** ShooterComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "GetShooter");

	Params::BP_AIAction_NPC_Encount_C_GetShooter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShooterComponent != nullptr)
		*ShooterComponent = Parms.ShooterComponent;
}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::OnWeaponChanged(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "OnWeaponChanged");

	Params::BP_AIAction_NPC_Encount_C_OnWeaponChanged Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.StartCombat
// (BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Encount_C::StartCombat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "StartCombat");

	UObject::ProcessEvent(Func, nullptr);
}

}

