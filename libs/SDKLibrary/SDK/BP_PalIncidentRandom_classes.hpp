#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentRandom

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalIncidentRandom.BP_PalIncidentRandom_C
// 0x0070 (0x0200 - 0x0190)
class UBP_PalIncidentRandom_C final : public UPalRandomIncidentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0190(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalIncidentDynamicParameterRandom*     Parameter;                                         // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             SettingDT;                                         // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalRandomIncidentActionBase*           Action;                                            // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SpawnedNpcNames;                                   // 0x01B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PalRandomIncidentNPCSpawner_C*      NPCSpawner;                                        // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ExcludedEvenOnce;                                  // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InsideActionAreaEvenOnce;                          // 0x01C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalRandomIncidentSpawnMonsterData> OutbreakMonsters;                                  // 0x01D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           OutbreakMonsterNames;                              // 0x01E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APalRandomIncidentMapObjectSpawner*     MapObjectSpawner;                                  // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentObjectPlacement*      ObjectgPlacement;                                  // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindDelegate_Action();
	void BindDelegate_NpcSpawner();
	void BindIDelegate_AreaInOut();
	void CreateAction();
	void CreateCharacterIdList(TArray<class FName>* CharacterIds);
	void CreateMapObjectSpawner();
	void CreateNpcSpawner();
	void CreateObjectPlacement();
	void ExcludeOtherPal();
	void ExecuteUbergraph_BP_PalIncidentRandom(int32 EntryPoint);
	void GetGroupList(TArray<int32>* GroupNo);
	class APalRandomIncidentNPCSpawner* GetNPCSpawner();
	void IsAllNpcSpawned(bool* IsSpawned);
	void OnBegin();
	void OnEnd();
	void OnEndProc();
	void OnEnterAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnEnterAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnExitAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnExitAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnGroupCreated();
	void OnNpcDespawned(const class FName& RowName);
	void OnNpcSpawned(const class FName& RowName);
	void OnNPCSpawnerDestroyed(class AActor* DestroyedActor);
	void OnRandomIncidentActionNotify(EPalRandomIncidentActionNotifyType NotifyType);
	void SetDisableFlagForNPCSpawner_BP(bool IsDisable);
	void SetupIncident();
	void SetupOutbreakData();
	void ShowErrorNameDuplication(class FName InName);
	void Spawn_Characters();
	void Spawn_Monsters(class UDataTable* SpawnDataList);
	void Spawn_NPCs(class UDataTable* SpawnDataList);
	void SpawnDropItems();
	void SpawnEggs();
	void StartAction();
	void TerminateAction();
	void UnbindDelegate_Action();
	void UnbindDelegate_NpcSpawner();
	void UnbindIDelegate_AreaInOut();

	void Get_Incident_Spawner(class APalRandomIncidentSpawnerBase** IncidentSpawner) const;
	void Get_Setting_Table_Row(bool* Result, struct FPalRandomIncidentSettings* Data) const;
	bool IsExcludeOtherPal() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentRandom_C">();
	}
	static class UBP_PalIncidentRandom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentRandom_C>();
	}
};
static_assert(alignof(UBP_PalIncidentRandom_C) == 0x000010, "Wrong alignment on UBP_PalIncidentRandom_C");
static_assert(sizeof(UBP_PalIncidentRandom_C) == 0x000200, "Wrong size on UBP_PalIncidentRandom_C");
static_assert(offsetof(UBP_PalIncidentRandom_C, UberGraphFrame) == 0x000190, "Member 'UBP_PalIncidentRandom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, Parameter) == 0x000198, "Member 'UBP_PalIncidentRandom_C::Parameter' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, SettingDT) == 0x0001A0, "Member 'UBP_PalIncidentRandom_C::SettingDT' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, Action) == 0x0001A8, "Member 'UBP_PalIncidentRandom_C::Action' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, SpawnedNpcNames) == 0x0001B0, "Member 'UBP_PalIncidentRandom_C::SpawnedNpcNames' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, NPCSpawner) == 0x0001C0, "Member 'UBP_PalIncidentRandom_C::NPCSpawner' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, ExcludedEvenOnce) == 0x0001C8, "Member 'UBP_PalIncidentRandom_C::ExcludedEvenOnce' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, InsideActionAreaEvenOnce) == 0x0001C9, "Member 'UBP_PalIncidentRandom_C::InsideActionAreaEvenOnce' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, OutbreakMonsters) == 0x0001D0, "Member 'UBP_PalIncidentRandom_C::OutbreakMonsters' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, OutbreakMonsterNames) == 0x0001E0, "Member 'UBP_PalIncidentRandom_C::OutbreakMonsterNames' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, MapObjectSpawner) == 0x0001F0, "Member 'UBP_PalIncidentRandom_C::MapObjectSpawner' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentRandom_C, ObjectgPlacement) == 0x0001F8, "Member 'UBP_PalIncidentRandom_C::ObjectgPlacement' has a wrong offset!");

}

