#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalBulletCreator

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalBulletCreator.BP_PalBulletCreator_C
// 0x0050 (0x0078 - 0x0028)
class UBP_PalBulletCreator_C final : public UPalBulletCreator
{
public:
	TMap<EPalPassiveSkillEffectType, class UClass*> ModifierMap;                                       // 0x0028(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class APalBullet* CreateBullet(const class UObject* WorldContextObject, class APalWeaponBase* Weapon, TSubclassOf<class APalBullet> bulletClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBulletCreator_C">();
	}
	static class UBP_PalBulletCreator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBulletCreator_C>();
	}
};
static_assert(alignof(UBP_PalBulletCreator_C) == 0x000008, "Wrong alignment on UBP_PalBulletCreator_C");
static_assert(sizeof(UBP_PalBulletCreator_C) == 0x000078, "Wrong size on UBP_PalBulletCreator_C");
static_assert(offsetof(UBP_PalBulletCreator_C, ModifierMap) == 0x000028, "Member 'UBP_PalBulletCreator_C::ModifierMap' has a wrong offset!");

}

