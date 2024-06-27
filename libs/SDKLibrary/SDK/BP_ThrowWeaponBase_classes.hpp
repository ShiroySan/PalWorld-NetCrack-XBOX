#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowWeaponBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThrowWeaponBase.BP_ThrowWeaponBase_C
// 0x0020 (0x0590 - 0x0570)
class ABP_ThrowWeaponBase_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ThrowEventDispatcher;                              // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeRideThrowMontage();
	void ExecuteUbergraph_BP_ThrowWeaponBase(int32 EntryPoint);
	void GetBulletShootRotation(struct FRotator* BulletRotate);
	void GetRideMontageByDirection(bool* Suceess, class UAnimMontage** NextAnim);
	void GetTargetLocation(struct FVector* Location);
	void GetThrowObjectClass(class UClass** ThrowObject);
	void On_Throw();
	void OnPullTrigger();
	void OnWeaponNotify(EWeaponNotifyType Type);
	void ReceiveBeginPlay();
	void ThrowEventDispatcher__DelegateSignature(class AActor* Bullet);

	bool IsEnableAutoAim() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowWeaponBase_C">();
	}
	static class ABP_ThrowWeaponBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowWeaponBase_C>();
	}
};
static_assert(alignof(ABP_ThrowWeaponBase_C) == 0x000008, "Wrong alignment on ABP_ThrowWeaponBase_C");
static_assert(sizeof(ABP_ThrowWeaponBase_C) == 0x000590, "Wrong size on ABP_ThrowWeaponBase_C");
static_assert(offsetof(ABP_ThrowWeaponBase_C, UberGraphFrame) == 0x000570, "Member 'ABP_ThrowWeaponBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ThrowWeaponBase_C, DefaultSceneRoot) == 0x000578, "Member 'ABP_ThrowWeaponBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ThrowWeaponBase_C, ThrowEventDispatcher) == 0x000580, "Member 'ABP_ThrowWeaponBase_C::ThrowEventDispatcher' has a wrong offset!");

}

