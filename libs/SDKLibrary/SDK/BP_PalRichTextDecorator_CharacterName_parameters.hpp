#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRichTextDecorator_CharacterName

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C.GetTagName
// 0x0010 (0x0010 - 0x0000)
struct BP_PalRichTextDecorator_CharacterName_C_GetTagName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRichTextDecorator_CharacterName_C_GetTagName) == 0x000008, "Wrong alignment on BP_PalRichTextDecorator_CharacterName_C_GetTagName");
static_assert(sizeof(BP_PalRichTextDecorator_CharacterName_C_GetTagName) == 0x000010, "Wrong size on BP_PalRichTextDecorator_CharacterName_C_GetTagName");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTagName, ReturnValue) == 0x000000, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTagName::ReturnValue' has a wrong offset!");

// Function BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C.GetTextStringInternal
// 0x0058 (0x0058 - 0x0000)
struct BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ID;                                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedCharacterName_OutText;        // 0x0028(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA9[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal) == 0x000008, "Wrong alignment on BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal");
static_assert(sizeof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal) == 0x000058, "Wrong size on BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, WorldContextObject) == 0x000000, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, ID) == 0x000008, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::ID' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, ReturnValue) == 0x000010, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000020, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, CallFunc_GetLocalizedCharacterName_OutText) == 0x000028, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::CallFunc_GetLocalizedCharacterName_OutText' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'BP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

