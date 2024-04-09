#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// 0x0028 (0x0028 - 0x0000)
struct WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D2[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Visible)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visiable;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen) == 0x000008, "Wrong alignment on WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen");
static_assert(sizeof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen) == 0x000028, "Wrong size on WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, EntryPoint) == 0x000000, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, Temp_bool_Variable) == 0x000004, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, Temp_byte_Variable) == 0x000005, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, K2Node_CustomEvent_Visiable) == 0x000021, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::K2Node_CustomEvent_Visiable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen, K2Node_Select_Default) == 0x000022, "Member 'WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen::K2Node_Select_Default' has a wrong offset!");

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.SetBgColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_LoadingScreen_C_SetBgColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_C_SetBgColor) == 0x000004, "Wrong alignment on WBP_LoadingScreen_C_SetBgColor");
static_assert(sizeof(WBP_LoadingScreen_C_SetBgColor) == 0x000010, "Wrong size on WBP_LoadingScreen_C_SetBgColor");
static_assert(offsetof(WBP_LoadingScreen_C_SetBgColor, Color) == 0x000000, "Member 'WBP_LoadingScreen_C_SetBgColor::Color' has a wrong offset!");

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ToggleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_LoadingScreen_C_ToggleVisibility final
{
public:
	bool                                          Visiable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_C_ToggleVisibility) == 0x000001, "Wrong alignment on WBP_LoadingScreen_C_ToggleVisibility");
static_assert(sizeof(WBP_LoadingScreen_C_ToggleVisibility) == 0x000001, "Wrong size on WBP_LoadingScreen_C_ToggleVisibility");
static_assert(offsetof(WBP_LoadingScreen_C_ToggleVisibility, Visiable) == 0x000000, "Member 'WBP_LoadingScreen_C_ToggleVisibility::Visiable' has a wrong offset!");

}

