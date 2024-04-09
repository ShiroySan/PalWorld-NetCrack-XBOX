#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Sleep

#include "Basic.hpp"

#include "BP_AIAction_Sleep_classes.hpp"
#include "BP_AIAction_Sleep_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ExecuteUbergraph_BP_AIAction_Sleep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ExecuteUbergraph_BP_AIAction_Sleep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ExecuteUbergraph_BP_AIAction_Sleep");

	Params::BP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnAllActionFinishDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionComponent*              ActionComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::OnAllActionFinishDelegate______0(const class UPalActionComponent* ActionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "OnAllActionFinishDelegate_����_0");

	Params::BP_AIAction_Sleep_C_OnAllActionFinishDelegate______0 Parms{};

	Parms.ActionComponent = ActionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnDamageDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_Sleep_C::OnDamageDelegate______0(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "OnDamageDelegate_����_0");

	Params::BP_AIAction_Sleep_C_OnDamageDelegate______0 Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ActionFinished");

	Params::BP_AIAction_Sleep_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ActionStart");

	Params::BP_AIAction_Sleep_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

