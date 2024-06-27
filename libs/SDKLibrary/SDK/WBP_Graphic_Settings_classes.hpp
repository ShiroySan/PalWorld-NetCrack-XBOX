#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Graphic_Settings

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "DLSSBlueprint_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Graphic_Settings.WBP_Graphic_Settings_C
// 0x02C8 (0x0540 - 0x0278)
class UWBP_Graphic_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_AA;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_AutoContrast;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Brightness;                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_CameraRecoil;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_CameraShake;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_DLSS;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_DrawDistance;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_DrawGrass;                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_EffectQuality;                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_FOV;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_LODBias;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_MaxFPS;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_MotionBlur;                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Preset;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Resolution;                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RideCameraLength;               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Screen;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Shadow;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_TextureQuality;                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_VSync;                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionGraphicsSettings             Graphics_Settings_Cache;                           // 0x0328(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionLocalStaticSettings          LocalStaticSettingCache;                           // 0x0380(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FDataTableRowHandle>            ScreenSettingMsgIds;                               // 0x03D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>            LevelMsgIds;                                       // 0x03E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>            LevelMsgIds_Graphic;                               // 0x03F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          SomethingChanged;                                  // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A76[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, EAntiAliasingMethod>              AAMap;                                             // 0x0410(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class FString>                         AASettings;                                        // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FString>                    FPSSelection;                                      // 0x0470(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    NoLimitlMsgId;                                     // 0x04C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TArray<struct FIntPoint>                      SupportResolutions;                                // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>            DLSSLevelMsgIds;                                   // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, EUDLSSMode>                       DLSSMap;                                           // 0x04F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetDefault();
	void OnWindowChanged(int32 Selection);
	void OnVSyncChanged(bool IsOn);
	void OnViewDisChanged(int32 Selection);
	void OnTextureChanged(int32 Selection);
	void OnShadowChanged(int32 Selection);
	void OnRideCameraChanged(double Value);
	void OnResolutionChanged(int32 Selection);
	void OnPresetChanged(int32 Selection);
	void OnMotionBlurChanged(bool IsOn);
	void OnMaxFPSChanged(int32 Selection);
	void OnLODChanged(double Value);
	void OnFOVChanged(double Value);
	void OnFoliageChanged(int32 Selection);
	void OnDLSSChanged(int32 DLSSLevel);
	void OnCommonQualityChanged(int32 Selection);
	void OnCameraShakeChanged(bool IsOn);
	void OnCameraRecoilChanged(bool IsOn);
	void OnBrightnessChanged(double Value);
	void OnAutoContrastChanged(bool IsOn);
	void OnAAChanged(int32 Selection);
	void GetDisplayGraphicLevel(const struct FPalOptionGraphicsSettings& GraphicLevel, EPalOptionGraphicsLevel* Graphics___);
	void ExecuteUbergraph_WBP_Graphic_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Graphic_Settings_C">();
	}
	static class UWBP_Graphic_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Graphic_Settings_C>();
	}
};
static_assert(alignof(UWBP_Graphic_Settings_C) == 0x000008, "Wrong alignment on UWBP_Graphic_Settings_C");
static_assert(sizeof(UWBP_Graphic_Settings_C) == 0x000540, "Wrong size on UWBP_Graphic_Settings_C");
static_assert(offsetof(UWBP_Graphic_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Graphic_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, BP_PalTextBlock_C) == 0x000280, "Member 'UWBP_Graphic_Settings_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_AA) == 0x000288, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_AA' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_AutoContrast) == 0x000290, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_AutoContrast' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_Brightness) == 0x000298, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_Brightness' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_CameraRecoil) == 0x0002A0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_CameraRecoil' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_CameraShake) == 0x0002A8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_CameraShake' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_DLSS) == 0x0002B0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_DLSS' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_DrawDistance) == 0x0002B8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_DrawDistance' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_DrawGrass) == 0x0002C0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_DrawGrass' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_EffectQuality) == 0x0002C8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_EffectQuality' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_FOV) == 0x0002D0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_FOV' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_LODBias) == 0x0002D8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_LODBias' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_MaxFPS) == 0x0002E0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_MaxFPS' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_MotionBlur) == 0x0002E8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_MotionBlur' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_Preset) == 0x0002F0, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_Preset' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_Resolution) == 0x0002F8, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_Resolution' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_RideCameraLength) == 0x000300, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_RideCameraLength' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_Screen) == 0x000308, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_Screen' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_Shadow) == 0x000310, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_TextureQuality) == 0x000318, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_TextureQuality' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, WBP_OptionSettings_VSync) == 0x000320, "Member 'UWBP_Graphic_Settings_C::WBP_OptionSettings_VSync' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, Graphics_Settings_Cache) == 0x000328, "Member 'UWBP_Graphic_Settings_C::Graphics_Settings_Cache' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, LocalStaticSettingCache) == 0x000380, "Member 'UWBP_Graphic_Settings_C::LocalStaticSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, ScreenSettingMsgIds) == 0x0003D8, "Member 'UWBP_Graphic_Settings_C::ScreenSettingMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, LevelMsgIds) == 0x0003E8, "Member 'UWBP_Graphic_Settings_C::LevelMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, LevelMsgIds_Graphic) == 0x0003F8, "Member 'UWBP_Graphic_Settings_C::LevelMsgIds_Graphic' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, SomethingChanged) == 0x000408, "Member 'UWBP_Graphic_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, AAMap) == 0x000410, "Member 'UWBP_Graphic_Settings_C::AAMap' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, AASettings) == 0x000460, "Member 'UWBP_Graphic_Settings_C::AASettings' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, FPSSelection) == 0x000470, "Member 'UWBP_Graphic_Settings_C::FPSSelection' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, NoLimitlMsgId) == 0x0004C0, "Member 'UWBP_Graphic_Settings_C::NoLimitlMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, SupportResolutions) == 0x0004D0, "Member 'UWBP_Graphic_Settings_C::SupportResolutions' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, DLSSLevelMsgIds) == 0x0004E0, "Member 'UWBP_Graphic_Settings_C::DLSSLevelMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Graphic_Settings_C, DLSSMap) == 0x0004F0, "Member 'UWBP_Graphic_Settings_C::DLSSMap' has a wrong offset!");

}

