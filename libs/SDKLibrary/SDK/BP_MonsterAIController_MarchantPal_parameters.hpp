#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_MarchantPal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ExecuteUbergraph_BP_MonsterAIController_MarchantPal
// 0x0158 (0x0158 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEscapeEnd_IsEscapeEnd;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         K2Node_CustomEvent_ID;                             // 0x0048(0x0030)(HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0088(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x00F0(0x0050)(NoDestructor)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal) == 0x000158, "Wrong size on BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, EntryPoint) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_Event_PossessedPawn) == 0x000028, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_IsEscapeEnd_IsEscapeEnd) == 0x000030, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_IsEscapeEnd_IsEscapeEnd' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_K2_GetPawn_ReturnValue) == 0x000038, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x000040, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_CustomEvent_ID) == 0x000048, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_CustomEvent_ID' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_GetCharacterManager_ReturnValue) == 0x000078, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_CustomEvent_TargetActor) == 0x000080, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000088, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D8, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_SetActionClassParameter_ReturnValue) == 0x0000E0, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_K2_GetPawn_ReturnValue_1) == 0x0000E8, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, K2Node_CustomEvent_DeadInfo) == 0x0000F0, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000140, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000148, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal, CallFunc_GetBattleManager_ReturnValue) == 0x000150, "Member 'BP_MonsterAIController_MarchantPal_C_ExecuteUbergraph_BP_MonsterAIController_MarchantPal::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.IsEscapeEnd
// 0x0028 (0x0028 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_IsEscapeEnd final
{
public:
	bool                                          Param_IsEscapeEnd;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetAIActionComponent_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                            CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_IsEscapeEnd");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd) == 0x000028, "Wrong size on BP_MonsterAIController_MarchantPal_C_IsEscapeEnd");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, Param_IsEscapeEnd) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::Param_IsEscapeEnd' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, CallFunc_GetAIActionComponent_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::CallFunc_GetAIActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, CallFunc_GetCurrentAction_BP_ReturnValue) == 0x000010, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::CallFunc_GetCurrentAction_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000020, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_IsEscapeEnd, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BP_MonsterAIController_MarchantPal_C_IsEscapeEnd::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_ReceivePossess");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_ReceivePossess) == 0x000008, "Wrong size on BP_MonsterAIController_MarchantPal_C_ReceivePossess");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_ReceiveTick");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_ReceiveTick) == 0x000004, "Wrong size on BP_MonsterAIController_MarchantPal_C_ReceiveTick");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.SetupSpawnedPosition
// 0x0240 (0x0240 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition final
{
public:
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FC[0x1];                                     // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FD[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41FE[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition) == 0x000240, "Wrong size on BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, Temp_object_Variable) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000018, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_Add_VectorVector_ReturnValue) == 0x000050, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000068, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_LineTraceSingle_OutHit) == 0x000080, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_LineTraceSingle_ReturnValue) == 0x000168, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_bBlockingHit) == 0x000169, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_bInitialOverlap) == 0x00016A, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_Time) == 0x00016C, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_Distance) == 0x000170, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_Location) == 0x000178, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_ImpactPoint) == 0x000190, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_Normal) == 0x0001A8, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C0, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_PhysMat) == 0x0001D8, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_HitActor) == 0x0001E0, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_HitComponent) == 0x0001E8, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_HitBoneName) == 0x0001F0, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_BoneName) == 0x0001F8, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_HitItem) == 0x000200, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_ElementIndex) == 0x000204, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_FaceIndex) == 0x000208, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_TraceStart) == 0x000210, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition, CallFunc_BreakHitResult_TraceEnd) == 0x000228, "Member 'BP_MonsterAIController_MarchantPal_C_SetupSpawnedPosition::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.StartEscape
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_StartEscape final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_StartEscape) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_StartEscape");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_StartEscape) == 0x000008, "Wrong size on BP_MonsterAIController_MarchantPal_C_StartEscape");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_StartEscape, TargetActor) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_StartEscape::TargetActor' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.�������
// 0x0030 (0x0030 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C_________ final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C_________) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C_________");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C_________) == 0x000030, "Wrong size on BP_MonsterAIController_MarchantPal_C_________");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C_________, ID) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C_________::ID' has a wrong offset!");

// Function BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C.�������_1
// 0x0050 (0x0050 - 0x0000)
struct BP_MonsterAIController_MarchantPal_C__________1 final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_MonsterAIController_MarchantPal_C__________1) == 0x000008, "Wrong alignment on BP_MonsterAIController_MarchantPal_C__________1");
static_assert(sizeof(BP_MonsterAIController_MarchantPal_C__________1) == 0x000050, "Wrong size on BP_MonsterAIController_MarchantPal_C__________1");
static_assert(offsetof(BP_MonsterAIController_MarchantPal_C__________1, DeadInfo) == 0x000000, "Member 'BP_MonsterAIController_MarchantPal_C__________1::DeadInfo' has a wrong offset!");

}

