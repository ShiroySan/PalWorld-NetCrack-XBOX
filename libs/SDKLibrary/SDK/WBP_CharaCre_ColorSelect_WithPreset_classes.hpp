#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ColorSelect_WithPreset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_CharaCre_ColorSelect_WithPreset_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Dot_0;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_2;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line0;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line0_1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_91;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_37;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_Free_C*       WBP_CharaCre_ColorSelect_Free_1;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_sq_C*         WBP_CharaCre_ColorSelect_sq;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WinBase;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnColorChanged;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         RowNum;                                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A8[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_ColorSelect_sq_C*         LastClickedButton;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature();
	void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
	class UWidget* CustomNavi_PresetToCustomColor(EUINavigation Param_Navigation);
	void ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset(int32 EntryPoint);
	void GetTopFocusTarget(class UWidget** Widget);
	void OnClickedPreset(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
	void SetColor(const struct FLinearColor& NewColor);
	void SetColorForce(const struct FLinearColor& NewColor);

	void Setup(TArray<struct FLinearColor>& PresetColors) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ColorSelect_WithPreset_C">();
	}
	static class UWBP_CharaCre_ColorSelect_WithPreset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ColorSelect_WithPreset_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ColorSelect_WithPreset_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ColorSelect_WithPreset_C");
static_assert(sizeof(UWBP_CharaCre_ColorSelect_WithPreset_C) == 0x0002F8, "Wrong size on UWBP_CharaCre_ColorSelect_WithPreset_C");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Dot_0) == 0x000280, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Dot_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Dot_1) == 0x000288, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Dot_2) == 0x000290, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Dot_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Dot_3) == 0x000298, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Line0) == 0x0002A0, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Line0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, Line0_1) == 0x0002A8, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::Line0_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, NamedSlot_91) == 0x0002B0, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::NamedSlot_91' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, UniformGridPanel_37) == 0x0002B8, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::UniformGridPanel_37' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, WBP_CharaCre_ColorSelect_Free_1) == 0x0002C0, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::WBP_CharaCre_ColorSelect_Free_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, WBP_CharaCre_ColorSelect_sq) == 0x0002C8, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::WBP_CharaCre_ColorSelect_sq' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, WinBase) == 0x0002D0, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::WinBase' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, OnColorChanged) == 0x0002D8, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::OnColorChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, RowNum) == 0x0002E8, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::RowNum' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ColorSelect_WithPreset_C, LastClickedButton) == 0x0002F0, "Member 'UWBP_CharaCre_ColorSelect_WithPreset_C::LastClickedButton' has a wrong offset!");

}

