#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatGunState_Reload

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.ExecuteUbergraph_BP_AINPC_CombatGunState_Reload
// 0x0170 (0x0170 - 0x0000)
struct BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetReloadTime_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_465F[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0050(0x00E0)()
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_1;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle_1;           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_2;              // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle_2;           // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_X_ImplicitCast;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload) == 0x000010, "Wrong alignment on BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload");
static_assert(sizeof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload) == 0x000170, "Wrong size on BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetControllerRef_NPCAICon) == 0x000008, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000010, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetReloadTime_ReturnValue) == 0x000018, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetReloadTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetSelfActor_SelfActor) == 0x000020, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetActionComponent_ReturnValue) == 0x000040, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, K2Node_MakeStruct_ActionDynamicParameter) == 0x000050, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetControllerRef_NPCAICon_1) == 0x000130, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetControllerRef_NPCAICon_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_PlayActionParameter_ReturnValue) == 0x000138, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetWeaponHandle_WeaponHandle_1) == 0x000140, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetWeaponHandle_WeaponHandle_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetTargetActor_TargetActor) == 0x000148, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetControllerRef_NPCAICon_2) == 0x000150, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetControllerRef_NPCAICon_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_GetWeaponHandle_WeaponHandle_2) == 0x000158, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_GetWeaponHandle_WeaponHandle_2' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload, CallFunc_MakeVector_X_ImplicitCast) == 0x000160, "Member 'BP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");

}

