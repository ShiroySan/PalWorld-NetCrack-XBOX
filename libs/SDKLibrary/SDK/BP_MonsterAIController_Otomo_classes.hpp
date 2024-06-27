#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_Otomo

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_MonsterAIControllerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C
// 0x0088 (0x05D8 - 0x0550)
class ABP_MonsterAIController_Otomo_C final : public ABP_MonsterAIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MonsterAIController_Otomo_C;     // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         OtomoSlotIndex;                                    // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4568[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalAIActionType, class UPalAIActionBase*> PlayingAIActionMap;                                // 0x0560(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           RegeneTimer;                                       // 0x05B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FollowInterpolatedPos;                             // 0x05B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FollowSpeed;                                       // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Attack_For_Enemy_With_Parameter(class AActor* Target, int32 SkillSlotID);
	void AttackForEnemy(class AActor* Target);
	void CanCoop(bool* Param_CanCoop);
	void ExecuteUbergraph_BP_MonsterAIController_Otomo(int32 EntryPoint);
	void FinishCoopAction();
	TSubclassOf<class UPalAIControllerWorkerModule> GetWorkerModuleClass();
	void OnCoopCanceled();
	void OnCoopFinished(class UPalAIActionBase* Action);
	void OnCoopRequest();
	void OnDamageOtomo(const struct FPalDamageResult& DamageResult);
	void OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo);
	void OnPressCoopButton();
	void OnSetTrainer(class APalCharacter* InCharacter);
	void OnTrainer(class APalCharacter* InCharacter);
	void Play_Otomo_Default_Composite_Action();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceivePossess(class APawn* PossessedPawn);
	void Regene_CustomEvent();
	void Set_Combat_Action_and_Target(class AActor* Target, class UPalAIActionCombatBase** AIAction);
	void SetCombatAction(class UPalAIActionCombatBase** AIAction);
	void SetHateEnemiesToOtomo();
	void Setup(int32 HolderSlotID);
	void ShowBaseCampLog(const struct FPalMonsterControllerBaseCampLogContent& Content);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_Otomo_C">();
	}
	static class ABP_MonsterAIController_Otomo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_Otomo_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_Otomo_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_Otomo_C");
static_assert(sizeof(ABP_MonsterAIController_Otomo_C) == 0x0005D8, "Wrong size on ABP_MonsterAIController_Otomo_C");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, UberGraphFrame_BP_MonsterAIController_Otomo_C) == 0x000550, "Member 'ABP_MonsterAIController_Otomo_C::UberGraphFrame_BP_MonsterAIController_Otomo_C' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, OtomoSlotIndex) == 0x000558, "Member 'ABP_MonsterAIController_Otomo_C::OtomoSlotIndex' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, PlayingAIActionMap) == 0x000560, "Member 'ABP_MonsterAIController_Otomo_C::PlayingAIActionMap' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, RegeneTimer) == 0x0005B0, "Member 'ABP_MonsterAIController_Otomo_C::RegeneTimer' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, FollowInterpolatedPos) == 0x0005B8, "Member 'ABP_MonsterAIController_Otomo_C::FollowInterpolatedPos' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_Otomo_C, FollowSpeed) == 0x0005D0, "Member 'ABP_MonsterAIController_Otomo_C::FollowSpeed' has a wrong offset!");

}

