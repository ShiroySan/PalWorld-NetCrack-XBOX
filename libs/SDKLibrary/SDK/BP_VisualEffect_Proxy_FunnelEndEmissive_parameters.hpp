#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Proxy_FunnelEndEmissive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C.ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive
// 0x0090 (0x0090 - 0x0000)
struct BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37B6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37B7[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CopyMesh_FunnelEndEmissive_C*       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive) == 0x000010, "Wrong alignment on BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive");
static_assert(sizeof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive) == 0x000090, "Wrong size on BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, CallFunc_GetCharacter_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

