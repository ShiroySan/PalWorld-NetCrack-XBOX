#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_Invader

#include "Basic.hpp"

#include "BP_MonsterAIController_Invader_classes.hpp"
#include "BP_MonsterAIController_Invader_parameters.hpp"


namespace SDK
{

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::BindOnInvaderArrivedDelegate(TDelegate<void()> Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ExecuteUbergraph_BP_MonsterAIController_Invader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ExecuteUbergraph_BP_MonsterAIController_Invader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ExecuteUbergraph_BP_MonsterAIController_Invader");

	Params::BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     LeaderPalBrackboard                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "GetLeaderBB");

	Params::BP_MonsterAIController_Invader_C_GetLeaderBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBrackboard                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "GetMyBB");

	Params::BP_MonsterAIController_Invader_C_GetMyBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "OnInvaderArrived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.OnInvaderArrivedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MonsterAIController_Invader_C::OnInvaderArrivedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "OnInvaderArrivedDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ReceivePossess");

	Params::BP_MonsterAIController_Invader_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReturnSpawnedPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoalLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ReturnSpawnedPoint(const struct FVector& GoalLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ReturnSpawnedPoint");

	Params::BP_MonsterAIController_Invader_C_ReturnSpawnedPoint Parms{};

	Parms.GoalLocation = std::move(GoalLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BaseCampPos                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::Setup(const struct FVector& BaseCampPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "Setup");

	Params::BP_MonsterAIController_Invader_C_Setup Parms{};

	Parms.BaseCampPos = std::move(BaseCampPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.StartMartch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoalPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::StartMartch(const struct FVector& GoalPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "StartMartch");

	Params::BP_MonsterAIController_Invader_C_StartMartch Parms{};

	Parms.GoalPosition = std::move(GoalPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.�������_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::_________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "�������_1");

	Params::BP_MonsterAIController_Invader_C__________1 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.�������_OnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_Invader_C::_________OnDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "�������_OnDead");

	Params::BP_MonsterAIController_Invader_C__________OnDead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

