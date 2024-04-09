#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContentButton

#include "Basic.hpp"

#include "WBP_OptionSettings_ListContentButton_classes.hpp"
#include "WBP_OptionSettings_ListContentButton_parameters.hpp"


namespace SDK
{

// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.SetUIIcon
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      InBrush                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentButton_C::SetUIIcon(const struct FSlateBrush& InBrush, class FName ActionName, ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "SetUIIcon");

	Params::WBP_OptionSettings_ListContentButton_C_SetUIIcon Parms{};

	Parms.InBrush = std::move(InBrush);
	Parms.ActionName = ActionName;
	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      KeyIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OptionSettings_ListContentButton_C::SetIcon(const struct FSlateBrush& KeyIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "SetIcon");

	Params::WBP_OptionSettings_ListContentButton_C_SetIcon Parms{};

	Parms.KeyIcon = std::move(KeyIcon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.GetCurrentIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      Brush                                                  (Parm, OutParm)

void UWBP_OptionSettings_ListContentButton_C::GetCurrentIcon(struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "GetCurrentIcon");

	Params::WBP_OptionSettings_ListContentButton_C_GetCurrentIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.ExecuteUbergraph_WBP_OptionSettings_ListContentButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentButton_C::ExecuteUbergraph_WBP_OptionSettings_ListContentButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "ExecuteUbergraph_WBP_OptionSettings_ListContentButton");

	Params::WBP_OptionSettings_ListContentButton_C_ExecuteUbergraph_WBP_OptionSettings_ListContentButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.EnableWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentButton_C::EnableWarning(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "EnableWarning");

	Params::WBP_OptionSettings_ListContentButton_C_EnableWarning Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

