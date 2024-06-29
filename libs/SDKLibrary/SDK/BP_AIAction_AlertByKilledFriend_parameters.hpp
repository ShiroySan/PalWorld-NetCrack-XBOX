#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_AlertByKilledFriend

#include "Basic.hpp"

#include "EPal_AI_AlertByKilledFriendState_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ActionAbort");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ActionAbort");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ActionFinished");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ActionFinished");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ActionTick");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ActionTick");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.AddState
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_AddState final
{
public:
	EPal_AI_AlertByKilledFriendState              NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStateMachineStateBase_BlueprintBase* CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_AddState) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_AddState");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_AddState) == 0x000020, "Wrong size on BP_AIAction_AlertByKilledFriend_C_AddState");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_AddState, NewParam) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_AddState::NewParam' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_AddState, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_AddState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_AddState, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_AlertByKilledFriend_C_AddState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_AddState, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_AIAction_AlertByKilledFriend_C_AddState::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ChangeNextState
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ChangeNextState final
{
public:
	EPal_AI_AlertByKilledFriendState              Next;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ChangeNextState) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ChangeNextState");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ChangeNextState) == 0x000018, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ChangeNextState");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ChangeNextState, Next) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ChangeNextState::Next' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ChangeNextState, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_ChangeNextState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ChangeNextState, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_AIAction_AlertByKilledFriend_C_ChangeNextState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ExecuteUbergraph_BP_AIAction_AlertByKilledFriend
// 0x00D8 (0x00D8 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39AF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActorWithRadius_ReturnValue;     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B2[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B3[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B4[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B5[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B6[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStateMachine*                       CallFunc_SpawnObject_ReturnValue;                  // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SightCheckAndResponse_ChangeNextAction;   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPal_AI_AlertByKilledFriendState              Temp_byte_Variable;                                // 0x00B1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B7[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_tempDeltaTime_ImplicitCast;     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Tick_DeltaTime_ImplicitCast;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ActionTick_DeltaSeconds_ImplicitCast;     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend) == 0x0000D8, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, EntryPoint) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_ControlledPawn_3) == 0x000010, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_ControlledPawn_2) == 0x000018, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_WithResult) == 0x000020, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_GetController_ReturnValue) == 0x000038, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_K2_GetPawn_ReturnValue) == 0x000048, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_IsNearTwoActorWithRadius_ReturnValue) == 0x000050, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_IsNearTwoActorWithRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_GetActionComponent_ReturnValue) == 0x000078, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_ActionIsEmpty_ReturnValue) == 0x000080, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_ActionIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_SpawnObject_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_SightCheckAndResponse_ChangeNextAction) == 0x0000B0, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_SightCheckAndResponse_ChangeNextAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, Temp_byte_Variable) == 0x0000B1, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, K2Node_VariableSet_tempDeltaTime_ImplicitCast) == 0x0000C8, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::K2Node_VariableSet_tempDeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_Tick_DeltaTime_ImplicitCast) == 0x0000D0, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_Tick_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend, CallFunc_ActionTick_DeltaSeconds_ImplicitCast) == 0x0000D4, "Member 'BP_AIAction_AlertByKilledFriend_C_ExecuteUbergraph_BP_AIAction_AlertByKilledFriend::CallFunc_ActionTick_DeltaSeconds_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.LineTraceGround
// 0x0238 (0x0238 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_LineTraceGround final
{
public:
	struct FVector                                CenterPos;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHit;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39B9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitPos;                                            // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0068(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0078(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39BA[0x1];                                     // 0x0163(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39BB[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39BC[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_LineTraceGround");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround) == 0x000238, "Wrong size on BP_AIAction_AlertByKilledFriend_C_LineTraceGround");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CenterPos) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CenterPos' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, IsHit) == 0x000018, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::IsHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, HitPos) == 0x000020, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::HitPos' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_Add_VectorVector_ReturnValue) == 0x000038, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000050, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, Temp_object_Variable) == 0x000068, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_LineTraceSingle_OutHit) == 0x000078, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_LineTraceSingle_ReturnValue) == 0x000160, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_bBlockingHit) == 0x000161, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_bInitialOverlap) == 0x000162, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_Time) == 0x000164, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_Distance) == 0x000168, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_Location) == 0x000170, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_ImpactPoint) == 0x000188, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_Normal) == 0x0001A0, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_ImpactNormal) == 0x0001B8, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_PhysMat) == 0x0001D0, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_HitActor) == 0x0001D8, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_HitComponent) == 0x0001E0, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_HitBoneName) == 0x0001E8, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_BoneName) == 0x0001F0, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_HitItem) == 0x0001F8, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_ElementIndex) == 0x0001FC, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_FaceIndex) == 0x000200, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_TraceStart) == 0x000208, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_LineTraceGround, CallFunc_BreakHitResult_TraceEnd) == 0x000220, "Member 'BP_AIAction_AlertByKilledFriend_C_LineTraceGround::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.MoveToDeadBody
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody) == 0x000018, "Wrong size on BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody, K2Node_DynamicCast_AsPal_AIController) == 0x000008, "Member 'BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AIAction_AlertByKilledFriend_C_MoveToDeadBody::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.StopMovement
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_StopMovement final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_StopMovement) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_StopMovement");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_StopMovement) == 0x000008, "Wrong size on BP_AIAction_AlertByKilledFriend_C_StopMovement");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_StopMovement, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_StopMovement::CallFunc_GetController_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AlertByKilledFriend.BP_AIAction_AlertByKilledFriend_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AlertByKilledFriend_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AlertByKilledFriend_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_AlertByKilledFriend_C_ActionStart");
static_assert(sizeof(BP_AIAction_AlertByKilledFriend_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_AlertByKilledFriend_C_ActionStart");
static_assert(offsetof(BP_AIAction_AlertByKilledFriend_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_AlertByKilledFriend_C_ActionStart::ControlledPawn' has a wrong offset!");

}

