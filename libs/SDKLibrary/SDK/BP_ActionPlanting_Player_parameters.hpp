#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPlanting_Player

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionPlanting_Player.BP_ActionPlanting_Player_C.ExecuteUbergraph_BP_ActionPlanting_Player
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontage_Exist;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D1[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlantingSack_C*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D2[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player) == 0x000010, "Wrong alignment on BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player");
static_assert(sizeof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player) == 0x0000F0, "Wrong size on BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, EntryPoint) == 0x000000, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_FindMontage_Montage) == 0x000008, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_FindMontage_Exist) == 0x000010, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_FindMontage_Exist' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetActionCharacter_ReturnValue) == 0x000090, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetMainMeshByActor_ReturnValue) == 0x000098, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetController_ReturnValue) == 0x0000A8, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, K2Node_DynamicCast_AsPlayer_Controller) == 0x0000B0, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000C0, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000C8, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, CallFunc_GetController_ReturnValue_1) == 0x0000D0, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x0000D8, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'BP_ActionPlanting_Player_C_ExecuteUbergraph_BP_ActionPlanting_Player::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

