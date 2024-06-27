#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalItemSlotDragDropIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PalItemSlotDragDropIcon.WBP_PalItemSlotDragDropIcon_C.Setup
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalItemSlotDragDropIcon_C_Setup final
{
public:
	class FName                                   StaticItemId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayNum;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BCD[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(WBP_PalItemSlotDragDropIcon_C_Setup) == 0x000008, "Wrong alignment on WBP_PalItemSlotDragDropIcon_C_Setup");
static_assert(sizeof(WBP_PalItemSlotDragDropIcon_C_Setup) == 0x000028, "Wrong size on WBP_PalItemSlotDragDropIcon_C_Setup");
static_assert(offsetof(WBP_PalItemSlotDragDropIcon_C_Setup, StaticItemId) == 0x000000, "Member 'WBP_PalItemSlotDragDropIcon_C_Setup::StaticItemId' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotDragDropIcon_C_Setup, DisplayNum) == 0x000008, "Member 'WBP_PalItemSlotDragDropIcon_C_Setup::DisplayNum' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotDragDropIcon_C_Setup, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_PalItemSlotDragDropIcon_C_Setup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

