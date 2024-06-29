#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_WildPalDrinkWater

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C
// 0x0028 (0x0180 - 0x0158)
class UBP_AIAction_WildPalDrinkWater_C final : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_WildPalDrinkWater_C;    // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                GoalPos;                                           // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         EatAction;                                         // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_WildPalDrinkWater(int32 EntryPoint);
	void OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56(EPathFollowingResult MovementResult);
	void OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56(EPathFollowingResult MovementResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_WildPalDrinkWater_C">();
	}
	static class UBP_AIAction_WildPalDrinkWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_WildPalDrinkWater_C>();
	}
};
static_assert(alignof(UBP_AIAction_WildPalDrinkWater_C) == 0x000008, "Wrong alignment on UBP_AIAction_WildPalDrinkWater_C");
static_assert(sizeof(UBP_AIAction_WildPalDrinkWater_C) == 0x000180, "Wrong size on UBP_AIAction_WildPalDrinkWater_C");
static_assert(offsetof(UBP_AIAction_WildPalDrinkWater_C, UberGraphFrame_BP_AIAction_WildPalDrinkWater_C) == 0x000158, "Member 'UBP_AIAction_WildPalDrinkWater_C::UberGraphFrame_BP_AIAction_WildPalDrinkWater_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildPalDrinkWater_C, GoalPos) == 0x000160, "Member 'UBP_AIAction_WildPalDrinkWater_C::GoalPos' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildPalDrinkWater_C, EatAction) == 0x000178, "Member 'UBP_AIAction_WildPalDrinkWater_C::EatAction' has a wrong offset!");

}

