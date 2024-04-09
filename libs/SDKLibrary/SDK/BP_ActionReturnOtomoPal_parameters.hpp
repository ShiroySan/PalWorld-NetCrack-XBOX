#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionReturnOtomoPal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.AttachBallModel
// 0x0080 (0x0080 - 0x0000)
struct BP_ActionReturnOtomoPal_C_AttachBallModel final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_ReturnOtomoSphereComponent_C*       CallFunc_AddComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_AttachBallModel) == 0x000010, "Wrong alignment on BP_ActionReturnOtomoPal_C_AttachBallModel");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_AttachBallModel) == 0x000080, "Wrong size on BP_ActionReturnOtomoPal_C_AttachBallModel");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_AttachBallModel, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_AttachBallModel::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_AttachBallModel, CallFunc_GetActionCharacter_ReturnValue) == 0x000060, "Member 'BP_ActionReturnOtomoPal_C_AttachBallModel::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_AttachBallModel, CallFunc_GetMainMesh_ReturnValue) == 0x000068, "Member 'BP_ActionReturnOtomoPal_C_AttachBallModel::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_AttachBallModel, CallFunc_AddComponentByClass_ReturnValue) == 0x000070, "Member 'BP_ActionReturnOtomoPal_C_AttachBallModel::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_AttachBallModel, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000078, "Member 'BP_ActionReturnOtomoPal_C_AttachBallModel::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.DeactivateOtomo
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionReturnOtomoPal_C_DeactivateOtomo final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_DeactivateOtomo) == 0x000008, "Wrong alignment on BP_ActionReturnOtomoPal_C_DeactivateOtomo");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_DeactivateOtomo) == 0x000020, "Wrong size on BP_ActionReturnOtomoPal_C_DeactivateOtomo");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_DeactivateOtomo, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_DeactivateOtomo::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_DeactivateOtomo, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_ActionReturnOtomoPal_C_DeactivateOtomo::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_DeactivateOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionReturnOtomoPal_C_DeactivateOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_DeactivateOtomo, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ActionReturnOtomoPal_C_DeactivateOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.DeleteBallModel
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionReturnOtomoPal_C_DeleteBallModel final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_DeleteBallModel) == 0x000001, "Wrong alignment on BP_ActionReturnOtomoPal_C_DeleteBallModel");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_DeleteBallModel) == 0x000001, "Wrong size on BP_ActionReturnOtomoPal_C_DeleteBallModel");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_DeleteBallModel, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_DeleteBallModel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.ExecuteUbergraph_BP_ActionReturnOtomoPal
// 0x00B8 (0x00B8 - 0x0000)
struct BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409B[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable_1;                              // 0x0058(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value_1;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409E[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A0[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal) == 0x000008, "Wrong alignment on BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal) == 0x0000B8, "Wrong size on BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, EntryPoint) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, Temp_byte_Variable) == 0x000004, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000020, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000028, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, K2Node_Event_DeltaTime) == 0x000038, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_Map_Find_Value) == 0x000040, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000050, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, Temp_byte_Variable_1) == 0x000058, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_Map_Find_Value_1) == 0x000060, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_Map_Find_ReturnValue_1) == 0x000068, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_PlayAnimMontage_ReturnValue) == 0x00006C, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000070, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetPalmi_ReturnValue) == 0x000078, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000080, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000088, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetController_ReturnValue) == 0x000090, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000098, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_GetActionTarget_ReturnValue) == 0x0000A8, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal, CallFunc_Delay_Duration_ImplicitCast) == 0x0000B0, "Member 'BP_ActionReturnOtomoPal_C_ExecuteUbergraph_BP_ActionReturnOtomoPal::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.SetFlags
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionReturnOtomoPal_C_SetFlags final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   Shooter;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A2[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_SetFlags) == 0x000008, "Wrong alignment on BP_ActionReturnOtomoPal_C_SetFlags");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_SetFlags) == 0x000068, "Wrong size on BP_ActionReturnOtomoPal_C_SetFlags");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, Disable) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, Speed) == 0x000008, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::Speed' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, Shooter) == 0x000010, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::Shooter' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, Movement) == 0x000018, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::Movement' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, FlagName) == 0x000020, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::FlagName' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetActionCharacter_ReturnValue) == 0x000028, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000040, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000048, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_GetController_ReturnValue) == 0x000050, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000058, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetFlags, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x000064, "Member 'BP_ActionReturnOtomoPal_C_SetFlags::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.SetupToOtomoDirection
// 0x0088 (0x0088 - 0x0000)
struct BP_ActionReturnOtomoPal_C_SetupToOtomoDirection final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection) == 0x000008, "Wrong alignment on BP_ActionReturnOtomoPal_C_SetupToOtomoDirection");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection) == 0x000088, "Wrong size on BP_ActionReturnOtomoPal_C_SetupToOtomoDirection");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000028, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000040, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_GetActorForwardVector_ReturnValue) == 0x000060, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_GetActionTarget_ReturnValue_1) == 0x000078, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_SetupToOtomoDirection, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_ActionReturnOtomoPal_C_SetupToOtomoDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionReturnOtomoPal_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionReturnOtomoPal_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionReturnOtomoPal_C_TickAction");
static_assert(sizeof(BP_ActionReturnOtomoPal_C_TickAction) == 0x000004, "Wrong size on BP_ActionReturnOtomoPal_C_TickAction");
static_assert(offsetof(BP_ActionReturnOtomoPal_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionReturnOtomoPal_C_TickAction::DeltaTime' has a wrong offset!");

}

