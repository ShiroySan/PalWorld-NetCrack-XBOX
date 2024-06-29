#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FluidController.BP_FluidController_C.CreateMaterials
// 0x0040 (0x0040 - 0x0000)
struct BP_FluidController_C_CreateMaterials final
{
public:
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue_2;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_CreateMaterials) == 0x000008, "Wrong alignment on BP_FluidController_C_CreateMaterials");
static_assert(sizeof(BP_FluidController_C_CreateMaterials) == 0x000040, "Wrong size on BP_FluidController_C_CreateMaterials");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000000, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateRenderTarget2D_ReturnValue_1) == 0x000008, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateRenderTarget2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateRenderTarget2D_ReturnValue_2) == 0x000010, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateRenderTarget2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000020, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000028, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000034, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_CreateMaterials, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000038, "Member 'BP_FluidController_C_CreateMaterials::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.ExecuteUbergraph_BP_FluidController
// 0x0088 (0x0088 - 0x0000)
struct BP_FluidController_C_ExecuteUbergraph_BP_FluidController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3881[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3882[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3883[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_GetRT_RenderTarget;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0x0058(0x0008)(NoDestructor)
	class UTextureRenderTarget2D*                 CallFunc_GetPreviousRT_RenderTargetOut;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_GetPreviousRT_RenderTargetOut_1;          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_GetRT_RenderTarget_1;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController) == 0x000008, "Wrong alignment on BP_FluidController_C_ExecuteUbergraph_BP_FluidController");
static_assert(sizeof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController) == 0x000088, "Wrong size on BP_FluidController_C_ExecuteUbergraph_BP_FluidController");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, EntryPoint) == 0x000000, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Percent_IntInt_ReturnValue) == 0x00000C, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, K2Node_Event_EndPlayReason) == 0x000010, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_FMin_ReturnValue) == 0x000018, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_GetRT_RenderTarget) == 0x000030, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_GetRT_RenderTarget' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x000040, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x000048, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x000058, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_GetPreviousRT_RenderTargetOut) == 0x000060, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_GetPreviousRT_RenderTargetOut' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_GetPreviousRT_RenderTargetOut_1) == 0x000068, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_GetPreviousRT_RenderTargetOut_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_GetRT_RenderTarget_1) == 0x000078, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_GetRT_RenderTarget_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_ExecuteUbergraph_BP_FluidController, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'BP_FluidController_C_ExecuteUbergraph_BP_FluidController::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.GetPreviousRT
// 0x0040 (0x0040 - 0x0000)
struct BP_FluidController_C_GetPreviousRT final
{
public:
	int32                                         CurrentRTIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FramesOld;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_0;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_1;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_2;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTargetOut;                                   // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3884[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 CallFunc_GetRT_RenderTarget;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_GetPreviousRT) == 0x000008, "Wrong alignment on BP_FluidController_C_GetPreviousRT");
static_assert(sizeof(BP_FluidController_C_GetPreviousRT) == 0x000040, "Wrong size on BP_FluidController_C_GetPreviousRT");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, CurrentRTIndex) == 0x000000, "Member 'BP_FluidController_C_GetPreviousRT::CurrentRTIndex' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, FramesOld) == 0x000004, "Member 'BP_FluidController_C_GetPreviousRT::FramesOld' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, RenderTarget_0) == 0x000008, "Member 'BP_FluidController_C_GetPreviousRT::RenderTarget_0' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, RenderTarget_1) == 0x000010, "Member 'BP_FluidController_C_GetPreviousRT::RenderTarget_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, RenderTarget_2) == 0x000018, "Member 'BP_FluidController_C_GetPreviousRT::RenderTarget_2' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, RenderTargetOut) == 0x000020, "Member 'BP_FluidController_C_GetPreviousRT::RenderTargetOut' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'BP_FluidController_C_GetPreviousRT::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_FluidController_C_GetPreviousRT::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'BP_FluidController_C_GetPreviousRT::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetPreviousRT, CallFunc_GetRT_RenderTarget) == 0x000038, "Member 'BP_FluidController_C_GetPreviousRT::CallFunc_GetRT_RenderTarget' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.GetRT
// 0x0038 (0x0038 - 0x0000)
struct BP_FluidController_C_GetRT final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3885[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 RenderTarget_0;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_1;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_2;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3886[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_GetRT) == 0x000008, "Wrong alignment on BP_FluidController_C_GetRT");
static_assert(sizeof(BP_FluidController_C_GetRT) == 0x000038, "Wrong size on BP_FluidController_C_GetRT");
static_assert(offsetof(BP_FluidController_C_GetRT, Param_Index) == 0x000000, "Member 'BP_FluidController_C_GetRT::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, RenderTarget_0) == 0x000008, "Member 'BP_FluidController_C_GetRT::RenderTarget_0' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, RenderTarget_1) == 0x000010, "Member 'BP_FluidController_C_GetRT::RenderTarget_1' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, RenderTarget_2) == 0x000018, "Member 'BP_FluidController_C_GetRT::RenderTarget_2' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, RenderTarget) == 0x000020, "Member 'BP_FluidController_C_GetRT::RenderTarget' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, Temp_int_Variable) == 0x000028, "Member 'BP_FluidController_C_GetRT::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT, K2Node_Select_Default) == 0x000030, "Member 'BP_FluidController_C_GetRT::K2Node_Select_Default' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.GetRT_Height
// 0x0020 (0x0020 - 0x0000)
struct BP_FluidController_C_GetRT_Height final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3887[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3888[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_GetRT_Height) == 0x000008, "Wrong alignment on BP_FluidController_C_GetRT_Height");
static_assert(sizeof(BP_FluidController_C_GetRT_Height) == 0x000020, "Wrong size on BP_FluidController_C_GetRT_Height");
static_assert(offsetof(BP_FluidController_C_GetRT_Height, Param_Index) == 0x000000, "Member 'BP_FluidController_C_GetRT_Height::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT_Height, RenderTarget) == 0x000008, "Member 'BP_FluidController_C_GetRT_Height::RenderTarget' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT_Height, Temp_int_Variable) == 0x000010, "Member 'BP_FluidController_C_GetRT_Height::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidController_C_GetRT_Height, K2Node_Select_Default) == 0x000018, "Member 'BP_FluidController_C_GetRT_Height::K2Node_Select_Default' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_FluidController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_FluidController_C_ReceiveEndPlay");
static_assert(sizeof(BP_FluidController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_FluidController_C_ReceiveEndPlay");
static_assert(offsetof(BP_FluidController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_FluidController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_FluidController.BP_FluidController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FluidController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FluidController_C_ReceiveTick");
static_assert(sizeof(BP_FluidController_C_ReceiveTick) == 0x000004, "Wrong size on BP_FluidController_C_ReceiveTick");
static_assert(offsetof(BP_FluidController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FluidController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

