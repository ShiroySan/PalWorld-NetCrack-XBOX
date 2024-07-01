#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana.BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana
// 0x0110 (0x0110 - 0x0000)
struct BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4668[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0010(0x00E0)()
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana) == 0x000010, "Wrong alignment on BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana");
static_assert(sizeof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana) == 0x000110, "Wrong size on BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana");
static_assert(offsetof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana, K2Node_MakeStruct_ActionDynamicParameter) == 0x000010, "Member 'BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x0000F0, "Member 'BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana, CallFunc_GetBodyActionComponentRef_ActionComp) == 0x0000F8, "Member 'BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana::CallFunc_GetBodyActionComponentRef_ActionComp' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana, CallFunc_PlayActionParameter_ReturnValue) == 0x000100, "Member 'BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");

}

