#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRichTextDecorator_ActiveSkillName

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C.GetTagName
// 0x0010 (0x0010 - 0x0000)
struct BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName) == 0x000008, "Wrong alignment on BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName");
static_assert(sizeof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName) == 0x000010, "Wrong size on BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName, ReturnValue) == 0x000000, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTagName::ReturnValue' has a wrong offset!");

// Function BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C.GetTextStringInternal
// 0x0080 (0x0080 - 0x0000)
struct BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ID;                                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0058(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal) == 0x000008, "Wrong alignment on BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal");
static_assert(sizeof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal) == 0x000080, "Wrong size on BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, WorldContextObject) == 0x000000, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, ID) == 0x000008, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::ID' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, ReturnValue) == 0x000010, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_MakeLiteralString_ReturnValue) == 0x000020, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_Conv_NameToString_ReturnValue) == 0x000030, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_Conv_StringToName_ReturnValue) == 0x000050, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_GetLocalizedText_ReturnValue) == 0x000058, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'BP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

