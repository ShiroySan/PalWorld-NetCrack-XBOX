#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCooking

#include "Basic.hpp"

#include "BP_ActionCooking_classes.hpp"
#include "BP_ActionCooking_parameters.hpp"


namespace SDK
{

// Function BP_ActionCooking.BP_ActionCooking_C.ExecuteUbergraph_BP_ActionCooking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionCooking_C::ExecuteUbergraph_BP_ActionCooking(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCooking_C", "ExecuteUbergraph_BP_ActionCooking");

	Params::BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionCooking.BP_ActionCooking_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionCooking_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCooking_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionCooking.BP_ActionCooking_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionCooking_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCooking_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

