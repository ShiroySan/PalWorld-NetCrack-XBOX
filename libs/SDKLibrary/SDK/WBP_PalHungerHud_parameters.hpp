#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalHungerHud

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalHungerHud.WBP_PalHungerHud_C.ExecuteUbergraph_WBP_PalHungerHud
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C4[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_HungerIcon*    K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetLocalPlayerGroupID_GroupID;            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C7[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud) == 0x000008, "Wrong alignment on WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud");
static_assert(sizeof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud) == 0x000068, "Wrong size on WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, EntryPoint) == 0x000000, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, Temp_bool_Variable) == 0x000004, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, Temp_byte_Variable) == 0x000005, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, CallFunc_GetParam_ReturnValue) == 0x000018, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon) == 0x000028, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, CallFunc_GetLocalPlayerGroupID_GroupID) == 0x000034, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::CallFunc_GetLocalPlayerGroupID_GroupID' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x000060, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud, K2Node_Select_Default) == 0x000061, "Member 'WBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalHungerHud.WBP_PalHungerHud_C.GetLocalPlayerGroupID
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalHungerHud_C_GetLocalPlayerGroupID final
{
public:
	struct FGuid                                  GroupId;                                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C8[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetGroupId_ReturnValue;                   // 0x0030(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHungerHud_C_GetLocalPlayerGroupID) == 0x000008, "Wrong alignment on WBP_PalHungerHud_C_GetLocalPlayerGroupID");
static_assert(sizeof(WBP_PalHungerHud_C_GetLocalPlayerGroupID) == 0x000048, "Wrong size on WBP_PalHungerHud_C_GetLocalPlayerGroupID");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, GroupId) == 0x000000, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::GroupId' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_GetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_GetGroupId_ReturnValue) == 0x000030, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_GetGroupId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerHud_C_GetLocalPlayerGroupID, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'WBP_PalHungerHud_C_GetLocalPlayerGroupID::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

