#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_SelfDestructEmissive

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive
// 0x0028 (0x0028 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1954[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1955[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive) == 0x000008, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive) == 0x000028, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive, CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast) == 0x000020, "Member 'BP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive::CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.FlashWithAcceleration
// 0x0078 (0x0078 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1956[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1957[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0044(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1958[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1959[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration) == 0x000008, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration) == 0x000078, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000021, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_SelectFloat_ReturnValue_1) == 0x000030, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000041, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, Temp_delegate_Variable) == 0x000044, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, Temp_struct_Variable) == 0x000058, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_PostEvent_ReturnValue) == 0x000068, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.Initialize Float Parameters
// 0x0040 (0x0040 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters final
{
public:
	float                                         CallFunc_GetFloatParameter_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_ReturnValue_1;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_ReturnValue_2;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_ReturnValue_3;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_DefaultValue_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_MinEmissiveDuration_ImplicitCast; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters) == 0x000008, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters) == 0x000040, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_ReturnValue) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_ReturnValue_1) == 0x000004, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_ReturnValue_2) == 0x000008, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_ReturnValue_3) == 0x00000C, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_DefaultValue_ImplicitCast) == 0x000010, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_DefaultValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1) == 0x000014, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast) == 0x000018, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, K2Node_VariableSet_MinEmissiveDuration_ImplicitCast) == 0x000020, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::K2Node_VariableSet_MinEmissiveDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2) == 0x000028, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3) == 0x00002C, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast) == 0x000030, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters, K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast) == 0x000038, "Member 'BP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters::K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.SetEmissive
// 0x0038 (0x0038 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_SetEmissive final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainMeshMaterials_ReturnValue;         // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive) == 0x000008, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_SetEmissive");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive) == 0x000038, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_SetEmissive");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, Value) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::Value' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, CallFunc_GetMainMeshMaterials_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::CallFunc_GetMainMeshMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetEmissive, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetEmissive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.SetOverlayMaterial
// 0x0010 (0x0010 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial final
{
public:
	class UMaterialInterface*                     NewOverlayMaterial;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial) == 0x000008, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial) == 0x000010, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial, NewOverlayMaterial) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial::NewOverlayMaterial' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}

