#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Preset

#include "Basic.hpp"

#include "WBP_CharaCre_ScrollBoxContent_Preset_classes.hpp"
#include "WBP_CharaCre_ScrollBoxContent_Preset_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "ApplyMakeInfo");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo Parms{};

	Parms.MakeInfo = std::move(MakeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::GetRestoreFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "GetRestoreFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.OnClickedPresetButton_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_PresetButton_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::OnClickedPresetButton_Internal(class UWBP_CharaCre_PresetButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "OnClickedPresetButton_Internal");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.OnSelectedPreset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::OnSelectedPreset__DelegateSignature(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "OnSelectedPreset__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Preset_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Preset_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

