#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeMenu_WazaListEntry

#include "Basic.hpp"

#include "CreativeMenu_WazaStruct_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.OnUnhover__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature final
{
public:
	struct FCreativeMenu_WazaStruct               Data;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature) == 0x000001, "Wrong alignment on CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature) == 0x000004, "Wrong size on CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature, Data) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_OnUnhover__DelegateSignature::Data' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.OnLoaded_FCFF8BC94676FC045B37289098D7A950
// 0x0008 (0x0008 - 0x0000)
struct CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950) == 0x000008, "Wrong size on CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950, Loaded) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_OnLoaded_FCFF8BC94676FC045B37289098D7A950::Loaded' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct CreativeMenu_WazaListEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_OnListItemObjectSet");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on CreativeMenu_WazaListEntry_C_OnListItemObjectSet");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.OnHover__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature final
{
public:
	struct FCreativeMenu_WazaStruct               Data;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature) == 0x000001, "Wrong alignment on CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature) == 0x000004, "Wrong size on CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature, Data) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_OnHover__DelegateSignature::Data' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature final
{
public:
	class UCreativeMenu_WazaData_C*               Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature, Data) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_OnClick__DelegateSignature::Data' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.GetData
// 0x00B8 (0x00B8 - 0x0000)
struct CreativeMenu_WazaListEntry_C_GetData final
{
public:
	EPalWazaID                                    Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B56[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalWazaDatabaseRaw                    OutData;                                           // 0x0008(0x0050)(Parm, OutParm)
	class UPalWazaDatabase*                       CallFunc_GetWazaDatabase_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWazaDatabaseRaw                    CallFunc_FindWazaForBP_OutData;                    // 0x0060(0x0050)()
	bool                                          CallFunc_FindWazaForBP_ReturnValue;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_GetData) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_GetData");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_GetData) == 0x0000B8, "Wrong size on CreativeMenu_WazaListEntry_C_GetData");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_GetData, Type) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_GetData::Type' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_GetData, OutData) == 0x000008, "Member 'CreativeMenu_WazaListEntry_C_GetData::OutData' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_GetData, CallFunc_GetWazaDatabase_ReturnValue) == 0x000058, "Member 'CreativeMenu_WazaListEntry_C_GetData::CallFunc_GetWazaDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_GetData, CallFunc_FindWazaForBP_OutData) == 0x000060, "Member 'CreativeMenu_WazaListEntry_C_GetData::CallFunc_FindWazaForBP_OutData' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_GetData, CallFunc_FindWazaForBP_ReturnValue) == 0x0000B0, "Member 'CreativeMenu_WazaListEntry_C_GetData::CallFunc_FindWazaForBP_ReturnValue' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.Get_LearnedStateIndicator_Visibility
