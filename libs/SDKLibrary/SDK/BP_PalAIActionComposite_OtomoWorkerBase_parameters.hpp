#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalAIActionComposite_OtomoWorkerBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalAIActionComposite_OtomoWorkerBase.BP_PalAIActionComposite_OtomoWorkerBase_C.OnTickInWaitAction
// 0x0080 (0x0080 - 0x0000)
struct BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3917[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorkBase*                           TargetWork;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_TryGetWorkLocation_OutLocation;        // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_TryGetWorkLocation_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3918[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorkProgressManager*                CallFunc_GetWorkProgressManager_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameter_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalWorkAssign*                         CallFunc_GetWorkAssign_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionLocationByType_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWorkAssignHandleId                 CallFunc_GetId_ReturnValue;                        // 0x0058(0x0018)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UPalWorkBase*                           CallFunc_GetWorkByAssignId_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryFindNextWork_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTargetWorkable_ReturnValue;             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction) == 0x000008, "Wrong alignment on BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction");
static_assert(sizeof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction) == 0x000080, "Wrong size on BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, DeltaTime) == 0x000000, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, TargetWork) == 0x000008, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::TargetWork' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_BP_TryGetWorkLocation_OutLocation) == 0x000010, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_BP_TryGetWorkLocation_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_BP_TryGetWorkLocation_ReturnValue) == 0x000028, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_BP_TryGetWorkLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetWorkProgressManager_ReturnValue) == 0x000030, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetWorkProgressManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetCharacterParameter_ReturnValue) == 0x000038, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetActionComponent_ReturnValue) == 0x000040, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetWorkAssign_ReturnValue) == 0x000048, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetWorkAssign_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_PlayActionLocationByType_ReturnValue) == 0x000050, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_PlayActionLocationByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetId_ReturnValue) == 0x000058, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_GetWorkByAssignId_ReturnValue) == 0x000070, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_GetWorkByAssignId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_TryFindNextWork_ReturnValue) == 0x000078, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_TryFindNextWork_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction, CallFunc_IsTargetWorkable_ReturnValue) == 0x000079, "Member 'BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction::CallFunc_IsTargetWorkable_ReturnValue' has a wrong offset!");

}

