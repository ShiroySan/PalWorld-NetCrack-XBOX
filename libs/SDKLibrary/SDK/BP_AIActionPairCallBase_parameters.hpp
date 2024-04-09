#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionPairCallBase

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionPairCallBase_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionPairCallBase_C_ActionStart");
static_assert(sizeof(BP_AIActionPairCallBase_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionPairCallBase_C_ActionStart");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionPairCallBase_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionPairCallBase_C_ActionTick");
static_assert(sizeof(BP_AIActionPairCallBase_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionPairCallBase_C_ActionTick");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionPairCallBase_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.CreatePairBehaviorActionDynamicParameter
// 0x01D0 (0x01D0 - 0x0000)
struct BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter final
{
public:
	struct FActionDynamicParameter                Param_DynamicParameter;                            // 0x0000(0x00E0)(Parm, OutParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x00F0(0x00E0)()
};
static_assert(alignof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter) == 0x000010, "Wrong alignment on BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter");
static_assert(sizeof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter) == 0x0001D0, "Wrong size on BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, Param_DynamicParameter) == 0x000000, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::Param_DynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, CallFunc_GetController_ReturnValue) == 0x0000E0, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, CallFunc_K2_GetPawn_ReturnValue) == 0x0000E8, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, K2Node_MakeStruct_ActionDynamicParameter) == 0x0000F0, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ExecuteUbergraph_BP_AIActionPairCallBase
// 0x0220 (0x0220 - 0x0000)
struct BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4C[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter; // 0x0010(0x00E0)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4D[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPettingPresset*                     CallFunc_GetPettingPreset_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistance_ReturnValue;                  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4E[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4F[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionPairBehaviorBase_C*           K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A50[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionPairStandbyBase_C*            K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base;  // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A51[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_5;              // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue_3;        // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue_4;        // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A52[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionPairBehaviorBase_C*           K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1; // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A53[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase) == 0x000010, "Wrong alignment on BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase");
static_assert(sizeof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase) == 0x000220, "Wrong size on BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, EntryPoint) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter) == 0x000010, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_CreateDelegate_OutputDelegate) == 0x0000F0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_ControlledPawn_1) == 0x000100, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_ControlledPawn) == 0x000108, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_DeltaSeconds) == 0x000110, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue) == 0x000114, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue) == 0x000118, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_1) == 0x000120, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue) == 0x000128, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_2) == 0x000130, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000138, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000140, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_3) == 0x000148, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetPettingPreset_ReturnValue) == 0x000150, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetPettingPreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000158, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetDistance_ReturnValue) == 0x000160, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000168, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000170, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000178, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetCurrentAction_ReturnValue) == 0x000180, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsNearTwoActor_ReturnValue) == 0x000188, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base) == 0x000190, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base) == 0x0001A0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess_1) == 0x0001A8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_4) == 0x0001B0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_5) == 0x0001B8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0001C0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_3) == 0x0001C8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0001D0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0001D8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue_2) == 0x0001E1, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_PlayActionParameter_ReturnValue) == 0x0001E8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1) == 0x0001F0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess_2) == 0x0001F8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000200, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000208, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x000210, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

}

