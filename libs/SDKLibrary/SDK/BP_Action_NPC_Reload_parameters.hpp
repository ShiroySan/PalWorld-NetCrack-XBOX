#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_Reload

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.ExecuteUbergraph_BP_Action_NPC_Reload
// 0x0360 (0x0360 - 0x0000)
struct BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F70[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FWeaponAnimationInfo                   CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue; // 0x00A8(0x0258)(ConstParm)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F71[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F72[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActionVelocity_ReturnValue;            // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload) == 0x000008, "Wrong alignment on BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload");
static_assert(sizeof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload) == 0x000360, "Wrong size on BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, EntryPoint) == 0x000000, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000090, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetMainMesh_ReturnValue) == 0x000098, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue) == 0x0000A8, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000300, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000308, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_IsValid_ReturnValue) == 0x000310, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000318, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_IsValid_ReturnValue_1) == 0x000320, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_GetActionVelocity_ReturnValue) == 0x000328, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_GetActionVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_BreakVector_X) == 0x000340, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_BreakVector_Y) == 0x000348, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_BreakVector_Z) == 0x000350, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload, CallFunc_Delay_Duration_ImplicitCast) == 0x000358, "Member 'BP_Action_NPC_Reload_C_ExecuteUbergraph_BP_Action_NPC_Reload::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.OnBlendOut_570932B749CF5A9A1DB665947E5643C9
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9) == 0x000004, "Wrong alignment on BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9");
static_assert(sizeof(BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9) == 0x000008, "Wrong size on BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9");
static_assert(offsetof(BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9, NotifyName) == 0x000000, "Member 'BP_Action_NPC_Reload_C_OnBlendOut_570932B749CF5A9A1DB665947E5643C9::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.OnCompleted_570932B749CF5A9A1DB665947E5643C9
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9) == 0x000004, "Wrong alignment on BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9");
static_assert(sizeof(BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9) == 0x000008, "Wrong size on BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9");
static_assert(offsetof(BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9, NotifyName) == 0x000000, "Member 'BP_Action_NPC_Reload_C_OnCompleted_570932B749CF5A9A1DB665947E5643C9::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.OnInterrupted_570932B749CF5A9A1DB665947E5643C9
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9) == 0x000004, "Wrong alignment on BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9");
static_assert(sizeof(BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9) == 0x000008, "Wrong size on BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9");
static_assert(offsetof(BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9, NotifyName) == 0x000000, "Member 'BP_Action_NPC_Reload_C_OnInterrupted_570932B749CF5A9A1DB665947E5643C9::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9) == 0x000004, "Wrong alignment on BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9");
static_assert(sizeof(BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9) == 0x000008, "Wrong size on BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9");
static_assert(offsetof(BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9, NotifyName) == 0x000000, "Member 'BP_Action_NPC_Reload_C_OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_Reload.BP_Action_NPC_Reload_C.OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9) == 0x000004, "Wrong alignment on BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9");
static_assert(sizeof(BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9) == 0x000008, "Wrong size on BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9");
static_assert(offsetof(BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9, NotifyName) == 0x000000, "Member 'BP_Action_NPC_Reload_C_OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9::NotifyName' has a wrong offset!");

}

