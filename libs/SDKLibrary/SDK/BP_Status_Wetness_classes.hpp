#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Wetness

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Status_WithVisualEffect_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_Wetness.BP_Status_Wetness_C
// 0x0010 (0x0070 - 0x0060)
class UBP_Status_Wetness_C final : public UBP_Status_WithVisualEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Status_Wetness_C;                // 0x0060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DurationTimer_BP;                                  // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_Wetness(int32 EntryPoint);
	void IsOwnerActivate(bool* IsActivate);
	void OnBeginStatus();
	void OnEndStatus();
	void TickStatus(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_Wetness_C">();
	}
	static class UBP_Status_Wetness_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_Wetness_C>();
	}
};
static_assert(alignof(UBP_Status_Wetness_C) == 0x000008, "Wrong alignment on UBP_Status_Wetness_C");
static_assert(sizeof(UBP_Status_Wetness_C) == 0x000070, "Wrong size on UBP_Status_Wetness_C");
static_assert(offsetof(UBP_Status_Wetness_C, UberGraphFrame_BP_Status_Wetness_C) == 0x000060, "Member 'UBP_Status_Wetness_C::UberGraphFrame_BP_Status_Wetness_C' has a wrong offset!");
static_assert(offsetof(UBP_Status_Wetness_C, DurationTimer_BP) == 0x000068, "Member 'UBP_Status_Wetness_C::DurationTimer_BP' has a wrong offset!");

}

