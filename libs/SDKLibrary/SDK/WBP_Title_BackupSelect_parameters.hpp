#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_BackupSelect

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.SetBackupDisplayData
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Title_BackupSelect_C_SetBackupDisplayData final
{
public:
	TArray<struct FPalUIBackupSaveDisplayData>    DisplayData;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EUINavigation Navigation)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIBackupSaveDisplayData            CallFunc_Array_Get_Item;                           // 0x0060(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_Title_BackupSelect_ListContent_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox_1;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Title_BackupSelect_ListContent_C*  CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                         K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_SetBackupDisplayData) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_SetBackupDisplayData");
static_assert(sizeof(WBP_Title_BackupSelect_C_SetBackupDisplayData) == 0x0000D0, "Wrong size on WBP_Title_BackupSelect_C_SetBackupDisplayData");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, DisplayData) == 0x000000, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::DisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_byte_Variable) == 0x000010, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Array_IsEmpty_ReturnValue) == 0x000011, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_byte_Variable_1) == 0x000012, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_bool_Variable) == 0x000034, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_GetScrollBox_ScrollBox) == 0x000038, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_Select_Default) == 0x000048, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_MakeStruct_Margin) == 0x00004C, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Array_Get_Item) == 0x000060, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_byte_Variable_2) == 0x000074, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Max_ReturnValue) == 0x00007C, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_GetScrollBox_ScrollBox_1) == 0x000090, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_GetScrollBox_ScrollBox_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_byte_Variable_3) == 0x000098, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, Temp_bool_Variable_1) == 0x000099, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000A0, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_Select_Default_1) == 0x0000A8, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, CallFunc_AddChild_ReturnValue) == 0x0000B8, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_DynamicCast_AsScroll_Box_Slot) == 0x0000C0, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_DynamicCast_AsScroll_Box_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_SetBackupDisplayData, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'WBP_Title_BackupSelect_C_SetBackupDisplayData::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.OnClickedBackupButton_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal final
{
public:
	class UWBP_Title_BackupSelect_ListContent_C*  Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal");
static_assert(sizeof(WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal) == 0x000008, "Wrong size on WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal");
static_assert(offsetof(WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal, Widget) == 0x000000, "Member 'WBP_Title_BackupSelect_C_OnClickedBackupButton_Internal::Widget' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.OnClickedBackup__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature final
{
public:
	class UWBP_Title_BackupSelect_ListContent_C*  Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature");
static_assert(sizeof(WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature");
static_assert(offsetof(WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature, Widget) == 0x000000, "Member 'WBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.GetTopFocusTarget
// 0x0030 (0x0030 - 0x0000)
struct WBP_Title_BackupSelect_C_GetTopFocusTarget final
{
public:
	class UWidget*                                TargetWidget;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Title_BackupSelect_ListContent_C*  K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_GetTopFocusTarget");
static_assert(sizeof(WBP_Title_BackupSelect_C_GetTopFocusTarget) == 0x000030, "Wrong size on WBP_Title_BackupSelect_C_GetTopFocusTarget");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, TargetWidget) == 0x000000, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, CallFunc_GetScrollBox_ScrollBox) == 0x000008, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content) == 0x000020, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_GetTopFocusTarget, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'WBP_Title_BackupSelect_C_GetTopFocusTarget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.ExecuteUbergraph_WBP_Title_BackupSelect
// 0x0004 (0x0004 - 0x0000)
struct WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect) == 0x000004, "Wrong alignment on WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect");
static_assert(sizeof(WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect) == 0x000004, "Wrong size on WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect");
static_assert(offsetof(WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect, EntryPoint) == 0x000000, "Member 'WBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect::EntryPoint' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.CustomNavi_ToListTop
// 0x0030 (0x0030 - 0x0000)
struct WBP_Title_BackupSelect_C_CustomNavi_ToListTop final
{
public:
	EUINavigation                                 Param_Navigation;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_BackupSelect_ListContent_C*  K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_CustomNavi_ToListTop");
static_assert(sizeof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop) == 0x000030, "Wrong size on WBP_Title_BackupSelect_C_CustomNavi_ToListTop");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, Param_Navigation) == 0x000000, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::Param_Navigation' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, ReturnValue) == 0x000008, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, CallFunc_GetScrollBox_ScrollBox) == 0x000010, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content) == 0x000020, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToListTop, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToListTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.CustomNavi_ToCloseButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton final
{
public:
	EUINavigation                                 Param_Navigation;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton");
static_assert(sizeof(WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton) == 0x000010, "Wrong size on WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton, Param_Navigation) == 0x000000, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton::Param_Navigation' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton, ReturnValue) == 0x000008, "Member 'WBP_Title_BackupSelect_C_CustomNavi_ToCloseButton::ReturnValue' has a wrong offset!");

}

