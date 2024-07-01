#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDeath_SelfDestruct

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C.ExecuteUbergraph_BP_ActionDeath_SelfDestruct
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CC[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_SelfDestruct_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct) == 0x000010, "Wrong alignment on BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct");
static_assert(sizeof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct) == 0x0000A0, "Wrong size on BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, EntryPoint) == 0x000000, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'BP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

