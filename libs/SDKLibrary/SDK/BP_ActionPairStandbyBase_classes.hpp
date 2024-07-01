#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairStandbyBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionPairStandbyBase_C : public UPalActionBase
{
public:
	uint8                                         Pad_3DE9[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAIActionBase*                       PettingCallAction;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                 CallAIActionClass;                                 // 0x0150(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CancelEvent();
	void CheckCancel(bool* Cancel);
	void ExecuteUbergraph_BP_ActionPairStandbyBase(int32 EntryPoint);
	void GetStandByAnime(class UAnimMontage** Montage);
	void IsValidTarget(bool* IsValid);
	void OnBeginAction();
	void OnEndAction();
	void OnSetCallAIAction(class UPalAIActionBase* CallAction);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPairStandbyBase_C">();
	}
	static class UBP_ActionPairStandbyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPairStandbyBase_C>();
	}
};
static_assert(alignof(UBP_ActionPairStandbyBase_C) == 0x000010, "Wrong alignment on UBP_ActionPairStandbyBase_C");
static_assert(sizeof(UBP_ActionPairStandbyBase_C) == 0x000160, "Wrong size on UBP_ActionPairStandbyBase_C");
static_assert(offsetof(UBP_ActionPairStandbyBase_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionPairStandbyBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionPairStandbyBase_C, PettingCallAction) == 0x000148, "Member 'UBP_ActionPairStandbyBase_C::PettingCallAction' has a wrong offset!");
static_assert(offsetof(UBP_ActionPairStandbyBase_C, CallAIActionClass) == 0x000150, "Member 'UBP_ActionPairStandbyBase_C::CallAIActionClass' has a wrong offset!");

}

