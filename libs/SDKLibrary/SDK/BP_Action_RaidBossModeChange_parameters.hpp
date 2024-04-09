#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_RaidBossModeChange

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.EmitWarpEffect
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_RaidBossModeChange_C_EmitWarpEffect final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_EmitWarpEffect) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_EmitWarpEffect");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_EmitWarpEffect) == 0x000028, "Wrong size on BP_Action_RaidBossModeChange_C_EmitWarpEffect");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_GetSocketLocation_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.ExecuteUbergraph_BP_Action_RaidBossModeChange
// 0x0110 (0x0110 - 0x0000)
struct BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4072[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_RaidBossModeChangeEffect_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_1;                    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_2;                    // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_3;                    // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange) == 0x000010, "Wrong alignment on BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange) == 0x000110, "Wrong size on BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, EntryPoint) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000080, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000090, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage) == 0x0000A0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_1) == 0x0000A8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000B0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetSocketLocation_ReturnValue) == 0x0000B8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000D0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_5) == 0x0000D8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_6) == 0x0000F8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_2) == 0x000100, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_3) == 0x000108, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_3' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_RaidBossModeChange_C_FindMontage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4073[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_FindMontage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_FindMontage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_FindMontage) == 0x000030, "Wrong size on BP_Action_RaidBossModeChange_C_FindMontage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, Montage) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.Play Montage
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_RaidBossModeChange_C_Play_Montage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4074[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Rate;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast;  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_Play_Montage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_Play_Montage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_Play_Montage) == 0x000028, "Wrong size on BP_Action_RaidBossModeChange_C_Play_Montage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, Rate) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::Rate' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_FindMontage_Montage) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_PlayAnimMontage_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast) == 0x000024, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.RotateToTargetActor
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_RotateToTargetActor final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_RotateToTargetActor) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_RotateToTargetActor");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_RotateToTargetActor) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_RotateToTargetActor");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, Target) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::Target' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.SetActiveCharacter
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_SetActiveCharacter final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4075[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_SetActiveCharacter) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_SetActiveCharacter");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_SetActiveCharacter) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_SetActiveCharacter");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, Active) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::Active' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, CallFunc_GetMainMesh_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.StopMontage
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_StopMontage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4076[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_StopMontage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_StopMontage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_StopMontage) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_StopMontage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, CallFunc_FindMontage_Montage) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::CallFunc_FindMontage_Montage' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.WarpToBaseCamp
// 0x0248 (0x0248 - 0x0000)
struct BP_Action_RaidBossModeChange_C_WarpToBaseCamp final
{
public:
	double                                        Const_OffsetForward;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_OffsetUP;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WarpLocation;                                      // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0028(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FindNearestActor_Distance;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4077[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindNearestActor_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4078[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4079[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_WarpToBaseCamp");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp) == 0x000248, "Wrong size on BP_Action_RaidBossModeChange_C_WarpToBaseCamp");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, Const_OffsetForward) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::Const_OffsetForward' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, Const_OffsetUP) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::Const_OffsetUP' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, WarpLocation) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::WarpLocation' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000028, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionCharacter_ReturnValue) == 0x000038, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_FindNearestActor_Distance) == 0x000040, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_FindNearestActor_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_FindNearestActor_ReturnValue) == 0x000048, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_FindNearestActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000050, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000138, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000140, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000148, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000160, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionTarget_ReturnValue) == 0x000178, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000180, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActorForwardVector_ReturnValue) == 0x0001A0, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001B8, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActorUpVector_ReturnValue) == 0x0001D0, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001E8, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000200, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Add_VectorVector_ReturnValue) == 0x000218, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000230, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");

}

