#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionEat

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionEat.BP_ActionEat_C.ExecuteUbergraph_BP_ActionEat
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4060[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4061[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat) == 0x000008, "Wrong alignment on BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat");
static_assert(sizeof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat) == 0x000038, "Wrong size on BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, EntryPoint) == 0x000000, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000020, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_ActionEat_C_ExecuteUbergraph_BP_ActionEat::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

