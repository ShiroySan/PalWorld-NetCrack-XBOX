#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_WanderingCage

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_WanderingCage_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WanderingCage_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_WanderingCage_C_ActionFinished");
static_assert(sizeof(BP_AIAction_WanderingCage_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_WanderingCage_C_ActionFinished");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WanderingCage_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_WanderingCage_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WanderingCage_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WanderingCage_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_WanderingCage_C_ActionStart");
static_assert(sizeof(BP_AIAction_WanderingCage_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_WanderingCage_C_ActionStart");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WanderingCage_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_WanderingCage_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WanderingCage_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_WanderingCage_C_ActionTick");
static_assert(sizeof(BP_AIAction_WanderingCage_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_WanderingCage_C_ActionTick");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WanderingCage_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_WanderingCage_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C.ChangeNextMovePosition
// 0x0258 (0x0258 - 0x0000)
struct BP_AIAction_WanderingCage_C_ChangeNextMovePosition final
{
public:
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0098(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CB[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CC[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CD[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition) == 0x000008, "Wrong alignment on BP_AIAction_WanderingCage_C_ChangeNextMovePosition");
static_assert(sizeof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition) == 0x000258, "Wrong size on BP_AIAction_WanderingCage_C_ChangeNextMovePosition");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, Temp_object_Variable) == 0x000000, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000018, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000038, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_Add_VectorVector_ReturnValue) == 0x000050, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000068, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000080, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_LineTraceSingle_OutHit) == 0x000098, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_LineTraceSingle_ReturnValue) == 0x000180, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_bBlockingHit) == 0x000181, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_bInitialOverlap) == 0x000182, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_Time) == 0x000184, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_Distance) == 0x000188, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_Location) == 0x000190, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A8, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_Normal) == 0x0001C0, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D8, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_PhysMat) == 0x0001F0, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_HitActor) == 0x0001F8, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_HitComponent) == 0x000200, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_HitBoneName) == 0x000208, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_BoneName) == 0x000210, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_HitItem) == 0x000218, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_ElementIndex) == 0x00021C, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_FaceIndex) == 0x000220, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_TraceStart) == 0x000228, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ChangeNextMovePosition, CallFunc_BreakHitResult_TraceEnd) == 0x000240, "Member 'BP_AIAction_WanderingCage_C_ChangeNextMovePosition::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function BP_AIAction_WanderingCage.BP_AIAction_WanderingCage_C.ExecuteUbergraph_BP_AIAction_WanderingCage
// 0x0098 (0x0098 - 0x0000)
struct BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_BaseCamp_C*     K2Node_DynamicCast_AsBP_Monster_AIController_Base_Camp; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D1[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D2[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage) == 0x000008, "Wrong alignment on BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage");
static_assert(sizeof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage) == 0x000098, "Wrong size on BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, EntryPoint) == 0x000000, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_Event_ControlledPawn_2) == 0x000008, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_Event_ControlledPawn_1) == 0x000010, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_DynamicCast_AsBP_Monster_AIController_Base_Camp) == 0x000028, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_DynamicCast_AsBP_Monster_AIController_Base_Camp' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_GetController_ReturnValue_1) == 0x000038, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_GetController_ReturnValue_2) == 0x000040, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_RandomFloatInRange_ReturnValue) == 0x000048, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_K2_GetPawn_ReturnValue) == 0x000050, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000070, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_Event_ControlledPawn) == 0x000078, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, K2Node_Event_WithResult) == 0x000080, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_GetController_ReturnValue_3) == 0x000088, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage, CallFunc_Delay_Duration_ImplicitCast) == 0x000090, "Member 'BP_AIAction_WanderingCage_C_ExecuteUbergraph_BP_AIAction_WanderingCage::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

