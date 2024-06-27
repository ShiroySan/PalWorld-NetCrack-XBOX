#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MultiTalk_OrderByName

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.ExecuteUbergraph_BP_MultiTalk_OrderByName
// 0x0010 (0x0010 - 0x0000)
struct BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTalkCount_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxTalkCount_MaxTalkCount;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName) == 0x000004, "Wrong alignment on BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName");
static_assert(sizeof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName) == 0x000010, "Wrong size on BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName, EntryPoint) == 0x000000, "Member 'BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName, CallFunc_GetCurrentTalkCount_ReturnValue) == 0x000004, "Member 'BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName::CallFunc_GetCurrentTalkCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName, CallFunc_GetMaxTalkCount_MaxTalkCount) == 0x000008, "Member 'BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName::CallFunc_GetMaxTalkCount_MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetStartTalkSequence
// 0x0048 (0x0048 - 0x0000)
struct BP_MultiTalk_OrderByName_C_GetStartTalkSequence final
{
public:
	class FString                                 Sequence;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int64                                         Count;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentTalkCount_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxTalkCount_MaxTalkCount;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E49[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence) == 0x000008, "Wrong alignment on BP_MultiTalk_OrderByName_C_GetStartTalkSequence");
static_assert(sizeof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence) == 0x000048, "Wrong size on BP_MultiTalk_OrderByName_C_GetStartTalkSequence");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, Sequence) == 0x000000, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::Sequence' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, Count) == 0x000010, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::Count' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_GetCurrentTalkCount_ReturnValue) == 0x000018, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_GetCurrentTalkCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_GetMaxTalkCount_MaxTalkCount) == 0x00001C, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_GetMaxTalkCount_MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_Clamp_ReturnValue) == 0x000020, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetStartTalkSequence, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BP_MultiTalk_OrderByName_C_GetStartTalkSequence::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetTalkData
// 0x0018 (0x0018 - 0x0000)
struct BP_MultiTalk_OrderByName_C_GetTalkData final
{
public:
	class FName                                   InTalkID;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetTalkData_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_OrderByName_C_GetTalkData) == 0x000008, "Wrong alignment on BP_MultiTalk_OrderByName_C_GetTalkData");
static_assert(sizeof(BP_MultiTalk_OrderByName_C_GetTalkData) == 0x000018, "Wrong size on BP_MultiTalk_OrderByName_C_GetTalkData");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetTalkData, InTalkID) == 0x000000, "Member 'BP_MultiTalk_OrderByName_C_GetTalkData::InTalkID' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetTalkData, ReturnValue) == 0x000008, "Member 'BP_MultiTalk_OrderByName_C_GetTalkData::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetTalkData, CallFunc_GetTalkData_ReturnValue) == 0x000010, "Member 'BP_MultiTalk_OrderByName_C_GetTalkData::CallFunc_GetTalkData_ReturnValue' has a wrong offset!");

// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetMaxTalkCount
// 0x0060 (0x0060 - 0x0000)
struct BP_MultiTalk_OrderByName_C_GetMaxTalkCount final
{
public:
	int32                                         MaxTalkCount;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewLocalVar;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0028(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesWildcard_ReturnValue;              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount) == 0x000008, "Wrong alignment on BP_MultiTalk_OrderByName_C_GetMaxTalkCount");
static_assert(sizeof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount) == 0x000060, "Wrong size on BP_MultiTalk_OrderByName_C_GetMaxTalkCount");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, MaxTalkCount) == 0x000000, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::MaxTalkCount' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, NewLocalVar) == 0x000004, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, Temp_int_Variable) == 0x00000C, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000028, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Conv_NameToString_ReturnValue) == 0x000048, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MultiTalk_OrderByName_C_GetMaxTalkCount, CallFunc_MatchesWildcard_ReturnValue) == 0x000059, "Member 'BP_MultiTalk_OrderByName_C_GetMaxTalkCount::CallFunc_MatchesWildcard_ReturnValue' has a wrong offset!");

}

