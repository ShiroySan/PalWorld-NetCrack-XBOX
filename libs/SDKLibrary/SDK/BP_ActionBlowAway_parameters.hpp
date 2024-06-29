#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionBlowAway

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.CanStepCancel
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionBlowAway_C_CanStepCancel final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_CanStepCancel) == 0x000001, "Wrong alignment on BP_ActionBlowAway_C_CanStepCancel");
static_assert(sizeof(BP_ActionBlowAway_C_CanStepCancel) == 0x000001, "Wrong size on BP_ActionBlowAway_C_CanStepCancel");
static_assert(offsetof(BP_ActionBlowAway_C_CanStepCancel, ReturnValue) == 0x000000, "Member 'BP_ActionBlowAway_C_CanStepCancel::ReturnValue' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.ExecuteUbergraph_BP_ActionBlowAway
// 0x0228 (0x0228 - 0x0000)
struct BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424F[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4250[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4251[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         K2Node_CustomEvent_component;                      // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0110(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0200(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4252[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4253[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway) == 0x000008, "Wrong alignment on BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway");
static_assert(sizeof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway) == 0x000228, "Wrong size on BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, EntryPoint) == 0x000000, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetMainMesh_ReturnValue) == 0x000028, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_3) == 0x000058, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_NotifyName_4) == 0x000068, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_NotifyName_3) == 0x000070, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_4) == 0x000078, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_NotifyName_2) == 0x000088, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_NotifyName_1) == 0x0000A0, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_NotifyName) == 0x0000B8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000C0, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, Temp_name_Variable) == 0x0000D0, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, Temp_byte_Variable) == 0x0000D8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_Map_Find_Value) == 0x0000E0, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_Map_Find_ReturnValue) == 0x0000E8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000F0, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000100, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_component) == 0x000108, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_component' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_CustomEvent_Hit) == 0x000110, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0001F8, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000200, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, K2Node_Event_DeltaTime) == 0x000208, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000210, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000218, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_IsFalling_ReturnValue) == 0x000220, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000224, "Member 'BP_ActionBlowAway_C_ExecuteUbergraph_BP_ActionBlowAway::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(sizeof(BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000008, "Wrong size on BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(offsetof(BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07, NotifyName) == 0x000000, "Member 'BP_ActionBlowAway_C_OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07::NotifyName' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(sizeof(BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000008, "Wrong size on BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(offsetof(BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07, NotifyName) == 0x000000, "Member 'BP_ActionBlowAway_C_OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07::NotifyName' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(sizeof(BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000008, "Wrong size on BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(offsetof(BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07, NotifyName) == 0x000000, "Member 'BP_ActionBlowAway_C_OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07::NotifyName' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnLandedDelegate_����_0
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ActionBlowAway_C_OnLandedDelegate______0 final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ActionBlowAway_C_OnLandedDelegate______0) == 0x000008, "Wrong alignment on BP_ActionBlowAway_C_OnLandedDelegate______0");
static_assert(sizeof(BP_ActionBlowAway_C_OnLandedDelegate______0) == 0x0000F0, "Wrong size on BP_ActionBlowAway_C_OnLandedDelegate______0");
static_assert(offsetof(BP_ActionBlowAway_C_OnLandedDelegate______0, Component) == 0x000000, "Member 'BP_ActionBlowAway_C_OnLandedDelegate______0::Component' has a wrong offset!");
static_assert(offsetof(BP_ActionBlowAway_C_OnLandedDelegate______0, Hit) == 0x000008, "Member 'BP_ActionBlowAway_C_OnLandedDelegate______0::Hit' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(sizeof(BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000008, "Wrong size on BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(offsetof(BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07, NotifyName) == 0x000000, "Member 'BP_ActionBlowAway_C_OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07::NotifyName' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(sizeof(BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07) == 0x000008, "Wrong size on BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07");
static_assert(offsetof(BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07, NotifyName) == 0x000000, "Member 'BP_ActionBlowAway_C_OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07::NotifyName' has a wrong offset!");

// Function BP_ActionBlowAway.BP_ActionBlowAway_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionBlowAway_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionBlowAway_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionBlowAway_C_TickAction");
static_assert(sizeof(BP_ActionBlowAway_C_TickAction) == 0x000004, "Wrong size on BP_ActionBlowAway_C_TickAction");
static_assert(offsetof(BP_ActionBlowAway_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionBlowAway_C_TickAction::DeltaTime' has a wrong offset!");

}

