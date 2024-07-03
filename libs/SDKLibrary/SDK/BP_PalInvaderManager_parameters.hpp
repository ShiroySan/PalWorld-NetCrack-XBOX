#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalInvaderManager

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalInvaderManager.BP_PalInvaderManager_C.ExecuteUbergraph_BP_PalInvaderManager
// 0x0060 (0x0060 - 0x0000)
struct BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIncidentNotifyListener*             K2Node_CustomEvent_Listener;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalIncidentState                             K2Node_CustomEvent_IncidentState;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIncidentNotifyParameter            K2Node_CustomEvent_parameter;                      // 0x0028(0x0028)(ConstParm, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalIncidentNotifyListener_C*        CallFunc_SpawnObject_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager) == 0x000008, "Wrong alignment on BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager");
static_assert(sizeof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager) == 0x000060, "Wrong size on BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, EntryPoint) == 0x000000, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, K2Node_CustomEvent_Listener) == 0x000018, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::K2Node_CustomEvent_Listener' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, K2Node_CustomEvent_IncidentState) == 0x000020, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::K2Node_CustomEvent_IncidentState' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, K2Node_CustomEvent_parameter) == 0x000028, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::K2Node_CustomEvent_parameter' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, K2Node_SwitchEnum_CmpSuccess) == 0x000050, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, CallFunc_IsValid_ReturnValue_1) == 0x000052, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager, CallFunc_SpawnObject_ReturnValue) == 0x000058, "Member 'BP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_PalInvaderManager.BP_PalInvaderManager_C.OnIncidentStateNotify
// 0x0038 (0x0038 - 0x0000)
struct BP_PalInvaderManager_C_OnIncidentStateNotify final
{
public:
	class UPalIncidentNotifyListener*             Listener;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalIncidentState                             IncidentState;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIncidentNotifyParameter            Parameter;                                         // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_PalInvaderManager_C_OnIncidentStateNotify) == 0x000008, "Wrong alignment on BP_PalInvaderManager_C_OnIncidentStateNotify");
static_assert(sizeof(BP_PalInvaderManager_C_OnIncidentStateNotify) == 0x000038, "Wrong size on BP_PalInvaderManager_C_OnIncidentStateNotify");
static_assert(offsetof(BP_PalInvaderManager_C_OnIncidentStateNotify, Listener) == 0x000000, "Member 'BP_PalInvaderManager_C_OnIncidentStateNotify::Listener' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_OnIncidentStateNotify, IncidentState) == 0x000008, "Member 'BP_PalInvaderManager_C_OnIncidentStateNotify::IncidentState' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_OnIncidentStateNotify, Parameter) == 0x000010, "Member 'BP_PalInvaderManager_C_OnIncidentStateNotify::Parameter' has a wrong offset!");

// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncident
// 0x0060 (0x0060 - 0x0000)
struct BP_PalInvaderManager_C_RequestIncident final
{
public:
	class FName                                   IncidentName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                OccuredBaseCamp;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*    Parameter;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentBase*                       NewIncident;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                K2Node_DynamicCast_AsPal_Invader_Incident_Base;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIncidentSystem*                     CallFunc_GetIncidentSystem_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentBase*                       CallFunc_RequestIncident_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIncidentSystem*                     CallFunc_GetIncidentSystem_ReturnValue_1;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalInvaderManager_C_RequestIncident) == 0x000008, "Wrong alignment on BP_PalInvaderManager_C_RequestIncident");
static_assert(sizeof(BP_PalInvaderManager_C_RequestIncident) == 0x000060, "Wrong size on BP_PalInvaderManager_C_RequestIncident");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, IncidentName) == 0x000000, "Member 'BP_PalInvaderManager_C_RequestIncident::IncidentName' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, OccuredBaseCamp) == 0x000008, "Member 'BP_PalInvaderManager_C_RequestIncident::OccuredBaseCamp' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, Parameter) == 0x000010, "Member 'BP_PalInvaderManager_C_RequestIncident::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, ReturnValue) == 0x000018, "Member 'BP_PalInvaderManager_C_RequestIncident::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, NewIncident) == 0x000020, "Member 'BP_PalInvaderManager_C_RequestIncident::NewIncident' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, K2Node_DynamicCast_AsPal_Invader_Incident_Base) == 0x000028, "Member 'BP_PalInvaderManager_C_RequestIncident::K2Node_DynamicCast_AsPal_Invader_Incident_Base' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PalInvaderManager_C_RequestIncident::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, CallFunc_GetIncidentSystem_ReturnValue) == 0x000038, "Member 'BP_PalInvaderManager_C_RequestIncident::CallFunc_GetIncidentSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, CallFunc_RequestIncident_ReturnValue) == 0x000040, "Member 'BP_PalInvaderManager_C_RequestIncident::CallFunc_RequestIncident_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_PalInvaderManager_C_RequestIncident::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, CallFunc_GetIncidentSystem_ReturnValue_1) == 0x000050, "Member 'BP_PalInvaderManager_C_RequestIncident::CallFunc_GetIncidentSystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncident, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_PalInvaderManager_C_RequestIncident::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentInvaderEnemy_BP
// 0x0020 (0x0020 - 0x0000)
struct BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP final
{
public:
	class UObject*                                OccuredBaseCamp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*    Parameter;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                CallFunc_RequestIncident_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP) == 0x000008, "Wrong alignment on BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP");
static_assert(sizeof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP) == 0x000020, "Wrong size on BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP, OccuredBaseCamp) == 0x000000, "Member 'BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP::OccuredBaseCamp' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP, Parameter) == 0x000008, "Member 'BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP, ReturnValue) == 0x000010, "Member 'BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP, CallFunc_RequestIncident_ReturnValue) == 0x000018, "Member 'BP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP::CallFunc_RequestIncident_ReturnValue' has a wrong offset!");

// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentVisitorNPC_BP
// 0x0020 (0x0020 - 0x0000)
struct BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP final
{
public:
	class UObject*                                OccuredBaseCamp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*    Parameter;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*                CallFunc_RequestIncident_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP) == 0x000008, "Wrong alignment on BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP");
static_assert(sizeof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP) == 0x000020, "Wrong size on BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP, OccuredBaseCamp) == 0x000000, "Member 'BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP::OccuredBaseCamp' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP, Parameter) == 0x000008, "Member 'BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP, ReturnValue) == 0x000010, "Member 'BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP, CallFunc_RequestIncident_ReturnValue) == 0x000018, "Member 'BP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP::CallFunc_RequestIncident_ReturnValue' has a wrong offset!");

}

