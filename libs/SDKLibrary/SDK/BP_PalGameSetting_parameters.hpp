#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalGameSetting

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PalGameSetting.BP_PalGameSetting_C.CalcCaptureRate
// 0x0340 (0x0340 - 0x0000)
struct BP_PalGameSetting_C_CalcCaptureRate final
{
public:
	float                                         CaptureItemLevel;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPalIndividualCharacterHandle*    TargetHandle;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UPalIndividualCharacterHandle*    ThrowCharacterHandle;                              // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          TempTargetPal;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        AdditionalCaptureLevel;                            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Value_P;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Value_A;                                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NormalizedLevel;                                   // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetHPPercent;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetLevel;                                       // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value_s;                                           // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACC[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Value_t;                                           // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACD[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCaptureRate_ByCharacterID_ReturnValue; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCaptureRateByStatus_ForGameSettingBP_ReturnValue; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACE[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UPalOptionSubsystem*              CallFunc_GetOptionSubsystem_ReturnValue;           // 0x0080(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACF[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionWorldSettings                CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x0090(0x0158)(ConstParm)
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x01E8(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x01F0(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x01F8(0x0008)(NoDestructor)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD0[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_StatusPointName_AddCaptureLevel_ReturnValue; // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD1[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD2[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStatusPoint_ReturnValue;               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD3[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD4[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD5[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD6[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3; // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast_1;  // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGameSetting_C_CalcCaptureRate) == 0x000008, "Wrong alignment on BP_PalGameSetting_C_CalcCaptureRate");
static_assert(sizeof(BP_PalGameSetting_C_CalcCaptureRate) == 0x000340, "Wrong size on BP_PalGameSetting_C_CalcCaptureRate");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CaptureItemLevel) == 0x000000, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CaptureItemLevel' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, TargetHandle) == 0x000008, "Member 'BP_PalGameSetting_C_CalcCaptureRate::TargetHandle' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, ThrowCharacterHandle) == 0x000010, "Member 'BP_PalGameSetting_C_CalcCaptureRate::ThrowCharacterHandle' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, ReturnValue) == 0x000018, "Member 'BP_PalGameSetting_C_CalcCaptureRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, TempTargetPal) == 0x000020, "Member 'BP_PalGameSetting_C_CalcCaptureRate::TempTargetPal' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, AdditionalCaptureLevel) == 0x000028, "Member 'BP_PalGameSetting_C_CalcCaptureRate::AdditionalCaptureLevel' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, Value_P) == 0x000030, "Member 'BP_PalGameSetting_C_CalcCaptureRate::Value_P' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, Value_A) == 0x000038, "Member 'BP_PalGameSetting_C_CalcCaptureRate::Value_A' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, NormalizedLevel) == 0x000040, "Member 'BP_PalGameSetting_C_CalcCaptureRate::NormalizedLevel' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, TargetHPPercent) == 0x000048, "Member 'BP_PalGameSetting_C_CalcCaptureRate::TargetHPPercent' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, TargetLevel) == 0x00004C, "Member 'BP_PalGameSetting_C_CalcCaptureRate::TargetLevel' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, Value_s) == 0x000050, "Member 'BP_PalGameSetting_C_CalcCaptureRate::Value_s' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, Value_t) == 0x000058, "Member 'BP_PalGameSetting_C_CalcCaptureRate::Value_t' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetCaptureRate_ByCharacterID_ReturnValue) == 0x000064, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetCaptureRate_ByCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000068, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetCaptureRateByStatus_ForGameSettingBP_ReturnValue) == 0x000070, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetCaptureRateByStatus_ForGameSettingBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetOptionSubsystem_ReturnValue) == 0x000080, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetOptionWorldSettings_ReturnValue) == 0x000090, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetOptionWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetMaxHP_ReturnValue) == 0x0001E8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetHP_ReturnValue) == 0x0001F0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x0001F8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetLevel_ReturnValue) == 0x000200, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000204, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_IsValid_ReturnValue_2) == 0x000208, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000210, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_StatusPointName_AddCaptureLevel_ReturnValue) == 0x000218, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_StatusPointName_AddCaptureLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_IsValid_ReturnValue_3) == 0x000220, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000228, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_IsValid_ReturnValue_4) == 0x000230, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GetStatusPoint_ReturnValue) == 0x000234, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GetStatusPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000238, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000240, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000248, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_FClamp_ReturnValue) == 0x000250, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000258, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000260, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Add_IntInt_ReturnValue) == 0x000268, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000270, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000278, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000280, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) == 0x000288, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2) == 0x000290, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000298, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0002A0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0002A8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0002B0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0002B4, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0002B8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0002C0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x0002C8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0002D0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0002D8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0002E0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x0002E8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3) == 0x0002F0, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_ReturnValue_7) == 0x0002F8, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000300, "Member 'BP_PalGameSetting_C_CalcCaptureRate::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, K2Node_FunctionResult_ReturnValue_ImplicitCast_1) == 0x000304, "Member 'BP_PalGameSetting_C_CalcCaptureRate::K2Node_FunctionResult_ReturnValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000308, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000310, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000318, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x000320, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000328, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000330, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_CalcCaptureRate, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000338, "Member 'BP_PalGameSetting_C_CalcCaptureRate::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");

// Function BP_PalGameSetting.BP_PalGameSetting_C.GetEnemyMarkScale
// 0x0098 (0x0098 - 0x0000)
struct BP_PalGameSetting_C_GetEnemyMarkScale final
{
public:
	struct FVector                                TargetPosition;                                    // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfPosition;                                      // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD7[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD8[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGameSetting_C_GetEnemyMarkScale) == 0x000008, "Wrong alignment on BP_PalGameSetting_C_GetEnemyMarkScale");
static_assert(sizeof(BP_PalGameSetting_C_GetEnemyMarkScale) == 0x000098, "Wrong size on BP_PalGameSetting_C_GetEnemyMarkScale");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, TargetPosition) == 0x000000, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::TargetPosition' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, SelfPosition) == 0x000018, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::SelfPosition' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, ReturnValue) == 0x000030, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_VSize_ReturnValue) == 0x000050, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_FMax_ReturnValue) == 0x000068, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_FMin_ReturnValue) == 0x000070, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000080, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000088, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetEnemyMarkScale, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000090, "Member 'BP_PalGameSetting_C_GetEnemyMarkScale::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_PalGameSetting.BP_PalGameSetting_C.GetWeakScale
// 0x000C (0x000C - 0x0000)
struct BP_PalGameSetting_C_GetWeakScale final
{
public:
	int32                                         WeakCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGameSetting_C_GetWeakScale) == 0x000004, "Wrong alignment on BP_PalGameSetting_C_GetWeakScale");
static_assert(sizeof(BP_PalGameSetting_C_GetWeakScale) == 0x00000C, "Wrong size on BP_PalGameSetting_C_GetWeakScale");
static_assert(offsetof(BP_PalGameSetting_C_GetWeakScale, WeakCount) == 0x000000, "Member 'BP_PalGameSetting_C_GetWeakScale::WeakCount' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetWeakScale, ReturnValue) == 0x000004, "Member 'BP_PalGameSetting_C_GetWeakScale::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetWeakScale, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalGameSetting_C_GetWeakScale::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetWeakScale, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000009, "Member 'BP_PalGameSetting_C_GetWeakScale::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGameSetting_C_GetWeakScale, K2Node_SwitchInteger_CmpSuccess) == 0x00000A, "Member 'BP_PalGameSetting_C_GetWeakScale::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

