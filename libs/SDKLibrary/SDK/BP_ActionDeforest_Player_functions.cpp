#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDeforest_Player

#include "Basic.hpp"

#include "BP_ActionDeforest_Player_classes.hpp"
#include "BP_ActionDeforest_Player_parameters.hpp"


namespace SDK
{

// Function BP_ActionDeforest_Player.BP_ActionDeforest_Player_C.ExecuteUbergraph_BP_ActionDeforest_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDeforest_Player_C::ExecuteUbergraph_BP_ActionDeforest_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_Player_C", "ExecuteUbergraph_BP_ActionDeforest_Player");

	Params::BP_ActionDeforest_Player_C_ExecuteUbergraph_BP_ActionDeforest_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDeforest_Player.BP_ActionDeforest_Player_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDeforest_Player_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_Player_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDeforest_Player.BP_ActionDeforest_Player_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDeforest_Player_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_Player_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

