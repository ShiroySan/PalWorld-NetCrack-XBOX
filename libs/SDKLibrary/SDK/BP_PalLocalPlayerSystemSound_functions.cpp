#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalLocalPlayerSystemSound

#include "Basic.hpp"

#include "BP_PalLocalPlayerSystemSound_classes.hpp"
#include "BP_PalLocalPlayerSystemSound_parameters.hpp"


namespace SDK
{

// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.OnChangeHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalStatusHungerType                    Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalStatusHungerType                    Last                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalLocalPlayerSystemSound_C::OnChangeHunger(EPalStatusHungerType Current, EPalStatusHungerType Last)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalLocalPlayerSystemSound_C", "OnChangeHunger");

	Params::BP_PalLocalPlayerSystemSound_C_OnChangeHunger Parms{};

	Parms.Current = Current;
	Parms.Last = Last;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.SetupLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalLocalPlayerSystemSound_C::SetupLocalPlayer(class APalPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalLocalPlayerSystemSound_C", "SetupLocalPlayer");

	Params::BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

