#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContentSwitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_OptionSettings_ListContentSwitch_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_OffToOn;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_OFFHover;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ONHover;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton_OFF;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton_ON;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CurrentIsOn;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CC[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSwitcherChanged;                                 // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SWITCH();
	void Setup(bool Param_IsOn);
	void OnSwitcherChanged__DelegateSignature(bool Param_IsOn);
	void IsOn(bool* Param_IsOn);
	void ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch(int32 EntryPoint);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettings_ListContentSwitch_C">();
	}
	static class UWBP_OptionSettings_ListContentSwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettings_ListContentSwitch_C>();
	}
};
static_assert(alignof(UWBP_OptionSettings_ListContentSwitch_C) == 0x000008, "Wrong alignment on UWBP_OptionSettings_ListContentSwitch_C");
static_assert(sizeof(UWBP_OptionSettings_ListContentSwitch_C) == 0x0002C0, "Wrong size on UWBP_OptionSettings_ListContentSwitch_C");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, UberGraphFrame) == 0x000278, "Member 'UWBP_OptionSettings_ListContentSwitch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, Anm_OffToOn) == 0x000280, "Member 'UWBP_OptionSettings_ListContentSwitch_C::Anm_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, CanvasPanel_OFFHover) == 0x000288, "Member 'UWBP_OptionSettings_ListContentSwitch_C::CanvasPanel_OFFHover' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, CanvasPanel_ONHover) == 0x000290, "Member 'UWBP_OptionSettings_ListContentSwitch_C::CanvasPanel_ONHover' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, WBP_PalCommonButton_OFF) == 0x000298, "Member 'UWBP_OptionSettings_ListContentSwitch_C::WBP_PalCommonButton_OFF' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, WBP_PalCommonButton_ON) == 0x0002A0, "Member 'UWBP_OptionSettings_ListContentSwitch_C::WBP_PalCommonButton_ON' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, CurrentIsOn) == 0x0002A8, "Member 'UWBP_OptionSettings_ListContentSwitch_C::CurrentIsOn' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ListContentSwitch_C, OnSwitcherChanged) == 0x0002B0, "Member 'UWBP_OptionSettings_ListContentSwitch_C::OnSwitcherChanged' has a wrong offset!");

}

