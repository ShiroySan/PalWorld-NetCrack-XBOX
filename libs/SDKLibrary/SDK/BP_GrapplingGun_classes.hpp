#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrapplingGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GrapplingGun.BP_GrapplingGun_C
// 0x0198 (0x06D0 - 0x0538)
class ABP_GrapplingGun_C final : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCableComponent*                        Cable;                                             // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Weapon;                                            // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShooting;                                        // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C2[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             GrappleEnd;                                        // 0x0558(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                GrappleLocation;                                   // 0x0640(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquip;                                           // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C3[0x7];                                     // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CableMaxLength;                                    // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CableShootSpeed;                                   // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CableReturnSpeed;                                  // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PlayerMoveSpeed;                                   // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShootDirection;                                    // 0x0680(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPull;                                            // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C4[0x7];                                     // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartLocation;                                     // 0x06A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrappleMoveEndLocation;                            // 0x06B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcShootStartParam(struct FVector* Param_ShootDirection, struct FVector* Param_StartLocation);
	void EndCable(bool IsAnimationCancel);
	void ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint);
	void GetCurrentCableLength(double* CableLength);
	void IsGraplingAction(bool* bSuccess);
	void On_Grapling_Action_Start();
	void OnActionEnd(const class UPalActionBase* Action);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void OnGraplingActionEnd();
	void OnPullTrigger();
	void PullCable(double DeltaTime, bool* IsEnd);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShotCable();
	void ShowHitPoint();
	void ShowLine();
	void Start_Graplling();
	void UpdateCable(double DeltaTime);
	void UpdateRopeEndLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrapplingGun_C">();
	}
	static class ABP_GrapplingGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrapplingGun_C>();
	}
};
static_assert(alignof(ABP_GrapplingGun_C) == 0x000008, "Wrong alignment on ABP_GrapplingGun_C");
static_assert(sizeof(ABP_GrapplingGun_C) == 0x0006D0, "Wrong size on ABP_GrapplingGun_C");
static_assert(offsetof(ABP_GrapplingGun_C, UberGraphFrame) == 0x000538, "Member 'ABP_GrapplingGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, Cable) == 0x000540, "Member 'ABP_GrapplingGun_C::Cable' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, Weapon) == 0x000548, "Member 'ABP_GrapplingGun_C::Weapon' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsShooting) == 0x000550, "Member 'ABP_GrapplingGun_C::IsShooting' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleEnd) == 0x000558, "Member 'ABP_GrapplingGun_C::GrappleEnd' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleLocation) == 0x000640, "Member 'ABP_GrapplingGun_C::GrappleLocation' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsEquip) == 0x000658, "Member 'ABP_GrapplingGun_C::IsEquip' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableMaxLength) == 0x000660, "Member 'ABP_GrapplingGun_C::CableMaxLength' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableShootSpeed) == 0x000668, "Member 'ABP_GrapplingGun_C::CableShootSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableReturnSpeed) == 0x000670, "Member 'ABP_GrapplingGun_C::CableReturnSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, PlayerMoveSpeed) == 0x000678, "Member 'ABP_GrapplingGun_C::PlayerMoveSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, ShootDirection) == 0x000680, "Member 'ABP_GrapplingGun_C::ShootDirection' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsPull) == 0x000698, "Member 'ABP_GrapplingGun_C::IsPull' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, StartLocation) == 0x0006A0, "Member 'ABP_GrapplingGun_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleMoveEndLocation) == 0x0006B8, "Member 'ABP_GrapplingGun_C::GrappleMoveEndLocation' has a wrong offset!");

}

