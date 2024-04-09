#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CR_PlayerClavicleAdjust

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_structs.hpp"
#include "ControlRig_classes.hpp"
#include "RigVM_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CR_PlayerClavicleAdjust.CR_PlayerClavicleAdjust_C
// 0x0030 (0x0590 - 0x0560)
class UCR_PlayerClavicleAdjust_C final : public UControlRig
{
public:
	float                                         ClavicleAdjustFloat;                               // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3998[0xC];                                     // 0x0564(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  RigUnit_GetTransform_1_Transform_Rotation;         // 0x0570(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CR_PlayerClavicleAdjust_C">();
	}
	static class UCR_PlayerClavicleAdjust_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCR_PlayerClavicleAdjust_C>();
	}
};
static_assert(alignof(UCR_PlayerClavicleAdjust_C) == 0x000010, "Wrong alignment on UCR_PlayerClavicleAdjust_C");
static_assert(sizeof(UCR_PlayerClavicleAdjust_C) == 0x000590, "Wrong size on UCR_PlayerClavicleAdjust_C");
static_assert(offsetof(UCR_PlayerClavicleAdjust_C, ClavicleAdjustFloat) == 0x000560, "Member 'UCR_PlayerClavicleAdjust_C::ClavicleAdjustFloat' has a wrong offset!");
static_assert(offsetof(UCR_PlayerClavicleAdjust_C, RigUnit_GetTransform_1_Transform_Rotation) == 0x000570, "Member 'UCR_PlayerClavicleAdjust_C::RigUnit_GetTransform_1_Transform_Rotation' has a wrong offset!");

// RigVMMemoryStorageGeneratorClass CR_PlayerClavicleAdjust.RigVMMemory_Literal
// 0x0138 (0x0160 - 0x0028)
class URigVMMemory_Literal final : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                         RigVMModel___CollapseNode_RigUnit_GetTransform_1_Item__Const; // 0x0028(0x000C)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EBoneGetterSetterMode                         RigVMModel___CollapseNode_RigUnit_GetTransform_1_Space__Const; // 0x0034(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         RigVMModel___CollapseNode_RigUnit_GetTransform_1_bInitial__Const : 1; // 0x0035(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash))
	uint8                                         Pad_3999[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigElementKey                         RigVMModel___CollapseNode_RigUnit_SetTransform_Item__Const; // 0x0038(0x000C)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399A[0xC];                                     // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_SetTransform_Value__Const; // 0x0050(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__Const; // 0x00B0(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_1_B__Const; // 0x00C8(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_RigUnit_SetTransform_Weight__Const; // 0x00CC(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         RigVMModel___CollapseNode_RigUnit_SetTransform_bPropagateToChildren__Const : 1; // 0x00D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash))
	uint8                                         Pad_399B[0xF];                                     // 0x00D1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__Const; // 0x00E0(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                         RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Item__Const; // 0x0140(0x000C)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                         RigVMModel___CollapseNode_1_RigUnit_SetTransform_Item__Const; // 0x014C(0x000C)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatMul_B__Const; // 0x0158(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemory_Literal">();
	}
	static class URigVMMemory_Literal* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemory_Literal>();
	}
};
static_assert(alignof(URigVMMemory_Literal) == 0x000010, "Wrong alignment on URigVMMemory_Literal");
static_assert(sizeof(URigVMMemory_Literal) == 0x000160, "Wrong size on URigVMMemory_Literal");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_GetTransform_1_Item__Const) == 0x000028, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_GetTransform_1_Item__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_GetTransform_1_Space__Const) == 0x000034, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_GetTransform_1_Space__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_SetTransform_Item__Const) == 0x000038, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_SetTransform_Item__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_SetTransform_Value__Const) == 0x000050, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_SetTransform_Value__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__Const) == 0x0000B0, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_MathFloatAdd_1_1_B__Const) == 0x0000C8, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_MathFloatAdd_1_1_B__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_SetTransform_Weight__Const) == 0x0000CC, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_SetTransform_Weight__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__Const) == 0x0000E0, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Item__Const) == 0x000140, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Item__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_1_RigUnit_SetTransform_Item__Const) == 0x00014C, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_1_RigUnit_SetTransform_Item__Const' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Literal, RigVMModel___CollapseNode_1_MathFloatMul_B__Const) == 0x000158, "Member 'URigVMMemory_Literal::RigVMModel___CollapseNode_1_MathFloatMul_B__Const' has a wrong offset!");

