#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Freeze

#include "Basic.hpp"

#include "BP_VisualEffect_Status_Freeze_classes.hpp"
#include "BP_VisualEffect_Status_Freeze_parameters.hpp"


namespace SDK
{

// Function BP_VisualEffect_Status_Freeze.BP_VisualEffect_Status_Freeze_C.ExecuteUbergraph_BP_VisualEffect_Status_Freeze
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Freeze_C::ExecuteUbergraph_BP_VisualEffect_Status_Freeze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Freeze_C", "ExecuteUbergraph_BP_VisualEffect_Status_Freeze");

	Params::BP_VisualEffect_Status_Freeze_C_ExecuteUbergraph_BP_VisualEffect_Status_Freeze Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Status_Freeze.BP_VisualEffect_Status_Freeze_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Freeze_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Freeze_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Freeze.BP_VisualEffect_Status_Freeze_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Status_Freeze_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Freeze_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_Status_Freeze.BP_VisualEffect_Status_Freeze_C.Set Frostbite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Freeze_C::Set_Frostbite(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Freeze_C", "Set Frostbite");

	Params::BP_VisualEffect_Status_Freeze_C_Set_Frostbite Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Status_Freeze.BP_VisualEffect_Status_Freeze_C.TerminatingTickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Freeze_C::TerminatingTickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Status_Freeze_C", "TerminatingTickVisualEffect");

	Params::BP_VisualEffect_Status_Freeze_C_TerminatingTickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

