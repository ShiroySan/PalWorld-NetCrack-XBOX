#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CombatPal_RaidBoss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_AIAction_CombatPal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_CombatPal_RaidBoss.BP_AIAction_CombatPal_RaidBoss_C
// 0x0038 (0x0218 - 0x01E0)
class UBP_AIAction_CombatPal_RaidBoss_C final : public UBP_AIAction_CombatPal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_CombatPal_RaidBoss_C;   // 0x01E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsPowerUpMode;                                     // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E1[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  Camp_ID;                                           // 0x01EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanModeChange;                                     // 0x01FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E2[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HPOneTimer;                                        // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_NotActionTime;                               // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerNotTargetCounter;                            // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void Add_Status_by_Action_End_Timing();
	void AddStatusOneCharacter(class AActor* Actor, EPalStatusID Status);
	void AddStatusToAllTarget(EPalStatusID Status);
	void ChangeCombatStartLocation(bool* Change);
	void ChangeNextAction();
	void ChangeNextAction_ConsiderBaseCamp();
	void ExecuteUbergraph_BP_AIAction_CombatPal_RaidBoss(int32 EntryPoint);
	void FindNearestCampTarget(class AActor** Param_TargetActor);
	void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss** ModuleRaidBoss);
	void GetSelfPalSpawnInfo(struct FPalRaidBossSpawnInfo* BossInfo);
	void IsFarFromBaseCamp(bool* IsFar);
	void OnDead(const struct FPalDeadInfo& Dead);
	void OnPlayAction(class UPalActionBase* Action);
	void PlayWarpAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_CombatPal_RaidBoss_C">();
	}
	static class UBP_AIAction_CombatPal_RaidBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_CombatPal_RaidBoss_C>();
	}
};
static_assert(alignof(UBP_AIAction_CombatPal_RaidBoss_C) == 0x000008, "Wrong alignment on UBP_AIAction_CombatPal_RaidBoss_C");
static_assert(sizeof(UBP_AIAction_CombatPal_RaidBoss_C) == 0x000218, "Wrong size on UBP_AIAction_CombatPal_RaidBoss_C");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, UberGraphFrame_BP_AIAction_CombatPal_RaidBoss_C) == 0x0001E0, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::UberGraphFrame_BP_AIAction_CombatPal_RaidBoss_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, IsPowerUpMode) == 0x0001E8, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::IsPowerUpMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, Camp_ID) == 0x0001EC, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::Camp_ID' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, CanModeChange) == 0x0001FC, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::CanModeChange' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, HPOneTimer) == 0x000200, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::HPOneTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, Const_NotActionTime) == 0x000208, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::Const_NotActionTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatPal_RaidBoss_C, PlayerNotTargetCounter) == 0x000210, "Member 'UBP_AIAction_CombatPal_RaidBoss_C::PlayerNotTargetCounter' has a wrong offset!");

}

