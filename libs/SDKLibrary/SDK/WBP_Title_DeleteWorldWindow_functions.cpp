#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_DeleteWorldWindow

#include "Basic.hpp"

#include "WBP_Title_DeleteWorldWindow_classes.hpp"
#include "WBP_Title_DeleteWorldWindow_parameters.hpp"


namespace SDK
{

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Title_DeleteWorldWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.ExecuteUbergraph_WBP_Title_DeleteWorldWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::ExecuteUbergraph_WBP_Title_DeleteWorldWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "ExecuteUbergraph_WBP_Title_DeleteWorldWindow");

	Params::WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OnClosedDeleteCheckDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::OnClosedDeleteCheckDialog(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OnClosedDeleteCheckDialog");

	Params::WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Title_DeleteWorldWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OpenCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Title_DeleteWorldWindow_C::OpenCheckDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OpenCheckDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.SetEnableConfirmButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::SetEnableConfirmButton(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "SetEnableConfirmButton");

	Params::WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_DeleteWorldWindow_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

