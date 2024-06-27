#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_DeleteWorldWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.SetEnableConfirmButton
// 0x0018 (0x0018 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F1[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton) == 0x000004, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton) == 0x000018, "Wrong size on WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, IsEnable) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_bool_Variable) == 0x000001, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_real_Variable) == 0x000004, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_real_Variable_1) == 0x000008, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_bool_Variable_1) == 0x00000C, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, K2Node_Select_Default) == 0x000010, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_byte_Variable) == 0x000014, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, Temp_byte_Variable_1) == 0x000015, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton, K2Node_Select_Default_1) == 0x000016, "Member 'WBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OpenCheckDialog
// 0x0048 (0x0048 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_OpenCheckDialog final
{
public:
	struct FDataTableRowHandle                    NewLocalVar;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_OpenCheckDialog");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog) == 0x000048, "Wrong size on WBP_Title_DeleteWorldWindow_C_OpenCheckDialog");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog, NewLocalVar) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_OpenCheckDialog::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_Title_DeleteWorldWindow_C_OpenCheckDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_Title_DeleteWorldWindow_C_OpenCheckDialog::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OpenCheckDialog, CallFunc_Dialog_ReturnValue) == 0x000038, "Member 'WBP_Title_DeleteWorldWindow_C_OpenCheckDialog::CallFunc_Dialog_ReturnValue' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OnClosedDeleteCheckDialog
// 0x0020 (0x0020 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog) == 0x000020, "Wrong size on WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog, bResult) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog::bResult' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog, K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World) == 0x000010, "Member 'WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog::K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.ExecuteUbergraph_WBP_Title_DeleteWorldWindow
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F6[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDialogParameterBase*                K2Node_DynamicCast_AsPal_Dialog_Parameter_Base;    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47F7[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0070(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow) == 0x0000A0, "Wrong size on WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, EntryPoint) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, K2Node_ComponentBoundEvent_Text_1) == 0x000008, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, K2Node_ComponentBoundEvent_Text) == 0x000020, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, K2Node_ComponentBoundEvent_CommitMethod) == 0x000038, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000050, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_GetParam_ReturnValue) == 0x000058, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, K2Node_DynamicCast_AsPal_Dialog_Parameter_Base) == 0x000060, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::K2Node_DynamicCast_AsPal_Dialog_Parameter_Base' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_GetText_ReturnValue) == 0x000070, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000088, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000098, "Member 'WBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

