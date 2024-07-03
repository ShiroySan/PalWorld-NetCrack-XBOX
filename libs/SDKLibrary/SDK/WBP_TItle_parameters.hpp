#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TItle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_PalUITitleMenuButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_TItle.WBP_TItle_C.BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature final
{
public:
	class UWBP_Title_MenuButton_C*                ButtonWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature");
static_assert(sizeof(WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature) == 0x000008, "Wrong size on WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature");
static_assert(offsetof(WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature, ButtonWidget) == 0x000000, "Member 'WBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature::ButtonWidget' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD
// 0x0020 (0x0020 - 0x0000)
struct WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD final
{
public:
	const class UPocketpairUserInfo*              UserInfo;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorStr;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD) == 0x000008, "Wrong alignment on WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD");
static_assert(sizeof(WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD) == 0x000020, "Wrong size on WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD");
static_assert(offsetof(WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD, UserInfo) == 0x000000, "Member 'WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD::UserInfo' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD, bSuccess) == 0x000008, "Member 'WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD::bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD, ErrorStr) == 0x000010, "Member 'WBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD::ErrorStr' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.ExecuteUbergraph_WBP_TItle
// 0x0178 (0x0178 - 0x0000)
struct WBP_TItle_C_ExecuteUbergraph_WBP_TItle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGDK_ReturnValue;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPocketpairUserInfo*              K2Node_CustomEvent_UserInfo;                       // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ErrorStr;                       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UPocketpairUserInfo* UserInfo, bool bSuccess, const class FString& ErrorStr)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class UPocketpairUserInfo*                    Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPocketpairUserSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* CallFunc_SwitchUserUIAsyncFunction_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameInstance*                       K2Node_DynamicCast_AsPal_Game_Instance;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x00C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                K2Node_ComponentBoundEvent_ButtonWidget;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameInstance*                       CallFunc_GetPalGameInstance_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanOpenExternalWebSite_ReturnValue;     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameInstance*                       K2Node_DynamicCast_AsPal_Game_Instance_1;          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0140(0x0018)()
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate_2;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Dialog_ReturnValue_1;                     // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle) == 0x000008, "Wrong alignment on WBP_TItle_C_ExecuteUbergraph_WBP_TItle");
static_assert(sizeof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle) == 0x000178, "Wrong size on WBP_TItle_C_ExecuteUbergraph_WBP_TItle");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, EntryPoint) == 0x000000, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_IsGDK_ReturnValue) == 0x000004, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_IsGDK_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CustomEvent_UserInfo) == 0x000008, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CustomEvent_UserInfo' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CustomEvent_bSuccess) == 0x000010, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CustomEvent_ErrorStr) == 0x000018, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CustomEvent_ErrorStr' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, Temp_string_Variable) == 0x000038, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, Temp_bool_Variable) == 0x000048, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, Temp_object_Variable) == 0x000068, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000070, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetGameInstance_ReturnValue) == 0x000078, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_SwitchUserUIAsyncFunction_ReturnValue) == 0x000080, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_SwitchUserUIAsyncFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_DynamicCast_AsPal_Game_Instance) == 0x000088, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_DynamicCast_AsPal_Game_Instance' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Dialog_ReturnValue) == 0x0000C4, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000D8, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_ComponentBoundEvent_ButtonWidget) == 0x0000E0, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_ComponentBoundEvent_ButtonWidget' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetPalDebugSetting_ReturnValue) == 0x0000E8, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetPalGameInstance_ReturnValue) == 0x0000F8, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetPalGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetHUDService_ReturnValue) == 0x000100, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Push_ReturnValue) == 0x000108, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_IsCanOpenExternalWebSite_ReturnValue) == 0x000118, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_IsCanOpenExternalWebSite_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_GetGameInstance_ReturnValue_1) == 0x000120, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_BooleanAND_ReturnValue) == 0x000128, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_DynamicCast_AsPal_Game_Instance_1) == 0x000130, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_DynamicCast_AsPal_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000140, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000158, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_ExecuteUbergraph_WBP_TItle, CallFunc_Dialog_ReturnValue_1) == 0x000168, "Member 'WBP_TItle_C_ExecuteUbergraph_WBP_TItle::CallFunc_Dialog_ReturnValue_1' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.OnClickedMenu_Internal
// 0x0088 (0x0088 - 0x0000)
struct WBP_TItle_C_OnClickedMenu_Internal final
{
public:
	class UWBP_Title_MenuButton_C*                ButtonWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0008(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_PalUITitleMenuButtonType                    CallFunc_GetMenuType_BindedMenuType;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Push_ReturnValue_1;                       // 0x0034(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_2;                       // 0x0044(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_3;                       // 0x0054(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_4;                       // 0x0064(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue_5;                       // 0x0074(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_OnClickedMenu_Internal) == 0x000008, "Wrong alignment on WBP_TItle_C_OnClickedMenu_Internal");
static_assert(sizeof(WBP_TItle_C_OnClickedMenu_Internal) == 0x000088, "Wrong size on WBP_TItle_C_OnClickedMenu_Internal");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, ButtonWidget) == 0x000000, "Member 'WBP_TItle_C_OnClickedMenu_Internal::ButtonWidget' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue) == 0x000008, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_GetHUDService_ReturnValue) == 0x000018, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_GetMenuType_BindedMenuType) == 0x000020, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_GetMenuType_BindedMenuType' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WBP_TItle_C_OnClickedMenu_Internal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue_1) == 0x000034, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue_2) == 0x000044, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue_3) == 0x000054, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue_4) == 0x000064, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClickedMenu_Internal, CallFunc_Push_ReturnValue_5) == 0x000074, "Member 'WBP_TItle_C_OnClickedMenu_Internal::CallFunc_Push_ReturnValue_5' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.OnClosedQuitGameDialog
// 0x0010 (0x0010 - 0x0000)
struct WBP_TItle_C_OnClosedQuitGameDialog final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_OnClosedQuitGameDialog) == 0x000008, "Wrong alignment on WBP_TItle_C_OnClosedQuitGameDialog");
static_assert(sizeof(WBP_TItle_C_OnClosedQuitGameDialog) == 0x000010, "Wrong size on WBP_TItle_C_OnClosedQuitGameDialog");
static_assert(offsetof(WBP_TItle_C_OnClosedQuitGameDialog, bResult) == 0x000000, "Member 'WBP_TItle_C_OnClosedQuitGameDialog::bResult' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OnClosedQuitGameDialog, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_TItle_C_OnClosedQuitGameDialog::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.OpenQuitGameDialog
// 0x0048 (0x0048 - 0x0000)
struct WBP_TItle_C_OpenQuitGameDialog final
{
public:
	struct FDataTableRowHandle                    NewLocalVar;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_OpenQuitGameDialog) == 0x000008, "Wrong alignment on WBP_TItle_C_OpenQuitGameDialog");
