#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EggLotteryDataManager

#include "Basic.hpp"

#include "BP_EggLotteryDataManager_classes.hpp"
#include "BP_EggLotteryDataManager_parameters.hpp"


namespace SDK
{

// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.SetupPalEggLotteryData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EggLotteryDataManager_C::SetupPalEggLotteryData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "SetupPalEggLotteryData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EggLotteryDataManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.GetRandomEggPal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EggId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_EggLotteryDataManager_C::GetRandomEggPal(class FName EggId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "GetRandomEggPal");

	Params::BP_EggLotteryDataManager_C_GetRandomEggPal Parms{};

	Parms.EggId = EggId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.GetEggFromElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EggLotteryDataManager_C::GetEggFromElement(EPalElementType ElementType, class FName* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "GetEggFromElement");

	Params::BP_EggLotteryDataManager_C_GetEggFromElement Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.ExecuteUbergraph_BP_EggLotteryDataManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EggLotteryDataManager_C::ExecuteUbergraph_BP_EggLotteryDataManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "ExecuteUbergraph_BP_EggLotteryDataManager");

	Params::BP_EggLotteryDataManager_C_ExecuteUbergraph_BP_EggLotteryDataManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EggLotteryDataManager.BP_EggLotteryDataManager_C.AddPalEggLotteryDataEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EggId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EggLotteryDataManager_C::AddPalEggLotteryDataEntry(class FName EggId, class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EggLotteryDataManager_C", "AddPalEggLotteryDataEntry");

	Params::BP_EggLotteryDataManager_C_AddPalEggLotteryDataEntry Parms{};

	Parms.EggId = EggId;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}

}

