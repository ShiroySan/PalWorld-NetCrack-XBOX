#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_Reload

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_NPC_Reload.BP_Action_NPC_Reload_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_NPC_Reload_C final : public UPalActionBase
{
public:
	uint8                                         Pad_1224[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_NPC_Reload(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnCompleted_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_NPC_Reload_C">();
	}
	static class UBP_Action_NPC_Reload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_NPC_Reload_C>();
	}
};
static_assert(alignof(UBP_Action_NPC_Reload_C) == 0x000010, "Wrong alignment on UBP_Action_NPC_Reload_C");
static_assert(sizeof(UBP_Action_NPC_Reload_C) == 0x000150, "Wrong size on UBP_Action_NPC_Reload_C");
static_assert(offsetof(UBP_Action_NPC_Reload_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_NPC_Reload_C::UberGraphFrame' has a wrong offset!");

}

