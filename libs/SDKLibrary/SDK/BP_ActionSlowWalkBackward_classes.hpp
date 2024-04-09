#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSlowWalkBackward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionSlowWalkBackward_C final : public UPalActionBase
{
public:
	uint8                                         Pad_1D54[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        PlayRate;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionSlowWalkBackward(int32 EntryPoint);
	void FindGoalPosition();
	void OnBeginAction();
	void OnBlendOut_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnCompleted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSlowWalkBackward_C">();
	}
	static class UBP_ActionSlowWalkBackward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSlowWalkBackward_C>();
	}
};
static_assert(alignof(UBP_ActionSlowWalkBackward_C) == 0x000010, "Wrong alignment on UBP_ActionSlowWalkBackward_C");
static_assert(sizeof(UBP_ActionSlowWalkBackward_C) == 0x000150, "Wrong size on UBP_ActionSlowWalkBackward_C");
static_assert(offsetof(UBP_ActionSlowWalkBackward_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionSlowWalkBackward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionSlowWalkBackward_C, PlayRate) == 0x000148, "Member 'UBP_ActionSlowWalkBackward_C::PlayRate' has a wrong offset!");

}

