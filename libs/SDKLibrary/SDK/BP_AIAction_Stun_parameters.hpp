#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Stun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Stun.BP_AIAction_Stun_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Stun_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Stun_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Stun_C_ActionStart");
static_assert(sizeof(BP_AIAction_Stun_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Stun_C_ActionStart");
static_assert(offsetof(BP_AIAction_Stun_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Stun_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Stun.BP_AIAction_Stun_C.ExecuteUbergraph_BP_AIAction_Stun
// 0x0180 (0x0180 - 0x0000)
struct BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition; // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal;  // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue; // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23FE[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBoneIndex_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23FF[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0070(0x00E0)()
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFlyPal_ReturnValue;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun) == 0x000010, "Wrong alignment on BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun");
static_assert(sizeof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun) == 0x000180, "Wrong size on BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, EntryPoint) == 0x000000, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition) == 0x000028, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal) == 0x000040, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName) == 0x000058, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance) == 0x000060, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue) == 0x000064, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetBoneIndex_ReturnValue) == 0x000068, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetBoneIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, K2Node_MakeStruct_ActionDynamicParameter) == 0x000070, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, K2Node_Event_ControlledPawn) == 0x000150, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_PlayActionParameter_ReturnValue) == 0x000158, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000160, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000168, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun, CallFunc_IsFlyPal_ReturnValue) == 0x000170, "Member 'BP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun::CallFunc_IsFlyPal_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Stun.BP_AIAction_Stun_C.WakeupDirection
// 0x00A8 (0x00A8 - 0x0000)
struct BP_AIAction_Stun_C_WakeupDirection final
{
public:
	int32                                         Direction;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2400[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               MeshRotate;                                        // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2401[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2402[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AIAction_Stun_C_WakeupDirection) == 0x000008, "Wrong alignment on BP_AIAction_Stun_C_WakeupDirection");
static_assert(sizeof(BP_AIAction_Stun_C_WakeupDirection) == 0x0000A8, "Wrong size on BP_AIAction_Stun_C_WakeupDirection");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, Direction) == 0x000000, "Member 'BP_AIAction_Stun_C_WakeupDirection::Direction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, MeshRotate) == 0x000008, "Member 'BP_AIAction_Stun_C_WakeupDirection::MeshRotate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000020, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_GreaterGreater_VectorRotator_ReturnValue_1) == 0x000038, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_Dot_VectorVector_ReturnValue) == 0x000050, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000058, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000061, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_K2_GetPawn_ReturnValue) == 0x000070, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, K2Node_DynamicCast_AsPal_Character) == 0x000080, "Member 'BP_AIAction_Stun_C_WakeupDirection::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_AIAction_Stun_C_WakeupDirection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Stun_C_WakeupDirection, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000090, "Member 'BP_AIAction_Stun_C_WakeupDirection::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");

}

