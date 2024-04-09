#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Death

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Death_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_Death_C_ActionFinished");
static_assert(sizeof(BP_AIAction_Death_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_Death_C_ActionFinished");
static_assert(offsetof(BP_AIAction_Death_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Death_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_Death_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Death_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_Death_C_ActionResume");
static_assert(sizeof(BP_AIAction_Death_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_Death_C_ActionResume");
static_assert(offsetof(BP_AIAction_Death_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Death_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Death_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Death_C_ActionStart");
static_assert(sizeof(BP_AIAction_Death_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Death_C_ActionStart");
static_assert(offsetof(BP_AIAction_Death_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Death_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.ExecuteUbergraph_BP_AIAction_Death
// 0x02F0 (0x02F0 - 0x0000)
struct BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2482[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetDeathActionClass_DeathAction;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterParameter* IndividualParameter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition; // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal;  // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue; // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2483[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBoneIndex_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlActor_ReturnValue;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2484[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2485[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       K2Node_CustomEvent_IndividualParameter;            // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2486[0x8];                                     // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x00E0(0x00E0)()
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlActor_ReturnValue_1;       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2487[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2488[0x8];                                     // 0x01E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter_1;        // 0x01F0(0x00E0)()
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetDeathActionClass_DeathAction_1;        // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_3;        // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue_1;        // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death) == 0x000010, "Wrong alignment on BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death");
static_assert(sizeof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death) == 0x0002F0, "Wrong size on BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, EntryPoint) == 0x000000, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetDeathActionClass_DeathAction) == 0x000008, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetDeathActionClass_DeathAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_Event_ControlledPawn_2) == 0x000010, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetController_ReturnValue_1) == 0x000048, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition) == 0x000050, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal) == 0x000068, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName) == 0x000080, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance) == 0x000088, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue) == 0x00008C, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetBoneIndex_ReturnValue) == 0x000098, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetBoneIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_IsPlayerControlActor_ReturnValue) == 0x00009C, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_IsPlayerControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetController_ReturnValue_2) == 0x0000A0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_Event_ControlledPawn_1) == 0x0000A8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_Event_WithResult) == 0x0000B0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0000B8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_CustomEvent_IndividualParameter) == 0x0000C0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_CustomEvent_IndividualParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000C8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_Event_ControlledPawn) == 0x0000D0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_MakeStruct_ActionDynamicParameter) == 0x0000E0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetController_ReturnValue_3) == 0x0001C0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_PlayActionParameter_ReturnValue) == 0x0001C8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetPawn_ReturnValue_3) == 0x0001D0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_IsPlayerControlActor_ReturnValue_1) == 0x0001D8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_IsPlayerControlActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetController_ReturnValue_4) == 0x0001E0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, K2Node_MakeStruct_ActionDynamicParameter_1) == 0x0001F0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::K2Node_MakeStruct_ActionDynamicParameter_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_K2_GetPawn_ReturnValue_4) == 0x0002D0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_K2_GetPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetDeathActionClass_DeathAction_1) == 0x0002D8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetDeathActionClass_DeathAction_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0002E0, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death, CallFunc_PlayActionParameter_ReturnValue_1) == 0x0002E8, "Member 'BP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death::CallFunc_PlayActionParameter_ReturnValue_1' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.GetDeathActionClass
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Death_C_GetDeathActionClass final
{
public:
	class UClass*                                 DeathAction;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_GetDeathActionClass) == 0x000008, "Wrong alignment on BP_AIAction_Death_C_GetDeathActionClass");
static_assert(sizeof(BP_AIAction_Death_C_GetDeathActionClass) == 0x000008, "Wrong size on BP_AIAction_Death_C_GetDeathActionClass");
static_assert(offsetof(BP_AIAction_Death_C_GetDeathActionClass, DeathAction) == 0x000000, "Member 'BP_AIAction_Death_C_GetDeathActionClass::DeathAction' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.�������_0
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Death_C__________0 final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C__________0) == 0x000008, "Wrong alignment on BP_AIAction_Death_C__________0");
static_assert(sizeof(BP_AIAction_Death_C__________0) == 0x000008, "Wrong size on BP_AIAction_Death_C__________0");
static_assert(offsetof(BP_AIAction_Death_C__________0, IndividualParameter) == 0x000000, "Member 'BP_AIAction_Death_C__________0::IndividualParameter' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.IsInterruptibleByRecoverHungry
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_Death_C_IsInterruptibleByRecoverHungry final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_IsInterruptibleByRecoverHungry) == 0x000001, "Wrong alignment on BP_AIAction_Death_C_IsInterruptibleByRecoverHungry");
static_assert(sizeof(BP_AIAction_Death_C_IsInterruptibleByRecoverHungry) == 0x000001, "Wrong size on BP_AIAction_Death_C_IsInterruptibleByRecoverHungry");
static_assert(offsetof(BP_AIAction_Death_C_IsInterruptibleByRecoverHungry, ReturnValue) == 0x000000, "Member 'BP_AIAction_Death_C_IsInterruptibleByRecoverHungry::ReturnValue' has a wrong offset!");

// Function BP_AIAction_Death.BP_AIAction_Death_C.IsInterruptibleBySleep
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_Death_C_IsInterruptibleBySleep final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Death_C_IsInterruptibleBySleep) == 0x000001, "Wrong alignment on BP_AIAction_Death_C_IsInterruptibleBySleep");
static_assert(sizeof(BP_AIAction_Death_C_IsInterruptibleBySleep) == 0x000001, "Wrong size on BP_AIAction_Death_C_IsInterruptibleBySleep");
static_assert(offsetof(BP_AIAction_Death_C_IsInterruptibleBySleep, ReturnValue) == 0x000000, "Member 'BP_AIAction_Death_C_IsInterruptibleBySleep::ReturnValue' has a wrong offset!");

}

