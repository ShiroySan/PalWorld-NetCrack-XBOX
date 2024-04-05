#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GliderObjectBase

#include "Basic.hpp"

#include "BP_GliderObjectBase_classes.hpp"
#include "BP_GliderObjectBase_parameters.hpp"


namespace SDK
{

// Function BP_GliderObjectBase.BP_GliderObjectBase_C.ExecuteUbergraph_BP_GliderObjectBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GliderObjectBase_C::ExecuteUbergraph_BP_GliderObjectBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "ExecuteUbergraph_BP_GliderObjectBase");

	Params::BP_GliderObjectBase_C_ExecuteUbergraph_BP_GliderObjectBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.OnEndGliding
// (BlueprintCallable, BlueprintEvent)

void ABP_GliderObjectBase_C::OnEndGliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "OnEndGliding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.OnStartGliding
// (BlueprintCallable, BlueprintEvent)

void ABP_GliderObjectBase_C::OnStartGliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "OnStartGliding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GliderObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

