#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_OtomoDefault

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ExecuteUbergraph_BP_AIAction_OtomoDefault
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41DE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault) == 0x000010, "Wrong size on BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault, EntryPoint) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault, K2Node_Event_Target) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault::K2Node_Event_Target' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.Set Action Berserker
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_OtomoDefault_C_Set_Action_Berserker final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Otomo_C*        K2Node_DynamicCast_AsBP_Monster_AIController_Otomo; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_Set_Action_Berserker");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker) == 0x000020, "Wrong size on BP_AIAction_OtomoDefault_C_Set_Action_Berserker");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker, Target) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_Set_Action_Berserker::Target' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_Set_Action_Berserker::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker, K2Node_DynamicCast_AsBP_Monster_AIController_Otomo) == 0x000010, "Member 'BP_AIAction_OtomoDefault_C_Set_Action_Berserker::K2Node_DynamicCast_AsBP_Monster_AIController_Otomo' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_Set_Action_Berserker, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_OtomoDefault_C_Set_Action_Berserker::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetAction
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_OtomoDefault_C_SetAction final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetOwnerComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_SetAction) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_SetAction");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_SetAction) == 0x000020, "Wrong size on BP_AIAction_OtomoDefault_C_SetAction");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetAction, Param_Class) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_SetAction::Param_Class' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetAction, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_SetAction::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetAction, CallFunc_GetOwnerComponent_ReturnValue) == 0x000010, "Member 'BP_AIAction_OtomoDefault_C_SetAction::CallFunc_GetOwnerComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetAction, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_AIAction_OtomoDefault_C_SetAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionCombat
// 0x0048 (0x0048 - 0x0000)
struct BP_AIAction_OtomoDefault_C_SetActionCombat final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Otomo_C*        K2Node_DynamicCast_AsBP_Monster_AIController_Otomo; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41DF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCombatBase*                 CallFunc_SetCombatAction_AIAction;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         K2Node_DynamicCast_AsPal_Character_Movement_Component; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_SetActionCombat) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_SetActionCombat");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_SetActionCombat) == 0x000048, "Wrong size on BP_AIAction_OtomoDefault_C_SetActionCombat");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, CallFunc_GetController_ReturnValue_1) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, K2Node_DynamicCast_AsBP_Monster_AIController_Otomo) == 0x000010, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::K2Node_DynamicCast_AsBP_Monster_AIController_Otomo' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, CallFunc_SetCombatAction_AIAction) == 0x000028, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::CallFunc_SetCombatAction_AIAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, CallFunc_GetMovementComponent_ReturnValue) == 0x000030, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, K2Node_DynamicCast_AsPal_Character_Movement_Component) == 0x000038, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::K2Node_DynamicCast_AsPal_Character_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionCombat, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_AIAction_OtomoDefault_C_SetActionCombat::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionComposite
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_OtomoDefault_C_SetActionComposite final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetOwnerComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*              CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_SetActionComposite) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_SetActionComposite");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_SetActionComposite) == 0x000018, "Wrong size on BP_AIAction_OtomoDefault_C_SetActionComposite");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionComposite, Param_Class) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_SetActionComposite::Param_Class' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionComposite, CallFunc_GetOwnerComponent_ReturnValue) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_SetActionComposite::CallFunc_GetOwnerComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetActionComposite, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_AIAction_OtomoDefault_C_SetActionComposite::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoBerserker
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_OtomoDefault_C_SetOtomoBerserker final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_SetOtomoBerserker) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_SetOtomoBerserker");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_SetOtomoBerserker) == 0x000008, "Wrong size on BP_AIAction_OtomoDefault_C_SetOtomoBerserker");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_SetOtomoBerserker, Target) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_SetOtomoBerserker::Target' has a wrong offset!");

// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ShouldSetCombatAction
// 0x0058 (0x0058 - 0x0000)
struct BP_AIAction_OtomoDefault_C_ShouldSetCombatAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Trainer;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   CallFunc_GetPalPlayerController_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E2[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalOtomoPalOrderType                         CallFunc_GetOtomoOrder_ReturnValue;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction) == 0x000008, "Wrong alignment on BP_AIAction_OtomoDefault_C_ShouldSetCombatAction");
static_assert(sizeof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction) == 0x000058, "Wrong size on BP_AIAction_OtomoDefault_C_ShouldSetCombatAction");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, ReturnValue) == 0x000000, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, Trainer) == 0x000008, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::Trainer' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, K2Node_DynamicCast_AsPal_Player_Character) == 0x000018, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetPalPlayerController_ReturnValue) == 0x000030, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetPalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000048, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetOtomoOrder_ReturnValue) == 0x000051, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetOtomoOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000052, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_OtomoDefault_C_ShouldSetCombatAction, CallFunc_GetBattleMode_ReturnValue) == 0x000053, "Member 'BP_AIAction_OtomoDefault_C_ShouldSetCombatAction::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");

}

