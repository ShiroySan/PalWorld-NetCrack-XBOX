#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PassiveSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PassiveSkill.WBP_PassiveSkill_C
// 0x00A0 (0x0318 - 0x0278)
class UWBP_PassiveSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Border;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_241;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FocusFrame;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_49;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PassiveNameText;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIndicator;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ID;                                                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClick;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetRank(int32 Rank);
	void SetEmpty(bool IsEmpty);
	void SetData(class FName Param_ID);
	void PrintToModLoader(const class FString& Message);
	void OnUnhovered__DelegateSignature();
	void OnRightClick__DelegateSignature(class UWBP_PassiveSkill_C* Button);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnHovered__DelegateSignature(class UWBP_PassiveSkill_C* Button, class FName Param_ID);
	void OnClicked__DelegateSignature(class UWBP_PassiveSkill_C* Button, class FName Param_ID);
	void ExecuteUbergraph_WBP_PassiveSkill(int32 EntryPoint);
	void BndEvt__WBP_PassiveSkill_Button_241_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_PassiveSkill_Button_241_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_PassiveSkill_Button_241_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PassiveSkill_C">();
	}
	static class UWBP_PassiveSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PassiveSkill_C>();
	}
};
static_assert(alignof(UWBP_PassiveSkill_C) == 0x000008, "Wrong alignment on UWBP_PassiveSkill_C");
static_assert(sizeof(UWBP_PassiveSkill_C) == 0x000318, "Wrong size on UWBP_PassiveSkill_C");
static_assert(offsetof(UWBP_PassiveSkill_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PassiveSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Border) == 0x000280, "Member 'UWBP_PassiveSkill_C::Border' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Button_241) == 0x000288, "Member 'UWBP_PassiveSkill_C::Button_241' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, FocusFrame) == 0x000290, "Member 'UWBP_PassiveSkill_C::FocusFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Image) == 0x000298, "Member 'UWBP_PassiveSkill_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Image_1) == 0x0002A0, "Member 'UWBP_PassiveSkill_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Image_2) == 0x0002A8, "Member 'UWBP_PassiveSkill_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Image_3) == 0x0002B0, "Member 'UWBP_PassiveSkill_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, Image_49) == 0x0002B8, "Member 'UWBP_PassiveSkill_C::Image_49' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, PassiveNameText) == 0x0002C0, "Member 'UWBP_PassiveSkill_C::PassiveNameText' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, RankIndicator) == 0x0002C8, "Member 'UWBP_PassiveSkill_C::RankIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, OnClicked) == 0x0002D0, "Member 'UWBP_PassiveSkill_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, ID) == 0x0002E0, "Member 'UWBP_PassiveSkill_C::ID' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, OnHovered) == 0x0002E8, "Member 'UWBP_PassiveSkill_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, OnUnhovered) == 0x0002F8, "Member 'UWBP_PassiveSkill_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_PassiveSkill_C, OnRightClick) == 0x000308, "Member 'UWBP_PassiveSkill_C::OnRightClick' has a wrong offset!");

}

