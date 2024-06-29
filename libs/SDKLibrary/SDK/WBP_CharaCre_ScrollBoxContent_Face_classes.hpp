#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Face

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "WBP_CharaCre_ScrollBoxContentBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C
// 0x00C0 (0x04E8 - 0x0428)
class UWBP_CharaCre_ScrollBoxContent_Face_C final : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_ColorSelect_sq_C*         WBP_CharaCre_ColorSelect_sq_Brow;                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_sq_C*         WBP_CharaCre_ColorSelect_sq_Eye;                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelectPanel_C*       WBP_PartsSelectPanel_Eye;                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelectPanel_C*       WBP_PartsSelectPanel_Head;                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> HeadMeshMap;                                       // 0x0450(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   BrowColorPreset;                                   // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   EyeColorPreset;                                    // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelectedEyeColor;                                // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                                RestoreFocusWIdget;                                // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedBrowColor;                               // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face(int32 EntryPoint);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnChangedBrowColor(const struct FLinearColor& Color);
	void OnChangedEyeColor(const struct FLinearColor& Color);
	void OnCloseBrowColorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnClosedEyeColorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnSelectedBrowColor__DelegateSignature(const struct FLinearColor& Color);
	void OnSelectedEyeColor__DelegateSignature(const struct FLinearColor& Color);
	void GetTopFocusTarget(class UWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContent_Face_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContent_Face_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContent_Face_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContent_Face_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContent_Face_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContent_Face_C) == 0x0004E8, "Wrong size on UWBP_CharaCre_ScrollBoxContent_Face_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, UberGraphFrame) == 0x000428, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, WBP_CharaCre_ColorSelect_sq_Brow) == 0x000430, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::WBP_CharaCre_ColorSelect_sq_Brow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, WBP_CharaCre_ColorSelect_sq_Eye) == 0x000438, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::WBP_CharaCre_ColorSelect_sq_Eye' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, WBP_PartsSelectPanel_Eye) == 0x000440, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::WBP_PartsSelectPanel_Eye' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, WBP_PartsSelectPanel_Head) == 0x000448, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::WBP_PartsSelectPanel_Head' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, HeadMeshMap) == 0x000450, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::HeadMeshMap' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, BrowColorPreset) == 0x0004A0, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::BrowColorPreset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, EyeColorPreset) == 0x0004B0, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::EyeColorPreset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, OnSelectedEyeColor) == 0x0004C0, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::OnSelectedEyeColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, RestoreFocusWIdget) == 0x0004D0, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::RestoreFocusWIdget' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Face_C, OnSelectedBrowColor) == 0x0004D8, "Member 'UWBP_CharaCre_ScrollBoxContent_Face_C::OnSelectedBrowColor' has a wrong offset!");

}

