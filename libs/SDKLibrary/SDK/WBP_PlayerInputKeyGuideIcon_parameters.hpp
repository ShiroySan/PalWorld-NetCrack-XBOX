#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerInputKeyGuideIcon

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon
// 0x0100 (0x0100 - 0x0000)
struct WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA8[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Event_newBrush;                             // 0x0010(0x00D0)()
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA9[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon) == 0x000010, "Wrong alignment on WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon");
static_assert(sizeof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon) == 0x000100, "Wrong size on WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, EntryPoint) == 0x000000, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, K2Node_Event_newBrush) == 0x000010, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::K2Node_Event_newBrush' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000E0, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000E9, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_Map_Find_Value) == 0x0000F0, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_Map_Find_ReturnValue) == 0x0000F8, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000F9, "Member 'WBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.SetOverrideSize
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize final
{
public:
	struct FVector2D                              Size;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize) == 0x000008, "Wrong alignment on WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize");
static_assert(sizeof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize) == 0x000028, "Wrong size on WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize, Size) == 0x000000, "Member 'WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize::Size' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize, CallFunc_BreakVector2D_X) == 0x000010, "Member 'WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize, CallFunc_BreakVector2D_Y) == 0x000018, "Member 'WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000020, "Member 'WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000024, "Member 'WBP_PlayerInputKeyGuideIcon_C_SetOverrideSize::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.UpdateImage
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PlayerInputKeyGuideIcon_C_UpdateImage final
{
public:
	struct FSlateBrush                            NewBrush;                                          // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PlayerInputKeyGuideIcon_C_UpdateImage) == 0x000010, "Wrong alignment on WBP_PlayerInputKeyGuideIcon_C_UpdateImage");
static_assert(sizeof(WBP_PlayerInputKeyGuideIcon_C_UpdateImage) == 0x0000D0, "Wrong size on WBP_PlayerInputKeyGuideIcon_C_UpdateImage");
static_assert(offsetof(WBP_PlayerInputKeyGuideIcon_C_UpdateImage, NewBrush) == 0x000000, "Member 'WBP_PlayerInputKeyGuideIcon_C_UpdateImage::NewBrush' has a wrong offset!");

}

