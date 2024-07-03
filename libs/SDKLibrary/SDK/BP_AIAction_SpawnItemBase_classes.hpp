#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_SpawnItemBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_SpawnItemBase.BP_AIAction_SpawnItemBase_C
// 0x0060 (0x0190 - 0x0130)
class UBP_AIAction_SpawnItemBase_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SpawnCount;                                        // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          ActionCharacter;                                   // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 SpawnItemInfo;                                     // 0x0148(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   SpawnSocketName;                                   // 0x0154(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpawnLocationOffset;                               // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SpawnItemRotator;                                  // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AbortProc();
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	bool CanSpawnItem();
	void ExecuteUbergraph_BP_AIAction_SpawnItemBase(int32 EntryPoint);
	void GetStatusInstance(class UPalStatusCollectItem** Status_Collect_Item);
	void IsActionRunning(bool* IsRunning);
	void OnAbort();
	void OnActionNotify(const class UPalActionBase* Action, class FName NotifyName);
	void OnActionNotify_Proc(class FName Notify);
	void OnCompleteItemSpawn();
	void PlaySpawnItemAction();
	void SetMoveFlag(bool Param_IsActive);
	void Setup(class UObject* Object);
	void SpawnItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_SpawnItemBase_C">();
	}
	static class UBP_AIAction_SpawnItemBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_SpawnItemBase_C>();
	}
};
static_assert(alignof(UBP_AIAction_SpawnItemBase_C) == 0x000008, "Wrong alignment on UBP_AIAction_SpawnItemBase_C");
static_assert(sizeof(UBP_AIAction_SpawnItemBase_C) == 0x000190, "Wrong size on UBP_AIAction_SpawnItemBase_C");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_SpawnItemBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, SpawnCount) == 0x000138, "Member 'UBP_AIAction_SpawnItemBase_C::SpawnCount' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, ActionCharacter) == 0x000140, "Member 'UBP_AIAction_SpawnItemBase_C::ActionCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, SpawnItemInfo) == 0x000148, "Member 'UBP_AIAction_SpawnItemBase_C::SpawnItemInfo' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, SpawnSocketName) == 0x000154, "Member 'UBP_AIAction_SpawnItemBase_C::SpawnSocketName' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, SpawnLocationOffset) == 0x000160, "Member 'UBP_AIAction_SpawnItemBase_C::SpawnLocationOffset' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_SpawnItemBase_C, SpawnItemRotator) == 0x000178, "Member 'UBP_AIAction_SpawnItemBase_C::SpawnItemRotator' has a wrong offset!");

}

