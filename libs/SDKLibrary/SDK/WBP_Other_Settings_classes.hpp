#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Other_Settings

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Other_Settings.WBP_Other_Settings_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_Other_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Language;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings                AudioSettingCache;                                 // 0x0288(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_4B05[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDataTableRowHandle>            LangMsgIds;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SomethingChanged;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B06[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionAudioSettings                OriginalSettingCache;                              // 0x02BC(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 NewLang;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, struct FDataTableRowHandle> LangMap;                                           // 0x02E8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void SetDefault();
	void OnLanguageChanged(int32 Value);
	void ExecuteUbergraph_WBP_Other_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings(bool ApplyOriginal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Other_Settings_C">();
	}
	static class UWBP_Other_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Other_Settings_C>();
	}
};
static_assert(alignof(UWBP_Other_Settings_C) == 0x000008, "Wrong alignment on UWBP_Other_Settings_C");
static_assert(sizeof(UWBP_Other_Settings_C) == 0x000338, "Wrong size on UWBP_Other_Settings_C");
static_assert(offsetof(UWBP_Other_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Other_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, WBP_OptionSettings_Language) == 0x000280, "Member 'UWBP_Other_Settings_C::WBP_OptionSettings_Language' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, AudioSettingCache) == 0x000288, "Member 'UWBP_Other_Settings_C::AudioSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, LangMsgIds) == 0x0002A8, "Member 'UWBP_Other_Settings_C::LangMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, SomethingChanged) == 0x0002B8, "Member 'UWBP_Other_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, OriginalSettingCache) == 0x0002BC, "Member 'UWBP_Other_Settings_C::OriginalSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, NewLang) == 0x0002D8, "Member 'UWBP_Other_Settings_C::NewLang' has a wrong offset!");
static_assert(offsetof(UWBP_Other_Settings_C, LangMap) == 0x0002E8, "Member 'UWBP_Other_Settings_C::LangMap' has a wrong offset!");

}

