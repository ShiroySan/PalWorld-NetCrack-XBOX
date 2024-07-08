#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamage

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamage.BP_ActionDamage_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionDamage_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionDamage_C;                  // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDamage(int32 EntryPoint);
	void GetEffectPosition(struct FVector* Location);
	void OnBeginAction();
	void OnEndAction();
	void ShowEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamage_C">();
	}
	static class UBP_ActionDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamage_C>();
	}
};
static_assert(alignof(UBP_ActionDamage_C) == 0x000010, "Wrong alignment on UBP_ActionDamage_C");
static_assert(sizeof(UBP_ActionDamage_C) == 0x000170, "Wrong size on UBP_ActionDamage_C");
static_assert(offsetof(UBP_ActionDamage_C, UberGraphFrame_BP_ActionDamage_C) == 0x000168, "Member 'UBP_ActionDamage_C::UberGraphFrame_BP_ActionDamage_C' has a wrong offset!");

}

