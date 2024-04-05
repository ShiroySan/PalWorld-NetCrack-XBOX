#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_RelaxBase

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C
// 0x00A0 (0x01F8 - 0x0158)
class UBP_AIAction_NPC_RelaxBase_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_NPC_RelaxBase_C;        // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          SelfActor;                                         // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                           UnequipTimer;                                      // 0x0168(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                DefaultLocation;                                   // 0x0170(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                DefaultForward;                                    // 0x0188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsReturnDefaultLocationAI;                         // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDefaultLocationMotionPlayMode;                   // 0x01A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_317E[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         DefaultLocationAction;                             // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EPalActionType                                DefaultActionType;                                 // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_317F[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TempDeltaTime;                                     // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefaultRotate;                                     // 0x01C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDefaultLocationForceSet;                         // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipSight;                                       // 0x01D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3180[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SightSkipTimer;                                    // 0x01E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentTarget;                                     // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalAIResponseType                            CurrentResponse;                                   // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
	void CancelDefaultAction();
	void ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint);
	void PlayDefaultAction();
	void SelfIsLeader(bool* Param_IsLeader);
	void SetSightSkipFlag();
	void SoundEvent(const struct FVector& EmitLocation);
	void _________0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_RelaxBase_C">();
	}
	static class UBP_AIAction_NPC_RelaxBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_RelaxBase_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_RelaxBase_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_RelaxBase_C");
static_assert(sizeof(UBP_AIAction_NPC_RelaxBase_C) == 0x0001F8, "Wrong size on UBP_AIAction_NPC_RelaxBase_C");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, UberGraphFrame_BP_AIAction_NPC_RelaxBase_C) == 0x000158, "Member 'UBP_AIAction_NPC_RelaxBase_C::UberGraphFrame_BP_AIAction_NPC_RelaxBase_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, SelfActor) == 0x000160, "Member 'UBP_AIAction_NPC_RelaxBase_C::SelfActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, UnequipTimer) == 0x000168, "Member 'UBP_AIAction_NPC_RelaxBase_C::UnequipTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, DefaultLocation) == 0x000170, "Member 'UBP_AIAction_NPC_RelaxBase_C::DefaultLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, DefaultForward) == 0x000188, "Member 'UBP_AIAction_NPC_RelaxBase_C::DefaultForward' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, IsReturnDefaultLocationAI) == 0x0001A0, "Member 'UBP_AIAction_NPC_RelaxBase_C::IsReturnDefaultLocationAI' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, IsDefaultLocationMotionPlayMode) == 0x0001A1, "Member 'UBP_AIAction_NPC_RelaxBase_C::IsDefaultLocationMotionPlayMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, DefaultLocationAction) == 0x0001A8, "Member 'UBP_AIAction_NPC_RelaxBase_C::DefaultLocationAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, DefaultActionType) == 0x0001B0, "Member 'UBP_AIAction_NPC_RelaxBase_C::DefaultActionType' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, TempDeltaTime) == 0x0001B8, "Member 'UBP_AIAction_NPC_RelaxBase_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, DefaultRotate) == 0x0001C0, "Member 'UBP_AIAction_NPC_RelaxBase_C::DefaultRotate' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, IsDefaultLocationForceSet) == 0x0001D8, "Member 'UBP_AIAction_NPC_RelaxBase_C::IsDefaultLocationForceSet' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, IsSkipSight) == 0x0001D9, "Member 'UBP_AIAction_NPC_RelaxBase_C::IsSkipSight' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, SightSkipTimer) == 0x0001E0, "Member 'UBP_AIAction_NPC_RelaxBase_C::SightSkipTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, CurrentTarget) == 0x0001E8, "Member 'UBP_AIAction_NPC_RelaxBase_C::CurrentTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_RelaxBase_C, CurrentResponse) == 0x0001F0, "Member 'UBP_AIAction_NPC_RelaxBase_C::CurrentResponse' has a wrong offset!");

}

