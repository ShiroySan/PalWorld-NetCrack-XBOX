#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_LoadingIcon

#include "Basic.hpp"

#include "WBP_Common_LoadingIcon_classes.hpp"
#include "WBP_Common_LoadingIcon_parameters.hpp"


namespace SDK
{

// Function WBP_Common_LoadingIcon.WBP_Common_LoadingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Common_LoadingIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_LoadingIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_LoadingIcon.WBP_Common_LoadingIcon_C.ExecuteUbergraph_WBP_Common_LoadingIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_LoadingIcon_C::ExecuteUbergraph_WBP_Common_LoadingIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_LoadingIcon_C", "ExecuteUbergraph_WBP_Common_LoadingIcon");

	Params::WBP_Common_LoadingIcon_C_ExecuteUbergraph_WBP_Common_LoadingIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

