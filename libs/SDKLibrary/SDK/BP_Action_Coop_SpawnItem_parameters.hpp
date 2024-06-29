#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Coop_SpawnItem

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.EndProc
// 0x0001 (0x0001 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_EndProc final
{
public:
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_EndProc) == 0x000001, "Wrong alignment on BP_Action_Coop_SpawnItem_C_EndProc");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_EndProc) == 0x000001, "Wrong size on BP_Action_Coop_SpawnItem_C_EndProc");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_EndProc, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_EndProc::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.ExecuteUbergraph_BP_Action_Coop_SpawnItem
// 0x0168 (0x0168 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_9;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_8;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_7;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_6;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4122[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_8;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_9;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_10;           // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4123[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem) == 0x000008, "Wrong alignment on BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem) == 0x000168, "Wrong size on BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, EntryPoint) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_9) == 0x000004, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_9' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_8) == 0x00001C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_8' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_7) == 0x000034, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_7' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_6) == 0x00004C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_6' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_5) == 0x000064, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_5) == 0x000084, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_6) == 0x000094, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A8, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_4) == 0x0000B0, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_3) == 0x0000B8, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000C0, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_2) == 0x0000D0, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000D8, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName_1) == 0x0000E8, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000F0, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CustomEvent_NotifyName) == 0x000100, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, K2Node_CreateDelegate_OutputDelegate_10) == 0x000108, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, Temp_name_Variable_1) == 0x000118, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_GetActionCharacter_ReturnValue) == 0x000120, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_GetMainMesh_ReturnValue) == 0x000128, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000130, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_GetComponentByClass_ReturnValue) == 0x000138, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_GetAnimInstance_ReturnValue) == 0x000148, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_GetMainMesh_ReturnValue_1) == 0x000150, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1) == 0x000158, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem, CallFunc_IsValid_ReturnValue_1) == 0x000160, "Member 'BP_Action_Coop_SpawnItem_C_ExecuteUbergraph_BP_Action_Coop_SpawnItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnBlendOut_3059B08B4A825BCA681E639E08A41646
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnBlendOut_3059B08B4A825BCA681E639E08A41646::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnCompleted_3059B08B4A825BCA681E639E08A41646
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnCompleted_3059B08B4A825BCA681E639E08A41646::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnInterrupted_3059B08B4A825BCA681E639E08A41646
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnInterrupted_3059B08B4A825BCA681E639E08A41646::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnNotifyBegin_3059B08B4A825BCA681E639E08A41646
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnNotifyBegin_3059B08B4A825BCA681E639E08A41646::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnNotifyEnd_3059B08B4A825BCA681E639E08A41646
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnNotifyEnd_3059B08B4A825BCA681E639E08A41646::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000004, "Wrong alignment on BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56) == 0x000008, "Wrong size on BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56, NotifyName) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56::NotifyName' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.StopChargeMontage
// 0x0001 (0x0001 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_StopChargeMontage final
{
public:
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_StopChargeMontage) == 0x000001, "Wrong alignment on BP_Action_Coop_SpawnItem_C_StopChargeMontage");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_StopChargeMontage) == 0x000001, "Wrong size on BP_Action_Coop_SpawnItem_C_StopChargeMontage");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_StopChargeMontage, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_StopChargeMontage::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");

// Function BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C.StopFunMontage
// 0x0001 (0x0001 - 0x0000)
struct BP_Action_Coop_SpawnItem_C_StopFunMontage final
{
public:
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_SpawnItem_C_StopFunMontage) == 0x000001, "Wrong alignment on BP_Action_Coop_SpawnItem_C_StopFunMontage");
static_assert(sizeof(BP_Action_Coop_SpawnItem_C_StopFunMontage) == 0x000001, "Wrong size on BP_Action_Coop_SpawnItem_C_StopFunMontage");
static_assert(offsetof(BP_Action_Coop_SpawnItem_C_StopFunMontage, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000000, "Member 'BP_Action_Coop_SpawnItem_C_StopFunMontage::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");

}

