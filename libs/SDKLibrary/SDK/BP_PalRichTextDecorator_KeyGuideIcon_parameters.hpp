#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRichTextDecorator_KeyGuideIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonUI_structs.hpp"


namespace SDK::Params
{

// Function BP_PalRichTextDecorator_KeyGuideIcon.BP_PalRichTextDecorator_KeyGuideIcon_C.CreateWidget
// 0x0430 (0x0430 - 0x0000)
struct BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget final
{
public:
	class FName                                   KeyGuideActionName;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconScale;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverrideType;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCommonInputActionDataBase             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0360)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0388(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Map_Find_Value;                           // 0x0398(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Map_Find_Value_1;                         // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerInputKeyGuideIcon_C*         K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon; // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameInstance*                       CallFunc_GetPalGameInstance_ReturnValue;           // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         CallFunc_Create_ReturnValue;                       // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x03E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 CallFunc_Create_ReturnValue_1;                     // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x03F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x0408(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget) == 0x000010, "Wrong alignment on BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget");
static_assert(sizeof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget) == 0x000430, "Wrong size on BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, KeyGuideActionName) == 0x000000, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::KeyGuideActionName' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, IconScale) == 0x000008, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::IconScale' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, OverrideType) == 0x00000C, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::OverrideType' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, ReturnValue) == 0x000010, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000380, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_MakeVector2D_ReturnValue) == 0x000388, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Map_Find_Value) == 0x000398, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Map_Find_ReturnValue) == 0x0003A0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Map_Find_Value_1) == 0x0003A8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Map_Find_ReturnValue_1) == 0x0003B0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon) == 0x0003B8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, K2Node_DynamicCast_bSuccess) == 0x0003C0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_GetPalGameInstance_ReturnValue) == 0x0003C8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_GetPalGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_IsValid_ReturnValue) == 0x0003D0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0003D8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Create_ReturnValue) == 0x0003E0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x0003E8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Create_ReturnValue_1) == 0x0003F0, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x0003F8, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x000408, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000418, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x000420, "Member 'BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

}

