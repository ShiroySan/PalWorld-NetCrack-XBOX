#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ColorSelect_WithPreset

#include "Basic.hpp"

#include "WBP_CharaCre_ColorSelect_WithPreset_classes.hpp"
#include "WBP_CharaCre_ColorSelect_WithPreset_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CharaCre_ColorSelect_WithPreset_C::BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                     HSV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature Parms{};

	Parms.HSV = std::move(HSV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.CustomNavi_PresetToCustomColor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Param_Navigation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ColorSelect_WithPreset_C::CustomNavi_PresetToCustomColor(EUINavigation Param_Navigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "CustomNavi_PresetToCustomColor");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_CustomNavi_PresetToCustomColor Parms{};

	Parms.Param_Navigation = Param_Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.OnClickedPreset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::OnClickedPreset(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "OnClickedPreset");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_OnClickedPreset Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.OnColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     HSV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::OnColorChanged__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "OnColorChanged__DelegateSignature");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_OnColorChanged__DelegateSignature Parms{};

	Parms.HSV = std::move(HSV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "SetColor");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_SetColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.SetColorForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::SetColorForce(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "SetColorForce");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_SetColorForce Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FLinearColor>             PresetColors                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CharaCre_ColorSelect_WithPreset_C::Setup(TArray<struct FLinearColor>& PresetColors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "Setup");

	Params::WBP_CharaCre_ColorSelect_WithPreset_C_Setup Parms{};

	Parms.PresetColors = std::move(PresetColors);

	UObject::ProcessEvent(Func, &Parms);

	PresetColors = std::move(Parms.PresetColors);
}

}

