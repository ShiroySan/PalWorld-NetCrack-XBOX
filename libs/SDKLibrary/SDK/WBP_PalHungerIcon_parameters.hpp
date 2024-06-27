#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalHungerIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.ExecuteUbergraph_WBP_PalHungerIcon
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43EC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon) == 0x000008, "Wrong alignment on WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon");
static_assert(sizeof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon) == 0x000058, "Wrong size on WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, EntryPoint) == 0x000000, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000030, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000038, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000040, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000048, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'WBP_PalHungerIcon_C_ExecuteUbergraph_WBP_PalHungerIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalHungerIcon.WBP_PalHungerIcon_C.SetExistFoodFlag
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalHungerIcon_C_SetExistFoodFlag final
{
public:
	bool                                          IsExistFood;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43ED[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0020(0x0018)()
};
static_assert(alignof(WBP_PalHungerIcon_C_SetExistFoodFlag) == 0x000008, "Wrong alignment on WBP_PalHungerIcon_C_SetExistFoodFlag");
static_assert(sizeof(WBP_PalHungerIcon_C_SetExistFoodFlag) == 0x000038, "Wrong size on WBP_PalHungerIcon_C_SetExistFoodFlag");
static_assert(offsetof(WBP_PalHungerIcon_C_SetExistFoodFlag, IsExistFood) == 0x000000, "Member 'WBP_PalHungerIcon_C_SetExistFoodFlag::IsExistFood' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_SetExistFoodFlag, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_PalHungerIcon_C_SetExistFoodFlag::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PalHungerIcon_C_SetExistFoodFlag, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000020, "Member 'WBP_PalHungerIcon_C_SetExistFoodFlag::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");

}

