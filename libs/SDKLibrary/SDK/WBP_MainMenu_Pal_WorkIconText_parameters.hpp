#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Pal_WorkIconText

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText
// 0x0004 (0x0004 - 0x0000)
struct WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText) == 0x000004, "Wrong alignment on WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText");
static_assert(sizeof(WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText) == 0x000004, "Wrong size on WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText::EntryPoint' has a wrong offset!");

// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.SetSuitability
// 0x0048 (0x0048 - 0x0000)
struct WBP_MainMenu_Pal_WorkIconText_C_SetSuitability final
{
public:
	EPalWorkSuitability                           Suitability;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4035[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Rank;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4036[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_GetWorkSuitabilityName_outName;           // 0x0028(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_WorkIconText_C_SetSuitability");
static_assert(sizeof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability) == 0x000048, "Wrong size on WBP_MainMenu_Pal_WorkIconText_C_SetSuitability");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, Suitability) == 0x000000, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::Suitability' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, Rank) == 0x000004, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::Rank' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, Temp_byte_Variable) == 0x000008, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000009, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, CallFunc_GetWorkSuitabilityName_outName) == 0x000028, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::CallFunc_GetWorkSuitabilityName_outName' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, Temp_byte_Variable_1) == 0x000040, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, Temp_bool_Variable) == 0x000041, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_WorkIconText_C_SetSuitability, K2Node_Select_Default) == 0x000042, "Member 'WBP_MainMenu_Pal_WorkIconText_C_SetSuitability::K2Node_Select_Default' has a wrong offset!");

}

