#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContentLRBar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C.SetActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_OptionSettings_ListContentLRBar_C_SetActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentLRBar_C_SetActive) == 0x000001, "Wrong alignment on WBP_OptionSettings_ListContentLRBar_C_SetActive");
static_assert(sizeof(WBP_OptionSettings_ListContentLRBar_C_SetActive) == 0x000001, "Wrong size on WBP_OptionSettings_ListContentLRBar_C_SetActive");
static_assert(offsetof(WBP_OptionSettings_ListContentLRBar_C_SetActive, IsActive) == 0x000000, "Member 'WBP_OptionSettings_ListContentLRBar_C_SetActive::IsActive' has a wrong offset!");

// Function WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C.ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar
// 0x0018 (0x0018 - 0x0000)
struct WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsActive;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B20[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar) == 0x000004, "Wrong alignment on WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar");
static_assert(sizeof(WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar) == 0x000018, "Wrong size on WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar");
static_assert(offsetof(WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar, EntryPoint) == 0x000000, "Member 'WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar, K2Node_CustomEvent_IsActive) == 0x000004, "Member 'WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar::K2Node_CustomEvent_IsActive' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar, CallFunc_SelectColor_ReturnValue) == 0x000008, "Member 'WBP_OptionSettings_ListContentLRBar_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}

