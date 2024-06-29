#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawnerToolCore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpawnerToolCore.BP_SpawnerToolCore_C
// 0x00C8 (0x0358 - 0x0290)
class ABP_SpawnerToolCore_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalEditHistoryComponent_C*          PalEditHistoryComponent;                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_SpawnerUI_C*                       SpawnerUI;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowUniqueAbilitiesOnAnyone;                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2376[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCreativeMenuDispatchParams_C*          CreativeMenuDispatchParams;                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 ModVersion;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGuid                                  MenuHandle;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PalReturnRadius;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, class APalPlayerController*> ObtainQueueMap;                                    // 0x02E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                  SpawnerUIGuid;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreativeMenuSaveObject_C*              SaveObject;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsReady;                                          // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void PrintToModLoader(const class FString& Message);
	void OpenSpawnerUI();
	void OnWorldLoaded();
	void OnServerAcknowledgePossession(class APalPlayerController* Controller);
	void OnPlayerDeath(const struct FPalDeadInfo& DeadInfo);
	void OnDespawn(const struct FPalInstanceID& ID);
	void LUA_NotifyCreativeMenuSpawned();
	void LUA_CreativeMenuSetup(class AActor* Actor);
	void InpActEvt_Section_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void HasCreativeMenu_ToServer();
	void ExecuteUbergraph_BP_SpawnerToolCore(int32 EntryPoint);
	void DespawnByHandle(class UPalIndividualCharacterHandle* Handle);
	void CloseSpawnerUI();
	void BindEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpawnerToolCore_C">();
	}
	static class ABP_SpawnerToolCore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpawnerToolCore_C>();
	}
};
static_assert(alignof(ABP_SpawnerToolCore_C) == 0x000008, "Wrong alignment on ABP_SpawnerToolCore_C");
static_assert(sizeof(ABP_SpawnerToolCore_C) == 0x000358, "Wrong size on ABP_SpawnerToolCore_C");
static_assert(offsetof(ABP_SpawnerToolCore_C, UberGraphFrame) == 0x000290, "Member 'ABP_SpawnerToolCore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, PalEditHistoryComponent) == 0x000298, "Member 'ABP_SpawnerToolCore_C::PalEditHistoryComponent' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_SpawnerToolCore_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, SpawnerUI) == 0x0002A8, "Member 'ABP_SpawnerToolCore_C::SpawnerUI' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, bAllowUniqueAbilitiesOnAnyone) == 0x0002B0, "Member 'ABP_SpawnerToolCore_C::bAllowUniqueAbilitiesOnAnyone' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, CreativeMenuDispatchParams) == 0x0002B8, "Member 'ABP_SpawnerToolCore_C::CreativeMenuDispatchParams' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, ModVersion) == 0x0002C0, "Member 'ABP_SpawnerToolCore_C::ModVersion' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, MenuHandle) == 0x0002D0, "Member 'ABP_SpawnerToolCore_C::MenuHandle' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, PalReturnRadius) == 0x0002E0, "Member 'ABP_SpawnerToolCore_C::PalReturnRadius' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, ObtainQueueMap) == 0x0002E8, "Member 'ABP_SpawnerToolCore_C::ObtainQueueMap' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, SpawnerUIGuid) == 0x000338, "Member 'ABP_SpawnerToolCore_C::SpawnerUIGuid' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, SaveObject) == 0x000348, "Member 'ABP_SpawnerToolCore_C::SaveObject' has a wrong offset!");
static_assert(offsetof(ABP_SpawnerToolCore_C, bIsReady) == 0x000350, "Member 'ABP_SpawnerToolCore_C::bIsReady' has a wrong offset!");

}

