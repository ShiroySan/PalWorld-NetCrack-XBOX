#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalGenusCategoryIcon

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalGenusCategoryIcon.WBP_PalGenusCategoryIcon_C.Setup
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PalGenusCategoryIcon_C_Setup final
{
public:
	EPalGenusCategoryType                         Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_Map_Find_Value;                           // 0x0030(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGenusCategoryIcon_C_Setup) == 0x000008, "Wrong alignment on WBP_PalGenusCategoryIcon_C_Setup");
static_assert(sizeof(WBP_PalGenusCategoryIcon_C_Setup) == 0x0000F0, "Wrong size on WBP_PalGenusCategoryIcon_C_Setup");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, Category) == 0x000000, "Member 'WBP_PalGenusCategoryIcon_C_Setup::Category' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'WBP_PalGenusCategoryIcon_C_Setup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_PalGenusCategoryIcon_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGenusCategoryIcon_C_Setup, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E0, "Member 'WBP_PalGenusCategoryIcon_C_Setup::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

