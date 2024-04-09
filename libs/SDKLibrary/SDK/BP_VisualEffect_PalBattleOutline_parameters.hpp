#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_PalBattleOutline

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C.ExecuteUbergraph_BP_VisualEffect_PalBattleOutline
// 0x00F8 (0x00F8 - 0x0000)
struct BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime_1;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APostProcessVolume*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39CB[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     CallFunc_Array_Get_Item_1;                         // 0x0048(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39CC[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39CD[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39CE[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_SetFieldsInStruct_StructOut;                // 0x0088(0x0010)(NoDestructor)
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39CF[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D0[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue_1;                // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bByConflict;                          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D1[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline) == 0x000008, "Wrong alignment on BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline");
static_assert(sizeof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline) == 0x0000F8, "Wrong size on BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_Event_DeltaTime_1) == 0x00001C, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_Event_DeltaTime_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_DynamicCast_AsMaterial_Instance) == 0x000060, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_DynamicCast_AsMaterial_Instance' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000070, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000078, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_SetFieldsInStruct_StructOut) == 0x000088, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_GetMainMesh_ReturnValue) == 0x000098, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_FClamp_ReturnValue) == 0x0000A8, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_Event_DeltaTime) == 0x0000B4, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000B8, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_FClamp_ReturnValue_1) == 0x0000C8, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_GetMainMesh_ReturnValue_1) == 0x0000D8, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, K2Node_Event_bByConflict) == 0x0000E0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::K2Node_Event_bByConflict' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000E8, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0000F0, "Member 'BP_VisualEffect_PalBattleOutline_C_ExecuteUbergraph_BP_VisualEffect_PalBattleOutline::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C.OnBreakVisualEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect final
{
public:
	bool                                          bByConflict;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect) == 0x000001, "Wrong alignment on BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect");
static_assert(sizeof(BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect) == 0x000001, "Wrong size on BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect, bByConflict) == 0x000000, "Member 'BP_VisualEffect_PalBattleOutline_C_OnBreakVisualEffect::bByConflict' has a wrong offset!");

// Function BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C.SetFadeAlpha
// 0x0010 (0x0010 - 0x0000)
struct BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha final
{
public:
	double                                        Param_Alpha;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D2[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha) == 0x000008, "Wrong alignment on BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha");
static_assert(sizeof(BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha) == 0x000010, "Wrong size on BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha, Param_Alpha) == 0x000000, "Member 'BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha::Param_Alpha' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00000C, "Member 'BP_VisualEffect_PalBattleOutline_C_SetFadeAlpha::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C.TerminatingTickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect");
static_assert(sizeof(BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_PalBattleOutline_C_TerminatingTickVisualEffect::DeltaTime' has a wrong offset!");

// Function BP_VisualEffect_PalBattleOutline.BP_VisualEffect_PalBattleOutline_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_PalBattleOutline_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalBattleOutline_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_PalBattleOutline_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_PalBattleOutline_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_PalBattleOutline_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_PalBattleOutline_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_PalBattleOutline_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}

