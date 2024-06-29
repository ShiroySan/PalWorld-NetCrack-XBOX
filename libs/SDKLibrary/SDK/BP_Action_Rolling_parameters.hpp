#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Rolling

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Rolling.BP_Action_Rolling_C.ExecuteUbergraph_BP_Action_Rolling
// 0x0090 (0x0090 - 0x0000)
struct BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FB[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0044(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FC[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionVelocity_ReturnValue;            // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling) == 0x000008, "Wrong alignment on BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling");
static_assert(sizeof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling) == 0x000090, "Wrong size on BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, EntryPoint) == 0x000000, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000018, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000020, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000030, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000038, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000044, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000050, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_GetActionVelocity_ReturnValue) == 0x000058, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_GetActionVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000070, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000088, "Member 'BP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

