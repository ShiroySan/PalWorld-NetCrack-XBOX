#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_BG

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_BG.WBP_CharaCre_BG_C.ExecuteUbergraph_WBP_CharaCre_BG
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49D9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG) == 0x000008, "Wrong alignment on WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG");
static_assert(sizeof(WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG) == 0x000018, "Wrong size on WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG");
static_assert(offsetof(WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_CharaCre_BG_C_ExecuteUbergraph_WBP_CharaCre_BG::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

