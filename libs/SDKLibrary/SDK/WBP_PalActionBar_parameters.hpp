#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalActionBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalActionBar.WBP_PalActionBar_C.ExecuteUbergraph_WBP_PalActionBar
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B83[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumEntries_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar) == 0x000008, "Wrong alignment on WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar");
static_assert(sizeof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar) == 0x000068, "Wrong size on WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, EntryPoint) == 0x000000, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_GetNumEntries_ReturnValue) == 0x00005C, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_GetNumEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_Greater_IntInt_ReturnValue) == 0x000061, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000062, "Member 'WBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PalActionBar.WBP_PalActionBar_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalActionBar_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalActionBar_C_Tick) == 0x000008, "Wrong alignment on WBP_PalActionBar_C_Tick");
static_assert(sizeof(WBP_PalActionBar_C_Tick) == 0x000048, "Wrong size on WBP_PalActionBar_C_Tick");
static_assert(offsetof(WBP_PalActionBar_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalActionBar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalActionBar_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalActionBar_C_Tick::InDeltaTime' has a wrong offset!");

}

