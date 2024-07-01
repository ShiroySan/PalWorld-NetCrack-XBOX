#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_FriendlyLookat

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_FriendlyLookat.BP_AIAction_FriendlyLookat_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_FriendlyLookat_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_FriendlyLookat_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_FriendlyLookat_C_ActionFinished");
static_assert(sizeof(BP_AIAction_FriendlyLookat_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_FriendlyLookat_C_ActionFinished");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_FriendlyLookat_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_FriendlyLookat_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_FriendlyLookat.BP_AIAction_FriendlyLookat_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_FriendlyLookat_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_FriendlyLookat_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_FriendlyLookat_C_ActionStart");
static_assert(sizeof(BP_AIAction_FriendlyLookat_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_FriendlyLookat_C_ActionStart");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_FriendlyLookat_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_FriendlyLookat.BP_AIAction_FriendlyLookat_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_FriendlyLookat_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_FriendlyLookat_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_FriendlyLookat_C_ActionTick");
static_assert(sizeof(BP_AIAction_FriendlyLookat_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_FriendlyLookat_C_ActionTick");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_FriendlyLookat_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_FriendlyLookat_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_FriendlyLookat.BP_AIAction_FriendlyLookat_C.ExecuteUbergraph_BP_AIAction_FriendlyLookat
// 0x00E0 (0x00E0 - 0x0000)
struct BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_407C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SightCheckAndResponse_ChangeNextAction;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_407D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_407E[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_5;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionFriendlyLookat_C*             K2Node_DynamicCast_AsBP_Action_Friendly_Lookat;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_407F[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4080[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_6;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_5;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat) == 0x000008, "Wrong alignment on BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat");
static_assert(sizeof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat) == 0x0000E0, "Wrong size on BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, EntryPoint) == 0x000000, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_1) == 0x000010, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_2) == 0x000028, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000030, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_3) == 0x000038, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_SightCheckAndResponse_ChangeNextAction) == 0x000048, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_SightCheckAndResponse_ChangeNextAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_Event_ControlledPawn_2) == 0x000050, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_Event_DeltaSeconds) == 0x000058, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_4) == 0x000060, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_5) == 0x000068, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000070, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_K2_GetPawn_ReturnValue_3) == 0x000078, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000080, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000088, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetCurrentAction_ReturnValue) == 0x000090, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000098, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_DynamicCast_AsBP_Action_Friendly_Lookat) == 0x0000A0, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_DynamicCast_AsBP_Action_Friendly_Lookat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_Event_ControlledPawn_1) == 0x0000B0, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_Event_WithResult) == 0x0000B8, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetController_ReturnValue_6) == 0x0000C0, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_K2_GetPawn_ReturnValue_4) == 0x0000C8, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_K2_GetPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, CallFunc_GetComponentByClass_ReturnValue_5) == 0x0000D0, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat, K2Node_Event_ControlledPawn) == 0x0000D8, "Member 'BP_AIAction_FriendlyLookat_C_ExecuteUbergraph_BP_AIAction_FriendlyLookat::K2Node_Event_ControlledPawn' has a wrong offset!");

}

