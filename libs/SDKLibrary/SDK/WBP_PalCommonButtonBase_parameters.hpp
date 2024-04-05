#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonButtonBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.ExecuteUbergraph_WBP_PalCommonButtonBase
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4020[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase) == 0x000008, "Wrong alignment on WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase");
static_assert(sizeof(WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase) == 0x000018, "Wrong size on WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase");
static_assert(offsetof(WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase, EntryPoint) == 0x000000, "Member 'WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase, CallFunc_GetHUDService_ReturnValue_1) == 0x000010, "Member 'WBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.PlayAkSound
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCommonButtonBase_C_PlayAkSound final
{
public:
	class UAkAudioEvent*                          AudioEvent;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonButtonBase_C_PlayAkSound) == 0x000008, "Wrong alignment on WBP_PalCommonButtonBase_C_PlayAkSound");
static_assert(sizeof(WBP_PalCommonButtonBase_C_PlayAkSound) == 0x000018, "Wrong size on WBP_PalCommonButtonBase_C_PlayAkSound");
static_assert(offsetof(WBP_PalCommonButtonBase_C_PlayAkSound, AudioEvent) == 0x000000, "Member 'WBP_PalCommonButtonBase_C_PlayAkSound::AudioEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonButtonBase_C_PlayAkSound, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_PalCommonButtonBase_C_PlayAkSound::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonButtonBase_C_PlayAkSound, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCommonButtonBase_C_PlayAkSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonButtonBase_C_PlayAkSound, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PalCommonButtonBase_C_PlayAkSound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

