#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonPopupWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.ExecuteUbergraph_WBP_CommonPopupWindow
// 0x0038 (0x0038 - 0x0000)
struct WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0020(0x0018)()
};
static_assert(alignof(WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow");
static_assert(sizeof(WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow) == 0x000038, "Wrong size on WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow");
static_assert(offsetof(WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow, EntryPoint) == 0x000000, "Member 'WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000020, "Member 'WBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.GetLeftButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_CommonPopupWindow_C_GetLeftButton final
{
public:
	class UCommonButtonBase*                      RightButton;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonPopupWindow_C_GetLeftButton) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_GetLeftButton");
static_assert(sizeof(WBP_CommonPopupWindow_C_GetLeftButton) == 0x000008, "Wrong size on WBP_CommonPopupWindow_C_GetLeftButton");
static_assert(offsetof(WBP_CommonPopupWindow_C_GetLeftButton, RightButton) == 0x000000, "Member 'WBP_CommonPopupWindow_C_GetLeftButton::RightButton' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.GetRightButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_CommonPopupWindow_C_GetRightButton final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonPopupWindow_C_GetRightButton) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_GetRightButton");
static_assert(sizeof(WBP_CommonPopupWindow_C_GetRightButton) == 0x000008, "Wrong size on WBP_CommonPopupWindow_C_GetRightButton");
static_assert(offsetof(WBP_CommonPopupWindow_C_GetRightButton, Button) == 0x000000, "Member 'WBP_CommonPopupWindow_C_GetRightButton::Button' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OverrideLeftButtonText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonPopupWindow_C_OverrideLeftButtonText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonPopupWindow_C_OverrideLeftButtonText) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_OverrideLeftButtonText");
static_assert(sizeof(WBP_CommonPopupWindow_C_OverrideLeftButtonText) == 0x000018, "Wrong size on WBP_CommonPopupWindow_C_OverrideLeftButtonText");
static_assert(offsetof(WBP_CommonPopupWindow_C_OverrideLeftButtonText, Text) == 0x000000, "Member 'WBP_CommonPopupWindow_C_OverrideLeftButtonText::Text' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OverrideRightButtonText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonPopupWindow_C_OverrideRightButtonText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonPopupWindow_C_OverrideRightButtonText) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_OverrideRightButtonText");
static_assert(sizeof(WBP_CommonPopupWindow_C_OverrideRightButtonText) == 0x000018, "Wrong size on WBP_CommonPopupWindow_C_OverrideRightButtonText");
static_assert(offsetof(WBP_CommonPopupWindow_C_OverrideRightButtonText, Text) == 0x000000, "Member 'WBP_CommonPopupWindow_C_OverrideRightButtonText::Text' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.SetMainText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonPopupWindow_C_SetMainText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonPopupWindow_C_SetMainText) == 0x000008, "Wrong alignment on WBP_CommonPopupWindow_C_SetMainText");
static_assert(sizeof(WBP_CommonPopupWindow_C_SetMainText) == 0x000018, "Wrong size on WBP_CommonPopupWindow_C_SetMainText");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetMainText, Text) == 0x000000, "Member 'WBP_CommonPopupWindow_C_SetMainText::Text' has a wrong offset!");

// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.SetOneButton
// 0x0005 (0x0005 - 0x0000)
struct WBP_CommonPopupWindow_C_SetOneButton final
{
public:
	bool                                          IsOneButton;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonPopupWindow_C_SetOneButton) == 0x000001, "Wrong alignment on WBP_CommonPopupWindow_C_SetOneButton");
static_assert(sizeof(WBP_CommonPopupWindow_C_SetOneButton) == 0x000005, "Wrong size on WBP_CommonPopupWindow_C_SetOneButton");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetOneButton, IsOneButton) == 0x000000, "Member 'WBP_CommonPopupWindow_C_SetOneButton::IsOneButton' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetOneButton, Temp_bool_Variable) == 0x000001, "Member 'WBP_CommonPopupWindow_C_SetOneButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetOneButton, Temp_byte_Variable) == 0x000002, "Member 'WBP_CommonPopupWindow_C_SetOneButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetOneButton, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_CommonPopupWindow_C_SetOneButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonPopupWindow_C_SetOneButton, K2Node_Select_Default) == 0x000004, "Member 'WBP_CommonPopupWindow_C_SetOneButton::K2Node_Select_Default' has a wrong offset!");

}

