#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_Tab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_UICharacterMakeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_Tab.WBP_CharaCre_Tab_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_CharaCre_Tab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    MsgId;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	E_UICharacterMakeCategory                     BindCategoryType;                                  // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Normal();
	void BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_CharaCre_Tab(int32 EntryPoint);
	void GetBindedCategory(E_UICharacterMakeCategory* CategoryType);
	void OnClicked__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_Tab_C">();
	}
	static class UWBP_CharaCre_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_Tab_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_Tab_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_Tab_C");
static_assert(sizeof(UWBP_CharaCre_Tab_C) == 0x0002C8, "Wrong size on UWBP_CharaCre_Tab_C");
static_assert(offsetof(UWBP_CharaCre_Tab_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_Tab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, Anm_Focus) == 0x000280, "Member 'UWBP_CharaCre_Tab_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, Anm_Normal) == 0x000288, "Member 'UWBP_CharaCre_Tab_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, Text_Title) == 0x000290, "Member 'UWBP_CharaCre_Tab_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, WBP_PalCommonButton) == 0x000298, "Member 'UWBP_CharaCre_Tab_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, OnClicked) == 0x0002A0, "Member 'UWBP_CharaCre_Tab_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, MsgId) == 0x0002B0, "Member 'UWBP_CharaCre_Tab_C::MsgId' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_Tab_C, BindCategoryType) == 0x0002C0, "Member 'UWBP_CharaCre_Tab_C::BindCategoryType' has a wrong offset!");

}

