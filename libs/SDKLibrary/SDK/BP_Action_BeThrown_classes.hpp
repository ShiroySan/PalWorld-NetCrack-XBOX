#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_BeThrown

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_BeThrown.BP_Action_BeThrown_C
// 0x0010 (0x0160 - 0x0150)
class UBP_Action_BeThrown_C final : public UPalAction_BeThrown
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_BeThrown(int32 EntryPoint);
	void PlayThrownFX();
	void PlayThrownMontage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_BeThrown_C">();
	}
	static class UBP_Action_BeThrown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_BeThrown_C>();
	}
};
static_assert(alignof(UBP_Action_BeThrown_C) == 0x000010, "Wrong alignment on UBP_Action_BeThrown_C");
static_assert(sizeof(UBP_Action_BeThrown_C) == 0x000160, "Wrong size on UBP_Action_BeThrown_C");
static_assert(offsetof(UBP_Action_BeThrown_C, UberGraphFrame) == 0x000150, "Member 'UBP_Action_BeThrown_C::UberGraphFrame' has a wrong offset!");

}

