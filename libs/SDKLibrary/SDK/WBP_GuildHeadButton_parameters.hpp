#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuildHeadButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.SetValue
// 0x0038 (0x0038 - 0x0000)
struct WBP_GuildHeadButton_C_SetValue final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOptionCount_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOptionAtIndex_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4611[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_SetValue) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_SetValue");
static_assert(sizeof(WBP_GuildHeadButton_C_SetValue) == 0x000038, "Wrong size on WBP_GuildHeadButton_C_SetValue");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, Value) == 0x000000, "Member 'WBP_GuildHeadButton_C_SetValue::Value' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, Temp_int_Variable) == 0x000010, "Member 'WBP_GuildHeadButton_C_SetValue::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_GetOptionCount_ReturnValue) == 0x000014, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_GetOptionCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_GetOptionAtIndex_ReturnValue) == 0x000018, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_GetOptionAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00002C, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002D, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetValue, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WBP_GuildHeadButton_C_SetValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.SetupAsSingleButton
// 0x0018 (0x0018 - 0x0000)
struct WBP_GuildHeadButton_C_SetupAsSingleButton final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_GuildHeadButton_C_SetupAsSingleButton) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_SetupAsSingleButton");
static_assert(sizeof(WBP_GuildHeadButton_C_SetupAsSingleButton) == 0x000018, "Wrong size on WBP_GuildHeadButton_C_SetupAsSingleButton");
static_assert(offsetof(WBP_GuildHeadButton_C_SetupAsSingleButton, Text) == 0x000000, "Member 'WBP_GuildHeadButton_C_SetupAsSingleButton::Text' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.SetOptions
// 0x0038 (0x0038 - 0x0000)
struct WBP_GuildHeadButton_C_SetOptions final
{
public:
	TArray<class FString>                         OptionStrings;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4612[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4613[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_SetOptions) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_SetOptions");
static_assert(sizeof(WBP_GuildHeadButton_C_SetOptions) == 0x000038, "Wrong size on WBP_GuildHeadButton_C_SetOptions");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, OptionStrings) == 0x000000, "Member 'WBP_GuildHeadButton_C_SetOptions::OptionStrings' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_GuildHeadButton_C_SetOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_GuildHeadButton_C_SetOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_GuildHeadButton_C_SetOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_GuildHeadButton_C_SetOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_GuildHeadButton_C_SetOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_SetOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_GuildHeadButton_C_SetOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.OnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_GuildHeadButton_C_OnSelected__DelegateSignature final
{
public:
	class FString                                 SelectedOption;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_OnSelected__DelegateSignature");
static_assert(sizeof(WBP_GuildHeadButton_C_OnSelected__DelegateSignature) == 0x000010, "Wrong size on WBP_GuildHeadButton_C_OnSelected__DelegateSignature");
static_assert(offsetof(WBP_GuildHeadButton_C_OnSelected__DelegateSignature, SelectedOption) == 0x000000, "Member 'WBP_GuildHeadButton_C_OnSelected__DelegateSignature::SelectedOption' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildHeadButton_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_GuildHeadButton_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_GuildHeadButton_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_GuildHeadButton_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_GuildHeadButton_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_GuildHeadButton_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_GuildHeadButton_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.OnGenerateWidget
// 0x0050 (0x0050 - 0x0000)
struct WBP_GuildHeadButton_C_OnGenerateWidget final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_GuildMemberMenuList_C* Button)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuildMemberMenuList_C*             CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_OnGenerateWidget) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_OnGenerateWidget");
static_assert(sizeof(WBP_GuildHeadButton_C_OnGenerateWidget) == 0x000050, "Wrong size on WBP_GuildHeadButton_C_OnGenerateWidget");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, Item) == 0x000000, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::Item' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, ReturnValue) == 0x000010, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000040, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnGenerateWidget, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WBP_GuildHeadButton_C_OnGenerateWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.OnClickedComboBoxContent
// 0x0020 (0x0020 - 0x0000)
struct WBP_GuildHeadButton_C_OnClickedComboBoxContent final
{
public:
	class UWBP_GuildMemberMenuList_C*             Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4614[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBindedTextString_OutString;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_OnClickedComboBoxContent) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_OnClickedComboBoxContent");
static_assert(sizeof(WBP_GuildHeadButton_C_OnClickedComboBoxContent) == 0x000020, "Wrong size on WBP_GuildHeadButton_C_OnClickedComboBoxContent");
static_assert(offsetof(WBP_GuildHeadButton_C_OnClickedComboBoxContent, Button) == 0x000000, "Member 'WBP_GuildHeadButton_C_OnClickedComboBoxContent::Button' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnClickedComboBoxContent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_GuildHeadButton_C_OnClickedComboBoxContent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_OnClickedComboBoxContent, CallFunc_GetBindedTextString_OutString) == 0x000010, "Member 'WBP_GuildHeadButton_C_OnClickedComboBoxContent::CallFunc_GetBindedTextString_OutString' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildHeadButton_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_GuildHeadButton_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_GuildHeadButton_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_GuildHeadButton_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_GuildHeadButton_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_GuildHeadButton_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_GuildHeadButton_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.ExecuteUbergraph_WBP_GuildHeadButton
// 0x0058 (0x0058 - 0x0000)
struct WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4615[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4616[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0048(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0050(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton");
static_assert(sizeof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton) == 0x000058, "Wrong size on WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, EntryPoint) == 0x000000, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_ComponentBoundEvent_SelectedItem) == 0x000008, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_ComponentBoundEvent_SelectionType) == 0x000018, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_ComponentBoundEvent_Button_2) == 0x000020, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_ComponentBoundEvent_Button_1) == 0x000028, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_Event_InFocusEvent_1) == 0x000048, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton, K2Node_Event_InFocusEvent) == 0x000050, "Member 'WBP_GuildHeadButton_C_ExecuteUbergraph_WBP_GuildHeadButton::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuildHeadButton.WBP_GuildHeadButton_C.BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_GuildHeadButton_C_BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

}

