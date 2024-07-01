#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_FireMove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AINPC_CombatGunState_AimMove_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C
// 0x0030 (0x0088 - 0x0058)
class UBP_AINPC_CombatGunState_FireMove_C : public UBP_AINPC_CombatGunState_AimMove_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AINPC_CombatGunState_FireMove_C; // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Timer;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         ShootCount;                                        // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_468B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Interval;                                          // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        ShootAbleTimer;                                    // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_DeltaTime;                                    // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddShootTimer();
	void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove(int32 EntryPoint);
	void StateEnter();
	void StateTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AINPC_CombatGunState_FireMove_C">();
	}
	static class UBP_AINPC_CombatGunState_FireMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AINPC_CombatGunState_FireMove_C>();
	}
};
static_assert(alignof(UBP_AINPC_CombatGunState_FireMove_C) == 0x000008, "Wrong alignment on UBP_AINPC_CombatGunState_FireMove_C");
static_assert(sizeof(UBP_AINPC_CombatGunState_FireMove_C) == 0x000088, "Wrong size on UBP_AINPC_CombatGunState_FireMove_C");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, UberGraphFrame_BP_AINPC_CombatGunState_FireMove_C) == 0x000058, "Member 'UBP_AINPC_CombatGunState_FireMove_C::UberGraphFrame_BP_AINPC_CombatGunState_FireMove_C' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, Timer) == 0x000060, "Member 'UBP_AINPC_CombatGunState_FireMove_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, ShootCount) == 0x000068, "Member 'UBP_AINPC_CombatGunState_FireMove_C::ShootCount' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, Interval) == 0x000070, "Member 'UBP_AINPC_CombatGunState_FireMove_C::Interval' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, ShootAbleTimer) == 0x000078, "Member 'UBP_AINPC_CombatGunState_FireMove_C::ShootAbleTimer' has a wrong offset!");
static_assert(offsetof(UBP_AINPC_CombatGunState_FireMove_C, Temp_DeltaTime) == 0x000080, "Member 'UBP_AINPC_CombatGunState_FireMove_C::Temp_DeltaTime' has a wrong offset!");

}

