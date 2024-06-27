#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionArchitecture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionArchitecture.BP_ActionArchitecture_C.ExecuteUbergraph_BP_ActionArchitecture
// 0x0100 (0x0100 - 0x0000)
struct BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340C[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DecreaseFullStomachRate_Work_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_340E[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ArchitectureHammer_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture) == 0x000010, "Wrong alignment on BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture");
static_assert(sizeof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture) == 0x000100, "Wrong size on BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, EntryPoint) == 0x000000, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, K2Node_DynamicCast_AsPlayer_Controller) == 0x000080, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000090, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetGameSetting_ReturnValue) == 0x000098, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_DecreaseFullStomachRate_Work_ReturnValue) == 0x0000A0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_DecreaseFullStomachRate_Work_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000B0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B8, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000C0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetMainMesh_ReturnValue) == 0x0000D0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000D8, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, CallFunc_GetController_ReturnValue_1) == 0x0000E0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x0000E8, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

