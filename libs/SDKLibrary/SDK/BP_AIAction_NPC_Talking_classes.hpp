#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Talking

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C
// 0x0040 (0x0170 - 0x0130)
class UBP_AIAction_NPC_Talking_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TalkTarget;                                        // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnEnd;                                           // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SelfActor;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTalking;                                         // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         TalkingPlayers;                                    // 0x0160(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void AddTalkActor(class AActor* TalkActor);
	void CheckTalkPlayers();
	void ExecuteUbergraph_BP_AIAction_NPC_Talking(int32 EntryPoint);
	void GetIsTalking(bool* Param_IsTalking);
	void OnTalkFinished();
	void RemoveTalkActor(class AActor* TalkActor);
	void UpdateTalkTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Talking_C">();
	}
	static class UBP_AIAction_NPC_Talking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Talking_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Talking_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Talking_C");
static_assert(sizeof(UBP_AIAction_NPC_Talking_C) == 0x000170, "Wrong size on UBP_AIAction_NPC_Talking_C");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_NPC_Talking_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, TalkTarget) == 0x000138, "Member 'UBP_AIAction_NPC_Talking_C::TalkTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, TurnEnd) == 0x000140, "Member 'UBP_AIAction_NPC_Talking_C::TurnEnd' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, SelfActor) == 0x000148, "Member 'UBP_AIAction_NPC_Talking_C::SelfActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, Timer) == 0x000150, "Member 'UBP_AIAction_NPC_Talking_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, IsTalking) == 0x000158, "Member 'UBP_AIAction_NPC_Talking_C::IsTalking' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Talking_C, TalkingPlayers) == 0x000160, "Member 'UBP_AIAction_NPC_Talking_C::TalkingPlayers' has a wrong offset!");

}

