#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AutoSave

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_AutoSave.WBP_AutoSave_C.ExecuteUbergraph_WBP_AutoSave
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3760[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSaveGameManager*                    CallFunc_GetSaveGameManager_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3761[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue_1;   // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue_2;   // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalSaveGameManager*                    CallFunc_GetSaveGameManager_ReturnValue_1;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3762[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate_4;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave) == 0x000008, "Wrong alignment on WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave");
static_assert(sizeof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave) == 0x0000A0, "Wrong size on WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, EntryPoint) == 0x000000, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_GetSaveGameManager_ReturnValue) == 0x000048, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_GetSaveGameManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CustomEvent_IsSuccess) == 0x000051, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CustomEvent_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000058, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_K2_InvalidateTimerHandle_ReturnValue_1) == 0x000060, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_K2_InvalidateTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_K2_InvalidateTimerHandle_ReturnValue_2) == 0x000068, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_K2_InvalidateTimerHandle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_GetSaveGameManager_ReturnValue_1) == 0x000070, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_GetSaveGameManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_3) == 0x000078, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave, K2Node_CreateDelegate_OutputDelegate_4) == 0x00008C, "Member 'WBP_AutoSave_C_ExecuteUbergraph_WBP_AutoSave::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function WBP_AutoSave.WBP_AutoSave_C.OnEndedAutoSave
// 0x0001 (0x0001 - 0x0000)
struct WBP_AutoSave_C_OnEndedAutoSave final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AutoSave_C_OnEndedAutoSave) == 0x000001, "Wrong alignment on WBP_AutoSave_C_OnEndedAutoSave");
static_assert(sizeof(WBP_AutoSave_C_OnEndedAutoSave) == 0x000001, "Wrong size on WBP_AutoSave_C_OnEndedAutoSave");
static_assert(offsetof(WBP_AutoSave_C_OnEndedAutoSave, IsSuccess) == 0x000000, "Member 'WBP_AutoSave_C_OnEndedAutoSave::IsSuccess' has a wrong offset!");

}

