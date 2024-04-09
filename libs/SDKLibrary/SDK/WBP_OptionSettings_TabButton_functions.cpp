#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_TabButton

#include "Basic.hpp"

#include "WBP_OptionSettings_TabButton_classes.hpp"
#include "WBP_OptionSettings_TabButton_parameters.hpp"


namespace SDK
{

// Function WBP_OptionSettings_TabButton.WBP_OptionSettings_TabButton_C.SwitchTabTo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_TabButton_C::SwitchTabTo__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_TabButton_C", "SwitchTabTo__DelegateSignature");

	Params::WBP_OptionSettings_TabButton_C_SwitchTabTo__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_TabButton.WBP_OptionSettings_TabButton_C.SetTabActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_TabButton_C::SetTabActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_TabButton_C", "SetTabActive");

	Params::WBP_OptionSettings_TabButton_C_SetTabActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_TabButton.WBP_OptionSettings_TabButton_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_TabButton_C::SetName(const class FText& Param_Name, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_TabButton_C", "SetName");

	Params::WBP_OptionSettings_TabButton_C_SetName Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_TabButton.WBP_OptionSettings_TabButton_C.ExecuteUbergraph_WBP_OptionSettings_TabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_TabButton_C::ExecuteUbergraph_WBP_OptionSettings_TabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_TabButton_C", "ExecuteUbergraph_WBP_OptionSettings_TabButton");

	Params::WBP_OptionSettings_TabButton_C_ExecuteUbergraph_WBP_OptionSettings_TabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionSettings_TabButton.WBP_OptionSettings_TabButton_C.BndEvt__WBP_OptionSettings_TabButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_TabButton_C::BndEvt__WBP_OptionSettings_TabButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionSettings_TabButton_C", "BndEvt__WBP_OptionSettings_TabButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_OptionSettings_TabButton_C_BndEvt__WBP_OptionSettings_TabButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

