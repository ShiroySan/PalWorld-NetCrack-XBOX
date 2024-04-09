#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CopyMesh_ReturnToBallEmissive

#include "Basic.hpp"

#include "BP_CopyMesh_ReturnToBallEmissive_classes.hpp"
#include "BP_CopyMesh_ReturnToBallEmissive_parameters.hpp"


namespace SDK
{

// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.End
// (BlueprintCallable, BlueprintEvent)

void ABP_CopyMesh_ReturnToBallEmissive_C::End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CopyMesh_ReturnToBallEmissive_C::ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive");

	Params::BP_CopyMesh_ReturnToBallEmissive_C_ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.PlayPalReturnSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CopyMesh_ReturnToBallEmissive_C::PlayPalReturnSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "PlayPalReturnSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CopyMesh_ReturnToBallEmissive_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CopyMesh_ReturnToBallEmissive_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "ReceiveTick");

	Params::BP_CopyMesh_ReturnToBallEmissive_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.SetEmission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CopyMesh_ReturnToBallEmissive_C::SetEmission(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "SetEmission");

	Params::BP_CopyMesh_ReturnToBallEmissive_C_SetEmission Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CopyMesh_ReturnToBallEmissive.BP_CopyMesh_ReturnToBallEmissive_C.SetFade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CopyMesh_ReturnToBallEmissive_C::SetFade(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CopyMesh_ReturnToBallEmissive_C", "SetFade");

	Params::BP_CopyMesh_ReturnToBallEmissive_C_SetFade Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