// 0x0005 (0x0005 - 0x0000)
struct CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility) == 0x000001, "Wrong alignment on CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility) == 0x000005, "Wrong size on CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility, ReturnValue) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility, Temp_bool_Variable) == 0x000001, "Member 'CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility, Temp_byte_Variable) == 0x000002, "Member 'CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility, K2Node_Select_Default) == 0x000004, "Member 'CreativeMenu_WazaListEntry_C_Get_LearnedStateIndicator_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.Get_Image2_Brush
// 0x01E0 (0x01E0 - 0x0000)
struct CreativeMenu_WazaListEntry_C_Get_Image2_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B57[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D4(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00E8(0x0014)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00FC(0x0014)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0110(0x00D0)()
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush) == 0x000010, "Wrong alignment on CreativeMenu_WazaListEntry_C_Get_Image2_Brush");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush) == 0x0001E0, "Wrong size on CreativeMenu_WazaListEntry_C_Get_Image2_Brush");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, ReturnValue) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, Temp_bool_Variable) == 0x0000D0, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, K2Node_MakeStruct_SlateColor) == 0x0000D4, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, K2Node_MakeStruct_SlateColor_1) == 0x0000E8, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, K2Node_Select_Default) == 0x0000FC, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_Image2_Brush, K2Node_MakeStruct_SlateBrush) == 0x000110, "Member 'CreativeMenu_WazaListEntry_C_Get_Image2_Brush::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.Get_DamageText_Text
// 0x0080 (0x0080 - 0x0000)
struct CreativeMenu_WazaListEntry_C_Get_DamageText_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	struct FPalWazaDatabaseRaw                    CallFunc_GetData_OutData;                          // 0x0018(0x0050)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_Get_DamageText_Text) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_Get_DamageText_Text");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_Get_DamageText_Text) == 0x000080, "Wrong size on CreativeMenu_WazaListEntry_C_Get_DamageText_Text");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_DamageText_Text, ReturnValue) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_Get_DamageText_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_DamageText_Text, CallFunc_GetData_OutData) == 0x000018, "Member 'CreativeMenu_WazaListEntry_C_Get_DamageText_Text::CallFunc_GetData_OutData' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_DamageText_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'CreativeMenu_WazaListEntry_C_Get_DamageText_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.Get_ActiveSkillNameText_Text
// 0x0030 (0x0030 - 0x0000)
struct CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetWazaName_outName;                      // 0x0018(0x0018)()
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text) == 0x000030, "Wrong size on CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text, ReturnValue) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text, CallFunc_GetWazaName_outName) == 0x000018, "Member 'CreativeMenu_WazaListEntry_C_Get_ActiveSkillNameText_Text::CallFunc_GetWazaName_outName' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.ExecuteUbergraph_CreativeMenu_WazaListEntry
// 0x02F8 (0x02F8 - 0x0000)
struct CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B58[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B59[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0048(0x0030)(HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5A[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0088(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x00B8(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x00E8(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x0118(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_5;                        // 0x0148(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_6;                        // 0x0178(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_7;                        // 0x01A8(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_8;                        // 0x01D8(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_9;                        // 0x0208(0x0030)(HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5B[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCreativeMenu_WazaData_C*               K2Node_DynamicCast_AsCreative_Menu_Waza_Data;      // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5C[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0254(0x0014)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0268(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWazaDatabaseRaw                    CallFunc_GetData_OutData;                          // 0x0278(0x0050)()
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x02C8(0x0030)(HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry) == 0x000008, "Wrong alignment on CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry) == 0x0002F8, "Wrong size on CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, EntryPoint) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_bool_Variable) == 0x000018, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_object_Variable) == 0x000020, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_object_Variable_1) == 0x000030, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_byte_Variable) == 0x000039, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_Select_Default) == 0x000040, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable) == 0x000048, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_DynamicCast_AsTexture_2D) == 0x000078, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_1) == 0x000088, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_2) == 0x0000B8, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_3) == 0x0000E8, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_4) == 0x000118, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_5) == 0x000148, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_5' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_6) == 0x000178, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_6' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_7) == 0x0001A8, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_7' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_8) == 0x0001D8, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_8' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, Temp_softobject_Variable_9) == 0x000208, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::Temp_softobject_Variable_9' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_Event_bIsExpanded) == 0x000238, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_Event_bIsSelected) == 0x000239, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_Event_ListItemObject) == 0x000240, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_DynamicCast_AsCreative_Menu_Waza_Data) == 0x000248, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_DynamicCast_AsCreative_Menu_Waza_Data' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_DynamicCast_bSuccess_1) == 0x000250, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_MakeStruct_SlateColor_1) == 0x000254, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000268, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, CallFunc_GetData_OutData) == 0x000278, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::CallFunc_GetData_OutData' has a wrong offset!");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry, K2Node_Select_Default_1) == 0x0002C8, "Member 'CreativeMenu_WazaListEntry_C_ExecuteUbergraph_CreativeMenu_WazaListEntry::K2Node_Select_Default_1' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function CreativeMenu_WazaListEntry.CreativeMenu_WazaListEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'CreativeMenu_WazaListEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}

