#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Visitor_WaitInBaseCamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIAction_NPC_Relax_Wander_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C
// 0x0028 (0x02F0 - 0x02C8)
class UBP_AIAction_Visitor_WaitInBaseCamp_C final : public UBP_AIAction_NPC_Relax_Wander_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_Visitor_WaitInBaseCamp_C; // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Timer;                                             // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnTimeMinutes;                                 // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40BB[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnWaitTimeFinished;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint);
	void OnWaitTimeFinished__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Visitor_WaitInBaseCamp_C">();
	}
	static class UBP_AIAction_Visitor_WaitInBaseCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Visitor_WaitInBaseCamp_C>();
	}
};
static_assert(alignof(UBP_AIAction_Visitor_WaitInBaseCamp_C) == 0x000008, "Wrong alignment on UBP_AIAction_Visitor_WaitInBaseCamp_C");
static_assert(sizeof(UBP_AIAction_Visitor_WaitInBaseCamp_C) == 0x0002F0, "Wrong size on UBP_AIAction_Visitor_WaitInBaseCamp_C");
static_assert(offsetof(UBP_AIAction_Visitor_WaitInBaseCamp_C, UberGraphFrame_BP_AIAction_Visitor_WaitInBaseCamp_C) == 0x0002C8, "Member 'UBP_AIAction_Visitor_WaitInBaseCamp_C::UberGraphFrame_BP_AIAction_Visitor_WaitInBaseCamp_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_WaitInBaseCamp_C, Timer) == 0x0002D0, "Member 'UBP_AIAction_Visitor_WaitInBaseCamp_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_WaitInBaseCamp_C, ReturnTimeMinutes) == 0x0002D8, "Member 'UBP_AIAction_Visitor_WaitInBaseCamp_C::ReturnTimeMinutes' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_WaitInBaseCamp_C, OnWaitTimeFinished) == 0x0002E0, "Member 'UBP_AIAction_Visitor_WaitInBaseCamp_C::OnWaitTimeFinished' has a wrong offset!");

}

