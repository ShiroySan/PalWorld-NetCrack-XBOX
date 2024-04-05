#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalItemSlotBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalItemSlotBase.WBP_PalItemSlotBase_C
// 0x0098 (0x04A0 - 0x0408)
class UWBP_PalItemSlotBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalItemIconBase_C*                 MyIconWidget;                                      // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           TargetSlot;                                        // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateSlot;                                      // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetEmpty;                                        // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetValidSlot;                                    // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDisplayEmpty;                                    // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B9[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLiftedSlot;                                      // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFinishedLiftSlot;                                // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           CheckDurabilityTimerHandle;                        // 0x0478(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNotifyDurability;                                // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCorruptionUpdate;                                // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindEvent();
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemSlotBase(int32 EntryPoint);
	void On_Update_Slot_Internal(class UPalItemSlot* Param_Slot);
	void OnCorruptionUpdate__DelegateSignature();
	void OnFinishedLiftItem_Internal();
	void OnFinishedLiftSlot__DelegateSignature();
	void OnInitialized();
	void OnLiftedSlot__DelegateSignature(int32 LiftedItemNum);
	void OnLiftedSlot_Internal(const int32 LiftItemNum);
	void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability);
	void OnSetEmpty__DelegateSignature();
	void OnSetValidSlot__DelegateSignature();
	void OnTimer_CheckDurability();
	void OnUpdateDurability_Internal(float OldDurability, float NewDurability);
	void OnUpdateSlot__DelegateSignature(class UPalItemSlot* Param_TargetSlot);
	void OnUpdateSlotCorruption_Internal(class UPalItemSlot* Param_Slot);
	void RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget);
	void Setup(class UPalItemSlot* Param_TargetSlot);
	void Unbind_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalItemSlotBase_C">();
	}
	static class UWBP_PalItemSlotBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalItemSlotBase_C>();
	}
};
static_assert(alignof(UWBP_PalItemSlotBase_C) == 0x000008, "Wrong alignment on UWBP_PalItemSlotBase_C");
static_assert(sizeof(UWBP_PalItemSlotBase_C) == 0x0004A0, "Wrong size on UWBP_PalItemSlotBase_C");
static_assert(offsetof(UWBP_PalItemSlotBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalItemSlotBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, MyIconWidget) == 0x000410, "Member 'UWBP_PalItemSlotBase_C::MyIconWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, TargetSlot) == 0x000418, "Member 'UWBP_PalItemSlotBase_C::TargetSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnUpdateSlot) == 0x000420, "Member 'UWBP_PalItemSlotBase_C::OnUpdateSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnSetEmpty) == 0x000430, "Member 'UWBP_PalItemSlotBase_C::OnSetEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnSetValidSlot) == 0x000440, "Member 'UWBP_PalItemSlotBase_C::OnSetValidSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, IsDisplayEmpty) == 0x000450, "Member 'UWBP_PalItemSlotBase_C::IsDisplayEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnLiftedSlot) == 0x000458, "Member 'UWBP_PalItemSlotBase_C::OnLiftedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnFinishedLiftSlot) == 0x000468, "Member 'UWBP_PalItemSlotBase_C::OnFinishedLiftSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, CheckDurabilityTimerHandle) == 0x000478, "Member 'UWBP_PalItemSlotBase_C::CheckDurabilityTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnNotifyDurability) == 0x000480, "Member 'UWBP_PalItemSlotBase_C::OnNotifyDurability' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemSlotBase_C, OnCorruptionUpdate) == 0x000490, "Member 'UWBP_PalItemSlotBase_C::OnCorruptionUpdate' has a wrong offset!");

}

