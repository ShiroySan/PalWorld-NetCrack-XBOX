#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionMining

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionMining.BP_ActionMining_C
// 0x0020 (0x01A0 - 0x0180)
class UBP_ActionMining_C final : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionMining_C;                  // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 ToolActor;                                         // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionMining(int32 EntryPoint);
	void OnBeginAction();
	void OnBeginAnimNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionMining_C">();
	}
	static class UBP_ActionMining_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionMining_C>();
	}
};
static_assert(alignof(UBP_ActionMining_C) == 0x000010, "Wrong alignment on UBP_ActionMining_C");
static_assert(sizeof(UBP_ActionMining_C) == 0x0001A0, "Wrong size on UBP_ActionMining_C");
static_assert(offsetof(UBP_ActionMining_C, UberGraphFrame_BP_ActionMining_C) == 0x000180, "Member 'UBP_ActionMining_C::UberGraphFrame_BP_ActionMining_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionMining_C, ToolActor) == 0x000188, "Member 'UBP_ActionMining_C::ToolActor' has a wrong offset!");
static_assert(offsetof(UBP_ActionMining_C, FlagName) == 0x000190, "Member 'UBP_ActionMining_C::FlagName' has a wrong offset!");

}

