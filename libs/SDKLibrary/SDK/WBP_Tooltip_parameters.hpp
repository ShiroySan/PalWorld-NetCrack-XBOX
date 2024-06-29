#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Tooltip.WBP_Tooltip_C.SetTitle
// 0x0020 (0x0020 - 0x0000)
struct WBP_Tooltip_C_SetTitle final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tooltip_C_SetTitle) == 0x000008, "Wrong alignment on WBP_Tooltip_C_SetTitle");
static_assert(sizeof(WBP_Tooltip_C_SetTitle) == 0x000020, "Wrong size on WBP_Tooltip_C_SetTitle");
static_assert(offsetof(WBP_Tooltip_C_SetTitle, Title) == 0x000000, "Member 'WBP_Tooltip_C_SetTitle::Title' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_SetTitle, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_Tooltip_C_SetTitle::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_Tooltip.WBP_Tooltip_C.SetContent
// 0x0018 (0x0018 - 0x0000)
struct WBP_Tooltip_C_SetContent final
{
public:
	class FText                                   Content;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Tooltip_C_SetContent) == 0x000008, "Wrong alignment on WBP_Tooltip_C_SetContent");
static_assert(sizeof(WBP_Tooltip_C_SetContent) == 0x000018, "Wrong size on WBP_Tooltip_C_SetContent");
static_assert(offsetof(WBP_Tooltip_C_SetContent, Content) == 0x000000, "Member 'WBP_Tooltip_C_SetContent::Content' has a wrong offset!");

// Function WBP_Tooltip.WBP_Tooltip_C.Set Key Guide
// 0x0048 (0x0048 - 0x0000)
struct WBP_Tooltip_C_Set_Key_Guide final
{
public:
	class FName                                   PrimaryActionKey;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   PrimaryActionInfo;                                 // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   SecondaryActionKey;                                // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   SecondaryActionInfo;                               // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_3;          // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tooltip_C_Set_Key_Guide) == 0x000008, "Wrong alignment on WBP_Tooltip_C_Set_Key_Guide");
static_assert(sizeof(WBP_Tooltip_C_Set_Key_Guide) == 0x000048, "Wrong size on WBP_Tooltip_C_Set_Key_Guide");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, PrimaryActionKey) == 0x000000, "Member 'WBP_Tooltip_C_Set_Key_Guide::PrimaryActionKey' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, PrimaryActionInfo) == 0x000008, "Member 'WBP_Tooltip_C_Set_Key_Guide::PrimaryActionInfo' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, SecondaryActionKey) == 0x000020, "Member 'WBP_Tooltip_C_Set_Key_Guide::SecondaryActionKey' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, SecondaryActionInfo) == 0x000028, "Member 'WBP_Tooltip_C_Set_Key_Guide::SecondaryActionInfo' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, CallFunc_NotEqual_NameName_ReturnValue) == 0x000040, "Member 'WBP_Tooltip_C_Set_Key_Guide::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000041, "Member 'WBP_Tooltip_C_Set_Key_Guide::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, CallFunc_NotEqual_NameName_ReturnValue_2) == 0x000042, "Member 'WBP_Tooltip_C_Set_Key_Guide::CallFunc_NotEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, CallFunc_NotEqual_NameName_ReturnValue_3) == 0x000043, "Member 'WBP_Tooltip_C_Set_Key_Guide::CallFunc_NotEqual_NameName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Tooltip_C_Set_Key_Guide, CallFunc_BooleanOR_ReturnValue) == 0x000044, "Member 'WBP_Tooltip_C_Set_Key_Guide::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Tooltip.WBP_Tooltip_C.ExecuteUbergraph_WBP_Tooltip
// 0x0004 (0x0004 - 0x0000)
struct WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip) == 0x000004, "Wrong alignment on WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip");
static_assert(sizeof(WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip) == 0x000004, "Wrong size on WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip");
static_assert(offsetof(WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip, EntryPoint) == 0x000000, "Member 'WBP_Tooltip_C_ExecuteUbergraph_WBP_Tooltip::EntryPoint' has a wrong offset!");

}

