#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitEffectSlot_Player

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.ExecuteUbergraph_BP_HitEffectSlot_Player
// 0x0210 (0x0210 - 0x0000)
struct BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDamageInfo                         K2Node_Event_info;                                 // 0x0038(0x00D0)(ConstParm)
	TSoftObjectPtr<class UNiagaraSystem>          K2Node_CustomEvent_EffectPath;                     // 0x0108(0x0030)(HasGetValueTypeHash)
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             K2Node_CustomEvent_Transform;                      // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EB[0x1];                                      // 0x01EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player");
static_assert(sizeof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player) == 0x000210, "Wrong size on BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, EntryPoint) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, Temp_object_Variable) == 0x000020, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_DynamicCast_AsNiagara_System) == 0x000028, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_Event_info) == 0x000038, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_Event_info' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_CustomEvent_EffectPath) == 0x000108, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_CustomEvent_EffectPath' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_CustomEvent_Transform) == 0x000140, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_CustomEvent_Transform' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_BreakTransform_Location) == 0x0001A0, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_BreakTransform_Rotation) == 0x0001B8, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_BreakTransform_Scale) == 0x0001D0, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E8, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, K2Node_SwitchEnum_CmpSuccess) == 0x0001E9, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001EA, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_Array_AddUnique_ReturnValue) == 0x0001EC, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x0001F0, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_GetMainMesh_ReturnValue) == 0x0001F8, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000200, "Member 'BP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.LoadAndPlayEffect
// 0x0090 (0x0090 - 0x0000)
struct BP_HitEffectSlot_Player_C_LoadAndPlayEffect final
{
public:
	TSoftObjectPtr<class UNiagaraSystem>          EffectPath;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FTransform                             Transform;                                         // 0x0030(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_LoadAndPlayEffect) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_LoadAndPlayEffect");
static_assert(sizeof(BP_HitEffectSlot_Player_C_LoadAndPlayEffect) == 0x000090, "Wrong size on BP_HitEffectSlot_Player_C_LoadAndPlayEffect");
static_assert(offsetof(BP_HitEffectSlot_Player_C_LoadAndPlayEffect, EffectPath) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_LoadAndPlayEffect::EffectPath' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_LoadAndPlayEffect, Transform) == 0x000030, "Member 'BP_HitEffectSlot_Player_C_LoadAndPlayEffect::Transform' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770
// 0x0008 (0x0008 - 0x0000)
struct BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770) == 0x000008, "Wrong alignment on BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770");
static_assert(sizeof(BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770) == 0x000008, "Wrong size on BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770");
static_assert(offsetof(BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770, Loaded) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770::Loaded' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.PlayHitEffect
// 0x00D0 (0x00D0 - 0x0000)
struct BP_HitEffectSlot_Player_C_PlayHitEffect final
{
public:
	struct FPalDamageInfo                         Info;                                              // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_PlayHitEffect) == 0x000008, "Wrong alignment on BP_HitEffectSlot_Player_C_PlayHitEffect");
static_assert(sizeof(BP_HitEffectSlot_Player_C_PlayHitEffect) == 0x0000D0, "Wrong size on BP_HitEffectSlot_Player_C_PlayHitEffect");
static_assert(offsetof(BP_HitEffectSlot_Player_C_PlayHitEffect, Info) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_PlayHitEffect::Info' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectBullet
// 0x00F0 (0x00F0 - 0x0000)
struct BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectScale;                                       // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectScale_0;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          EffectPath;                                        // 0x0030(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;  // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet");
static_assert(sizeof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet) == 0x0000F0, "Wrong size on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, Element) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::Element' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, Location) == 0x000008, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::Location' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, EffectScale) == 0x000020, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::EffectScale' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, EffectScale_0) == 0x000028, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::EffectScale_0' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, EffectPath) == 0x000030, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::EffectPath' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000068, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000E0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x0000E4, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectFar
// 0x01C0 (0x01C0 - 0x0000)
struct BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectScale;                                       // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPoison;                                          // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EffectScale_0;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          EffectPath;                                        // 0x0038(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_148[0x8];                                      // 0x0148(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0150(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar");
static_assert(sizeof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar) == 0x0001C0, "Wrong size on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, Element) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::Element' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, Location) == 0x000008, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::Location' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, EffectScale) == 0x000020, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::EffectScale' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, IsPoison) == 0x000028, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::IsPoison' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, EffectScale_0) == 0x000030, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::EffectScale_0' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, EffectPath) == 0x000038, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::EffectPath' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000070, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_X) == 0x000090, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Y) == 0x000098, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x0000B0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000B8, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_GetMainMesh_ReturnValue) == 0x0000D0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_GetSocketLocation_ReturnValue) == 0x0000D8, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_X_1) == 0x0000F0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Y_1) == 0x0000F8, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Z_1) == 0x000100, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_X_2) == 0x000108, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Y_2) == 0x000110, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_BreakVector_Z_2) == 0x000118, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000120, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_SelectFloat_ReturnValue) == 0x000128, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_MakeVector_ReturnValue) == 0x000130, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_MakeTransform_ReturnValue) == 0x000150, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001B0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x0001B8, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectNear
// 0x00F0 (0x00F0 - 0x0000)
struct BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectScale;                                       // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          EffectPath;                                        // 0x0028(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear");
static_assert(sizeof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear) == 0x0000F0, "Wrong size on BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, Element) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::Element' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, Location) == 0x000008, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::Location' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, EffectScale) == 0x000020, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::EffectScale' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, EffectPath) == 0x000028, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::EffectPath' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000060, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x0000E0, "Member 'BP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");

// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnSneakAttackEffect
// 0x0080 (0x0080 - 0x0000)
struct BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect) == 0x000010, "Wrong alignment on BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect");
static_assert(sizeof(BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect) == 0x000080, "Wrong size on BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect, Location) == 0x000000, "Member 'BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect::Location' has a wrong offset!");
static_assert(offsetof(BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_HitEffectSlot_Player_C_SpawnSneakAttackEffect::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

}

