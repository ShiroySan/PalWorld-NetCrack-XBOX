#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionHappy

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionHappy.BP_ActionHappy_C.ChangeFace
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionHappy_C_ChangeFace final
{
public:
	bool                                          Smile;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3791[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3792[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHappy_C_ChangeFace) == 0x000008, "Wrong alignment on BP_ActionHappy_C_ChangeFace");
static_assert(sizeof(BP_ActionHappy_C_ChangeFace) == 0x000038, "Wrong size on BP_ActionHappy_C_ChangeFace");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, Smile) == 0x000000, "Member 'BP_ActionHappy_C_ChangeFace::Smile' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ChangeFace, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_ActionHappy_C_ChangeFace::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionHappy.BP_ActionHappy_C.ExecuteUbergraph_BP_ActionHappy
// 0x0088 (0x0088 - 0x0000)
struct BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3793[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3794[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3795[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3796[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy) == 0x000008, "Wrong alignment on BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy");
static_assert(sizeof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy) == 0x000088, "Wrong size on BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, EntryPoint) == 0x000000, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, Temp_object_Variable) == 0x000020, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, K2Node_DynamicCast_AsNiagara_System) == 0x000028, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000038, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, K2Node_Event_DeltaTime) == 0x000040, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_GetActionCharacter_ReturnValue) == 0x000048, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000060, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000080, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000084, "Member 'BP_ActionHappy_C_ExecuteUbergraph_BP_ActionHappy::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_ActionHappy.BP_ActionHappy_C.OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8) == 0x000008, "Wrong alignment on BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8");
static_assert(sizeof(BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8) == 0x000008, "Wrong size on BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8");
static_assert(offsetof(BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8, Loaded) == 0x000000, "Member 'BP_ActionHappy_C_OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8::Loaded' has a wrong offset!");

// Function BP_ActionHappy.BP_ActionHappy_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionHappy_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHappy_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionHappy_C_TickAction");
static_assert(sizeof(BP_ActionHappy_C_TickAction) == 0x000004, "Wrong size on BP_ActionHappy_C_TickAction");
static_assert(offsetof(BP_ActionHappy_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionHappy_C_TickAction::DeltaTime' has a wrong offset!");

}

