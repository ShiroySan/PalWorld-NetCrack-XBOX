#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_MeleeAttack

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack
// 0x0120 (0x0120 - 0x0000)
struct BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F95[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0010(0x00E0)()
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F96[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack) == 0x000010, "Wrong alignment on BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack");
static_assert(sizeof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack) == 0x000120, "Wrong size on BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, K2Node_MakeStruct_ActionDynamicParameter) == 0x000010, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x0000F0, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, K2Node_Event_DeltaTime) == 0x0000F8, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, CallFunc_GetBodyActionComponentRef_ActionComp) == 0x000100, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::CallFunc_GetBodyActionComponentRef_ActionComp' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, CallFunc_PlayActionParameter_ReturnValue) == 0x000108, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_CombatGunState_MeleeAttack_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_MeleeAttack_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_CombatGunState_MeleeAttack_C_StateTick");
static_assert(sizeof(BP_AINPC_CombatGunState_MeleeAttack_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_CombatGunState_MeleeAttack_C_StateTick");
static_assert(offsetof(BP_AINPC_CombatGunState_MeleeAttack_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_CombatGunState_MeleeAttack_C_StateTick::DeltaTime' has a wrong offset!");

}

