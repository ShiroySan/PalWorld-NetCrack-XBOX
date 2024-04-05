#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_Combat_CommonState_MoveToTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget
// 0x0078 (0x0078 - 0x0000)
struct BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_MoveToTarget_IsNearTarget;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement_1;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement_2;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFF[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F00[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement_3;       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Alive_Target_Actor_Alive;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget) == 0x000008, "Wrong alignment on BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget");
static_assert(sizeof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget) == 0x000078, "Wrong size on BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, EntryPoint) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_MoveToTarget_IsNearTarget) == 0x000010, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_MoveToTarget_IsNearTarget' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1) == 0x000018, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetMovementComponentRef_Movement) == 0x000020, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetMovementComponentRef_Movement' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2) == 0x000028, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetMovementComponentRef_Movement_1) == 0x000030, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetMovementComponentRef_Movement_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3) == 0x000038, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetMovementComponentRef_Movement_2) == 0x000040, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetMovementComponentRef_Movement_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_IsMovingOnGround_ReturnValue) == 0x000048, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000049, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4) == 0x000050, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_BooleanAND_ReturnValue) == 0x000058, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetMovementComponentRef_Movement_3) == 0x000060, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetMovementComponentRef_Movement_3' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5) == 0x000068, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget, CallFunc_Is_Alive_Target_Actor_Alive) == 0x000070, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget::CallFunc_Is_Alive_Target_Actor_Alive' has a wrong offset!");

// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick");
static_assert(sizeof(BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick");
static_assert(offsetof(BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick::DeltaTime' has a wrong offset!");

}

