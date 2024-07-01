#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_MeleeAttackWithGun

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun
// 0x00A8 (0x00A8 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun final
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
	uint8                                         Pad_3FD4[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun) == 0x000008, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun) == 0x0000A8, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, EntryPoint) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000098, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(sizeof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D");
static_assert(offsetof(BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D::NotifyName' has a wrong offset!");

}

