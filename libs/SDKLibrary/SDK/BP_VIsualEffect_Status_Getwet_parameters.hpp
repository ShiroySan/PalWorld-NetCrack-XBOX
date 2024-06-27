#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VIsualEffect_Status_Getwet

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.ExecuteUbergraph_BP_VIsualEffect_Status_Getwet
// 0x0060 (0x0060 - 0x0000)
struct BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2507[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2508[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2509[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet) == 0x000008, "Wrong alignment on BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet");
static_assert(sizeof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet) == 0x000060, "Wrong size on BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, EntryPoint) == 0x000000, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component) == 0x000010, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000020, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, K2Node_Event_DeltaTime) == 0x000040, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_FClamp_ReturnValue_1) == 0x000048, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'BP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.Set Wet
// 0x0050 (0x0050 - 0x0000)
struct BP_VIsualEffect_Status_Getwet_C_Set_Wet final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_250A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetPlayerHeadMesh_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainAndHeadMeshMaterials_ReturnValue;  // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_250B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_250C[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x0044(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1; // 0x0048(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VIsualEffect_Status_Getwet_C_Set_Wet) == 0x000008, "Wrong alignment on BP_VIsualEffect_Status_Getwet_C_Set_Wet");
static_assert(sizeof(BP_VIsualEffect_Status_Getwet_C_Set_Wet) == 0x000050, "Wrong size on BP_VIsualEffect_Status_Getwet_C_Set_Wet");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, Value) == 0x000000, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::Value' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_GetPlayerHeadMesh_ReturnValue) == 0x000010, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_GetPlayerHeadMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_GetMainAndHeadMeshMaterials_ReturnValue) == 0x000018, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_GetMainAndHeadMeshMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_GetMainMesh_ReturnValue) == 0x000030, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000044, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_Set_Wet, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1) == 0x000048, "Member 'BP_VIsualEffect_Status_Getwet_C_Set_Wet::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1' has a wrong offset!");

// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.TerminatingTickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect) == 0x000004, "Wrong alignment on BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect");
static_assert(sizeof(BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect) == 0x000004, "Wrong size on BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect");
static_assert(offsetof(BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect::DeltaTime' has a wrong offset!");

}

