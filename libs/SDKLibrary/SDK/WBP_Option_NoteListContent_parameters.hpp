#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Option_NoteListContent

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.SetNoteList
// 0x0028 (0x0028 - 0x0000)
struct WBP_Option_NoteListContent_C_SetNoteList final
{
public:
	class FName                                   Param_Title;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChecked;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Desc;                                              // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Option_NoteListContent_C_SetNoteList) == 0x000008, "Wrong alignment on WBP_Option_NoteListContent_C_SetNoteList");
static_assert(sizeof(WBP_Option_NoteListContent_C_SetNoteList) == 0x000028, "Wrong size on WBP_Option_NoteListContent_C_SetNoteList");
static_assert(offsetof(WBP_Option_NoteListContent_C_SetNoteList, Param_Title) == 0x000000, "Member 'WBP_Option_NoteListContent_C_SetNoteList::Param_Title' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_SetNoteList, IsChecked) == 0x000008, "Member 'WBP_Option_NoteListContent_C_SetNoteList::IsChecked' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_SetNoteList, Desc) == 0x000010, "Member 'WBP_Option_NoteListContent_C_SetNoteList::Desc' has a wrong offset!");

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.OnNoteListClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature final
{
public:
	class FName                                   Param_Title;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature) == 0x000004, "Wrong alignment on WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature");
static_assert(sizeof(WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature");
static_assert(offsetof(WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature, Param_Title) == 0x000000, "Member 'WBP_Option_NoteListContent_C_OnNoteListClicked__DelegateSignature::Param_Title' has a wrong offset!");

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.ExecuteUbergraph_WBP_Option_NoteListContent
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_Title;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsChecked;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Desc;                           // 0x0018(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFirstLine_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0080(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x00A0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent) == 0x000008, "Wrong alignment on WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent");
static_assert(sizeof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent) == 0x0000C0, "Wrong size on WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, EntryPoint) == 0x000000, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, Temp_byte_Variable) == 0x000004, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_NotEqual_NameName_ReturnValue) == 0x000006, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_CustomEvent_Title) == 0x000008, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_CustomEvent_Title' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_CustomEvent_IsChecked) == 0x000010, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_CustomEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_CustomEvent_Desc) == 0x000018, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_CustomEvent_Desc' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_GetFirstLine_ReturnValue) == 0x000040, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_GetFirstLine_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_ComponentBoundEvent_Button_2) == 0x000068, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_ComponentBoundEvent_Button_1) == 0x000070, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_ComponentBoundEvent_Button) == 0x000078, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_MakeLiteralText_ReturnValue) == 0x000080, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, Temp_bool_Variable) == 0x000098, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_SelectText_ReturnValue) == 0x0000A0, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, K2Node_Select_Default) == 0x0000B8, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x0000B9, "Member 'WBP_Option_NoteListContent_C_ExecuteUbergraph_WBP_Option_NoteListContent::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Option_NoteListContent.WBP_Option_NoteListContent_C.BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Option_NoteListContent_C_BndEvt__WBP_Option_NoteListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

