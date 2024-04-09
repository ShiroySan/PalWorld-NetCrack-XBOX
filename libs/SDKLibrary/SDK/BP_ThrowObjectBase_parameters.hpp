#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowObjectBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ExecuteUbergraph_BP_ThrowObjectBase
// 0x01A0 (0x01A0 - 0x0000)
struct BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0058(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast; // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DefaultGravityScale_ImplicitCast; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase) == 0x000008, "Wrong alignment on BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase");
static_assert(sizeof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase) == 0x0001A0, "Wrong size on BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, EntryPoint) == 0x000000, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_HitComp) == 0x000028, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_OtherActor_1) == 0x000030, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_OtherComp) == 0x000038, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_NormalImpulse) == 0x000040, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_Hit) == 0x000058, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_Event_OtherActor) == 0x000140, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000148, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_MakeRotFromX_ReturnValue) == 0x000160, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000178, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000188, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000190, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x000194, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase, K2Node_VariableSet_DefaultGravityScale_ImplicitCast) == 0x000198, "Member 'BP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase::K2Node_VariableSet_DefaultGravityScale_ImplicitCast' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetAkOwnerComponent
// 0x0020 (0x0020 - 0x0000)
struct BP_ThrowObjectBase_C_GetAkOwnerComponent final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_GetAkOwnerComponent) == 0x000008, "Wrong alignment on BP_ThrowObjectBase_C_GetAkOwnerComponent");
static_assert(sizeof(BP_ThrowObjectBase_C_GetAkOwnerComponent) == 0x000020, "Wrong size on BP_ThrowObjectBase_C_GetAkOwnerComponent");
static_assert(offsetof(BP_ThrowObjectBase_C_GetAkOwnerComponent, ReturnValue) == 0x000000, "Member 'BP_ThrowObjectBase_C_GetAkOwnerComponent::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_GetAkOwnerComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_ThrowObjectBase_C_GetAkOwnerComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_GetAkOwnerComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000010, "Member 'BP_ThrowObjectBase_C_GetAkOwnerComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_GetAkOwnerComponent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ThrowObjectBase_C_GetAkOwnerComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_GetAkOwnerComponent, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'BP_ThrowObjectBase_C_GetAkOwnerComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetMaxBoundCount
// 0x0004 (0x0004 - 0x0000)
struct BP_ThrowObjectBase_C_GetMaxBoundCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_GetMaxBoundCount) == 0x000004, "Wrong alignment on BP_ThrowObjectBase_C_GetMaxBoundCount");
static_assert(sizeof(BP_ThrowObjectBase_C_GetMaxBoundCount) == 0x000004, "Wrong size on BP_ThrowObjectBase_C_GetMaxBoundCount");
static_assert(offsetof(BP_ThrowObjectBase_C_GetMaxBoundCount, Count) == 0x000000, "Member 'BP_ThrowObjectBase_C_GetMaxBoundCount::Count' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IncrementBoundCountAndCheckDestroy
// 0x0014 (0x0014 - 0x0000)
struct BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy final
{
public:
	bool                                          CallFunc_IsCountDestroy_IsDestroy;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMaxBoundCount_Count;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15DF[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy) == 0x000004, "Wrong alignment on BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy");
static_assert(sizeof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy) == 0x000014, "Wrong size on BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy");
static_assert(offsetof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy, CallFunc_IsCountDestroy_IsDestroy) == 0x000000, "Member 'BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy::CallFunc_IsCountDestroy_IsDestroy' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy, CallFunc_GetMaxBoundCount_Count) == 0x000004, "Member 'BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy::CallFunc_GetMaxBoundCount_Count' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy, Temp_int_Variable) == 0x000008, "Member 'BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsCountDestroy
// 0x0001 (0x0001 - 0x0000)
struct BP_ThrowObjectBase_C_IsCountDestroy final
{
public:
	bool                                          Param_IsDestroy;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_IsCountDestroy) == 0x000001, "Wrong alignment on BP_ThrowObjectBase_C_IsCountDestroy");
