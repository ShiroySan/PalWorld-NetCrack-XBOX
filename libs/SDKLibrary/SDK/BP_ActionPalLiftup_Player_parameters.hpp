#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPalLiftup_Player

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.ExecuteUbergraph_BP_ActionPalLiftup_Player
// 0x00B8 (0x00B8 - 0x0000)
struct BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player final
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
	uint8                                         Pad_3B86[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindLiftupMontage_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player) == 0x0000B8, "Wrong size on BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, EntryPoint) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, Temp_name_Variable) == 0x00007C, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_FindLiftupMontage_ReturnValue) == 0x000098, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_FindLiftupMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000A8, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_ActionPalLiftup_Player_C_ExecuteUbergraph_BP_ActionPalLiftup_Player::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.FindLiftupMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionPalLiftup_Player_C_FindLiftupMontage final
{
public:
	class UAnimMontage*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B87[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_FindLiftupMontage) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_FindLiftupMontage");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_FindLiftupMontage) == 0x000030, "Wrong size on BP_ActionPalLiftup_Player_C_FindLiftupMontage");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, ReturnValue) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, Temp_byte_Variable) == 0x000008, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_FindLiftupMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_ActionPalLiftup_Player_C_FindLiftupMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.MovementSetFlag
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionPalLiftup_Player_C_MovementSetFlag final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B88[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FlagName;                                          // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B89[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_MovementSetFlag) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_MovementSetFlag");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_MovementSetFlag) == 0x000030, "Wrong size on BP_ActionPalLiftup_Player_C_MovementSetFlag");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, Disable) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, FlagName) == 0x000004, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::FlagName' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, Movement) == 0x000010, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::Movement' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_MovementSetFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ActionPalLiftup_Player_C_MovementSetFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.OnBlendOut_8B03B5994FC01C08681CF1BC191894CA
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_OnBlendOut_8B03B5994FC01C08681CF1BC191894CA::NotifyName' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.OnCompleted_8B03B5994FC01C08681CF1BC191894CA
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_OnCompleted_8B03B5994FC01C08681CF1BC191894CA::NotifyName' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.OnInterrupted_8B03B5994FC01C08681CF1BC191894CA
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_OnInterrupted_8B03B5994FC01C08681CF1BC191894CA::NotifyName' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA::NotifyName' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA::NotifyName' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.ProcessNotify
// 0x000C (0x000C - 0x0000)
struct BP_ActionPalLiftup_Player_C_ProcessNotify final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_ProcessNotify) == 0x000004, "Wrong alignment on BP_ActionPalLiftup_Player_C_ProcessNotify");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_ProcessNotify) == 0x00000C, "Wrong size on BP_ActionPalLiftup_Player_C_ProcessNotify");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ProcessNotify, NotifyName) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_ProcessNotify::NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ProcessNotify, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000008, "Member 'BP_ActionPalLiftup_Player_C_ProcessNotify::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ProcessNotify, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000009, "Member 'BP_ActionPalLiftup_Player_C_ProcessNotify::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_ProcessNotify, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x00000A, "Member 'BP_ActionPalLiftup_Player_C_ProcessNotify::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.SetActionTargetAIToLiftup
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup final
{
public:
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalMonsterControllerBaseCampInterface> K2Node_DynamicCast_AsPal_Monster_Controller_Base_Camp_Interface; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup) == 0x000028, "Wrong size on BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup, CallFunc_GetActionTarget_ReturnValue) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup, K2Node_DynamicCast_AsPal_Monster_Controller_Base_Camp_Interface) == 0x000010, "Member 'BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup::K2Node_DynamicCast_AsPal_Monster_Controller_Base_Camp_Interface' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ActionPalLiftup_Player_C_SetActionTargetAIToLiftup::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.StopAnimation
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPalLiftup_Player_C_StopAnimation final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_StopAnimation) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_StopAnimation");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_StopAnimation) == 0x000008, "Wrong size on BP_ActionPalLiftup_Player_C_StopAnimation");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_StopAnimation, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_StopAnimation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");

// Function BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C.WeaponSetFlag
// 0x0050 (0x0050 - 0x0000)
struct BP_ActionPalLiftup_Player_C_WeaponSetFlag final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   ShooterComp;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8D[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPalLiftup_Player_C_WeaponSetFlag) == 0x000008, "Wrong alignment on BP_ActionPalLiftup_Player_C_WeaponSetFlag");
static_assert(sizeof(BP_ActionPalLiftup_Player_C_WeaponSetFlag) == 0x000050, "Wrong size on BP_ActionPalLiftup_Player_C_WeaponSetFlag");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, Disable) == 0x000000, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::Disable' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, ShooterComp) == 0x000008, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::ShooterComp' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, FlagName) == 0x000010, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::FlagName' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000030, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000040, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPalLiftup_Player_C_WeaponSetFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_ActionPalLiftup_Player_C_WeaponSetFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}

