#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCInteractConditionFunctions

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.HasItem
// 0x0028 (0x0028 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_HasItem final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ItemId;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_HasItem) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_HasItem");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_HasItem) == 0x000028, "Wrong size on BP_NPCInteractConditionFunctions_C_HasItem");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, ItemId) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::ItemId' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, Num) == 0x000010, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::Num' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000018, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, CallFunc_CountItemNum_ReturnValue) == 0x000020, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_NPCInteractConditionFunctions_C_HasItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.HasItems
// 0x0050 (0x0050 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_HasItems final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ItemIds;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Num;                                               // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RetVal;                                            // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FF[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_HasItems) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_HasItems");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_HasItems) == 0x000050, "Wrong size on BP_NPCInteractConditionFunctions_C_HasItems");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, ItemIds) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::ItemIds' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, Num) == 0x000018, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::Num' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, RetVal) == 0x00001C, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::RetVal' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000028, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_CountItemNum_ReturnValue) == 0x000038, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_HasItems, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_NPCInteractConditionFunctions_C_HasItems::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.IsLive
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_IsLive final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UObject*                          CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4600[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLive_ReturnValue;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_IsLive) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_IsLive");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_IsLive) == 0x000030, "Wrong size on BP_NPCInteractConditionFunctions_C_IsLive");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, CallFunc_IsLive_ReturnValue) == 0x000028, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::CallFunc_IsLive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsLive, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_NPCInteractConditionFunctions_C_IsLive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.IsOtomoSpawned
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_IsOtomoSpawned final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_IsOtomoSpawned");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned) == 0x000030, "Wrong size on BP_NPCInteractConditionFunctions_C_IsOtomoSpawned");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, CallFunc_TryGetSpawnedOtomo_ReturnValue) == 0x000020, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::CallFunc_TryGetSpawnedOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_IsOtomoSpawned, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_NPCInteractConditionFunctions_C_IsOtomoSpawned::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.NoCombat
// 0x0068 (0x0068 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_NoCombat final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UObject*                          CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4601[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4602[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetAIActionComponent_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                            CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCombatBase*                 K2Node_DynamicCast_AsPal_AIAction_Combat_Base;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4603[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base;  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_NoCombat) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_NoCombat");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_NoCombat) == 0x000068, "Wrong size on BP_NPCInteractConditionFunctions_C_NoCombat");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_AsBP_NPCAIController) == 0x000028, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, CallFunc_GetAIActionComponent_ReturnValue) == 0x000038, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::CallFunc_GetAIActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, CallFunc_GetCurrentAction_BP_ReturnValue) == 0x000040, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::CallFunc_GetCurrentAction_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_AsPal_AIAction_Combat_Base) == 0x000048, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_AsPal_AIAction_Combat_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base) == 0x000058, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_NoCombat, K2Node_DynamicCast_bSuccess_3) == 0x000060, "Member 'BP_NPCInteractConditionFunctions_C_NoCombat::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.TestFunction
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCInteractConditionFunctions_C_TestFunction final
{
public:
	class UPalNPCInteractCondition*               Condition;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UObject*                          CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCInteractConditionFunctions_C_TestFunction) == 0x000008, "Wrong alignment on BP_NPCInteractConditionFunctions_C_TestFunction");
static_assert(sizeof(BP_NPCInteractConditionFunctions_C_TestFunction) == 0x000020, "Wrong size on BP_NPCInteractConditionFunctions_C_TestFunction");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_TestFunction, Condition) == 0x000000, "Member 'BP_NPCInteractConditionFunctions_C_TestFunction::Condition' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_TestFunction, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_NPCInteractConditionFunctions_C_TestFunction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCInteractConditionFunctions_C_TestFunction, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_NPCInteractConditionFunctions_C_TestFunction::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

}

