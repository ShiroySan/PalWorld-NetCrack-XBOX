#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionBlowAway

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionBlowAway.BP_ActionBlowAway_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionBlowAway_C final : public UPalActionBase
{
public:
	uint8                                         Pad_38C6[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CanStepTime;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanStep;                                           // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTickCheck;                                      // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanStepCancel();
	void ExecuteUbergraph_BP_ActionBlowAway(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnLandedDelegate______0(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit);
	void OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void StepEvent();
	void TickAction(float DeltaTime);
	void TickCheckEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionBlowAway_C">();
	}
	static class UBP_ActionBlowAway_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionBlowAway_C>();
	}
};
static_assert(alignof(UBP_ActionBlowAway_C) == 0x000010, "Wrong alignment on UBP_ActionBlowAway_C");
static_assert(sizeof(UBP_ActionBlowAway_C) == 0x000160, "Wrong size on UBP_ActionBlowAway_C");
static_assert(offsetof(UBP_ActionBlowAway_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionBlowAway_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionBlowAway_C, CanStepTime) == 0x000148, "Member 'UBP_ActionBlowAway_C::CanStepTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionBlowAway_C, CanStep) == 0x000150, "Member 'UBP_ActionBlowAway_C::CanStep' has a wrong offset!");
static_assert(offsetof(UBP_ActionBlowAway_C, CanTickCheck) == 0x000151, "Member 'UBP_ActionBlowAway_C::CanTickCheck' has a wrong offset!");

}

