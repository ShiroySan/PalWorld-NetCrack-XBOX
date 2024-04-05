#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuildMemberMenuList

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_GuildMemberMenuList_C_SetText final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_SetText) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_SetText");
static_assert(sizeof(WBP_GuildMemberMenuList_C_SetText) == 0x000018, "Wrong size on WBP_GuildMemberMenuList_C_SetText");
static_assert(offsetof(WBP_GuildMemberMenuList_C_SetText, NewText) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_SetText::NewText' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature final
{
public:
	class UWBP_GuildMemberMenuList_C*             Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.GetBindedTextString
// 0x0038 (0x0038 - 0x0000)
struct WBP_GuildMemberMenuList_C_GetBindedTextString final
{
public:
	class FString                                 OutString;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_GetBindedTextString) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_GetBindedTextString");
static_assert(sizeof(WBP_GuildMemberMenuList_C_GetBindedTextString) == 0x000038, "Wrong size on WBP_GuildMemberMenuList_C_GetBindedTextString");
static_assert(offsetof(WBP_GuildMemberMenuList_C_GetBindedTextString, OutString) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_GetBindedTextString::OutString' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_GetBindedTextString, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'WBP_GuildMemberMenuList_C_GetBindedTextString::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_GetBindedTextString, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'WBP_GuildMemberMenuList_C_GetBindedTextString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.ExecuteUbergraph_WBP_GuildMemberMenuList
// 0x0030 (0x0030 - 0x0000)
struct WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList");
static_assert(sizeof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList) == 0x000030, "Wrong size on WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, EntryPoint) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, K2Node_ComponentBoundEvent_Button_2) == 0x000008, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, K2Node_ComponentBoundEvent_Button_1) == 0x000010, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_GuildMemberMenuList_C_ExecuteUbergraph_WBP_GuildMemberMenuList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C.BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildMemberMenuList_C_BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

