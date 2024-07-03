#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_NPCOtomo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MonsterAIControllerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C
// 0x0020 (0x0570 - 0x0550)
class ABP_MonsterAIController_NPCOtomo_C final : public ABP_MonsterAIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MonsterAIController_NPCOtomo_C;  // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAISensorComponent*                  PalAISensor;                                       // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnpossessed;                                     // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          TrainerNPC;                                        // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MonsterAIController_NPCOtomo(int32 EntryPoint);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard);
	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard);
	void ReceivePossess(class APawn* PossessedPawn);
	void _________2(const struct FPalDeadInfo& DeadInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_NPCOtomo_C">();
	}
	static class ABP_MonsterAIController_NPCOtomo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_NPCOtomo_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_NPCOtomo_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_NPCOtomo_C");
static_assert(sizeof(ABP_MonsterAIController_NPCOtomo_C) == 0x000570, "Wrong size on ABP_MonsterAIController_NPCOtomo_C");
static_assert(offsetof(ABP_MonsterAIController_NPCOtomo_C, UberGraphFrame_BP_MonsterAIController_NPCOtomo_C) == 0x000550, "Member 'ABP_MonsterAIController_NPCOtomo_C::UberGraphFrame_BP_MonsterAIController_NPCOtomo_C' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_NPCOtomo_C, PalAISensor) == 0x000558, "Member 'ABP_MonsterAIController_NPCOtomo_C::PalAISensor' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_NPCOtomo_C, IsOnpossessed) == 0x000560, "Member 'ABP_MonsterAIController_NPCOtomo_C::IsOnpossessed' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_NPCOtomo_C, TrainerNPC) == 0x000568, "Member 'ABP_MonsterAIController_NPCOtomo_C::TrainerNPC' has a wrong offset!");

}

