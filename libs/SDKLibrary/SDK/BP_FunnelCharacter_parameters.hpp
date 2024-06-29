#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FunnelCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FunnelCharacter.BP_FunnelCharacter_C.ExecuteUbergraph_BP_FunnelCharacter
// 0x0048 (0x0048 - 0x0000)
struct BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3860[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0008(0x0010)()
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3861[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3862[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue_1;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter) == 0x000008, "Wrong alignment on BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter");
static_assert(sizeof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter) == 0x000048, "Wrong size on BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, EntryPoint) == 0x000000, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000008, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, CallFunc_AddVisualEffectForActor_ReturnValue) == 0x000030, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::CallFunc_AddVisualEffectForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, CallFunc_AddVisualEffectForActor_ReturnValue_1) == 0x000038, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::CallFunc_AddVisualEffectForActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter, CallFunc_AddVisualEffect_ReturnValue) == 0x000040, "Member 'BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");

// Function BP_FunnelCharacter.BP_FunnelCharacter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FunnelCharacter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacter_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FunnelCharacter_C_ReceiveTick");
static_assert(sizeof(BP_FunnelCharacter_C_ReceiveTick) == 0x000004, "Wrong size on BP_FunnelCharacter_C_ReceiveTick");
static_assert(offsetof(BP_FunnelCharacter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FunnelCharacter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FunnelCharacter.BP_FunnelCharacter_C.SetLocationNearTrainer
// 0x0520 (0x0520 - 0x0000)
struct BP_FunnelCharacter_C_SetLocationNearTrainer final
{
public:
	struct FVector                                VEd;                                               // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VSt;                                               // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          Trainer;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0048(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3863[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_CapsuleTraceSingle_OutHit;                // 0x0138(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_CapsuleTraceSingle_ReturnValue;           // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3864[0xF];                                     // 0x0221(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0230(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3865[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3866[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0358(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3867[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3868[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x03B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3869[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x04A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x04C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTrainer_ReturnValue;                   // 0x04D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x04E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_386A[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0500(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacter_C_SetLocationNearTrainer) == 0x000010, "Wrong alignment on BP_FunnelCharacter_C_SetLocationNearTrainer");
static_assert(sizeof(BP_FunnelCharacter_C_SetLocationNearTrainer) == 0x000520, "Wrong size on BP_FunnelCharacter_C_SetLocationNearTrainer");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, VEd) == 0x000000, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::VEd' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, VSt) == 0x000018, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::VSt' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, Trainer) == 0x000030, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::Trainer' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, K2Node_MakeArray_Array) == 0x000038, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000048, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000130, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_CapsuleTraceSingle_OutHit) == 0x000138, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_CapsuleTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_CapsuleTraceSingle_ReturnValue) == 0x000220, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_CapsuleTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_GetTransform_ReturnValue) == 0x000230, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakTransform_Location) == 0x000290, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakTransform_Rotation) == 0x0002A8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakTransform_Scale) == 0x0002C0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_bBlockingHit) == 0x0002D8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002D9, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_Time) == 0x0002DC, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_Distance) == 0x0002E0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_Location) == 0x0002E8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_ImpactPoint) == 0x000300, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_Normal) == 0x000318, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_ImpactNormal) == 0x000330, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_PhysMat) == 0x000348, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_HitActor) == 0x000350, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_HitComponent) == 0x000358, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_HitBoneName) == 0x000360, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_BoneName) == 0x000368, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_HitItem) == 0x000370, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_ElementIndex) == 0x000374, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_FaceIndex) == 0x000378, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_TraceStart) == 0x000380, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_BreakHitResult_TraceEnd) == 0x000398, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0003B0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x0003B8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x0004A0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_GetForwardVector_ReturnValue) == 0x0004A8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0004C0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_GetTrainer_ReturnValue) == 0x0004D8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_GetTrainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0004E0, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_IsValid_ReturnValue) == 0x0004F8, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacter_C_SetLocationNearTrainer, CallFunc_Add_VectorVector_ReturnValue) == 0x000500, "Member 'BP_FunnelCharacter_C_SetLocationNearTrainer::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

