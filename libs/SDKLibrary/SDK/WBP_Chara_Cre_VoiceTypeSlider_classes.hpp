#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chara_Cre_VoiceTypeSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Chara_Cre_VoiceTypeSlider.WBP_Chara_Cre_VoiceTypeSlider_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_Chara_Cre_VoiceTypeSlider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnalogSlider*                          AnalogSlider_Main;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_305;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SliderNum;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedValue;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MaxValue;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Construct();
	void ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider(int32 EntryPoint);
	void OnChangedValue__DelegateSignature(double Value);
	void OnInitialized();
	void SetValueForce(int32 VoiceID);
	void ToSliderValue(int32 VoiceID, double* SliderValue);
	void ToVoiceID(double SliderValue, int32* VoiceID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Chara_Cre_VoiceTypeSlider_C">();
	}
	static class UWBP_Chara_Cre_VoiceTypeSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Chara_Cre_VoiceTypeSlider_C>();
	}
};
static_assert(alignof(UWBP_Chara_Cre_VoiceTypeSlider_C) == 0x000008, "Wrong alignment on UWBP_Chara_Cre_VoiceTypeSlider_C");
static_assert(sizeof(UWBP_Chara_Cre_VoiceTypeSlider_C) == 0x0002B8, "Wrong size on UWBP_Chara_Cre_VoiceTypeSlider_C");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, AnalogSlider_Main) == 0x000280, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::AnalogSlider_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, Base) == 0x000288, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, ProgressBar_305) == 0x000290, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::ProgressBar_305' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, Text_SliderNum) == 0x000298, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::Text_SliderNum' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, OnChangedValue) == 0x0002A0, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::OnChangedValue' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, MaxValue) == 0x0002B0, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::MaxValue' has a wrong offset!");
static_assert(offsetof(UWBP_Chara_Cre_VoiceTypeSlider_C, LastIndex) == 0x0002B4, "Member 'UWBP_Chara_Cre_VoiceTypeSlider_C::LastIndex' has a wrong offset!");

}

