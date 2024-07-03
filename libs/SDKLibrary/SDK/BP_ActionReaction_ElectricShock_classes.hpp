#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionReaction_ElectricShock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C
// 0x0080 (0x01C0 - 0x0140)
class UBP_ActionReaction_ElectricShock_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SelfTimer;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UCurveFloat*                            Curve_Right;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultMeshPosZ;                                   // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          VibEnd;                                            // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          ExistFacialNotify;                                 // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalSizeType, double>                    Const_VibGainMap;                                  // 0x0168(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void ChangeFacial(EPalFacialEyeType Eye);
	void ExecuteUbergraph_BP_ActionReaction_ElectricShock(int32 EntryPoint);
	void FindMontage(class UAnimMontage** NewParam);
	void OnBeginAction();
	void OnEndAction();
	void ResetMeshLocation();
	void SetDisable(bool Disable);
	void TickAction(float DeltaTime);
	void UpdateMeshLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionReaction_ElectricShock_C">();
	}
	static class UBP_ActionReaction_ElectricShock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionReaction_ElectricShock_C>();
	}
};
static_assert(alignof(UBP_ActionReaction_ElectricShock_C) == 0x000010, "Wrong alignment on UBP_ActionReaction_ElectricShock_C");
static_assert(sizeof(UBP_ActionReaction_ElectricShock_C) == 0x0001C0, "Wrong size on UBP_ActionReaction_ElectricShock_C");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionReaction_ElectricShock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, SelfTimer) == 0x000148, "Member 'UBP_ActionReaction_ElectricShock_C::SelfTimer' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, Curve_Right) == 0x000150, "Member 'UBP_ActionReaction_ElectricShock_C::Curve_Right' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, DefaultMeshPosZ) == 0x000158, "Member 'UBP_ActionReaction_ElectricShock_C::DefaultMeshPosZ' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, VibEnd) == 0x000160, "Member 'UBP_ActionReaction_ElectricShock_C::VibEnd' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, ExistFacialNotify) == 0x000161, "Member 'UBP_ActionReaction_ElectricShock_C::ExistFacialNotify' has a wrong offset!");
static_assert(offsetof(UBP_ActionReaction_ElectricShock_C, Const_VibGainMap) == 0x000168, "Member 'UBP_ActionReaction_ElectricShock_C::Const_VibGainMap' has a wrong offset!");

}

