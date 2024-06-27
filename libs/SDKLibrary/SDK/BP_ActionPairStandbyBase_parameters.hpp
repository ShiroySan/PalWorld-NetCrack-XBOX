#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairStandbyBase

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.CheckCancel
// 0x0048 (0x0048 - 0x0000)
struct BP_ActionPairStandbyBase_C_CheckCancel final
{
public:
	bool                                          Cancel;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D87[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D88[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D89[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_CheckCancel) == 0x000008, "Wrong alignment on BP_ActionPairStandbyBase_C_CheckCancel");
static_assert(sizeof(BP_ActionPairStandbyBase_C_CheckCancel) == 0x000048, "Wrong size on BP_ActionPairStandbyBase_C_CheckCancel");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, Cancel) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::Cancel' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_GetActionTarget_ReturnValue_1) == 0x000010, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_IsDead_ReturnValue) == 0x000021, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, K2Node_DynamicCast_AsPal_Character) == 0x000028, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_GetActionCharacter_ReturnValue) == 0x000038, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000040, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_CheckCancel, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'BP_ActionPairStandbyBase_C_CheckCancel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.ExecuteUbergraph_BP_ActionPairStandbyBase
// 0x0150 (0x0150 - 0x0000)
struct BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0028(0x0050)(NoDestructor)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8A[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetStandByAnime_Montage;                  // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8B[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8C[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8D[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_8;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8E[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller_1;      // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D8F[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTarget_IsValid;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTarget_IsValid_1;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase) == 0x000008, "Wrong alignment on BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase");
static_assert(sizeof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase) == 0x000150, "Wrong size on BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, EntryPoint) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_Event_DeltaTime) == 0x000014, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000020, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000028, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000080, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000088, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionTarget_ReturnValue) == 0x000090, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000098, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetController_ReturnValue) == 0x0000A0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000A8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000B8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_5) == 0x0000C0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_6) == 0x0000C8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000D0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000D8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetStandByAnime_Montage) == 0x0000E0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetStandByAnime_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_7) == 0x0000E8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_PlayAnimMontage_ReturnValue) == 0x0000F0, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetController_ReturnValue_1) == 0x0000F8, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_IsValid_ReturnValue_1) == 0x000100, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000108, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetActionCharacter_ReturnValue_8) == 0x000118, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetActionCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_GetController_ReturnValue_2) == 0x000120, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_IsValid_ReturnValue_2) == 0x000128, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_DynamicCast_AsPal_Player_Controller_1) == 0x000130, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_DynamicCast_AsPal_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_SetActionClassParameter_ReturnValue) == 0x000140, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_IsValidTarget_IsValid) == 0x000148, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_IsValidTarget_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase, CallFunc_IsValidTarget_IsValid_1) == 0x000149, "Member 'BP_ActionPairStandbyBase_C_ExecuteUbergraph_BP_ActionPairStandbyBase::CallFunc_IsValidTarget_IsValid_1' has a wrong offset!");

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.GetStandByAnime
// 0x0060 (0x0060 - 0x0000)
struct BP_ActionPairStandbyBase_C_GetStandByAnime final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        Temp_byte_Variable_1;                              // 0x0009(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D90[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D91[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value_1;                         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_GetStandByAnime) == 0x000008, "Wrong alignment on BP_ActionPairStandbyBase_C_GetStandByAnime");
static_assert(sizeof(BP_ActionPairStandbyBase_C_GetStandByAnime) == 0x000060, "Wrong size on BP_ActionPairStandbyBase_C_GetStandByAnime");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, Montage) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, Temp_byte_Variable) == 0x000008, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, Temp_byte_Variable_1) == 0x000009, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000020, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetActionTarget_ReturnValue) == 0x000028, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000038, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_Map_Find_Value) == 0x000040, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, K2Node_SwitchEnum_CmpSuccess) == 0x000049, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_Map_Find_Value_1) == 0x000050, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_GetStandByAnime, CallFunc_Map_Find_ReturnValue_1) == 0x000058, "Member 'BP_ActionPairStandbyBase_C_GetStandByAnime::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.IsValidTarget
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionPairStandbyBase_C_IsValidTarget final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D92[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D93[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D94[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_IsValidTarget) == 0x000008, "Wrong alignment on BP_ActionPairStandbyBase_C_IsValidTarget");
static_assert(sizeof(BP_ActionPairStandbyBase_C_IsValidTarget) == 0x000040, "Wrong size on BP_ActionPairStandbyBase_C_IsValidTarget");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, IsValid) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::IsValid' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000028, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_GetActionTarget_ReturnValue_1) == 0x000030, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairStandbyBase_C_IsValidTarget, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_ActionPairStandbyBase_C_IsValidTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.OnSetCallAIAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPairStandbyBase_C_OnSetCallAIAction final
{
public:
	class UPalAIActionBase*                       CallAction;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_OnSetCallAIAction) == 0x000008, "Wrong alignment on BP_ActionPairStandbyBase_C_OnSetCallAIAction");
static_assert(sizeof(BP_ActionPairStandbyBase_C_OnSetCallAIAction) == 0x000008, "Wrong size on BP_ActionPairStandbyBase_C_OnSetCallAIAction");
static_assert(offsetof(BP_ActionPairStandbyBase_C_OnSetCallAIAction, CallAction) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_OnSetCallAIAction::CallAction' has a wrong offset!");

// Function BP_ActionPairStandbyBase.BP_ActionPairStandbyBase_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionPairStandbyBase_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairStandbyBase_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionPairStandbyBase_C_TickAction");
static_assert(sizeof(BP_ActionPairStandbyBase_C_TickAction) == 0x000004, "Wrong size on BP_ActionPairStandbyBase_C_TickAction");
static_assert(offsetof(BP_ActionPairStandbyBase_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionPairStandbyBase_C_TickAction::DeltaTime' has a wrong offset!");

}

