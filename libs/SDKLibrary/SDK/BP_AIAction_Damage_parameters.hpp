#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Damage

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Damage_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Damage_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Damage_C_ActionStart");
static_assert(sizeof(BP_AIAction_Damage_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Damage_C_ActionStart");
static_assert(offsetof(BP_AIAction_Damage_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Damage_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ExecuteUbergraph_BP_AIAction_Damage
// 0x0110 (0x0110 - 0x0000)
struct BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A7[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0010(0x00E0)()
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage) == 0x000010, "Wrong alignment on BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage");
static_assert(sizeof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage) == 0x000110, "Wrong size on BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage");
static_assert(offsetof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage, EntryPoint) == 0x000000, "Member 'BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage, K2Node_MakeStruct_ActionDynamicParameter) == 0x000010, "Member 'BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage, K2Node_Event_ControlledPawn) == 0x0000F0, "Member 'BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F8, "Member 'BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage, CallFunc_PlayActionByTypeParameter_ReturnValue) == 0x000100, "Member 'BP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage::CallFunc_PlayActionByTypeParameter_ReturnValue' has a wrong offset!");

}

