#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSoundReaction

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionSoundReaction.BP_ActionSoundReaction_C.ExecuteUbergraph_BP_ActionSoundReaction
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E14[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction) == 0x000008, "Wrong alignment on BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction");
static_assert(sizeof(BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction) == 0x000018, "Wrong size on BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction");
static_assert(offsetof(BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction, EntryPoint) == 0x000000, "Member 'BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction, CallFunc_GetBattleManager_ReturnValue) == 0x000008, "Member 'BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");

}

