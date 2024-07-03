#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_PlayerNameEdit

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'WBP_CharaCre_PlayerNameEdit_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.ClampInputName
// 0x0070 (0x0070 - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_ClampInputName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   ClampedNickName;                                   // 0x0018(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName) == 0x000008, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_ClampInputName");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName) == 0x000070, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_ClampInputName");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, InText) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::InText' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, ClampedNickName) == 0x000018, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::ClampedNickName' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, CallFunc_Left_ReturnValue) == 0x000040, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, CallFunc_Len_ReturnValue) == 0x000068, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ClampInputName, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_CharaCre_PlayerNameEdit_C_ClampInputName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0040(0x0018)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_ClampInputName_clampedNickName;           // 0x0060(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0078(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue_1;                   // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00B8(0x0018)()
	class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_1; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F6[0x2];                                       // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x00F8(0x0010)(NoDestructor)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0110(0x0018)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Select_Default_1;                           // 0x0130(0x0010)(NoDestructor)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C0(0x0018)()
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue_2;                   // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_2; // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit) == 0x000008, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit) == 0x0001F0, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, Temp_bool_Variable) == 0x000004, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000005, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000006, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, Temp_byte_Variable) == 0x000009, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetParam_ReturnValue) == 0x000020, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter) == 0x000030, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_TextIsEmpty_ReturnValue) == 0x000039, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_ComponentBoundEvent_Text_1) == 0x000040, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_ClampInputName_clampedNickName) == 0x000060, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_ClampInputName_clampedNickName' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_ComponentBoundEvent_Text) == 0x000078, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_ComponentBoundEvent_CommitMethod) == 0x000090, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Conv_TextToString_ReturnValue) == 0x000098, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Len_ReturnValue) == 0x0000A8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetParam_ReturnValue_1) == 0x0000B0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetText_ReturnValue) == 0x0000B8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_1) == 0x0000D0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000E0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Len_ReturnValue_1) == 0x0000F0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, Temp_bool_Variable_2) == 0x0000F4, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000F5, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_Select_Default) == 0x0000F8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetGameSetting_ReturnValue) == 0x000108, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000110, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_SelectInt_ReturnValue) == 0x000128, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_Select_Default_1) == 0x000130, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000140, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000148, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_MakeArray_Array) == 0x0001B0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_Format_ReturnValue) == 0x0001C0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, CallFunc_GetParam_ReturnValue_2) == 0x0001D8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::CallFunc_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_2) == 0x0001E0, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit, K2Node_Select_Default_2) == 0x0001E9, "Member 'WBP_CharaCre_PlayerNameEdit_C_ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.SetEnableConfirmButton
// 0x002C (0x002C - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0024(0x0004)(NoDestructor)
	float                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton) == 0x000004, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton) == 0x00002C, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, IsEnable) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_real_Variable) == 0x000004, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_real_Variable_1) == 0x000008, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_bool_Variable) == 0x00000C, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_byte_Variable) == 0x00000D, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_byte_Variable_1) == 0x00000E, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, K2Node_Select_Default) == 0x000020, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, Temp_bool_Variable_1) == 0x000021, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, CallFunc_RegisterActionBinding_ReturnValue) == 0x000024, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_CharaCre_PlayerNameEdit_C_SetEnableConfirmButton::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C.BP_GetDesiredFocusTarget
// 0x0038 (0x0038 - 0x0000)
struct WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget) == 0x000038, "Wrong size on WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget, CallFunc_Len_ReturnValue) == 0x000030, "Member 'WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'WBP_CharaCre_PlayerNameEdit_C_BP_GetDesiredFocusTarget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

