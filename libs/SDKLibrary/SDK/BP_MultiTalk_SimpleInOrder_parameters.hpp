#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MultiTalk_SimpleInOrder

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.ExecuteUbergraph_BP_MultiTalk_SimpleInOrder
// 0x0010 (0x0010 - 0x0000)
struct BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTalkCount_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxTalkCount_MaxTalkCount;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder) == 0x000004, "Wrong alignment on BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder");
static_assert(sizeof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder) == 0x000010, "Wrong size on BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder, EntryPoint) == 0x000000, "Member 'BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder, CallFunc_GetCurrentTalkCount_ReturnValue) == 0x000004, "Member 'BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder::CallFunc_GetCurrentTalkCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder, CallFunc_GetMaxTalkCount_MaxTalkCount) == 0x000008, "Member 'BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder::CallFunc_GetMaxTalkCount_MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.GetTalkData
// 0x0048 (0x0048 - 0x0000)
struct BP_MultiTalk_SimpleInOrder_C_GetTalkData final
{
public:
	class FName                                   InTalkID;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentIndex;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4823[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             TempDT;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTalkCount_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4824[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetTalkData_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxTalkCount_MaxTalkCount;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4825[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4826[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_SimpleInOrder_C_GetTalkData) == 0x000008, "Wrong alignment on BP_MultiTalk_SimpleInOrder_C_GetTalkData");
static_assert(sizeof(BP_MultiTalk_SimpleInOrder_C_GetTalkData) == 0x000048, "Wrong size on BP_MultiTalk_SimpleInOrder_C_GetTalkData");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, InTalkID) == 0x000000, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::InTalkID' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, ReturnValue) == 0x000008, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CurrentIndex) == 0x000010, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CurrentIndex' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, TempDT) == 0x000018, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::TempDT' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_GetCurrentTalkCount_ReturnValue) == 0x000020, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_GetCurrentTalkCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_GetTalkData_ReturnValue) == 0x000028, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_GetTalkData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_GetMaxTalkCount_MaxTalkCount) == 0x000030, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_GetMaxTalkCount_MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_Clamp_ReturnValue) == 0x000038, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetTalkData, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_MultiTalk_SimpleInOrder_C_GetTalkData::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.GetMaxTalkCount
// 0x000C (0x000C - 0x0000)
struct BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount final
{
public:
	int32                                         MaxTalkCount;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount) == 0x000004, "Wrong alignment on BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount");
static_assert(sizeof(BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount) == 0x00000C, "Wrong size on BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount, MaxTalkCount) == 0x000000, "Member 'BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount::MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}

