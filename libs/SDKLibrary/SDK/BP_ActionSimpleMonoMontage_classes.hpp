#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSimpleMonoMontage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C
// 0x0030 (0x0170 - 0x0140)
#pragma pack(push, 0x1)
class alignas(0x10) UBP_ActionSimpleMonoMontage_C : public UPalActionBase
{
public:
	uint8                                         Pad_3D5C[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPalActionType                                ActionType;                                        // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5D[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorString;                                       // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        AnimPlayRate;                                      // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionSimpleMonoMontage(int32 EntryPoint);
	void FindMontage(class UAnimMontage** Montage, bool* Exist);
	void OnBeginAction();
	void OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnNotifyBegin(class FName NotifyName);
	void OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnNotifyEnd(class FName NotifyName);
	void OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSimpleMonoMontage_C">();
	}
	static class UBP_ActionSimpleMonoMontage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSimpleMonoMontage_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UBP_ActionSimpleMonoMontage_C) == 0x000010, "Wrong alignment on UBP_ActionSimpleMonoMontage_C");
static_assert(sizeof(UBP_ActionSimpleMonoMontage_C) == 0x000170, "Wrong size on UBP_ActionSimpleMonoMontage_C");
static_assert(offsetof(UBP_ActionSimpleMonoMontage_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionSimpleMonoMontage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionSimpleMonoMontage_C, ActionType) == 0x000148, "Member 'UBP_ActionSimpleMonoMontage_C::ActionType' has a wrong offset!");
static_assert(offsetof(UBP_ActionSimpleMonoMontage_C, ErrorString) == 0x000150, "Member 'UBP_ActionSimpleMonoMontage_C::ErrorString' has a wrong offset!");
static_assert(offsetof(UBP_ActionSimpleMonoMontage_C, AnimPlayRate) == 0x000160, "Member 'UBP_ActionSimpleMonoMontage_C::AnimPlayRate' has a wrong offset!");

}

