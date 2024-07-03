#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Encount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C
// 0x0028 (0x0158 - 0x0130)
class UBP_AIAction_NPC_Encount_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TrgetActor;                                        // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Propagation;                                       // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   Shooter;                                           // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          OtomoHolder;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_Encount(int32 EntryPoint);
	void GetShooter(class UPalShooterComponent** ShooterComponent);
	void OnWeaponChanged(class APalWeaponBase* Weapon);
	void StartCombat();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Encount_C">();
	}
	static class UBP_AIAction_NPC_Encount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Encount_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Encount_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Encount_C");
static_assert(sizeof(UBP_AIAction_NPC_Encount_C) == 0x000158, "Wrong size on UBP_AIAction_NPC_Encount_C");
static_assert(offsetof(UBP_AIAction_NPC_Encount_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_NPC_Encount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Encount_C, TrgetActor) == 0x000138, "Member 'UBP_AIAction_NPC_Encount_C::TrgetActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Encount_C, Propagation) == 0x000140, "Member 'UBP_AIAction_NPC_Encount_C::Propagation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Encount_C, Shooter) == 0x000148, "Member 'UBP_AIAction_NPC_Encount_C::Shooter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Encount_C, OtomoHolder) == 0x000150, "Member 'UBP_AIAction_NPC_Encount_C::OtomoHolder' has a wrong offset!");

}

