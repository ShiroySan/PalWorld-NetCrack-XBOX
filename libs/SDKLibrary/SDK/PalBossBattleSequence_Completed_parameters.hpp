#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PalBossBattleSequence_Completed

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C.ExecuteUbergraph_PalBossBattleSequence_Completed
// 0x0018 (0x0018 - 0x0000)
struct PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_446E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed) == 0x000008, "Wrong alignment on PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed");
static_assert(sizeof(PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed) == 0x000018, "Wrong size on PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed");
static_assert(offsetof(PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed, EntryPoint) == 0x000000, "Member 'PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed::EntryPoint' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Completed_C_ExecuteUbergraph_PalBossBattleSequence_Completed::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Completed.PalBossBattleSequence_Completed_C.WarpTowerTop
// 0x0058 (0x0058 - 0x0000)
struct PalBossBattleSequence_Completed_C_WarpTowerTop final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_446F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4470[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossType                                  CallFunc_GetBossType_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4471[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            CallFunc_GetAliveOrDyingPlayers_ReturnValue;       // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4472[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4473[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Completed_C_WarpTowerTop) == 0x000008, "Wrong alignment on PalBossBattleSequence_Completed_C_WarpTowerTop");
static_assert(sizeof(PalBossBattleSequence_Completed_C_WarpTowerTop) == 0x000058, "Wrong size on PalBossBattleSequence_Completed_C_WarpTowerTop");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, Temp_int_Array_Index_Variable) == 0x000000, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_GetBossBattleManager_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_GetOuterSequencer_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_GetBossType_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_GetBossType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_GetAliveOrDyingPlayers_ReturnValue) == 0x000028, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_GetAliveOrDyingPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_Array_Get_Item) == 0x000040, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Completed_C_WarpTowerTop, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'PalBossBattleSequence_Completed_C_WarpTowerTop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