static_assert(sizeof(WBP_TItle_C_OpenQuitGameDialog) == 0x000048, "Wrong size on WBP_TItle_C_OpenQuitGameDialog");
static_assert(offsetof(WBP_TItle_C_OpenQuitGameDialog, NewLocalVar) == 0x000000, "Member 'WBP_TItle_C_OpenQuitGameDialog::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OpenQuitGameDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_TItle_C_OpenQuitGameDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OpenQuitGameDialog, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_TItle_C_OpenQuitGameDialog::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_OpenQuitGameDialog, CallFunc_Dialog_ReturnValue) == 0x000038, "Member 'WBP_TItle_C_OpenQuitGameDialog::CallFunc_Dialog_ReturnValue' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.WBP_TItle_AutoGenFunc
// 0x0001 (0x0001 - 0x0000)
struct WBP_TItle_C_WBP_TItle_AutoGenFunc final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_WBP_TItle_AutoGenFunc) == 0x000001, "Wrong alignment on WBP_TItle_C_WBP_TItle_AutoGenFunc");
static_assert(sizeof(WBP_TItle_C_WBP_TItle_AutoGenFunc) == 0x000001, "Wrong size on WBP_TItle_C_WBP_TItle_AutoGenFunc");
static_assert(offsetof(WBP_TItle_C_WBP_TItle_AutoGenFunc, bResult) == 0x000000, "Member 'WBP_TItle_C_WBP_TItle_AutoGenFunc::bResult' has a wrong offset!");

// Function WBP_TItle.WBP_TItle_C.BP_GetDesiredFocusTarget
// 0x0018 (0x0018 - 0x0000)
struct WBP_TItle_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetTopButton_TargetWidget;                // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TItle_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_TItle_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_TItle_C_BP_GetDesiredFocusTarget) == 0x000018, "Wrong size on WBP_TItle_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_TItle_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_TItle_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_BP_GetDesiredFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_TItle_C_BP_GetDesiredFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TItle_C_BP_GetDesiredFocusTarget, CallFunc_GetTopButton_TargetWidget) == 0x000010, "Member 'WBP_TItle_C_BP_GetDesiredFocusTarget::CallFunc_GetTopButton_TargetWidget' has a wrong offset!");

}

