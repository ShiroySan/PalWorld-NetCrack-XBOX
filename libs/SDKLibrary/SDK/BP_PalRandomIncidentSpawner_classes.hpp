#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRandomIncidentSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C
// 0x0098 (0x0458 - 0x03C0)
class ABP_PalRandomIncidentSpawner_C : public APalRandomIncidentSpawnerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       EndCollision;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ActionCollision;                                   // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ExclusionCollision;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnCollision;                                    // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentNotifyListener_C*        IncidentNotifyListener;                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FF_NPC_PathWalkArray> WalkPathList;                                      // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DisplayDebugArea;                                  // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddWalkPath(const class FName& PathName, const TArray<class AActor*>& PointList);
	void Collect_Walk_Path_Point(class USceneComponent* SceneRoot, TArray<class AActor*>* Actors);
	void Create_Walk_Path(TArray<class AActor*>& PointArray, struct FF_NPC_PathWalkArray* PathArray);
	void CreateDebugShape(double Delta);
	void DestroyCollisionComponents();
	void EditorSetup_WalkPointRef();
	void ExecuteUbergraph_BP_PalRandomIncidentSpawner(int32 EntryPoint);
	void OnIncidentNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const struct FPalIncidentNotifyParameter& Param_Parameter);
	void OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReleaseIncident();
	void SetAreaRadiuses();
	void SetupIncident(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* Param_Parameter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentSpawner_C">();
	}
	static class ABP_PalRandomIncidentSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentSpawner_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentSpawner_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentSpawner_C");
static_assert(sizeof(ABP_PalRandomIncidentSpawner_C) == 0x000458, "Wrong size on ABP_PalRandomIncidentSpawner_C");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, UberGraphFrame) == 0x0003C0, "Member 'ABP_PalRandomIncidentSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, StaticMesh) == 0x0003C8, "Member 'ABP_PalRandomIncidentSpawner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, EndCollision) == 0x0003D0, "Member 'ABP_PalRandomIncidentSpawner_C::EndCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, ActionCollision) == 0x0003D8, "Member 'ABP_PalRandomIncidentSpawner_C::ActionCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, ExclusionCollision) == 0x0003E0, "Member 'ABP_PalRandomIncidentSpawner_C::ExclusionCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, SpawnCollision) == 0x0003E8, "Member 'ABP_PalRandomIncidentSpawner_C::SpawnCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, DefaultSceneRoot) == 0x0003F0, "Member 'ABP_PalRandomIncidentSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, IncidentNotifyListener) == 0x0003F8, "Member 'ABP_PalRandomIncidentSpawner_C::IncidentNotifyListener' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, WalkPathList) == 0x000400, "Member 'ABP_PalRandomIncidentSpawner_C::WalkPathList' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentSpawner_C, DisplayDebugArea) == 0x000450, "Member 'ABP_PalRandomIncidentSpawner_C::DisplayDebugArea' has a wrong offset!");

}