// RigVMMemoryStorageGeneratorClass CR_PlayerClavicleAdjust.RigVMMemory_Work
// 0x05C8 (0x05F0 - 0x0028)
class URigVMMemory_Work final : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext              ExecuteContext_;                                   // 0x0028(0x0038)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_GetTransform_1_Transform; // 0x0060(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_RigUnit_GetTransform_1_CachedIndex; // 0x00C0(0x0010)(Edit, EditConst, NonTransactional)
	struct FQuat                                  RigVMModel___CollapseNode_MathQuaternionFromRotator_Result; // 0x00D0(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_Result;   // 0x00F0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399C[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RigVMModel___CollapseNode_MathQuaternionToRotator_Result; // 0x00F8(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_GetTransform_Transform; // 0x0110(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_RigUnit_GetTransform_CachedIndex; // 0x0170(0x0010)(Edit, EditConst, NonTransactional)
	struct FQuat                                  RigVMModel___CollapseNode_MathQuaternionToRotator_Value; // 0x0180(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_A;        // 0x01A0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_B;        // 0x01A4(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_1_Result; // 0x01A8(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_1_1_A;      // 0x01AC(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_Result;     // 0x01B0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_MathFloatAdd_A;          // 0x01B4(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__IO; // 0x01B8(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_SetTransform_Value__IO; // 0x01D0(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_RigUnit_SetTransform_CachedIndex; // 0x0230(0x0010)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_GetTransform_2_Transform; // 0x0240(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_RigUnit_GetTransform_2_CachedIndex; // 0x02A0(0x0010)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__IO; // 0x02B0(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_RigUnit_SetTransform_1_CachedIndex; // 0x0310(0x0010)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Transform; // 0x0320(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_CachedIndex; // 0x0380(0x0010)(Edit, EditConst, NonTransactional)
	struct FQuat                                  RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Result; // 0x0390(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_1_Result; // 0x03B0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399D[0x4];                                     // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RigVMModel___CollapseNode_1_MathQuaternionToRotator_Result; // 0x03B8(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                             RigVMModel___CollapseNode_1_RigUnit_GetTransform_Transform; // 0x03D0(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_1_RigUnit_GetTransform_CachedIndex; // 0x0430(0x0010)(Edit, EditConst, NonTransactional)
	struct FQuat                                  RigVMModel___CollapseNode_1_MathQuaternionToRotator_Value; // 0x0440(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_1_A;      // 0x0460(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatMul_Result;   // 0x0464(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatMul_A;        // 0x0468(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_1_1_Result; // 0x046C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_1_1_A;    // 0x0470(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_Result;   // 0x0474(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___CollapseNode_1_MathFloatAdd_A;        // 0x0478(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399E[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Rotator__IO; // 0x0480(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	uint8                                         Pad_399F[0x8];                                     // 0x0498(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RigVMModel___CollapseNode_1_RigUnit_SetTransform_Value__IO; // 0x04A0(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_1_RigUnit_SetTransform_CachedIndex; // 0x0500(0x0010)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_Transform; // 0x0510(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_CachedIndex; // 0x0570(0x0010)(Edit, EditConst, NonTransactional)
	struct FTransform                             RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_Value__IO; // 0x0580(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_CachedIndex; // 0x05E0(0x0010)(Edit, EditConst, NonTransactional)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemory_Work">();
	}
	static class URigVMMemory_Work* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemory_Work>();
	}
};
static_assert(alignof(URigVMMemory_Work) == 0x000010, "Wrong alignment on URigVMMemory_Work");
static_assert(sizeof(URigVMMemory_Work) == 0x0005F0, "Wrong size on URigVMMemory_Work");
static_assert(offsetof(URigVMMemory_Work, ExecuteContext_) == 0x000028, "Member 'URigVMMemory_Work::ExecuteContext_' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_1_Transform) == 0x000060, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_1_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_1_CachedIndex) == 0x0000C0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_1_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathQuaternionFromRotator_Result) == 0x0000D0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathQuaternionFromRotator_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_1_Result) == 0x0000F0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_1_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathQuaternionToRotator_Result) == 0x0000F8, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathQuaternionToRotator_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_Transform) == 0x000110, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_CachedIndex) == 0x000170, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathQuaternionToRotator_Value) == 0x000180, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathQuaternionToRotator_Value' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_1_A) == 0x0001A0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_1_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_1_B) == 0x0001A4, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_1_B' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_1_1_Result) == 0x0001A8, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_1_1_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_1_1_A) == 0x0001AC, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_1_1_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_Result) == 0x0001B0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathFloatAdd_A) == 0x0001B4, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathFloatAdd_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__IO) == 0x0001B8, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_SetTransform_Value__IO) == 0x0001D0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_SetTransform_Value__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_SetTransform_CachedIndex) == 0x000230, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_SetTransform_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_2_Transform) == 0x000240, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_2_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_GetTransform_2_CachedIndex) == 0x0002A0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_GetTransform_2_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__IO) == 0x0002B0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_RigUnit_SetTransform_1_CachedIndex) == 0x000310, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_RigUnit_SetTransform_1_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Transform) == 0x000320, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_CachedIndex) == 0x000380, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Result) == 0x000390, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_1_Result) == 0x0003B0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_1_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathQuaternionToRotator_Result) == 0x0003B8, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathQuaternionToRotator_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_Transform) == 0x0003D0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_CachedIndex) == 0x000430, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathQuaternionToRotator_Value) == 0x000440, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathQuaternionToRotator_Value' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_1_A) == 0x000460, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_1_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatMul_Result) == 0x000464, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatMul_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatMul_A) == 0x000468, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatMul_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_1_1_Result) == 0x00046C, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_1_1_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_1_1_A) == 0x000470, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_1_1_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_Result) == 0x000474, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_Result' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathFloatAdd_A) == 0x000478, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathFloatAdd_A' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Rotator__IO) == 0x000480, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Rotator__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_SetTransform_Value__IO) == 0x0004A0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_SetTransform_Value__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_SetTransform_CachedIndex) == 0x000500, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_SetTransform_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_Transform) == 0x000510, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_Transform' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_CachedIndex) == 0x000570, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_CachedIndex' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_Value__IO) == 0x000580, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_Value__IO' has a wrong offset!");
static_assert(offsetof(URigVMMemory_Work, RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_CachedIndex) == 0x0005E0, "Member 'URigVMMemory_Work::RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_CachedIndex' has a wrong offset!");

}

