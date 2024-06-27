#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_MenuButton

#include "Basic.hpp"

#include "WBP_CharaCre_MenuButton_classes.hpp"
#include "WBP_CharaCre_MenuButton_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "AnmEvent_Normal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.AnmEvent_Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::AnmEvent_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "AnmEvent_Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "AnmEvent_Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CharaCre_MenuButton_C_BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.ExecuteUbergraph_WBP_CharaCre_MenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::ExecuteUbergraph_WBP_CharaCre_MenuButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "ExecuteUbergraph_WBP_CharaCre_MenuButton");

	Params::WBP_CharaCre_MenuButton_C_ExecuteUbergraph_WBP_CharaCre_MenuButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.GetBindedCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_UICharacterMakeCategory               CategoryType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::GetBindedCategory(E_UICharacterMakeCategory* CategoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "GetBindedCategory");

	Params::WBP_CharaCre_MenuButton_C_GetBindedCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryType != nullptr)
		*CategoryType = Parms.CategoryType;
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*       Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_MenuButton_C::OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "OnClicked__DelegateSignature");

	Params::WBP_CharaCre_MenuButton_C_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_MenuButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_MenuButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

