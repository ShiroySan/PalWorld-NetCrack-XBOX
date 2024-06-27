#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonScrollList

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddScrollOffset
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalCommonScrollList_C_AddScrollOffset final
{
public:
	double                                        Offset;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_B_ImplicitCast;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_AddScrollOffset) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_AddScrollOffset");
static_assert(sizeof(WBP_PalCommonScrollList_C_AddScrollOffset) == 0x000040, "Wrong size on WBP_PalCommonScrollList_C_AddScrollOffset");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, Offset) == 0x000000, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::Offset' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_GetScrollOffset_ReturnValue) == 0x000008, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x00000C, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_FMin_ReturnValue) == 0x000018, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_FMin_B_ImplicitCast) == 0x000030, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_FMin_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddScrollOffset, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x000038, "Member 'WBP_PalCommonScrollList_C_AddScrollOffset::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonScrollList_C_AddWidget final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_AddWidget) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_AddWidget");
static_assert(sizeof(WBP_PalCommonScrollList_C_AddWidget) == 0x000010, "Wrong size on WBP_PalCommonScrollList_C_AddWidget");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddWidget, Widget) == 0x000000, "Member 'WBP_PalCommonScrollList_C_AddWidget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_AddWidget, CallFunc_AddChild_ReturnValue) == 0x000008, "Member 'WBP_PalCommonScrollList_C_AddWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.ExecuteUbergraph_WBP_PalCommonScrollList
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B6[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lastScrollOffset_ImplicitCast;  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lastScrollOffset_ImplicitCast_1; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList");
static_assert(sizeof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList) == 0x000058, "Wrong size on WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, EntryPoint) == 0x000000, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, K2Node_ComponentBoundEvent_CurrentOffset) == 0x000004, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000028, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_GetCurrentInputType_ReturnValue) == 0x000030, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_GetScrollOffset_ReturnValue) == 0x000034, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast) == 0x000038, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, K2Node_VariableSet_lastScrollOffset_ImplicitCast) == 0x000040, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::K2Node_VariableSet_lastScrollOffset_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1) == 0x000048, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList, K2Node_VariableSet_lastScrollOffset_ImplicitCast_1) == 0x000050, "Member 'WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList::K2Node_VariableSet_lastScrollOffset_ImplicitCast_1' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetAllChildrenNum
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCommonScrollList_C_GetAllChildrenNum final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_GetAllChildrenNum) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_GetAllChildrenNum");
static_assert(sizeof(WBP_PalCommonScrollList_C_GetAllChildrenNum) == 0x000020, "Wrong size on WBP_PalCommonScrollList_C_GetAllChildrenNum");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetAllChildrenNum, Param_Index) == 0x000000, "Member 'WBP_PalCommonScrollList_C_GetAllChildrenNum::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetAllChildrenNum, CallFunc_GetAllChildren_ReturnValue) == 0x000008, "Member 'WBP_PalCommonScrollList_C_GetAllChildrenNum::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetAllChildrenNum, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_PalCommonScrollList_C_GetAllChildrenNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetIndexFromWidget
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCommonScrollList_C_GetIndexFromWidget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B8[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_GetIndexFromWidget) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_GetIndexFromWidget");
static_assert(sizeof(WBP_PalCommonScrollList_C_GetIndexFromWidget) == 0x000028, "Wrong size on WBP_PalCommonScrollList_C_GetIndexFromWidget");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetIndexFromWidget, Widget) == 0x000000, "Member 'WBP_PalCommonScrollList_C_GetIndexFromWidget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetIndexFromWidget, Param_Index) == 0x000008, "Member 'WBP_PalCommonScrollList_C_GetIndexFromWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetIndexFromWidget, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_PalCommonScrollList_C_GetIndexFromWidget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetIndexFromWidget, CallFunc_Array_Find_ReturnValue) == 0x000020, "Member 'WBP_PalCommonScrollList_C_GetIndexFromWidget::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetScrollBox
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonScrollList_C_GetScrollBox final
{
public:
	class UScrollBox*                             ScrollBox;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_GetScrollBox) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_GetScrollBox");
static_assert(sizeof(WBP_PalCommonScrollList_C_GetScrollBox) == 0x000008, "Wrong size on WBP_PalCommonScrollList_C_GetScrollBox");
static_assert(offsetof(WBP_PalCommonScrollList_C_GetScrollBox, ScrollBox) == 0x000000, "Member 'WBP_PalCommonScrollList_C_GetScrollBox::ScrollBox' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.OnInputMethodChanged
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalCommonScrollList_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_PalCommonScrollList_C_OnInputMethodChanged");
static_assert(sizeof(WBP_PalCommonScrollList_C_OnInputMethodChanged) == 0x000002, "Wrong size on WBP_PalCommonScrollList_C_OnInputMethodChanged");
static_assert(offsetof(WBP_PalCommonScrollList_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_PalCommonScrollList_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_OnInputMethodChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_PalCommonScrollList_C_OnInputMethodChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.UpdateArrowVisibilityAndAnimation
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation final
{
public:
	double                                        CurrentOffset;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48BA[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48BB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation) == 0x000008, "Wrong alignment on WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation");
static_assert(sizeof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation) == 0x000050, "Wrong size on WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CurrentOffset) == 0x000000, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000008, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000021, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000048, "Member 'WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

