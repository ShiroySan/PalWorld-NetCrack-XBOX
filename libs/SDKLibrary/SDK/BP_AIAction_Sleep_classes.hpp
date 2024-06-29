#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Sleep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Sleep.BP_AIAction_Sleep_C
// 0x0028 (0x0180 - 0x0158)
class UBP_AIAction_Sleep_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_Sleep_C;                // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DeepSleep;                                         // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449C[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    ActionComp;                                        // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  PawnSelf;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         SleepAction;                                       // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_Sleep(int32 EntryPoint);
	void OnAllActionFinishDelegate______0(const class UPalActionComponent* ActionComponent);
	void OnDamageDelegate______0(const struct FPalDamageResult& DamageResult);
	void ActionStart(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Sleep_C">();
	}
	static class UBP_AIAction_Sleep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Sleep_C>();
	}
};
static_assert(alignof(UBP_AIAction_Sleep_C) == 0x000008, "Wrong alignment on UBP_AIAction_Sleep_C");
static_assert(sizeof(UBP_AIAction_Sleep_C) == 0x000180, "Wrong size on UBP_AIAction_Sleep_C");
static_assert(offsetof(UBP_AIAction_Sleep_C, UberGraphFrame_BP_AIAction_Sleep_C) == 0x000158, "Member 'UBP_AIAction_Sleep_C::UberGraphFrame_BP_AIAction_Sleep_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Sleep_C, DeepSleep) == 0x000160, "Member 'UBP_AIAction_Sleep_C::DeepSleep' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Sleep_C, ActionComp) == 0x000168, "Member 'UBP_AIAction_Sleep_C::ActionComp' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Sleep_C, PawnSelf) == 0x000170, "Member 'UBP_AIAction_Sleep_C::PawnSelf' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Sleep_C, SleepAction) == 0x000178, "Member 'UBP_AIAction_Sleep_C::SleepAction' has a wrong offset!");

}

