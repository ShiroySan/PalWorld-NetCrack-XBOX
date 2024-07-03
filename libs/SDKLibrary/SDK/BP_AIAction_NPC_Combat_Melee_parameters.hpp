#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Combat_Melee

#include "Basic.hpp"

#include "EPal_NPC_CombatMeleeState_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ActionResume");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ActionResume");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ActionTick");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ActionTick");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.AddMeleeCombatState
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState final
{
public:
	EPal_NPC_CombatMeleeState                     MeleeState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState) == 0x000018, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState, MeleeState) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState::MeleeState' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.AddTimer
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_AddTimer final
{
public:
	double                                        CurrentTime;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_AddTimer) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_AddTimer");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_AddTimer) == 0x000010, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_AddTimer");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_AddTimer, CurrentTime) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_AddTimer::CurrentTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_AddTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_AddTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.Change_NextState
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_Change_NextState final
{
public:
	EPal_NPC_CombatMeleeState                     Next;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_Change_NextState");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState) == 0x000018, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_Change_NextState");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState, Next) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_Change_NextState::Next' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_Change_NextState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Melee_C_Change_NextState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_Change_NextState, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_AIAction_NPC_Combat_Melee_C_Change_NextState::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee
// 0x00C0 (0x00C0 - 0x0000)
struct BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShapAndDitance_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShapAndDitance_ReturnValue_1;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTarget_Near;                        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTarget_Near_1;                      // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetBodyActionComponentRef_ActionComp_1;   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue_1;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShapAndDitance_ReturnValue_2;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TickFinishCheck_ActionFinish;             // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_AddTimer_CurrentTime;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_AddTimer_CurrentTime_1;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_AddTimer_CurrentTime_2;                   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPal_NPC_CombatMeleeState                     Temp_byte_Variable;                                // 0x0089(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndCurrentState_IsEnd;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Tick_DeltaTime_ImplicitCast;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_InFanShapAndDitance_Distance_ImplicitCast; // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee");
static_assert(sizeof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee) == 0x0000C0, "Wrong size on BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_ControlledPawn_4) == 0x000008, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_ControlledPawn_3) == 0x000010, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_ControlledPawn_2) == 0x000018, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_WithResult) == 0x000020, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_InFanShapAndDitance_ReturnValue) == 0x000021, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_InFanShapAndDitance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_GetBodyActionComponentRef_ActionComp) == 0x000028, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_GetBodyActionComponentRef_ActionComp' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_InFanShapAndDitance_ReturnValue_1) == 0x000030, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_InFanShapAndDitance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_ActionIsEmpty_ReturnValue) == 0x000031, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_ActionIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_IsNearTarget_Near) == 0x000032, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_IsNearTarget_Near' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_IsNearTarget_Near_1) == 0x000033, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_IsNearTarget_Near_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_GetBodyActionComponentRef_ActionComp_1) == 0x000038, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_GetBodyActionComponentRef_ActionComp_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_ActionIsEmpty_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_ActionIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_InFanShapAndDitance_ReturnValue_2) == 0x000041, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_InFanShapAndDitance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_SwitchEnum_CmpSuccess) == 0x000042, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_TickFinishCheck_ActionFinish) == 0x000043, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_TickFinishCheck_ActionFinish' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_ControlledPawn_1) == 0x000048, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_DeltaSeconds) == 0x000050, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, K2Node_Event_ControlledPawn) == 0x000058, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_AddTimer_CurrentTime) == 0x000068, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_AddTimer_CurrentTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_AddTimer_CurrentTime_1) == 0x000070, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_AddTimer_CurrentTime_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000079, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_AddTimer_CurrentTime_2) == 0x000080, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_AddTimer_CurrentTime_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000088, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, Temp_byte_Variable) == 0x000089, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_RandomInteger_ReturnValue) == 0x00008C, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Map_Find_Value) == 0x000090, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000099, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000A0, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000A8, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_IsEndCurrentState_IsEnd) == 0x0000B0, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_IsEndCurrentState_IsEnd' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_Tick_DeltaTime_ImplicitCast) == 0x0000B4, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_Tick_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee, CallFunc_InFanShapAndDitance_Distance_ImplicitCast) == 0x0000B8, "Member 'BP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee::CallFunc_InFanShapAndDitance_Distance_ImplicitCast' has a wrong offset!");

}

