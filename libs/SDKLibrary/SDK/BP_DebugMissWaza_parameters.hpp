#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMissWaza

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DebugMissWaza.BP_DebugMissWaza_C.ExecuteUbergraph_BP_DebugMissWaza
// 0x0200 (0x0200 - 0x0000)
struct BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF3[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF4[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF5[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_5;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_6;           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x01D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF6[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF7[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_tempDeltaTime_ImplicitCast;     // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Yaw_ImplicitCast;               // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza) == 0x000010, "Wrong alignment on BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza");
static_assert(sizeof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza) == 0x000200, "Wrong size on BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, EntryPoint) == 0x000000, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakRotator_Roll) == 0x0000C8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakRotator_Pitch) == 0x0000CC, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakRotator_Yaw) == 0x0000D0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000F0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0000F8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000100, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakVector_X) == 0x000108, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakVector_Y) == 0x000110, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_BreakVector_Z) == 0x000118, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x000120, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000128, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_4) == 0x000130, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_MakeVector_ReturnValue) == 0x000138, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000150, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000158, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_5) == 0x000160, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_RandomUnitVector_ReturnValue) == 0x000168, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_RandomFloatInRange_ReturnValue) == 0x000180, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000188, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001A0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_DoubleDouble_ReturnValue_6) == 0x0001B8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Add_VectorVector_ReturnValue) == 0x0001C0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, Temp_byte_Variable) == 0x0001D8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001D9, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Map_Find_Value) == 0x0001E0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_Map_Find_ReturnValue) == 0x0001E8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, CallFunc_PlayAnimMontage_ReturnValue) == 0x0001EC, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, K2Node_VariableSet_tempDeltaTime_ImplicitCast) == 0x0001F0, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::K2Node_VariableSet_tempDeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza, K2Node_VariableSet_Yaw_ImplicitCast) == 0x0001F8, "Member 'BP_DebugMissWaza_C_ExecuteUbergraph_BP_DebugMissWaza::K2Node_VariableSet_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_DebugMissWaza.BP_DebugMissWaza_C.SetTransform
// 0x01C0 (0x01C0 - 0x0000)
struct BP_DebugMissWaza_C_SetTransform final
{
public:
	struct FVector                                CallFunc_Vector_One_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF8[0x8];                                     // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF9[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DebugMissWaza_C_SetTransform) == 0x000010, "Wrong alignment on BP_DebugMissWaza_C_SetTransform");
static_assert(sizeof(BP_DebugMissWaza_C_SetTransform) == 0x0001C0, "Wrong size on BP_DebugMissWaza_C_SetTransform");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_Vector_One_ReturnValue) == 0x000000, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_Vector_One_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000018, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000048, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_GetActionCharacter_ReturnValue) == 0x000060, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_MakeTransform_ReturnValue) == 0x000070, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000D0, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001B8, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_SetTransform, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0001BC, "Member 'BP_DebugMissWaza_C_SetTransform::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_DebugMissWaza.BP_DebugMissWaza_C.Shoot
// 0x0080 (0x0080 - 0x0000)
struct BP_DebugMissWaza_C_Shoot final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DFA[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DebugMissWazaBullet_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DebugMissWaza_C_Shoot) == 0x000010, "Wrong alignment on BP_DebugMissWaza_C_Shoot");
static_assert(sizeof(BP_DebugMissWaza_C_Shoot) == 0x000080, "Wrong size on BP_DebugMissWaza_C_Shoot");
static_assert(offsetof(BP_DebugMissWaza_C_Shoot, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_DebugMissWaza_C_Shoot::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_Shoot, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'BP_DebugMissWaza_C_Shoot::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_Shoot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'BP_DebugMissWaza_C_Shoot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DebugMissWaza_C_Shoot, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'BP_DebugMissWaza_C_Shoot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_DebugMissWaza.BP_DebugMissWaza_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_DebugMissWaza_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DebugMissWaza_C_TickAction) == 0x000004, "Wrong alignment on BP_DebugMissWaza_C_TickAction");
static_assert(sizeof(BP_DebugMissWaza_C_TickAction) == 0x000004, "Wrong size on BP_DebugMissWaza_C_TickAction");
static_assert(offsetof(BP_DebugMissWaza_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_DebugMissWaza_C_TickAction::DeltaTime' has a wrong offset!");

}

