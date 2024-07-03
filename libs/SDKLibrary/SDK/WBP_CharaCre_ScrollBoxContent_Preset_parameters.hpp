#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Preset

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.ApplyMakeInfo
// 0x0150 (0x0150 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo) == 0x000150, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo, MakeInfo) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ApplyMakeInfo::MakeInfo' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset
// 0x0060 (0x0060 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0010(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_PresetButton_C*           CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_CharaCre_PresetButton_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset) == 0x000060, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000030, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000048, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.GetRestoreFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget) == 0x000010, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget, CallFunc_GetTopFocusTarget_Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetRestoreFocusTarget::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.GetTopFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PresetButton_C*           K2Node_DynamicCast_AsWBP_Chara_Cre_Preset_Button;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget) == 0x000020, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget, K2Node_DynamicCast_AsWBP_Chara_Cre_Preset_Button) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget::K2Node_DynamicCast_AsWBP_Chara_Cre_Preset_Button' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_GetTopFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.OnClickedPresetButton_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal final
{
public:
	class UWBP_CharaCre_PresetButton_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetBindedPresetName_PresetName;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal) == 0x000010, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal, CallFunc_GetBindedPresetName_PresetName) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_OnClickedPresetButton_Internal::CallFunc_GetBindedPresetName_PresetName' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C.OnSelectedPreset__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature final
{
public:
	class FName                                   PresetName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature) == 0x000004, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature) == 0x000008, "Wrong size on WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature, PresetName) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Preset_C_OnSelectedPreset__DelegateSignature::PresetName' has a wrong offset!");

}

