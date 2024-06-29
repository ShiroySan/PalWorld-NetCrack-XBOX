#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Visitor_TravelToBaseCamp

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C
// 0x0070 (0x01C8 - 0x0158)
class UBP_AIAction_Visitor_TravelToBaseCamp_C final : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_C; // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                BaseCampLocation;                                  // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DashMode;                                          // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA1[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnArrivedTargetPoint;                              // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                PrevLocation;                                      // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckElapsedTime;                                  // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStuck;                                           // 0x01B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsStuck;                                           // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp(int32 EntryPoint);
	void Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult);
	void OnArrivedTargetPoint__DelegateSignature();
	void OnStuck__DelegateSignature();
	void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction);
	void SoundEvent(const struct FVector& EmitLocation);
	void Tick_Move_to_Base_Camp(class AActor* ControlledPawn, float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Visitor_TravelToBaseCamp_C">();
	}
	static class UBP_AIAction_Visitor_TravelToBaseCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Visitor_TravelToBaseCamp_C>();
	}
};
static_assert(alignof(UBP_AIAction_Visitor_TravelToBaseCamp_C) == 0x000008, "Wrong alignment on UBP_AIAction_Visitor_TravelToBaseCamp_C");
static_assert(sizeof(UBP_AIAction_Visitor_TravelToBaseCamp_C) == 0x0001C8, "Wrong size on UBP_AIAction_Visitor_TravelToBaseCamp_C");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_C) == 0x000158, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::UberGraphFrame_BP_AIAction_Visitor_TravelToBaseCamp_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, BaseCampLocation) == 0x000160, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::BaseCampLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, DashMode) == 0x000178, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::DashMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, OnArrivedTargetPoint) == 0x000180, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::OnArrivedTargetPoint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, PrevLocation) == 0x000190, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, StuckElapsedTime) == 0x0001A8, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::StuckElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, OnStuck) == 0x0001B0, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::OnStuck' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Visitor_TravelToBaseCamp_C, IsStuck) == 0x0001C0, "Member 'UBP_AIAction_Visitor_TravelToBaseCamp_C::IsStuck' has a wrong offset!");

}

