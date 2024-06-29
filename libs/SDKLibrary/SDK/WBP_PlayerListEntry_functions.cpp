#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerListEntry

#include "Basic.hpp"

#include "WBP_PlayerListEntry_classes.hpp"
#include "WBP_PlayerListEntry_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerListEntry.WBP_PlayerListEntry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerListEntry_C::SetSelected(bool Param_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerListEntry_C", "SetSelected");

	Params::WBP_PlayerListEntry_C_SetSelected Parms{};

	Parms.Param_bIsSelected = Param_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerListEntry.WBP_PlayerListEntry_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsSelected                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerListEntry_C::IsSelected(bool* Param_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerListEntry_C", "IsSelected");

	Params::WBP_PlayerListEntry_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsSelected != nullptr)
		*Param_bIsSelected = Parms.Param_bIsSelected;
}


// Function WBP_PlayerListEntry.WBP_PlayerListEntry_C.ExecuteUbergraph_WBP_PlayerListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerListEntry_C::ExecuteUbergraph_WBP_PlayerListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerListEntry_C", "ExecuteUbergraph_WBP_PlayerListEntry");

	Params::WBP_PlayerListEntry_C_ExecuteUbergraph_WBP_PlayerListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerListEntry.WBP_PlayerListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerListEntry.WBP_PlayerListEntry_C.BndEvt__WBP_PlayerListEntry_CheckBox_1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerListEntry_C::BndEvt__WBP_PlayerListEntry_CheckBox_1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerListEntry_C", "BndEvt__WBP_PlayerListEntry_CheckBox_1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_PlayerListEntry_C_BndEvt__WBP_PlayerListEntry_CheckBox_1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

