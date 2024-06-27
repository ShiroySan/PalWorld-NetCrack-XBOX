#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalWorldSettings

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalWorldSettings.BP_PalWorldSettings_C
// 0x0008 (0x0530 - 0x0528)
class ABP_PalWorldSettings_C final : public APalWorldSettings
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalWorldSettings_C">();
	}
	static class ABP_PalWorldSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalWorldSettings_C>();
	}
};
static_assert(alignof(ABP_PalWorldSettings_C) == 0x000008, "Wrong alignment on ABP_PalWorldSettings_C");
static_assert(sizeof(ABP_PalWorldSettings_C) == 0x000530, "Wrong size on ABP_PalWorldSettings_C");
static_assert(offsetof(ABP_PalWorldSettings_C, DefaultSceneRoot) == 0x000528, "Member 'ABP_PalWorldSettings_C::DefaultSceneRoot' has a wrong offset!");

}

