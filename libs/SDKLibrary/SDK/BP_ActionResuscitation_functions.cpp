#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionResuscitation

#include "Basic.hpp"

#include "BP_ActionResuscitation_classes.hpp"
#include "BP_ActionResuscitation_parameters.hpp"


namespace SDK
{

// Function BP_ActionResuscitation.BP_ActionResuscitation_C.ExecuteUbergraph_BP_ActionResuscitation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionResuscitation_C::ExecuteUbergraph_BP_ActionResuscitation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "ExecuteUbergraph_BP_ActionResuscitation");

	Params::BP_ActionResuscitation_C_ExecuteUbergraph_BP_ActionResuscitation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionResuscitation.BP_ActionResuscitation_C.FlagControll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionResuscitation_C::FlagControll(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "FlagControll");

	Params::BP_ActionResuscitation_C_FlagControll Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionResuscitation.BP_ActionResuscitation_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionResuscitation_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionResuscitation.BP_ActionResuscitation_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionResuscitation_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionResuscitation.BP_ActionResuscitation_C.OnRescueUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionResuscitation_C::OnRescueUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "OnRescueUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionResuscitation.BP_ActionResuscitation_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionResuscitation_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionResuscitation_C", "TickAction");

	Params::BP_ActionResuscitation_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

