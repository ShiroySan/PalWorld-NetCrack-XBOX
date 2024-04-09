#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Talking

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ActionAbort");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_NPC_Talking_C_ActionAbort");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_Talking_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_Talking_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_Talking_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ActionTick");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_NPC_Talking_C_ActionTick");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.AddTalkActor
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Talking_C_AddTalkActor final
{
public:
	class AActor*                                 TalkActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_AddTalkActor) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_AddTalkActor");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_AddTalkActor) == 0x000010, "Wrong size on BP_AIAction_NPC_Talking_C_AddTalkActor");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_AddTalkActor, TalkActor) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_AddTalkActor::TalkActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_AddTalkActor, CallFunc_Array_AddUnique_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_AddTalkActor::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.CheckTalkPlayers
// 0x0060 (0x0060 - 0x0000)
struct BP_AIAction_NPC_Talking_C_CheckTalkPlayers final
{
public:
	TArray<class AActor*>                         RemovePlayers;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue_1;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E17[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E18[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E19[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1A[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue_2;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_CheckTalkPlayers");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers) == 0x000060, "Wrong size on BP_AIAction_NPC_Talking_C_CheckTalkPlayers");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, RemovePlayers) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::RemovePlayers' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_IsEmpty_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_IsEmpty_ReturnValue_1) == 0x000021, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_RemoveItem_ReturnValue) == 0x000034, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Less_IntInt_ReturnValue) == 0x00004D, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Less_IntInt_ReturnValue_1) == 0x000054, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_CheckTalkPlayers, CallFunc_Array_IsEmpty_ReturnValue_2) == 0x00005C, "Member 'BP_AIAction_NPC_Talking_C_CheckTalkPlayers::CallFunc_Array_IsEmpty_ReturnValue_2' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.ExecuteUbergraph_BP_AIAction_NPC_Talking
// 0x0090 (0x0090 - 0x0000)
struct BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShap_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1D[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1E[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E20[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E21[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking) == 0x000090, "Wrong size on BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_ControlledPawn_4) == 0x000010, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_InFanShap_ReturnValue) == 0x000022, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_InFanShap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_ControlledPawn_3) == 0x000028, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_GetController_ReturnValue_1) == 0x000038, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_ControlledPawn_2) == 0x000050, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_WithResult) == 0x000058, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_ControlledPawn_1) == 0x000060, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, K2Node_Event_ControlledPawn) == 0x000068, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Array_AddUnique_ReturnValue) == 0x000074, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Array_IsEmpty_ReturnValue) == 0x000078, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x000080, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'BP_AIAction_NPC_Talking_C_ExecuteUbergraph_BP_AIAction_NPC_Talking::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.GetIsTalking
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_NPC_Talking_C_GetIsTalking final
{
public:
	bool                                          Param_IsTalking;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_GetIsTalking) == 0x000001, "Wrong alignment on BP_AIAction_NPC_Talking_C_GetIsTalking");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_GetIsTalking) == 0x000001, "Wrong size on BP_AIAction_NPC_Talking_C_GetIsTalking");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_GetIsTalking, Param_IsTalking) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_GetIsTalking::Param_IsTalking' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.RemoveTalkActor
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Talking_C_RemoveTalkActor final
{
public:
	class AActor*                                 TalkActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_RemoveTalkActor) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_RemoveTalkActor");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_RemoveTalkActor) == 0x000010, "Wrong size on BP_AIAction_NPC_Talking_C_RemoveTalkActor");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_RemoveTalkActor, TalkActor) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_RemoveTalkActor::TalkActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_RemoveTalkActor, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_RemoveTalkActor::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_RemoveTalkActor, CallFunc_Array_IsEmpty_ReturnValue) == 0x000009, "Member 'BP_AIAction_NPC_Talking_C_RemoveTalkActor::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_Talking.BP_AIAction_NPC_Talking_C.UpdateTalkTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_Talking_C_UpdateTalkTarget final
{
public:
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E22[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Talking_C_UpdateTalkTarget");
static_assert(sizeof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget) == 0x000018, "Wrong size on BP_AIAction_NPC_Talking_C_UpdateTalkTarget");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget, CallFunc_Array_IsEmpty_ReturnValue) == 0x000000, "Member 'BP_AIAction_NPC_Talking_C_UpdateTalkTarget::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'BP_AIAction_NPC_Talking_C_UpdateTalkTarget::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_AIAction_NPC_Talking_C_UpdateTalkTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Talking_C_UpdateTalkTarget, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Talking_C_UpdateTalkTarget::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

