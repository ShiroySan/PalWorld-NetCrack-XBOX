#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionAngerLoop

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.ExecuteUbergraph_BP_ActionAngerLoop
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A3[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A4[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop) == 0x000008, "Wrong alignment on BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop");
static_assert(sizeof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop) == 0x000068, "Wrong size on BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, EntryPoint) == 0x000000, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, K2Node_Event_DeltaTime) == 0x00001C, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000028, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_RandomFloatInRange_ReturnValue) == 0x000040, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000058, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop, CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast) == 0x000064, "Member 'BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop::CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast' has a wrong offset!");

// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionAngerLoop_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAngerLoop_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionAngerLoop_C_TickAction");
static_assert(sizeof(BP_ActionAngerLoop_C_TickAction) == 0x000004, "Wrong size on BP_ActionAngerLoop_C_TickAction");
static_assert(offsetof(BP_ActionAngerLoop_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionAngerLoop_C_TickAction::DeltaTime' has a wrong offset!");

}

