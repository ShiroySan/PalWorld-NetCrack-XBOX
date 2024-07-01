#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Trap_LegHold

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ActionAbort");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_Trap_LegHold_C_ActionAbort");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ActionFinished");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_Trap_LegHold_C_ActionFinished");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_Trap_LegHold_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ActionPause");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_Trap_LegHold_C_ActionPause");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ActionResume");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_Trap_LegHold_C_ActionResume");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ActionStart");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Trap_LegHold_C_ActionStart");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ExecuteUbergraph_BP_AIAction_Trap_LegHold
// 0x0180 (0x0180 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36DE[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCPC_CPC;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsExist)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCPC_CPC_1;                             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0090(0x00E0)()
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold) == 0x000010, "Wrong alignment on BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold) == 0x000180, "Wrong size on BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, EntryPoint) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_ControlledPawn_4) == 0x000010, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_ControlledPawn_3) == 0x000018, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_ControlledPawn_2) == 0x000020, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_WithResult) == 0x000028, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_Event_ControlledPawn_1) == 0x000030, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_GetActionComponent_ReturnValue) == 0x000038, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_GetActionComponent_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_GetCPC_CPC) == 0x000050, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_GetCPC_CPC' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_GetCPC_CPC_1) == 0x000068, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_GetCPC_CPC_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_GetCharacter_ReturnValue) == 0x000070, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, K2Node_MakeStruct_ActionDynamicParameter) == 0x000090, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold, CallFunc_PlayActionParameter_ReturnValue) == 0x000170, "Member 'BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.GetCPC
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_GetCPC final
{
public:
	class UPalCharacterParameterComponent*        CPC;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_GetCPC) == 0x000008, "Wrong alignment on BP_AIAction_Trap_LegHold_C_GetCPC");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_GetCPC) == 0x000020, "Wrong size on BP_AIAction_Trap_LegHold_C_GetCPC");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_GetCPC, CPC) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_GetCPC::CPC' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_GetCPC, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIAction_Trap_LegHold_C_GetCPC::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_GetCPC, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AIAction_Trap_LegHold_C_GetCPC::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_GetCPC, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AIAction_Trap_LegHold_C_GetCPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.OnChangeTrapExist
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_Trap_LegHold_C_OnChangeTrapExist final
{
public:
	bool                                          Exist;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Trap_LegHold_C_OnChangeTrapExist) == 0x000001, "Wrong alignment on BP_AIAction_Trap_LegHold_C_OnChangeTrapExist");
static_assert(sizeof(BP_AIAction_Trap_LegHold_C_OnChangeTrapExist) == 0x000001, "Wrong size on BP_AIAction_Trap_LegHold_C_OnChangeTrapExist");
static_assert(offsetof(BP_AIAction_Trap_LegHold_C_OnChangeTrapExist, Exist) == 0x000000, "Member 'BP_AIAction_Trap_LegHold_C_OnChangeTrapExist::Exist' has a wrong offset!");

}

