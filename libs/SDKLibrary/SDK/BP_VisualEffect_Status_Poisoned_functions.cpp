#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Poisoned

#include "Basic.hpp"

#include "BP_VisualEffect_Status_Poisoned_classes.hpp"
#include "BP_VisualEffect_Status_Poisoned_parameters.hpp"


namespace SDK
{

// Function BP_VisualEffect_Status_Poisoned.BP_VisualEffect_Status_Poisoned_C.ExecuteUbergraph_BP_VisualEffect_Status_Poisoned
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Poisoned_C::ExecuteUbergraph_BP_VisualEffect_Status_Poisoned(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Poisoned_C", "ExecuteUbergraph_BP_VisualEffect_Status_Poisoned");

	Params::BP_VisualEffect_Status_Poisoned_C_ExecuteUbergraph_BP_VisualEffect_Status_Poisoned Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Status_Poisoned.BP_VisualEffect_Status_Poisoned_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Poisoned_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Poisoned_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Poisoned.BP_VisualEffect_Status_Poisoned_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Poisoned_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Poisoned_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}

}

