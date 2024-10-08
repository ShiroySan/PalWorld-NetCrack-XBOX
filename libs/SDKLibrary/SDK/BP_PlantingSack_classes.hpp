#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlantingSack

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlantingSack.BP_PlantingSack_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_PlantingSack_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlantingSack_C">();
	}
	static class ABP_PlantingSack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlantingSack_C>();
	}
};
static_assert(alignof(ABP_PlantingSack_C) == 0x000008, "Wrong alignment on ABP_PlantingSack_C");
static_assert(sizeof(ABP_PlantingSack_C) == 0x0002A0, "Wrong size on ABP_PlantingSack_C");
static_assert(offsetof(ABP_PlantingSack_C, StaticMesh) == 0x000290, "Member 'ABP_PlantingSack_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PlantingSack_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PlantingSack_C::DefaultSceneRoot' has a wrong offset!");

}

