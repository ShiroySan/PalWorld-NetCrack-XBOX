#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Darkness

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_Status_Darkness.BP_Status_Darkness_C.DisableDebugSetting
// 0x0018 (0x0018 - 0x0000)
struct BP_Status_Darkness_C_DisableDebugSetting final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Darkness_C_DisableDebugSetting) == 0x000008, "Wrong alignment on BP_Status_Darkness_C_DisableDebugSetting");
static_assert(sizeof(BP_Status_Darkness_C_DisableDebugSetting) == 0x000018, "Wrong size on BP_Status_Darkness_C_DisableDebugSetting");
static_assert(offsetof(BP_Status_Darkness_C_DisableDebugSetting, Disable) == 0x000000, "Member 'BP_Status_Darkness_C_DisableDebugSetting::Disable' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_DisableDebugSetting, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_Status_Darkness_C_DisableDebugSetting::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_DisableDebugSetting, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Status_Darkness_C_DisableDebugSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Status_Darkness.BP_Status_Darkness_C.ExecuteUbergraph_BP_Status_Darkness
// 0x00A8 (0x00A8 - 0x0000)
struct BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasSelfPalElement_Has;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F9[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FA[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0080(0x0010)()
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_Local_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DisableDebugSetting_Disable;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DisableDebugSetting_Disable_1;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElement_Ignore;                   // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness) == 0x000008, "Wrong alignment on BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness");
static_assert(sizeof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness) == 0x0000A8, "Wrong size on BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, EntryPoint) == 0x000000, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_HasSelfPalElement_Has) == 0x000004, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_HasSelfPalElement_Has' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000020, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue_2) == 0x000028, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000030, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue_3) == 0x000038, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000040, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue_4) == 0x000048, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, K2Node_DynamicCast_AsPal_Player_Character) == 0x000050, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetOwner_ReturnValue_5) == 0x000060, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000068, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000070, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000080, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000090, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_AddVisualEffect_Local_ReturnValue) == 0x000098, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_AddVisualEffect_Local_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_DisableDebugSetting_Disable) == 0x0000A0, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_DisableDebugSetting_Disable' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_DisableDebugSetting_Disable_1) == 0x0000A1, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_DisableDebugSetting_Disable_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness, CallFunc_IsIgnoreElement_Ignore) == 0x0000A2, "Member 'BP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness::CallFunc_IsIgnoreElement_Ignore' has a wrong offset!");

}

