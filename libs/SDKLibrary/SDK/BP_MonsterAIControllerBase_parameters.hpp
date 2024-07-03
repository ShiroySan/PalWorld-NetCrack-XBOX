#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIControllerBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.CreateBaseCampLogMessageText
// 0x0148 (0x0148 - 0x0000)
struct BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText final
{
public:
	struct FPalMonsterControllerBaseCampLogContent Content;                                           // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Result;                                            // 0x0048(0x0018)(Parm, OutParm)
	bool                                          IsFormatText;                                      // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MessageText;                                       // 0x0068(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0080(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_EnumToLocalizedText_ReturnValue;          // 0x0130(0x0018)()
};
static_assert(alignof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText");
static_assert(sizeof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText) == 0x000148, "Wrong size on BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, Content) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::Content' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, Result) == 0x000048, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::Result' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, IsFormatText) == 0x000060, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::IsFormatText' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, MessageText) == 0x000068, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::MessageText' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, CallFunc_GetLocalizedText_ReturnValue) == 0x000080, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000098, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, K2Node_MakeArray_Array) == 0x0000F0, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, CallFunc_Format_ReturnValue) == 0x000100, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000120, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText, CallFunc_EnumToLocalizedText_ReturnValue) == 0x000130, "Member 'BP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText::CallFunc_EnumToLocalizedText_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ExecuteUbergraph_BP_MonsterAIControllerBase
// 0x0078 (0x0078 - 0x0000)
struct BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkillSlot*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase");
static_assert(sizeof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase) == 0x000078, "Wrong size on BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, EntryPoint) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_Event_PossessedPawn) == 0x000018, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000040, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_CustomEvent_InCharacter) == 0x000048, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_CustomEvent_InCharacter' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_DynamicCast_AsPal_Character) == 0x000050, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000060, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x000068, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.PlayDefaultAction
// 0x0030 (0x0030 - 0x0000)
struct BP_MonsterAIControllerBase_C_PlayDefaultAction final
{
public:
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionCompositeBase*              CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component_1;     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SpawnObject_ReturnValue_1;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_PlayDefaultAction) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C_PlayDefaultAction");
static_assert(sizeof(BP_MonsterAIControllerBase_C_PlayDefaultAction) == 0x000030, "Wrong size on BP_MonsterAIControllerBase_C_PlayDefaultAction");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, K2Node_DynamicCast_AsPal_AIAction_Component_1) == 0x000018, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::K2Node_DynamicCast_AsPal_AIAction_Component_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_PlayDefaultAction, CallFunc_SpawnObject_ReturnValue_1) == 0x000028, "Member 'BP_MonsterAIControllerBase_C_PlayDefaultAction::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIControllerBase_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C_ReceivePossess");
static_assert(sizeof(BP_MonsterAIControllerBase_C_ReceivePossess) == 0x000008, "Wrong size on BP_MonsterAIControllerBase_C_ReceivePossess");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MonsterAIControllerBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MonsterAIControllerBase_C_ReceiveTick");
static_assert(sizeof(BP_MonsterAIControllerBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_MonsterAIControllerBase_C_ReceiveTick");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ShowBaseCampLog_Internal
// 0x00D0 (0x00D0 - 0x0000)
struct BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal final
{
public:
	struct FPalMonsterControllerBaseCampLogContent Content;                                           // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   CallFunc_CreateBaseCampLogMessageText_Result;      // 0x0048(0x0018)()
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ToLogFontStyleName_StyleName;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalLogContentToneType                        CallFunc_To_Log_Tone_Type_toneType;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLogAdditionalData                  K2Node_MakeStruct_PalLogAdditionalData;            // 0x0080(0x0038)()
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_AddLog_ReturnValue;                       // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal");
static_assert(sizeof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal) == 0x0000D0, "Wrong size on BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, Content) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::Content' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_CreateBaseCampLogMessageText_Result) == 0x000048, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_CreateBaseCampLogMessageText_Result' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_K2_GetPawn_ReturnValue) == 0x000060, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_ToLogFontStyleName_StyleName) == 0x000068, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_ToLogFontStyleName_StyleName' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_To_Log_Tone_Type_toneType) == 0x000078, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_To_Log_Tone_Type_toneType' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, K2Node_MakeStruct_PalLogAdditionalData) == 0x000080, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::K2Node_MakeStruct_PalLogAdditionalData' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_GetLogManager_ReturnValue) == 0x0000B8, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal, CallFunc_AddLog_ReturnValue) == 0x0000C0, "Member 'BP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal::CallFunc_AddLog_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.To Log Tone Type
// 0x0003 (0x0003 - 0x0000)
struct BP_MonsterAIControllerBase_C_To_Log_Tone_Type final
{
public:
	EPalMonsterControllerBaseCampLogType          LogType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLogContentToneType                        ToneType;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_To_Log_Tone_Type) == 0x000001, "Wrong alignment on BP_MonsterAIControllerBase_C_To_Log_Tone_Type");
static_assert(sizeof(BP_MonsterAIControllerBase_C_To_Log_Tone_Type) == 0x000003, "Wrong size on BP_MonsterAIControllerBase_C_To_Log_Tone_Type");
static_assert(offsetof(BP_MonsterAIControllerBase_C_To_Log_Tone_Type, LogType) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_To_Log_Tone_Type::LogType' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_To_Log_Tone_Type, ToneType) == 0x000001, "Member 'BP_MonsterAIControllerBase_C_To_Log_Tone_Type::ToneType' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_To_Log_Tone_Type, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'BP_MonsterAIControllerBase_C_To_Log_Tone_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ToLogFontStyleName
// 0x0010 (0x0010 - 0x0000)
struct BP_MonsterAIControllerBase_C_ToLogFontStyleName final
{
public:
	EPalMonsterControllerBaseCampLogType          LogType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   StyleName;                                         // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C_ToLogFontStyleName) == 0x000004, "Wrong alignment on BP_MonsterAIControllerBase_C_ToLogFontStyleName");
static_assert(sizeof(BP_MonsterAIControllerBase_C_ToLogFontStyleName) == 0x000010, "Wrong size on BP_MonsterAIControllerBase_C_ToLogFontStyleName");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ToLogFontStyleName, LogType) == 0x000000, "Member 'BP_MonsterAIControllerBase_C_ToLogFontStyleName::LogType' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ToLogFontStyleName, StyleName) == 0x000004, "Member 'BP_MonsterAIControllerBase_C_ToLogFontStyleName::StyleName' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIControllerBase_C_ToLogFontStyleName, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'BP_MonsterAIControllerBase_C_ToLogFontStyleName::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.�������_0
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIControllerBase_C__________0 final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIControllerBase_C__________0) == 0x000008, "Wrong alignment on BP_MonsterAIControllerBase_C__________0");
static_assert(sizeof(BP_MonsterAIControllerBase_C__________0) == 0x000008, "Wrong size on BP_MonsterAIControllerBase_C__________0");
static_assert(offsetof(BP_MonsterAIControllerBase_C__________0, InCharacter) == 0x000000, "Member 'BP_MonsterAIControllerBase_C__________0::InCharacter' has a wrong offset!");

}

