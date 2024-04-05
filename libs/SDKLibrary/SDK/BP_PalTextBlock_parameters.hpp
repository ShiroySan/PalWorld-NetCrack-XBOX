#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalTextBlock

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalTextBlock.BP_PalTextBlock_C.BP_ReflectText
// 0x0038 (0x0038 - 0x0000)
struct BP_PalTextBlock_C_BP_ReflectText final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocalizeTextCategory                      CallFunc_Map_Find_Value;                           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0020(0x0018)()
};
static_assert(alignof(BP_PalTextBlock_C_BP_ReflectText) == 0x000008, "Wrong alignment on BP_PalTextBlock_C_BP_ReflectText");
static_assert(sizeof(BP_PalTextBlock_C_BP_ReflectText) == 0x000038, "Wrong size on BP_PalTextBlock_C_BP_ReflectText");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, ReturnValue) == 0x000000, "Member 'BP_PalTextBlock_C_BP_ReflectText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_Map_Find_Value) == 0x00001A, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_Map_Find_ReturnValue) == 0x00001B, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalTextBlock_C_BP_ReflectText, CallFunc_GetLocalizedText_ReturnValue) == 0x000020, "Member 'BP_PalTextBlock_C_BP_ReflectText::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

}

