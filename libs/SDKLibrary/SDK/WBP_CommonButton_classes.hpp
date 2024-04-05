#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonButton.WBP_CommonButton_C
// 0x00A0 (0x0318 - 0x0278)
class UWBP_CommonButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_OpenFocus;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             IconSlot;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_First_Focus_Target;                             // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_456E[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    InitializeMsgID;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          OverrideHover;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_456F[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          WWiseHoverAudio;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UnhoverAKAudioEvent;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          ClickAKAudioEvent;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Normal();
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_CommonButton(int32 EntryPoint);
	void GetFocusTarget(class UWidget** Widget);
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnInitialized();
	void OnUnhovered__DelegateSignature();
	void SetText(const class FText& Text);
	void Setup(bool IsFirstFocusTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonButton_C">();
	}
	static class UWBP_CommonButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonButton_C>();
	}
};
static_assert(alignof(UWBP_CommonButton_C) == 0x000008, "Wrong alignment on UWBP_CommonButton_C");
static_assert(sizeof(UWBP_CommonButton_C) == 0x000318, "Wrong size on UWBP_CommonButton_C");
static_assert(offsetof(UWBP_CommonButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommonButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_CommonButton_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, Anm_OpenFocus) == 0x000288, "Member 'UWBP_CommonButton_C::Anm_OpenFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, Anm_Normal) == 0x000290, "Member 'UWBP_CommonButton_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, IconSlot) == 0x000298, "Member 'UWBP_CommonButton_C::IconSlot' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, Text_Main) == 0x0002A0, "Member 'UWBP_CommonButton_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, WBP_PalInvisibleButton) == 0x0002A8, "Member 'UWBP_CommonButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, OnClicked) == 0x0002B0, "Member 'UWBP_CommonButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, Is_First_Focus_Target) == 0x0002C0, "Member 'UWBP_CommonButton_C::Is_First_Focus_Target' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, OnHovered) == 0x0002C8, "Member 'UWBP_CommonButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, OnUnhovered) == 0x0002D8, "Member 'UWBP_CommonButton_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, InitializeMsgID) == 0x0002E8, "Member 'UWBP_CommonButton_C::InitializeMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, OverrideHover) == 0x0002F8, "Member 'UWBP_CommonButton_C::OverrideHover' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, WWiseHoverAudio) == 0x000300, "Member 'UWBP_CommonButton_C::WWiseHoverAudio' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, UnhoverAKAudioEvent) == 0x000308, "Member 'UWBP_CommonButton_C::UnhoverAKAudioEvent' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_C, ClickAKAudioEvent) == 0x000310, "Member 'UWBP_CommonButton_C::ClickAKAudioEvent' has a wrong offset!");

}

