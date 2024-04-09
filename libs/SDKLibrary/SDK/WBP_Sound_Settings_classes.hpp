#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Sound_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Sound_Settings.WBP_Sound_Settings_C
// 0x0090 (0x0308 - 0x0278)
class UWBP_Sound_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Ambient;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_BGM;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Master;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_PalVoice;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_SE;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Voice;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings                AudioSettingCache;                                 // 0x02B8(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_3991[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDataTableRowHandle>            LevelMsgIds;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SomethingChanged;                                  // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3992[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionAudioSettings                OriginalSettingCache;                              // 0x02EC(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Sound_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings(bool ApplyOriginal);
	void OnAmbientChanged(double Value);
	void OnBGMChanged(double Value);
	void OnHumanVoiceChanged(double Value);
	void OnMasterChanged(double Value);
	void OnPalVoiceChanged(double Value);
	void OnSEChanged(double Value);
	void OnUIChanged(double Value);
	void SetDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Sound_Settings_C">();
	}
	static class UWBP_Sound_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Sound_Settings_C>();
	}
};
static_assert(alignof(UWBP_Sound_Settings_C) == 0x000008, "Wrong alignment on UWBP_Sound_Settings_C");
static_assert(sizeof(UWBP_Sound_Settings_C) == 0x000308, "Wrong size on UWBP_Sound_Settings_C");
static_assert(offsetof(UWBP_Sound_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Sound_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_Ambient) == 0x000280, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_Ambient' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_BGM) == 0x000288, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_BGM' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_Master) == 0x000290, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_Master' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_PalVoice) == 0x000298, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_PalVoice' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_SE) == 0x0002A0, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_SE' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_UI) == 0x0002A8, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_UI' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, WBP_OptionSettings_Voice) == 0x0002B0, "Member 'UWBP_Sound_Settings_C::WBP_OptionSettings_Voice' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, AudioSettingCache) == 0x0002B8, "Member 'UWBP_Sound_Settings_C::AudioSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, LevelMsgIds) == 0x0002D8, "Member 'UWBP_Sound_Settings_C::LevelMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, SomethingChanged) == 0x0002E8, "Member 'UWBP_Sound_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Sound_Settings_C, OriginalSettingCache) == 0x0002EC, "Member 'UWBP_Sound_Settings_C::OriginalSettingCache' has a wrong offset!");

}

