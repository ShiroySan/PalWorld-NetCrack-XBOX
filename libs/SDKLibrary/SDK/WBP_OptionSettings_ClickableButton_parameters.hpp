#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ClickableButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.ExecuteUbergraph_WBP_OptionSettings_ClickableButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FBC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton) == 0x000008, "Wrong alignment on WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton");
static_assert(sizeof(WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton) == 0x000010, "Wrong size on WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton");
static_assert(offsetof(WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton, EntryPoint) == 0x000000, "Member 'WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

