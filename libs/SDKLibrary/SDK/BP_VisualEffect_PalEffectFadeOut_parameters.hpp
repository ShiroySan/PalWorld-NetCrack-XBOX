#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_PalEffectFadeOut

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_PalEffectFadeOut.BP_VisualEffect_PalEffectFadeOut_C.ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut
// 0x0080 (0x0080 - 0x0000)
struct BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4641[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4642[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue;           // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4643[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4644[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut) == 0x000008, "Wrong alignment on BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut");
static_assert(sizeof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut) == 0x000080, "Wrong size on BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, K2Node_DynamicCast_AsPal_Character) == 0x000020, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_GetComponentsByTag_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000078, "Member 'BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_PalEffectFadeOut.BP_VisualEffect_PalEffectFadeOut_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}

