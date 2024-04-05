#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_Combat_CommonState_BackStep

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep
// 0x0148 (0x0148 - 0x0000)
struct BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F0A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_1;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_2;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F0B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor_1;             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F0C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_3;                 // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F0D[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_4;                 // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor_2;             // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F0E[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetActor_TargetActor_3;             // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep) == 0x000008, "Wrong alignment on BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep");
static_assert(sizeof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep) == 0x000148, "Wrong size on BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, EntryPoint) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetSelfActor_SelfActor) == 0x000008, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetSelfActor_SelfActor_1) == 0x000010, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetSelfActor_SelfActor_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetTargetActor_TargetActor) == 0x000018, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetSelfActor_SelfActor_2) == 0x000050, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetSelfActor_SelfActor_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000058, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_X) == 0x000078, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_Y) == 0x000080, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_Z) == 0x000088, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetTargetActor_TargetActor_1) == 0x0000A8, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_Normal_ReturnValue) == 0x0000B0, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_IsValid_ReturnValue_1) == 0x0000C8, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_X_1) == 0x0000D0, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_Y_1) == 0x0000D8, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_BreakVector_Z_1) == 0x0000E0, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_MakeVector_ReturnValue_1) == 0x0000E8, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetSelfActor_SelfActor_3) == 0x000100, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetSelfActor_SelfActor_3' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000108, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, K2Node_Event_DeltaTime) == 0x000120, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetSelfActor_SelfActor_4) == 0x000128, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetSelfActor_SelfActor_4' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetTargetActor_TargetActor_2) == 0x000130, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetTargetActor_TargetActor_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_IsValid_ReturnValue_2) == 0x000138, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_IsValid_ReturnValue_3) == 0x000139, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep, CallFunc_GetTargetActor_TargetActor_3) == 0x000140, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep::CallFunc_GetTargetActor_TargetActor_3' has a wrong offset!");

// Function BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_Combat_CommonState_BackStep_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_Combat_CommonState_BackStep_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_Combat_CommonState_BackStep_C_StateTick");
static_assert(sizeof(BP_AINPC_Combat_CommonState_BackStep_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_Combat_CommonState_BackStep_C_StateTick");
static_assert(offsetof(BP_AINPC_Combat_CommonState_BackStep_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_Combat_CommonState_BackStep_C_StateTick::DeltaTime' has a wrong offset!");

}

