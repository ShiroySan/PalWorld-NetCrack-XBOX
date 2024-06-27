#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_BackupSelect_ListContent

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.Setup
// 0x0028 (0x0028 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_Setup final
{
public:
	struct FPalUIBackupSaveDisplayData            DisplayData;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_Setup) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_Setup");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_Setup) == 0x000028, "Wrong size on WBP_Title_BackupSelect_ListContent_C_Setup");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_Setup, DisplayData) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_Setup::DisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_Title_BackupSelect_ListContent_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature final
{
public:
	class UWBP_Title_BackupSelect_ListContent_C*  Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.GetDisplayData
// 0x0010 (0x0010 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_GetDisplayData final
{
public:
	struct FPalUIBackupSaveDisplayData            DisplayData;                                       // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_GetDisplayData) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_GetDisplayData");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_GetDisplayData) == 0x000010, "Wrong size on WBP_Title_BackupSelect_ListContent_C_GetDisplayData");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_GetDisplayData, DisplayData) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_GetDisplayData::DisplayData' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.ExecuteUbergraph_WBP_Title_BackupSelect_ListContent
// 0x0040 (0x0040 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B3E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent) == 0x000040, "Wrong size on WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, EntryPoint) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, K2Node_ComponentBoundEvent_Button_2) == 0x000018, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, K2Node_ComponentBoundEvent_Button_1) == 0x000030, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent, K2Node_ComponentBoundEvent_Button) == 0x000038, "Member 'WBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

