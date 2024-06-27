#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalItemSlotBase

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.BindEvent
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalItemSlotBase_C_BindEvent final
{
public:
	TDelegate<void(float OldDurability, float NewDurability)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B72[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDynamicItemDataBase*                CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B73[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B74[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDurability_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 LiftItemNum)>            K2Node_CreateDelegate_OutputDelegate_3;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate_4;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_BindEvent) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_BindEvent");
static_assert(sizeof(WBP_PalItemSlotBase_C_BindEvent) == 0x000080, "Wrong size on WBP_PalItemSlotBase_C_BindEvent");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalItemSlotBase_C_BindEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, CallFunc_TryGetDynamicItemData_OutDynamicItemData) == 0x000018, "Member 'WBP_PalItemSlotBase_C_BindEvent::CallFunc_TryGetDynamicItemData_OutDynamicItemData' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, CallFunc_TryGetDynamicItemData_ReturnValue) == 0x000020, "Member 'WBP_PalItemSlotBase_C_BindEvent::CallFunc_TryGetDynamicItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000028, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, CallFunc_GetDurability_ReturnValue) == 0x00004C, "Member 'WBP_PalItemSlotBase_C_BindEvent::CallFunc_GetDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000050, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000060, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000070, "Member 'WBP_PalItemSlotBase_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.ExecuteUbergraph_WBP_PalItemSlotBase
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B75[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemIconBase_C*                 CallFunc_RegisterItemIconWidget_iconWidget;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase");
static_assert(sizeof(WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase) == 0x000010, "Wrong size on WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase");
static_assert(offsetof(WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase, EntryPoint) == 0x000000, "Member 'WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase, CallFunc_RegisterItemIconWidget_iconWidget) == 0x000008, "Member 'WBP_PalItemSlotBase_C_ExecuteUbergraph_WBP_PalItemSlotBase::CallFunc_RegisterItemIconWidget_iconWidget' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.On Update Slot Internal
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalItemSlotBase_C_On_Update_Slot_Internal final
{
public:
	class UPalItemSlot*                           Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B76[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDynamicItemDataBase*                CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B77[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B78[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDurability_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_On_Update_Slot_Internal");
static_assert(sizeof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal) == 0x000040, "Wrong size on WBP_PalItemSlotBase_C_On_Update_Slot_Internal");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, Param_Slot) == 0x000000, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_IsEmpty_ReturnValue) == 0x000008, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_TryGetDynamicItemData_OutDynamicItemData) == 0x000010, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_TryGetDynamicItemData_OutDynamicItemData' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_TryGetDynamicItemData_ReturnValue) == 0x000018, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_TryGetDynamicItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000020, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_GetDurability_ReturnValue) == 0x000034, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_GetDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_On_Update_Slot_Internal, CallFunc_IsValid_ReturnValue_2) == 0x000039, "Member 'WBP_PalItemSlotBase_C_On_Update_Slot_Internal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature final
{
public:
	int32                                         LiftedItemNum;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature) == 0x000004, "Wrong alignment on WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature) == 0x000004, "Wrong size on WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature, LiftedItemNum) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnLiftedSlot__DelegateSignature::LiftedItemNum' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnLiftedSlot_Internal
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalItemSlotBase_C_OnLiftedSlot_Internal final
{
public:
	int32                                         LiftItemNum;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnLiftedSlot_Internal) == 0x000004, "Wrong alignment on WBP_PalItemSlotBase_C_OnLiftedSlot_Internal");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnLiftedSlot_Internal) == 0x000004, "Wrong size on WBP_PalItemSlotBase_C_OnLiftedSlot_Internal");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnLiftedSlot_Internal, LiftItemNum) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnLiftedSlot_Internal::LiftItemNum' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnNotifyDurability__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature final
{
public:
	double                                        MaxDurability;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowDurability;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature) == 0x000010, "Wrong size on WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature, MaxDurability) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature::MaxDurability' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature, NowDurability) == 0x000008, "Member 'WBP_PalItemSlotBase_C_OnNotifyDurability__DelegateSignature::NowDurability' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnTimer_CheckDurability
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalItemSlotBase_C_OnTimer_CheckDurability final
{
public:
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B79[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDynamicItemDataBase*                CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDurability_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxDurability_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CallDelegate_NowDurability_ImplicitCast;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_MaxDurability_ImplicitCast;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_OnTimer_CheckDurability");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability) == 0x000048, "Wrong size on WBP_PalItemSlotBase_C_OnTimer_CheckDurability");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_IsEmpty_ReturnValue) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_TryGetDynamicItemData_OutDynamicItemData) == 0x000008, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_TryGetDynamicItemData_OutDynamicItemData' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_TryGetDynamicItemData_ReturnValue) == 0x000010, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_TryGetDynamicItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000018, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_GetDurability_ReturnValue) == 0x00002C, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_GetDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, CallFunc_GetMaxDurability_ReturnValue) == 0x000030, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::CallFunc_GetMaxDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, K2Node_CallDelegate_NowDurability_ImplicitCast) == 0x000038, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::K2Node_CallDelegate_NowDurability_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnTimer_CheckDurability, K2Node_CallDelegate_MaxDurability_ImplicitCast) == 0x000040, "Member 'WBP_PalItemSlotBase_C_OnTimer_CheckDurability::K2Node_CallDelegate_MaxDurability_ImplicitCast' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateDurability_Internal
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalItemSlotBase_C_OnUpdateDurability_Internal final
{
public:
	float                                         OldDurability;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewDurability;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDynamicItemDataBase*                CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7D[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxDurability_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_NowDurability_ImplicitCast;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_MaxDurability_ImplicitCast;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_OnUpdateDurability_Internal");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal) == 0x000040, "Wrong size on WBP_PalItemSlotBase_C_OnUpdateDurability_Internal");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, OldDurability) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::OldDurability' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, NewDurability) == 0x000004, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::NewDurability' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, CallFunc_TryGetDynamicItemData_OutDynamicItemData) == 0x000008, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::CallFunc_TryGetDynamicItemData_OutDynamicItemData' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, CallFunc_TryGetDynamicItemData_ReturnValue) == 0x000010, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::CallFunc_TryGetDynamicItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000018, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, CallFunc_GetMaxDurability_ReturnValue) == 0x00002C, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::CallFunc_GetMaxDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, K2Node_CallDelegate_NowDurability_ImplicitCast) == 0x000030, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::K2Node_CallDelegate_NowDurability_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateDurability_Internal, K2Node_CallDelegate_MaxDurability_ImplicitCast) == 0x000038, "Member 'WBP_PalItemSlotBase_C_OnUpdateDurability_Internal::K2Node_CallDelegate_MaxDurability_ImplicitCast' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature final
{
public:
	class UPalItemSlot*                           Param_TargetSlot;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature, Param_TargetSlot) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnUpdateSlot__DelegateSignature::Param_TargetSlot' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.OnUpdateSlotCorruption_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal final
{
public:
	class UPalItemSlot*                           Param_Slot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal");
static_assert(sizeof(WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal) == 0x000010, "Wrong size on WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal, Param_Slot) == 0x000000, "Member 'WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal::Param_Slot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal, CallFunc_IsEmpty_ReturnValue) == 0x000008, "Member 'WBP_PalItemSlotBase_C_OnUpdateSlotCorruption_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.RegisterItemIconWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemSlotBase_C_RegisterItemIconWidget final
{
public:
	class UWBP_PalItemIconBase_C*                 IconWidget;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_RegisterItemIconWidget) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_RegisterItemIconWidget");
static_assert(sizeof(WBP_PalItemSlotBase_C_RegisterItemIconWidget) == 0x000008, "Wrong size on WBP_PalItemSlotBase_C_RegisterItemIconWidget");
static_assert(offsetof(WBP_PalItemSlotBase_C_RegisterItemIconWidget, IconWidget) == 0x000000, "Member 'WBP_PalItemSlotBase_C_RegisterItemIconWidget::IconWidget' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalItemSlotBase_C_Setup final
{
public:
	class UPalItemSlot*                           Param_TargetSlot;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x000C(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_Setup) == 0x000008, "Wrong alignment on WBP_PalItemSlotBase_C_Setup");
static_assert(sizeof(WBP_PalItemSlotBase_C_Setup) == 0x000038, "Wrong size on WBP_PalItemSlotBase_C_Setup");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, Param_TargetSlot) == 0x000000, "Member 'WBP_PalItemSlotBase_C_Setup::Param_TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalItemSlotBase_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, CallFunc_GetItemId_ReturnValue) == 0x00000C, "Member 'WBP_PalItemSlotBase_C_Setup::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000034, "Member 'WBP_PalItemSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000035, "Member 'WBP_PalItemSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Setup, CallFunc_IsEmpty_ReturnValue) == 0x000036, "Member 'WBP_PalItemSlotBase_C_Setup::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_PalItemSlotBase.WBP_PalItemSlotBase_C.Unbind Event
// 0x0054 (0x0054 - 0x0000)
struct WBP_PalItemSlotBase_C_Unbind_Event final
{
public:
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 LiftItemNum)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float OldDurability, float NewDurability)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B80[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemSlotBase_C_Unbind_Event) == 0x000004, "Wrong alignment on WBP_PalItemSlotBase_C_Unbind_Event");
static_assert(sizeof(WBP_PalItemSlotBase_C_Unbind_Event) == 0x000054, "Wrong size on WBP_PalItemSlotBase_C_Unbind_Event");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemSlotBase_C_Unbind_Event, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'WBP_PalItemSlotBase_C_Unbind_Event::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

}

