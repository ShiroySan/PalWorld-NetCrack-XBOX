#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Option_NoteContent

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Option_NoteContent.WBP_Option_NoteContent_C.SetNoteContent
// 0x0020 (0x0020 - 0x0000)
struct WBP_Option_NoteContent_C_SetNoteContent final
{
public:
	class UPalNoteData*                           NoteData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Desc;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Option_NoteContent_C_SetNoteContent) == 0x000008, "Wrong alignment on WBP_Option_NoteContent_C_SetNoteContent");
static_assert(sizeof(WBP_Option_NoteContent_C_SetNoteContent) == 0x000020, "Wrong size on WBP_Option_NoteContent_C_SetNoteContent");
static_assert(offsetof(WBP_Option_NoteContent_C_SetNoteContent, NoteData) == 0x000000, "Member 'WBP_Option_NoteContent_C_SetNoteContent::NoteData' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_SetNoteContent, Desc) == 0x000008, "Member 'WBP_Option_NoteContent_C_SetNoteContent::Desc' has a wrong offset!");

// Function WBP_Option_NoteContent.WBP_Option_NoteContent_C.ExecuteUbergraph_WBP_Option_NoteContent
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNoteData*                           K2Node_CustomEvent_NoteData;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Desc;                           // 0x0010(0x0018)()
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0030(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_B_ImplicitCast;                      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent) == 0x000008, "Wrong alignment on WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent");
static_assert(sizeof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent) == 0x0000D8, "Wrong size on WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, EntryPoint) == 0x000000, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, K2Node_CustomEvent_NoteData) == 0x000008, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::K2Node_CustomEvent_NoteData' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, K2Node_CustomEvent_Desc) == 0x000010, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::K2Node_CustomEvent_Desc' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000028, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, Temp_byte_Variable) == 0x000029, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, Temp_byte_Variable_1) == 0x00002A, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, K2Node_Event_MyGeometry) == 0x000030, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, K2Node_Event_InDeltaTime) == 0x000070, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, Temp_bool_Variable) == 0x000074, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000078, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_GetScrollOffset_ReturnValue) == 0x00007C, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, K2Node_Select_Default) == 0x000080, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_FMax_ReturnValue) == 0x0000A8, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_FMin_ReturnValue) == 0x0000B0, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0000B8, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_FMin_B_ImplicitCast) == 0x0000C0, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_FMin_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x0000D0, "Member 'WBP_Option_NoteContent_C_ExecuteUbergraph_WBP_Option_NoteContent::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WBP_Option_NoteContent.WBP_Option_NoteContent_C.ChangeOffset
// 0x0008 (0x0008 - 0x0000)
struct WBP_Option_NoteContent_C_ChangeOffset final
{
public:
	double                                        NewOffset;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteContent_C_ChangeOffset) == 0x000008, "Wrong alignment on WBP_Option_NoteContent_C_ChangeOffset");
static_assert(sizeof(WBP_Option_NoteContent_C_ChangeOffset) == 0x000008, "Wrong size on WBP_Option_NoteContent_C_ChangeOffset");
static_assert(offsetof(WBP_Option_NoteContent_C_ChangeOffset, NewOffset) == 0x000000, "Member 'WBP_Option_NoteContent_C_ChangeOffset::NewOffset' has a wrong offset!");

// Function WBP_Option_NoteContent.WBP_Option_NoteContent_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Option_NoteContent_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Option_NoteContent_C_Tick) == 0x000008, "Wrong alignment on WBP_Option_NoteContent_C_Tick");
static_assert(sizeof(WBP_Option_NoteContent_C_Tick) == 0x000048, "Wrong size on WBP_Option_NoteContent_C_Tick");
static_assert(offsetof(WBP_Option_NoteContent_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Option_NoteContent_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Option_NoteContent_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Option_NoteContent_C_Tick::InDeltaTime' has a wrong offset!");

}

