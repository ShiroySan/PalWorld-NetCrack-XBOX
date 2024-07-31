#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterMake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "E_UICharacterMakeCategory_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterMake.WBP_CharacterMake_C
// 0x02C8 (0x06F8 - 0x0430)
class UWBP_CharacterMake_C final : public UPalUICharacterMakeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_C*                        WBP_CharaCre;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_BG_C*                     WBP_CharaCre_BG;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_1;                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_2;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_3;                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInframeRender_C*          WBP_PalPlayerInframeRender;                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     MouseZoomInInputAction;                            // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     MouseZoomOutInputAction;                           // 0x0478(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0480(0x0150)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_UICharacterMakeCategory                     NowDisplayCategory;                                // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1[0x3];                                      // 0x05D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     DecideInputAction;                                 // 0x05D4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     RandomizeInputAction;                              // 0x05DC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     PrevCategoryInputAction;                           // 0x05E4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     NextCategoryInputAction;                           // 0x05EC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_UICharacterMakeCategory                     LastActivatedCategory;                             // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F5[0x3];                                      // 0x05F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SVMax;                                             // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_CharacterMake* DispaltchParameter;                                // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   CachedPlayerName;                                  // 0x0608(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        RotationSpeed_Pad;                                 // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationSpeed_MouseDrag;                           // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomSpeed_Pad;                                     // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomRate_WheelTrigger;                             // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CachedAnalogValueX;                                // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CachedAnalogValueY;                                // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraRelativeLocation;                            // 0x0650(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMLBDown;                                         // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_669[0x7];                                      // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxZoomCameraOffset_BodySetting;                   // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZoomCameraOffset_HeadSetting;                   // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CompleteCheckMsgID;                                // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsRTriggerDown;                                    // 0x0690(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLTriggerDown;                                    // 0x0691(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_692[0x6];                                      // 0x0692(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CameraUpDownSpeed_ForPad;                          // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*    FadeInParameter;                                   // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefaultHeadCameraLocation;                         // 0x06A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefaultBodyCameraLocation;                         // 0x06C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     PlaySampleVoiceInInputAction;                      // 0x06D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   PlaySampleVoiceActionHandle;                       // 0x06E0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsCachingMakeData;                                 // 0x06E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E5[0x3];                                      // 0x06E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalPlayerDataCharacterMake_C*       CharacterMakeData;                                 // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyPreset(class FName PresetName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature(class FName MeshPresetRowName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature(E_UICharacterMakeCategory CategoryType);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature(class FName MeshPresetRowName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature(class FName MeshPresetRowName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_14_OnNotifyCloseSelectColorWIndow__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_15_OnClickedEditNameButton__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature(class FName EyeMaterialName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_17_OnClickedCompleteButton__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature(class FName PresetName);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature(int32 VoiceID);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_1_OnLeftRotationButtonClicked__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_20_OnClickedInGameCompleteButton__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_2_OnRightRotationButtonClicked__DelegateSignature();
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature(const struct FLinearColor& Color);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature(double Size);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature(double Size);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature(double Size);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature(const struct FLinearColor& Color);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature(const struct FLinearColor& Color);
	void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature(const struct FLinearColor& Color);
	void CalcEyeColor(const struct FLinearColor& SelectedHSV, struct FLinearColor* OutHSV);
	void DelayOpenEditNameWindow();
	void Destruct();
	void ExecuteUbergraph_WBP_CharacterMake(int32 EntryPoint);
	void Get_Character_Make_Data_Instance(class UBP_PalPlayerDataCharacterMake_C** MakeDataInstance);
	void GetAddCameraOffsetUpDown_ForPad(double* Offset);
	void GetMaxZoomOffset(double* MaxOffset);
	void GetNickname(class FString* Param_Name);
	void GetRandomBody(class FName* BodyName);
	void GetRandomColor(struct FLinearColor* Color);
	void GetRandomEye(class FName* EyeName);
	void GetRandomHair(class FName* HairName);
	void GetRandomHead(class FName* HeadName);
	void GetRandomPartsName_Internal(class UDataTable* DataTable, class FName* PartsName);
	void GetRandomVoiceID(int32* VoiceID);
	void InitializeDisplayCharacter();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAplliedHeadMesh(const struct FLinearColor& BrowMeshBaseColor, const struct FLinearColor& EyeMeshBaseColor);
	void OnAppliedBodyMesh(const struct FLinearColor& BodyMeshBasColor);
	void OnAppliedHairMesh(const struct FLinearColor& HairMeshBaseColor);
	void OnCancelAction();
	void OnChangeCategory_Internal(E_UICharacterMakeCategory CategoryType);
	void OnClosedCompleteCheckDialog(bool bResult);
	void OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnEndLoadingFadeIn();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnInitialized();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnNextCategoryInput();
	void OnPrevCategoryInput();
	void OnSetup();
	void OnTriggerCancel();
	void OnTriggerCompleteMake();
	void OnTriggerPlaySampleVoice();
	void OnTriggerZoomIn_MOuse();
	void OnTriggerZoomOut_Mouse();
	void OpenCompleteCheckDialog();
	void OpenNameEditWindow(const class FText& DefaultName);
	void PostCompleteNewMake();
	void ProcessCompleteMake();
	void RandomizeMakeInfo();
	void RegisterStaticInputAction();
	void RequestDisplay();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Camera_Location(double DeltaTime);
	void UpdateCameraLocationByWheel(bool IsZoomIn);
	void UpdateCharacterRotation(double DeltaTime);

	class UWidget* BP_GetDesiredFocusTarget() const;
	void GetRestoreFocusTarget(class UWidget** Target) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterMake_C">();
	}
	static class UWBP_CharacterMake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterMake_C>();
	}
};
static_assert(alignof(UWBP_CharacterMake_C) == 0x000008, "Wrong alignment on UWBP_CharacterMake_C");
static_assert(sizeof(UWBP_CharacterMake_C) == 0x0006F8, "Wrong size on UWBP_CharacterMake_C");
static_assert(offsetof(UWBP_CharacterMake_C, UberGraphFrame) == 0x000430, "Member 'UWBP_CharacterMake_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_CharaCre) == 0x000438, "Member 'UWBP_CharacterMake_C::WBP_CharaCre' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_CharaCre_BG) == 0x000440, "Member 'UWBP_CharacterMake_C::WBP_CharaCre_BG' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_PalKeyGuideIcon) == 0x000448, "Member 'UWBP_CharacterMake_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_PalKeyGuideIcon_1) == 0x000450, "Member 'UWBP_CharacterMake_C::WBP_PalKeyGuideIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_PalKeyGuideIcon_2) == 0x000458, "Member 'UWBP_CharacterMake_C::WBP_PalKeyGuideIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_PalKeyGuideIcon_3) == 0x000460, "Member 'UWBP_CharacterMake_C::WBP_PalKeyGuideIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, WBP_PalPlayerInframeRender) == 0x000468, "Member 'UWBP_CharacterMake_C::WBP_PalPlayerInframeRender' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, MouseZoomInInputAction) == 0x000470, "Member 'UWBP_CharacterMake_C::MouseZoomInInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, MouseZoomOutInputAction) == 0x000478, "Member 'UWBP_CharacterMake_C::MouseZoomOutInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, MakeInfo) == 0x000480, "Member 'UWBP_CharacterMake_C::MakeInfo' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, NowDisplayCategory) == 0x0005D0, "Member 'UWBP_CharacterMake_C::NowDisplayCategory' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, DecideInputAction) == 0x0005D4, "Member 'UWBP_CharacterMake_C::DecideInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, RandomizeInputAction) == 0x0005DC, "Member 'UWBP_CharacterMake_C::RandomizeInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, PrevCategoryInputAction) == 0x0005E4, "Member 'UWBP_CharacterMake_C::PrevCategoryInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, NextCategoryInputAction) == 0x0005EC, "Member 'UWBP_CharacterMake_C::NextCategoryInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, LastActivatedCategory) == 0x0005F4, "Member 'UWBP_CharacterMake_C::LastActivatedCategory' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, SVMax) == 0x0005F8, "Member 'UWBP_CharacterMake_C::SVMax' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, DispaltchParameter) == 0x000600, "Member 'UWBP_CharacterMake_C::DispaltchParameter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CachedPlayerName) == 0x000608, "Member 'UWBP_CharacterMake_C::CachedPlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, RotationSpeed_Pad) == 0x000620, "Member 'UWBP_CharacterMake_C::RotationSpeed_Pad' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, RotationSpeed_MouseDrag) == 0x000628, "Member 'UWBP_CharacterMake_C::RotationSpeed_MouseDrag' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, ZoomSpeed_Pad) == 0x000630, "Member 'UWBP_CharacterMake_C::ZoomSpeed_Pad' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, ZoomRate_WheelTrigger) == 0x000638, "Member 'UWBP_CharacterMake_C::ZoomRate_WheelTrigger' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CachedAnalogValueX) == 0x000640, "Member 'UWBP_CharacterMake_C::CachedAnalogValueX' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CachedAnalogValueY) == 0x000648, "Member 'UWBP_CharacterMake_C::CachedAnalogValueY' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CameraRelativeLocation) == 0x000650, "Member 'UWBP_CharacterMake_C::CameraRelativeLocation' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, IsMLBDown) == 0x000668, "Member 'UWBP_CharacterMake_C::IsMLBDown' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, MaxZoomCameraOffset_BodySetting) == 0x000670, "Member 'UWBP_CharacterMake_C::MaxZoomCameraOffset_BodySetting' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, MaxZoomCameraOffset_HeadSetting) == 0x000678, "Member 'UWBP_CharacterMake_C::MaxZoomCameraOffset_HeadSetting' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CompleteCheckMsgID) == 0x000680, "Member 'UWBP_CharacterMake_C::CompleteCheckMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, IsRTriggerDown) == 0x000690, "Member 'UWBP_CharacterMake_C::IsRTriggerDown' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, IsLTriggerDown) == 0x000691, "Member 'UWBP_CharacterMake_C::IsLTriggerDown' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CameraUpDownSpeed_ForPad) == 0x000698, "Member 'UWBP_CharacterMake_C::CameraUpDownSpeed_ForPad' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, FadeInParameter) == 0x0006A0, "Member 'UWBP_CharacterMake_C::FadeInParameter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, DefaultHeadCameraLocation) == 0x0006A8, "Member 'UWBP_CharacterMake_C::DefaultHeadCameraLocation' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, DefaultBodyCameraLocation) == 0x0006C0, "Member 'UWBP_CharacterMake_C::DefaultBodyCameraLocation' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, PlaySampleVoiceInInputAction) == 0x0006D8, "Member 'UWBP_CharacterMake_C::PlaySampleVoiceInInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, PlaySampleVoiceActionHandle) == 0x0006E0, "Member 'UWBP_CharacterMake_C::PlaySampleVoiceActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, IsCachingMakeData) == 0x0006E4, "Member 'UWBP_CharacterMake_C::IsCachingMakeData' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, CharacterMakeData) == 0x0006E8, "Member 'UWBP_CharacterMake_C::CharacterMakeData' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterMake_C, FlagName) == 0x0006F0, "Member 'UWBP_CharacterMake_C::FlagName' has a wrong offset!");

}

