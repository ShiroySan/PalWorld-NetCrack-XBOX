#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionPairCallBase

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionPairCallBase.BP_AIActionPairCallBase_C
// 0x0020 (0x0150 - 0x0130)
class UBP_AIActionPairCallBase_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Trainer;                                           // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Petting;                                           // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_39BD[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PairBehaviorActionClass;                           // 0x0148(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* Param_DynamicParameter);
	void ExecuteUbergraph_BP_AIActionPairCallBase(int32 EntryPoint);
	void OnFinish();
	void OnStartPair();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionPairCallBase_C">();
	}
	static class UBP_AIActionPairCallBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionPairCallBase_C>();
	}
};
static_assert(alignof(UBP_AIActionPairCallBase_C) == 0x000008, "Wrong alignment on UBP_AIActionPairCallBase_C");
static_assert(sizeof(UBP_AIActionPairCallBase_C) == 0x000150, "Wrong size on UBP_AIActionPairCallBase_C");
static_assert(offsetof(UBP_AIActionPairCallBase_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionPairCallBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionPairCallBase_C, Trainer) == 0x000138, "Member 'UBP_AIActionPairCallBase_C::Trainer' has a wrong offset!");
static_assert(offsetof(UBP_AIActionPairCallBase_C, Petting) == 0x000140, "Member 'UBP_AIActionPairCallBase_C::Petting' has a wrong offset!");
static_assert(offsetof(UBP_AIActionPairCallBase_C, PairBehaviorActionClass) == 0x000148, "Member 'UBP_AIActionPairCallBase_C::PairBehaviorActionClass' has a wrong offset!");

}

