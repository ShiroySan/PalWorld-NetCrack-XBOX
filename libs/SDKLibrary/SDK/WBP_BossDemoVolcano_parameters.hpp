#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossDemoVolcano

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_BossDemoVolcano.WBP_BossDemoVolcano_C.ExecuteUbergraph_WBP_BossDemoVolcano
// 0x0040 (0x0040 - 0x0000)
struct WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37BB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano) == 0x000008, "Wrong alignment on WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano");
static_assert(sizeof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano) == 0x000040, "Wrong size on WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, EntryPoint) == 0x000000, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000020, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000028, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_BossDemoVolcano_C_ExecuteUbergraph_WBP_BossDemoVolcano::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_BossDemoVolcano.WBP_BossDemoVolcano_C.SetupText
// 0x0030 (0x0030 - 0x0000)
struct WBP_BossDemoVolcano_C_SetupText final
{
public:
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0000(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0018(0x0018)()
};
static_assert(alignof(WBP_BossDemoVolcano_C_SetupText) == 0x000008, "Wrong alignment on WBP_BossDemoVolcano_C_SetupText");
static_assert(sizeof(WBP_BossDemoVolcano_C_SetupText) == 0x000030, "Wrong size on WBP_BossDemoVolcano_C_SetupText");
static_assert(offsetof(WBP_BossDemoVolcano_C_SetupText, CallFunc_GetLocalizedText_ReturnValue) == 0x000000, "Member 'WBP_BossDemoVolcano_C_SetupText::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossDemoVolcano_C_SetupText, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000018, "Member 'WBP_BossDemoVolcano_C_SetupText::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");

}

