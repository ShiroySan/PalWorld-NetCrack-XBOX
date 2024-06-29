#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleLocalWorldSelect

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.�������
// 0x0001 (0x0001 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_________ final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_________) == 0x000001, "Wrong alignment on WBP_TitleLocalWorldSelect_C_________");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_________) == 0x000001, "Wrong size on WBP_TitleLocalWorldSelect_C_________");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_________, bResult) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_________::bResult' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.WBP_TitleLocalWorldSelect_AutoGenFunc
// 0x0001 (0x0001 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc) == 0x000001, "Wrong alignment on WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc) == 0x000001, "Wrong size on WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc, bResult) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc::bResult' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.SetupWorldList
// 0x0068 (0x0068 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_SetupWorldList final
{
public:
	TArray<struct FPalUILocalWorldDisplayData>    CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue; // 0x0000(0x0010)(ReferenceParm)
	class UWidget*                                CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FPalUILocalWorldDisplayData> CallFunc_GetWorldDisplayInfo_OutDisplayInfo;       // 0x0018(0x0050)()
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_SetupWorldList) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_SetupWorldList");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_SetupWorldList) == 0x000068, "Wrong size on WBP_TitleLocalWorldSelect_C_SetupWorldList");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_SetupWorldList, CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_SetupWorldList::CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_SetupWorldList, CallFunc_GetFocusTargetForLocalWorldList_TargetWidget) == 0x000010, "Member 'WBP_TitleLocalWorldSelect_C_SetupWorldList::CallFunc_GetFocusTargetForLocalWorldList_TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_SetupWorldList, CallFunc_GetWorldDisplayInfo_OutDisplayInfo) == 0x000018, "Member 'WBP_TitleLocalWorldSelect_C_SetupWorldList::CallFunc_GetWorldDisplayInfo_OutDisplayInfo' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnCancelAction
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_OnCancelAction final
{
public:
	class UWidget*                                CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_OnCancelAction) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_OnCancelAction");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_OnCancelAction) == 0x000008, "Wrong size on WBP_TitleLocalWorldSelect_C_OnCancelAction");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_OnCancelAction, CallFunc_GetFocusTargetForLocalWorldList_TargetWidget) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_OnCancelAction::CallFunc_GetFocusTargetForLocalWorldList_TargetWidget' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.On Closed World Setting Window
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window final
{
public:
	class UPalHUDDispatchParameterBase*           Param_Param;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting*  K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUILocalWorldDisplayData            CallFunc_Map_Find_Value;                           // 0x0018(0x0058)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C8[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUILocalWorldDisplayData            K2Node_SetFieldsInStruct_StructOut;                // 0x0078(0x0058)()
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window) == 0x0000D0, "Wrong size on WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, Param_Param) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::Param_Param' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting) == 0x000008, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, CallFunc_Map_Find_Value) == 0x000018, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window, K2Node_SetFieldsInStruct_StructOut) == 0x000078, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.On Closed Delete World Window
// 0x0040 (0x0040 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window final
{
public:
	class UPalHUDDispatchParameterBase*           Param_Param;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalUILocalWorldDisplayData>    CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue; // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DeleteWorld_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window) == 0x000040, "Wrong size on WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, Param_Param) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::Param_Param' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World) == 0x000008, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue) == 0x000018, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, CallFunc_Map_Remove_ReturnValue) == 0x000028, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, CallFunc_GetFocusTargetForLocalWorldList_TargetWidget) == 0x000030, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::CallFunc_GetFocusTargetForLocalWorldList_TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window, CallFunc_DeleteWorld_ReturnValue) == 0x000038, "Member 'WBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window::CallFunc_DeleteWorld_ReturnValue' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.ExecuteUbergraph_WBP_TitleLocalWorldSelect
// 0x0328 (0x0328 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_SaveDataBackupSelect* CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0018(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalHUDDispatchParameterBase* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting*  CallFunc_SpawnObject_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_1;                       // 0x0060(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalHUDDispatchParameterBase* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_ListContent_C*   K2Node_ComponentBoundEvent_ButtonWidget_1;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBindedSaveDirectoryName_DirectoryName; // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_HUDDIspatchParameter_DeleteWorld_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_2;                       // 0x00A8(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_2;              // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalHUDDispatchParameterBase* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting*  CallFunc_SpawnObject_ReturnValue_2;                // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_3;                       // 0x00D8(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate_4;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionWorldSaveData                CallFunc_SelectWorld_OptionWorldData;              // 0x00F8(0x0158)()
	bool                                          CallFunc_SelectWorld_ReturnValue;                  // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CC[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0254(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CD[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalGameInstance_C*                  K2Node_DynamicCast_AsBP_Pal_Game_Instance;         // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CE[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Title_WorldSelect_ListContent_C*   K2Node_ComponentBoundEvent_SelectedWorldButton_1;  // 0x0280(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38CF[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBindedSaveDirectoryName_DirectoryName_1; // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalUILocalWorldDisplayData            CallFunc_Map_Find_Value;                           // 0x02A0(0x0058)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWindows_ReturnValue;                    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D0[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Title_WorldSelect_ListContent_C*   K2Node_ComponentBoundEvent_SelectedWorldButton;    // 0x0300(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBindedSaveDirectoryName_DirectoryName_2; // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect) == 0x000328, "Wrong size on WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, EntryPoint) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Push_ReturnValue) == 0x000018, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetFocusTargetForLocalWorldList_TargetWidget) == 0x000028, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetFocusTargetForLocalWorldList_TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetHUDService_ReturnValue_1) == 0x000040, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_SpawnObject_ReturnValue_1) == 0x000058, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Push_ReturnValue_1) == 0x000060, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Push_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CreateDelegate_OutputDelegate_2) == 0x000070, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_ComponentBoundEvent_ButtonWidget) == 0x000080, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_ComponentBoundEvent_ButtonWidget' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_ComponentBoundEvent_ButtonWidget_1) == 0x000088, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_ComponentBoundEvent_ButtonWidget_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetBindedSaveDirectoryName_DirectoryName) == 0x000090, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetBindedSaveDirectoryName_DirectoryName' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_CreateDispatchParameterForK2Node_ReturnValue) == 0x0000A0, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_CreateDispatchParameterForK2Node_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Push_ReturnValue_2) == 0x0000A8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Push_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetHUDService_ReturnValue_2) == 0x0000B8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetHUDService_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C0, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_SpawnObject_ReturnValue_2) == 0x0000D0, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_SpawnObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Push_ReturnValue_3) == 0x0000D8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Push_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000E8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_SelectWorld_OptionWorldData) == 0x0000F8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_SelectWorld_OptionWorldData' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_SelectWorld_ReturnValue) == 0x000250, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_SelectWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Dialog_ReturnValue) == 0x000254, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_CustomEvent_bResult) == 0x000264, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetGameInstance_ReturnValue) == 0x000268, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_DynamicCast_AsBP_Pal_Game_Instance) == 0x000270, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_DynamicCast_AsBP_Pal_Game_Instance' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_DynamicCast_bSuccess) == 0x000278, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_ComponentBoundEvent_SelectedWorldButton_1) == 0x000280, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_ComponentBoundEvent_SelectedWorldButton_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_IsValid_ReturnValue) == 0x000288, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetBindedSaveDirectoryName_DirectoryName_1) == 0x000290, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetBindedSaveDirectoryName_DirectoryName_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Map_Find_Value) == 0x0002A0, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Map_Find_ReturnValue) == 0x0002F8, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_IsWindows_ReturnValue) == 0x0002F9, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_IsWindows_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, K2Node_ComponentBoundEvent_SelectedWorldButton) == 0x000300, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::K2Node_ComponentBoundEvent_SelectedWorldButton' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_Concat_StrStr_ReturnValue) == 0x000308, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect, CallFunc_GetBindedSaveDirectoryName_DirectoryName_2) == 0x000318, "Member 'WBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect::CallFunc_GetBindedSaveDirectoryName_DirectoryName_2' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature final
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*   SelectedWorldButton;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature) == 0x000008, "Wrong size on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature, SelectedWorldButton) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature::SelectedWorldButton' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature final
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*   SelectedWorldButton;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature) == 0x000008, "Wrong size on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature, SelectedWorldButton) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature::SelectedWorldButton' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature final
{
public:
	class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature) == 0x000008, "Wrong size on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature, ButtonWidget) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature::ButtonWidget' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature final
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*   ButtonWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature) == 0x000008, "Wrong size on WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature, ButtonWidget) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature::ButtonWidget' has a wrong offset!");

// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget, CallFunc_GetFocusTargetForLocalWorldList_TargetWidget) == 0x000008, "Member 'WBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget::CallFunc_GetFocusTargetForLocalWorldList_TargetWidget' has a wrong offset!");

}

