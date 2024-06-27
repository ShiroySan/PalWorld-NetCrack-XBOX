#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalDialog

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalDialog.WBP_PalDialog_C.ExecuteUbergraph_WBP_PalDialog
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4105[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDialogParameterDialog*              K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4106[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4107[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      CallFunc_GetLeftButton_rightButton;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      CallFunc_GetRightButton_button;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0058(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog) == 0x000008, "Wrong alignment on WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog");
static_assert(sizeof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog) == 0x000060, "Wrong size on WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, EntryPoint) == 0x000000, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, Temp_bool_Variable) == 0x000004, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog) == 0x000010, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, CallFunc_GetLeftButton_rightButton) == 0x000030, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::CallFunc_GetLeftButton_rightButton' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, CallFunc_GetRightButton_button) == 0x000038, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::CallFunc_GetRightButton_button' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, K2Node_Select_Default) == 0x000040, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog, CallFunc_RegisterActionBinding_ReturnValue) == 0x000058, "Member 'WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");

// Function WBP_PalDialog.WBP_PalDialog_C.OnShortcutConfirm
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalDialog_C_OnShortcutConfirm final
{
public:
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDialogParameterDialog*              K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDialog_C_OnShortcutConfirm) == 0x000008, "Wrong alignment on WBP_PalDialog_C_OnShortcutConfirm");
static_assert(sizeof(WBP_PalDialog_C_OnShortcutConfirm) == 0x000018, "Wrong size on WBP_PalDialog_C_OnShortcutConfirm");
static_assert(offsetof(WBP_PalDialog_C_OnShortcutConfirm, CallFunc_GetParam_ReturnValue) == 0x000000, "Member 'WBP_PalDialog_C_OnShortcutConfirm::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_OnShortcutConfirm, K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog) == 0x000008, "Member 'WBP_PalDialog_C_OnShortcutConfirm::K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_OnShortcutConfirm, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_PalDialog_C_OnShortcutConfirm::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PalDialog.WBP_PalDialog_C.SetupUI
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PalDialog_C_SetupUI final
{
public:
	EPalDialogType                                DialogType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4108[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Message;                                           // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4109[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0028(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0040(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x0058(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0x0070(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_4;        // 0x0088(0x0018)()
};
static_assert(alignof(WBP_PalDialog_C_SetupUI) == 0x000008, "Wrong alignment on WBP_PalDialog_C_SetupUI");
static_assert(sizeof(WBP_PalDialog_C_SetupUI) == 0x0000A0, "Wrong size on WBP_PalDialog_C_SetupUI");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, DialogType) == 0x000000, "Member 'WBP_PalDialog_C_SetupUI::DialogType' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, Message) == 0x000008, "Member 'WBP_PalDialog_C_SetupUI::Message' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_PalDialog_C_SetupUI::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000028, "Member 'WBP_PalDialog_C_SetupUI::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000040, "Member 'WBP_PalDialog_C_SetupUI::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, CallFunc_GetLocalizedTextFromHandle_Text_2) == 0x000058, "Member 'WBP_PalDialog_C_SetupUI::CallFunc_GetLocalizedTextFromHandle_Text_2' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, CallFunc_GetLocalizedTextFromHandle_Text_3) == 0x000070, "Member 'WBP_PalDialog_C_SetupUI::CallFunc_GetLocalizedTextFromHandle_Text_3' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_SetupUI, CallFunc_GetLocalizedTextFromHandle_Text_4) == 0x000088, "Member 'WBP_PalDialog_C_SetupUI::CallFunc_GetLocalizedTextFromHandle_Text_4' has a wrong offset!");

// Function WBP_PalDialog.WBP_PalDialog_C.BP_GetDesiredFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalDialog_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      CallFunc_GetLeftButton_rightButton;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      CallFunc_GetRightButton_button;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalDialog_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_PalDialog_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_PalDialog_C_BP_GetDesiredFocusTarget) == 0x000020, "Wrong size on WBP_PalDialog_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_PalDialog_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_PalDialog_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_BP_GetDesiredFocusTarget, CallFunc_GetLeftButton_rightButton) == 0x000008, "Member 'WBP_PalDialog_C_BP_GetDesiredFocusTarget::CallFunc_GetLeftButton_rightButton' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_BP_GetDesiredFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalDialog_C_BP_GetDesiredFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDialog_C_BP_GetDesiredFocusTarget, CallFunc_GetRightButton_button) == 0x000018, "Member 'WBP_PalDialog_C_BP_GetDesiredFocusTarget::CallFunc_GetRightButton_button' has a wrong offset!");

}

