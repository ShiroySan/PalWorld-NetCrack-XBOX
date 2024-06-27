#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalFunnelCharacterManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PalFunnelCharacterManager.BP_PalFunnelCharacterManager_C.SetFunnelCharacterActive
// 0x0078 (0x0078 - 0x0000)
struct BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive final
{
public:
	class APalFunnelCharacter*                    FunnelCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_446E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Trainer;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VEd;                                               // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VSt;                                               // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FunnelCharacterAIController_C*      K2Node_DynamicCast_AsBP_Funnel_Character_AIController; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_446F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive) == 0x000008, "Wrong alignment on BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive");
static_assert(sizeof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive) == 0x000078, "Wrong size on BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, FunnelCharacter) == 0x000000, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::FunnelCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, IsActive) == 0x000008, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::IsActive' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, Trainer) == 0x000010, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::Trainer' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, VEd) == 0x000018, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::VEd' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, VSt) == 0x000030, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::VSt' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, CallFunc_GetController_ReturnValue) == 0x000048, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, K2Node_DynamicCast_AsBP_Funnel_Character_AIController) == 0x000050, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::K2Node_DynamicCast_AsBP_Funnel_Character_AIController' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, CallFunc_GetController_ReturnValue_1) == 0x000060, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, K2Node_DynamicCast_AsPal_AIController) == 0x000068, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_PalFunnelCharacterManager_C_SetFunnelCharacterActive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

