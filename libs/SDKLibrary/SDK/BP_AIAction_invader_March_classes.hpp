#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_invader_March

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_invader_March.BP_AIAction_invader_March_C
// 0x0068 (0x0198 - 0x0130)
class UBP_AIAction_invader_March_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                MarchGoalPosition;                                 // 0x0138(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StackTimer;                                        // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartPoint;                                        // 0x0170(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NotStartTimer;                                     // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStartAble;                                       // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void AttackNearestMapObject();
	void CountupNotStartTimer(double DeltaTime);
	void ExecuteUbergraph_BP_AIAction_invader_March(int32 EntryPoint);
	void FindNearPlayer(class APalPlayerCharacter** Player);
	void Get_Controller_Ref(class APalAIController** AICon);
	void MoveToTargetLocation();
	void Setup(const struct FVector& GoalPosition);
	void SetupSkillSlot();
	void StartCombatMode();
	void Warp_Move();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_invader_March_C">();
	}
	static class UBP_AIAction_invader_March_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_invader_March_C>();
	}
};
static_assert(alignof(UBP_AIAction_invader_March_C) == 0x000008, "Wrong alignment on UBP_AIAction_invader_March_C");
static_assert(sizeof(UBP_AIAction_invader_March_C) == 0x000198, "Wrong size on UBP_AIAction_invader_March_C");
static_assert(offsetof(UBP_AIAction_invader_March_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_invader_March_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, MarchGoalPosition) == 0x000138, "Member 'UBP_AIAction_invader_March_C::MarchGoalPosition' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, PrevLocation) == 0x000150, "Member 'UBP_AIAction_invader_March_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, StackTimer) == 0x000168, "Member 'UBP_AIAction_invader_March_C::StackTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, StartPoint) == 0x000170, "Member 'UBP_AIAction_invader_March_C::StartPoint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, NotStartTimer) == 0x000188, "Member 'UBP_AIAction_invader_March_C::NotStartTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_invader_March_C, IsStartAble) == 0x000190, "Member 'UBP_AIAction_invader_March_C::IsStartAble' has a wrong offset!");

}

