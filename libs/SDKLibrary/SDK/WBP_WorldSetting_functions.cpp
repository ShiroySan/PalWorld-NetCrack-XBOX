#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldSetting

#include "Basic.hpp"

#include "WBP_WorldSetting_classes.hpp"
#include "WBP_WorldSetting_parameters.hpp"


namespace SDK
{

// Function WBP_WorldSetting.WBP_WorldSetting_C.StartNewGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings          Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WorldSetting_C::StartNewGame(const struct FPalOptionWorldSettings& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "StartNewGame");

	Params::WBP_WorldSetting_C_StartNewGame Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenWorldNameInputWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSetting_C::OpenWorldNameInputWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenWorldNameInputWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenStartGameCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSetting_C::OpenStartGameCheckDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenStartGameCheckDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenCheckSaveSettingDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSetting_C::OpenCheckSaveSettingDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenCheckSaveSettingDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSetting_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnFilteredWorldName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           NewWorldName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnFilteredWorldName(const class FString& NewWorldName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnFilteredWorldName");

	Params::WBP_WorldSetting_C_OnFilteredWorldName Parms{};

	Parms.NewWorldName = std::move(NewWorldName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCompletedSaveSetting
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnCompletedSaveSetting(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnCompletedSaveSetting");

	Params::WBP_WorldSetting_C_OnCompletedSaveSetting Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedWorldNameInputWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*     Param_Param                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedWorldNameInputWindow(class UPalHUDDispatchParameterBase* Param_Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedWorldNameInputWindow");

	Params::WBP_WorldSetting_C_OnClosedWorldNameInputWindow Parms{};

	Parms.Param_Param = Param_Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedStartGameDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedStartGameDialog(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedStartGameDialog");

	Params::WBP_WorldSetting_C_OnClosedStartGameDialog Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedSaveSettingDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedSaveSettingDialog(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedSaveSettingDialog");

	Params::WBP_WorldSetting_C_OnClosedSaveSettingDialog Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorldSetting_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.ExecuteUbergraph_WBP_WorldSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::ExecuteUbergraph_WBP_WorldSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "ExecuteUbergraph_WBP_WorldSetting");

	Params::WBP_WorldSetting_C_ExecuteUbergraph_WBP_WorldSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldSetting_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature
// (BlueprintEvent)

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature
// (BlueprintEvent)

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature
// (BlueprintEvent)

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_WorldSetting_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BP_GetDesiredFocusTarget");

	Params::WBP_WorldSetting_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

