#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_Combat_CommonState_BackwardTurn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn
// 0x0108 (0x0108 - 0x0000)
struct BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetShooterComponent_ShooterComp;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetShooterComponent_ShooterComp_1;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4660[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_1;                 // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_2;                 // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn) == 0x000008, "Wrong alignment on BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn");
static_assert(sizeof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn) == 0x000108, "Wrong size on BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, EntryPoint) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetSelfActor_SelfActor) == 0x000020, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetTargetActor_TargetActor) == 0x000028, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1) == 0x000030, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetController_ReturnValue_1) == 0x000038, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetShooterComponent_ShooterComp) == 0x000048, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetShooterComponent_ShooterComp' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetActorRightVector_ReturnValue) == 0x000050, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetActorForwardVector_ReturnValue) == 0x000068, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000080, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetShooterComponent_ShooterComp_1) == 0x000098, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetShooterComponent_ShooterComp_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0000A0, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000A8, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B8, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetSelfActor_SelfActor_1) == 0x0000E8, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetSelfActor_SelfActor_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F0, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetSelfActor_SelfActor_2) == 0x0000F8, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetSelfActor_SelfActor_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000100, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");

// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick");
static_assert(sizeof(BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick::DeltaTime' has a wrong offset!");

}

