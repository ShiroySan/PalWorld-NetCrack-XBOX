#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionFunnel_Default

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C
// 0x0010 (0x0060 - 0x0050)
class UBP_AIActionFunnel_Default_C final : public UPalAIActionFunnelCharacterDefault
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFunnelSkillModule*                  SkillModule;                                       // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CreateSkillActionModule(TSubclassOf<class UPalFunnelSkillModule> FunnelSkillModuleClass);
	void ExecuteUbergraph_BP_AIActionFunnel_Default(int32 EntryPoint);
	void OnTick_BP(float DeltaTime);
	class UPalAIActionBase* SetAction(class UClass* Param_Class);
	void SetActionFollowTrainer();
	void SetActionSkill();
	void SetOtomoFollowAction();
	void SetSkillAction();

	bool ShouldSetSkillAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionFunnel_Default_C">();
	}
	static class UBP_AIActionFunnel_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionFunnel_Default_C>();
	}
};
static_assert(alignof(UBP_AIActionFunnel_Default_C) == 0x000008, "Wrong alignment on UBP_AIActionFunnel_Default_C");
static_assert(sizeof(UBP_AIActionFunnel_Default_C) == 0x000060, "Wrong size on UBP_AIActionFunnel_Default_C");
static_assert(offsetof(UBP_AIActionFunnel_Default_C, UberGraphFrame) == 0x000050, "Member 'UBP_AIActionFunnel_Default_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionFunnel_Default_C, SkillModule) == 0x000058, "Member 'UBP_AIActionFunnel_Default_C::SkillModule' has a wrong offset!");

}

