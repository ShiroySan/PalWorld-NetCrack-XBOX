#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalWazaList

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalWazaList.WBP_PalWazaList_C
// 0x0098 (0x0310 - 0x0278)
class UWBP_PalWazaList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_64;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             WazaList;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          WBP_Button;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          WBP_Button_1;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          WBP_Button_2;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWazaAdded_Delegate;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWazaRemoved_Delegate;                            // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<EPalWazaID>                            SelectedWazas;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<EPalWazaID>                            AddedWazas;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   CharacterID;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bAllowUniqueAbilitiesOnAnyone;                     // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Refresh();
	void OnWazaStateChanged(bool bIsLearned, class UWBP_WazaButton_C* WazaElement);
	void OnWazaRemoved_Delegate__DelegateSignature(EPalWazaID WazaID);
	void OnWazaAdded_Delegate__DelegateSignature(EPalWazaID WazaID);
	void OnConfirm__DelegateSignature();
	void ExecuteUbergraph_WBP_PalWazaList(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_PalWazaList_WBP_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_PalWazaList_WBP_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_PalWazaList_WBP_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalWazaList_C">();
	}
	static class UWBP_PalWazaList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalWazaList_C>();
	}
};
static_assert(alignof(UWBP_PalWazaList_C) == 0x000008, "Wrong alignment on UWBP_PalWazaList_C");
static_assert(sizeof(UWBP_PalWazaList_C) == 0x000310, "Wrong size on UWBP_PalWazaList_C");
static_assert(offsetof(UWBP_PalWazaList_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalWazaList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, Image) == 0x000280, "Member 'UWBP_PalWazaList_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, Image_64) == 0x000288, "Member 'UWBP_PalWazaList_C::Image_64' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, WazaList) == 0x000290, "Member 'UWBP_PalWazaList_C::WazaList' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, WBP_Button) == 0x000298, "Member 'UWBP_PalWazaList_C::WBP_Button' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, WBP_Button_1) == 0x0002A0, "Member 'UWBP_PalWazaList_C::WBP_Button_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, WBP_Button_2) == 0x0002A8, "Member 'UWBP_PalWazaList_C::WBP_Button_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, OnConfirm) == 0x0002B0, "Member 'UWBP_PalWazaList_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, OnWazaAdded_Delegate) == 0x0002C0, "Member 'UWBP_PalWazaList_C::OnWazaAdded_Delegate' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, OnWazaRemoved_Delegate) == 0x0002D0, "Member 'UWBP_PalWazaList_C::OnWazaRemoved_Delegate' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, SelectedWazas) == 0x0002E0, "Member 'UWBP_PalWazaList_C::SelectedWazas' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, AddedWazas) == 0x0002F0, "Member 'UWBP_PalWazaList_C::AddedWazas' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, CharacterID) == 0x000300, "Member 'UWBP_PalWazaList_C::CharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_PalWazaList_C, bAllowUniqueAbilitiesOnAnyone) == 0x000308, "Member 'UWBP_PalWazaList_C::bAllowUniqueAbilitiesOnAnyone' has a wrong offset!");

}

