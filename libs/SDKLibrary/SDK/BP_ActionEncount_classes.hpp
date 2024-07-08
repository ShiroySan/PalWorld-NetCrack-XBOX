#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionEncount

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionEncount.BP_ActionEncount_C
// 0x0010 (0x0180 - 0x0170)
class UBP_ActionEncount_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionEncount_C;                 // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFacialComponent*                    PalFacial;                                         // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionEncount(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionEncount_C">();
	}
	static class UBP_ActionEncount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionEncount_C>();
	}
};
static_assert(alignof(UBP_ActionEncount_C) == 0x000010, "Wrong alignment on UBP_ActionEncount_C");
static_assert(sizeof(UBP_ActionEncount_C) == 0x000180, "Wrong size on UBP_ActionEncount_C");
static_assert(offsetof(UBP_ActionEncount_C, UberGraphFrame_BP_ActionEncount_C) == 0x000168, "Member 'UBP_ActionEncount_C::UberGraphFrame_BP_ActionEncount_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionEncount_C, PalFacial) == 0x000170, "Member 'UBP_ActionEncount_C::PalFacial' has a wrong offset!");

}