static_assert(sizeof(BP_ThrowObjectBase_C_IsCountDestroy) == 0x000001, "Wrong size on BP_ThrowObjectBase_C_IsCountDestroy");
static_assert(offsetof(BP_ThrowObjectBase_C_IsCountDestroy, Param_IsDestroy) == 0x000000, "Member 'BP_ThrowObjectBase_C_IsCountDestroy::Param_IsDestroy' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsDestroy
// 0x0108 (0x0108 - 0x0000)
struct BP_ThrowObjectBase_C_IsDestroy final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x0100(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_IsDestroy) == 0x000008, "Wrong alignment on BP_ThrowObjectBase_C_IsDestroy");
static_assert(sizeof(BP_ThrowObjectBase_C_IsDestroy) == 0x000108, "Wrong size on BP_ThrowObjectBase_C_IsDestroy");
static_assert(offsetof(BP_ThrowObjectBase_C_IsDestroy, HitComp) == 0x000000, "Member 'BP_ThrowObjectBase_C_IsDestroy::HitComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IsDestroy, OtherCharacter) == 0x000008, "Member 'BP_ThrowObjectBase_C_IsDestroy::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IsDestroy, OtherComp) == 0x000010, "Member 'BP_ThrowObjectBase_C_IsDestroy::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IsDestroy, Hit) == 0x000018, "Member 'BP_ThrowObjectBase_C_IsDestroy::Hit' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_IsDestroy, ReturnValue) == 0x000100, "Member 'BP_ThrowObjectBase_C_IsDestroy::ReturnValue' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.OnBlock
// 0x0118 (0x0118 - 0x0000)
struct BP_ThrowObjectBase_C_OnBlock final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ThrowObjectBase_C_OnBlock) == 0x000008, "Wrong alignment on BP_ThrowObjectBase_C_OnBlock");
static_assert(sizeof(BP_ThrowObjectBase_C_OnBlock) == 0x000118, "Wrong size on BP_ThrowObjectBase_C_OnBlock");
static_assert(offsetof(BP_ThrowObjectBase_C_OnBlock, HitComp) == 0x000000, "Member 'BP_ThrowObjectBase_C_OnBlock::HitComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_OnBlock, OtherActor) == 0x000008, "Member 'BP_ThrowObjectBase_C_OnBlock::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_OnBlock, OtherComp) == 0x000010, "Member 'BP_ThrowObjectBase_C_OnBlock::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_OnBlock, NormalImpulse) == 0x000018, "Member 'BP_ThrowObjectBase_C_OnBlock::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_OnBlock, Hit) == 0x000030, "Member 'BP_ThrowObjectBase_C_OnBlock::Hit' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.Play Throw Sound
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowObjectBase_C_Play_Throw_Sound final
{
public:
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_Play_Throw_Sound) == 0x000004, "Wrong alignment on BP_ThrowObjectBase_C_Play_Throw_Sound");
static_assert(sizeof(BP_ThrowObjectBase_C_Play_Throw_Sound) == 0x000008, "Wrong size on BP_ThrowObjectBase_C_Play_Throw_Sound");
static_assert(offsetof(BP_ThrowObjectBase_C_Play_Throw_Sound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000000, "Member 'BP_ThrowObjectBase_C_Play_Throw_Sound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySound
// 0x0010 (0x0010 - 0x0000)
struct BP_ThrowObjectBase_C_PlaySound final
{
public:
	struct FPalDataTableRowName_SoundID           ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       Options;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, NoDestructor)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x000C(0x0004)(NoDestructor)
};
static_assert(alignof(BP_ThrowObjectBase_C_PlaySound) == 0x000004, "Wrong alignment on BP_ThrowObjectBase_C_PlaySound");
static_assert(sizeof(BP_ThrowObjectBase_C_PlaySound) == 0x000010, "Wrong size on BP_ThrowObjectBase_C_PlaySound");
static_assert(offsetof(BP_ThrowObjectBase_C_PlaySound, ID) == 0x000000, "Member 'BP_ThrowObjectBase_C_PlaySound::ID' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_PlaySound, Options) == 0x000008, "Member 'BP_ThrowObjectBase_C_PlaySound::Options' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_PlaySound, K2Node_MakeStruct_PalSoundOptions) == 0x00000C, "Member 'BP_ThrowObjectBase_C_PlaySound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySoundWithMaterial
// 0x000C (0x000C - 0x0000)
struct BP_ThrowObjectBase_C_PlaySoundWithMaterial final
{
public:
	struct FPalDataTableRowName_SoundID           ID;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              PhysicalMaterial;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_PlaySoundWithMaterial) == 0x000004, "Wrong alignment on BP_ThrowObjectBase_C_PlaySoundWithMaterial");
static_assert(sizeof(BP_ThrowObjectBase_C_PlaySoundWithMaterial) == 0x00000C, "Wrong size on BP_ThrowObjectBase_C_PlaySoundWithMaterial");
static_assert(offsetof(BP_ThrowObjectBase_C_PlaySoundWithMaterial, ID) == 0x000000, "Member 'BP_ThrowObjectBase_C_PlaySoundWithMaterial::ID' has a wrong offset!");
static_assert(offsetof(BP_ThrowObjectBase_C_PlaySoundWithMaterial, PhysicalMaterial) == 0x000008, "Member 'BP_ThrowObjectBase_C_PlaySoundWithMaterial::PhysicalMaterial' has a wrong offset!");

// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowObjectBase_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowObjectBase_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_ThrowObjectBase_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_ThrowObjectBase_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_ThrowObjectBase_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_ThrowObjectBase_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_ThrowObjectBase_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

