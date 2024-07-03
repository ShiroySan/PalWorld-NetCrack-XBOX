#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosionAttackBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExplosionAttackBase.BP_ExplosionAttackBase_C
// 0x0040 (0x02D0 - 0x0290)
class ABP_ExplosionAttackBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        HitCollisionTime;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHitFilter*                          HitFilter;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AttackPower;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BlowPower;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SneakAttackRate;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CameraShakeClass;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DisableCollision();
	void ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint);
	void FindAttacker(class AActor** Attacker);
	void Get_Attackable_Friend(bool* IsFriendAttack);
	void GetEffectType(EPalAdditionalEffectType* Effect);
	void GetEffectValue(int32* Value);
	void GetElement(EPalElementType* Element);
	void GetWeaponAttackType(EPalAttackType* AttackType);
	void Is_Attack_Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* IsHit);
	void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveBeginPlay();
	void SetBlowPower(double NewBlowPower);
	void SetPower(int32 NewParam, double SnakeRate);
	void SetRadius(int32 NewParam);
	void SetupHitFilter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExplosionAttackBase_C">();
	}
	static class ABP_ExplosionAttackBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExplosionAttackBase_C>();
	}
};
static_assert(alignof(ABP_ExplosionAttackBase_C) == 0x000008, "Wrong alignment on ABP_ExplosionAttackBase_C");
static_assert(sizeof(ABP_ExplosionAttackBase_C) == 0x0002D0, "Wrong size on ABP_ExplosionAttackBase_C");
static_assert(offsetof(ABP_ExplosionAttackBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_ExplosionAttackBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, Sphere) == 0x000298, "Member 'ABP_ExplosionAttackBase_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, HitCollisionTime) == 0x0002A0, "Member 'ABP_ExplosionAttackBase_C::HitCollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, HitFilter) == 0x0002A8, "Member 'ABP_ExplosionAttackBase_C::HitFilter' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, AttackPower) == 0x0002B0, "Member 'ABP_ExplosionAttackBase_C::AttackPower' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, BlowPower) == 0x0002B8, "Member 'ABP_ExplosionAttackBase_C::BlowPower' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, SneakAttackRate) == 0x0002C0, "Member 'ABP_ExplosionAttackBase_C::SneakAttackRate' has a wrong offset!");
static_assert(offsetof(ABP_ExplosionAttackBase_C, CameraShakeClass) == 0x0002C8, "Member 'ABP_ExplosionAttackBase_C::CameraShakeClass' has a wrong offset!");

}

