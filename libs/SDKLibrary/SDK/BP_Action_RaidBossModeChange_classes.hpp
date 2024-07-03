#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_RaidBossModeChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C
// 0x0020 (0x0160 - 0x0140)
class UBP_Action_RaidBossModeChange_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             AddStatusEventDispatcher;                          // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddStatusEventDispatcher__DelegateSignature();
	void EmitWarpEffect();
	void ExecuteUbergraph_BP_Action_RaidBossModeChange(int32 EntryPoint);
	void FindModeChangeVisualEffectType(EPalElementType Element, EPalVisualEffectID* VisualEffect, TSoftClassPtr<class UClass>* Value);
	void FindMontage(EPalGeneralMontageType MontageType, class UAnimMontage** Montage);
	void OnBeginAction();
	void OnEndAction();
	void Play_Montage(EPalGeneralMontageType MontageType, double Rate);
	void RotateToTargetActor(class AActor* Target);
	void SetActiveCharacter(bool Active);
	void StopMontage(EPalGeneralMontageType MontageType);
	void WarpToBaseCamp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_RaidBossModeChange_C">();
	}
	static class UBP_Action_RaidBossModeChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_RaidBossModeChange_C>();
	}
};
static_assert(alignof(UBP_Action_RaidBossModeChange_C) == 0x000010, "Wrong alignment on UBP_Action_RaidBossModeChange_C");
static_assert(sizeof(UBP_Action_RaidBossModeChange_C) == 0x000160, "Wrong size on UBP_Action_RaidBossModeChange_C");
static_assert(offsetof(UBP_Action_RaidBossModeChange_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_RaidBossModeChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_RaidBossModeChange_C, AddStatusEventDispatcher) == 0x000148, "Member 'UBP_Action_RaidBossModeChange_C::AddStatusEventDispatcher' has a wrong offset!");

}

