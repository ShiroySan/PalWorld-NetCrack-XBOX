#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionStun

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionStun.BP_ActionStun_C.ExecuteUbergraph_BP_ActionStun
// 0x0108 (0x0108 - 0x0000)
struct BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA2[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x008C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA3[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA4[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA5[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun) == 0x000008, "Wrong alignment on BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun");
static_assert(sizeof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun) == 0x000108, "Wrong size on BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, EntryPoint) == 0x000000, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CustomEvent_NotifyName_4) == 0x000018, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CustomEvent_NotifyName_3) == 0x000024, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CustomEvent_NotifyName_2) == 0x00003C, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CustomEvent_NotifyName_1) == 0x000054, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CustomEvent_NotifyName) == 0x00006C, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CreateDelegate_OutputDelegate_3) == 0x000074, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, Temp_name_Variable) == 0x000084, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, Temp_byte_Variable) == 0x00008C, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000090, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000098, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000A0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetMainMesh_ReturnValue) == 0x0000B0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetGameSetting_ReturnValue) == 0x0000C8, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000D0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000E0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000E8, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000F0, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000F8, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun, CallFunc_IsValid_ReturnValue_2) == 0x000100, "Member 'BP_ActionStun_C_ExecuteUbergraph_BP_ActionStun::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_ActionStun.BP_ActionStun_C.OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000004, "Wrong alignment on BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(sizeof(BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000008, "Wrong size on BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(offsetof(BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC, NotifyName) == 0x000000, "Member 'BP_ActionStun_C_OnBlendOut_CFCF4E784389F348A3D5D6B73F7082BC::NotifyName' has a wrong offset!");

// Function BP_ActionStun.BP_ActionStun_C.OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000004, "Wrong alignment on BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(sizeof(BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000008, "Wrong size on BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(offsetof(BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC, NotifyName) == 0x000000, "Member 'BP_ActionStun_C_OnCompleted_CFCF4E784389F348A3D5D6B73F7082BC::NotifyName' has a wrong offset!");

// Function BP_ActionStun.BP_ActionStun_C.OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000004, "Wrong alignment on BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(sizeof(BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000008, "Wrong size on BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(offsetof(BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC, NotifyName) == 0x000000, "Member 'BP_ActionStun_C_OnInterrupted_CFCF4E784389F348A3D5D6B73F7082BC::NotifyName' has a wrong offset!");

// Function BP_ActionStun.BP_ActionStun_C.OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000004, "Wrong alignment on BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(sizeof(BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000008, "Wrong size on BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(offsetof(BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC, NotifyName) == 0x000000, "Member 'BP_ActionStun_C_OnNotifyBegin_CFCF4E784389F348A3D5D6B73F7082BC::NotifyName' has a wrong offset!");

// Function BP_ActionStun.BP_ActionStun_C.OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000004, "Wrong alignment on BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(sizeof(BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC) == 0x000008, "Wrong size on BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC");
static_assert(offsetof(BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC, NotifyName) == 0x000000, "Member 'BP_ActionStun_C_OnNotifyEnd_CFCF4E784389F348A3D5D6B73F7082BC::NotifyName' has a wrong offset!");

}

