#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerSoundEmitterComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C.BPEmitSound
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSoundEmitterComponent_C_BPEmitSound final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rate;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EmitSound_VolumeRate_ImplicitCast;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSoundEmitterComponent_C_BPEmitSound) == 0x000008, "Wrong alignment on BP_PlayerSoundEmitterComponent_C_BPEmitSound");
static_assert(sizeof(BP_PlayerSoundEmitterComponent_C_BPEmitSound) == 0x000020, "Wrong size on BP_PlayerSoundEmitterComponent_C_BPEmitSound");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_BPEmitSound, RowName) == 0x000000, "Member 'BP_PlayerSoundEmitterComponent_C_BPEmitSound::RowName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_BPEmitSound, Rate) == 0x000008, "Member 'BP_PlayerSoundEmitterComponent_C_BPEmitSound::Rate' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_BPEmitSound, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_PlayerSoundEmitterComponent_C_BPEmitSound::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_BPEmitSound, CallFunc_EmitSound_VolumeRate_ImplicitCast) == 0x000018, "Member 'BP_PlayerSoundEmitterComponent_C_BPEmitSound::CallFunc_EmitSound_VolumeRate_ImplicitCast' has a wrong offset!");

// Function BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C.ExecuteUbergraph_BP_PlayerSoundEmitterComponent
// 0x01E0 (0x01E0 - 0x0000)
struct BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42F8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42F9[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeSquared_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSliding_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCrouching_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSprint_ReturnValue;                     // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FA[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FB[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_CustomEvent_component;                      // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0080(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42FC[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_MaxWalkSpeed_ImplicitCast;      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent) == 0x000008, "Wrong alignment on BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent");
static_assert(sizeof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent) == 0x0001E0, "Wrong size on BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_VSizeSquared_ReturnValue) == 0x000048, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_IsSliding_ReturnValue) == 0x000050, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_IsSliding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_IsCrouching_ReturnValue) == 0x000051, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_IsSprint_ReturnValue) == 0x000052, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_IsSprint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_SwitchEnum_CmpSuccess) == 0x000053, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_FClamp_ReturnValue) == 0x000068, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_Event_EndPlayReason) == 0x000070, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_CustomEvent_component) == 0x000078, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_CustomEvent_component' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_CustomEvent_Hit) == 0x000080, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000168, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetOwner_ReturnValue_2) == 0x000170, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000178, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000180, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000198, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_GetVelocity_ReturnValue) == 0x0001A0, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_BreakVector_X) == 0x0001B8, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_BreakVector_Y) == 0x0001C0, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_BreakVector_Z) == 0x0001C8, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001D0, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent, K2Node_VariableSet_MaxWalkSpeed_ImplicitCast) == 0x0001D8, "Member 'BP_PlayerSoundEmitterComponent_C_ExecuteUbergraph_BP_PlayerSoundEmitterComponent::K2Node_VariableSet_MaxWalkSpeed_ImplicitCast' has a wrong offset!");

// Function BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerSoundEmitterComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerSoundEmitterComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSoundEmitterComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlayerSoundEmitterComponent_C_ReceiveTick");
static_assert(sizeof(BP_PlayerSoundEmitterComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlayerSoundEmitterComponent_C_ReceiveTick");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlayerSoundEmitterComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C.�������_1
// 0x00F0 (0x00F0 - 0x0000)
struct BP_PlayerSoundEmitterComponent_C__________1 final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerSoundEmitterComponent_C__________1) == 0x000008, "Wrong alignment on BP_PlayerSoundEmitterComponent_C__________1");
static_assert(sizeof(BP_PlayerSoundEmitterComponent_C__________1) == 0x0000F0, "Wrong size on BP_PlayerSoundEmitterComponent_C__________1");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C__________1, Component) == 0x000000, "Member 'BP_PlayerSoundEmitterComponent_C__________1::Component' has a wrong offset!");
static_assert(offsetof(BP_PlayerSoundEmitterComponent_C__________1, Hit) == 0x000008, "Member 'BP_PlayerSoundEmitterComponent_C__________1::Hit' has a wrong offset!");

}

