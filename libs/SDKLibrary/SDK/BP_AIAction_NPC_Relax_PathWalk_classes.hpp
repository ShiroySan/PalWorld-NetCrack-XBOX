#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Relax_PathWalk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"
#include "BP_AIAction_NPC_RelaxBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C
// 0x0080 (0x0278 - 0x01F8)
class UBP_AIAction_NPC_Relax_PathWalk_C : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_NPC_Relax_PathWalk_C;   // 0x01F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_NPC_WalkPathPoint_1_C*              Path;                                              // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPointIndex;                                 // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E7E[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetPoint;                                       // 0x0210(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WaitMode;                                          // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E7F[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         WaitAction;                                        // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                   PathArray;                                         // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x0248(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckTime;                                         // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaTime;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlreadyStuck;                                    // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk(int32 EntryPoint);
	void OnStuck();
	void OnTargetPointUpdateStart();
	void PlayWaitAction();
	void SetupWalkPath(const struct FF_NPC_PathWalkArray& PathInfo);
	void UpdateNextTargetPoint();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Relax_PathWalk_C">();
	}
	static class UBP_AIAction_NPC_Relax_PathWalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Relax_PathWalk_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Relax_PathWalk_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Relax_PathWalk_C");
static_assert(sizeof(UBP_AIAction_NPC_Relax_PathWalk_C) == 0x000278, "Wrong size on UBP_AIAction_NPC_Relax_PathWalk_C");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, UberGraphFrame_BP_AIAction_NPC_Relax_PathWalk_C) == 0x0001F8, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::UberGraphFrame_BP_AIAction_NPC_Relax_PathWalk_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, Path) == 0x000200, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::Path' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, CurrentPointIndex) == 0x000208, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::CurrentPointIndex' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, TargetPoint) == 0x000210, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::TargetPoint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, WaitMode) == 0x000228, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::WaitMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, WaitAction) == 0x000230, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::WaitAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, PathArray) == 0x000238, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::PathArray' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, PrevLocation) == 0x000248, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, StuckTime) == 0x000260, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::StuckTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, DeltaTime) == 0x000268, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_PathWalk_C, IsAlreadyStuck) == 0x000270, "Member 'UBP_AIAction_NPC_Relax_PathWalk_C::IsAlreadyStuck' has a wrong offset!");

}

