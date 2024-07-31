#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillEffect_SelfDestruct

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C
// 0x0018 (0x03D8 - 0x03C0)
class ABP_SkillEffect_SelfDestruct_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_SelfDestruct_C;      // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       AttackCollision;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_SelfDestruct_C">();
	}
	static class ABP_SkillEffect_SelfDestruct_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_SelfDestruct_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_SelfDestruct_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_SelfDestruct_C");
static_assert(sizeof(ABP_SkillEffect_SelfDestruct_C) == 0x0003D8, "Wrong size on ABP_SkillEffect_SelfDestruct_C");
static_assert(offsetof(ABP_SkillEffect_SelfDestruct_C, UberGraphFrame_BP_SkillEffect_SelfDestruct_C) == 0x0003C0, "Member 'ABP_SkillEffect_SelfDestruct_C::UberGraphFrame_BP_SkillEffect_SelfDestruct_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SelfDestruct_C, AttackCollision) == 0x0003C8, "Member 'ABP_SkillEffect_SelfDestruct_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SelfDestruct_C, Niagara) == 0x0003D0, "Member 'ABP_SkillEffect_SelfDestruct_C::Niagara' has a wrong offset!");

}

