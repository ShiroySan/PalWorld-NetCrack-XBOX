#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Invader_Idle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C
// 0x0008 (0x0138 - 0x0130)
class UBP_AIAction_Invader_Idle_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Invader_Idle(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Invader_Idle_C">();
	}
	static class UBP_AIAction_Invader_Idle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Invader_Idle_C>();
	}
};
static_assert(alignof(UBP_AIAction_Invader_Idle_C) == 0x000008, "Wrong alignment on UBP_AIAction_Invader_Idle_C");
static_assert(sizeof(UBP_AIAction_Invader_Idle_C) == 0x000138, "Wrong size on UBP_AIAction_Invader_Idle_C");
static_assert(offsetof(UBP_AIAction_Invader_Idle_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_Invader_Idle_C::UberGraphFrame' has a wrong offset!");

}

