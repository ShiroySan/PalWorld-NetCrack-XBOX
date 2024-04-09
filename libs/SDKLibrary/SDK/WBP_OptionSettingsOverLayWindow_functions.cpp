#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettingsOverLayWindow

#include "Basic.hpp"

#include "WBP_OptionSettingsOverLayWindow_classes.hpp"
#include "WBP_OptionSettingsOverLayWindow_parameters.hpp"


namespace SDK
{

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.SetPadKeyA
// (BlueprintCallable, BlueprintEvent)

void UWBP_OptionSettingsOverLayWindow_C::SetPadKeyA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "SetPadKeyA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ResetCommandText
// (BlueprintCallable, BlueprintEvent)

void UWBP_OptionSettingsOverLayWindow_C::ResetCommandText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "ResetCommandText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_OptionSettingsOverLayWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OptionSettingsOverLayWindow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnMouseButtonDown");

	Params::WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeySetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             NewKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_OptionSettingsOverLayWindow_C::OnKeySetting(const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnKeySetting");

	Params::WBP_OptionSettingsOverLayWindow_C_OnKeySetting Parms{};

	Parms.NewKey = std::move(NewKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_OptionSettingsOverLayWindow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnKeyDown");

	Params::WBP_OptionSettingsOverLayWindow_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ExecuteUbergraph_WBP_OptionSettingsOverLayWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettingsOverLayWindow_C::ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "ExecuteUbergraph_WBP_OptionSettingsOverLayWindow");

	Params::WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_OptionSettingsOverLayWindow_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "BP_GetDesiredFocusTarget");

	Params::WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

