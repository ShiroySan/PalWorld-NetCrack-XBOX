#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerSoundEmitterComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerSoundEmitterComponent.BP_PlayerSoundEmitterComponent_C
// 0x0060 (0x0100 - 0x00A0)
class UBP_PlayerSoundEmitterComponent_C final : public UPalSoundEmitterComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                MoveVelocity;                                      // 0x00A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSprint;                                          // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4300[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SelfLocation;                                      // 0x00C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxWalkSpeed;                                      // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSprintSpeed;                                    // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x00F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCrouching;                                       // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSliding;                                         // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BPEmitSound(class FName RowName, double Rate);
	void ExecuteUbergraph_BP_PlayerSoundEmitterComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void _________0();
	void _________1(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerSoundEmitterComponent_C">();
	}
	static class UBP_PlayerSoundEmitterComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerSoundEmitterComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerSoundEmitterComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerSoundEmitterComponent_C");
static_assert(sizeof(UBP_PlayerSoundEmitterComponent_C) == 0x000100, "Wrong size on UBP_PlayerSoundEmitterComponent_C");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_PlayerSoundEmitterComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, MoveVelocity) == 0x0000A8, "Member 'UBP_PlayerSoundEmitterComponent_C::MoveVelocity' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, IsSprint) == 0x0000C0, "Member 'UBP_PlayerSoundEmitterComponent_C::IsSprint' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, SelfLocation) == 0x0000C8, "Member 'UBP_PlayerSoundEmitterComponent_C::SelfLocation' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, MaxWalkSpeed) == 0x0000E0, "Member 'UBP_PlayerSoundEmitterComponent_C::MaxWalkSpeed' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, MaxSprintSpeed) == 0x0000E8, "Member 'UBP_PlayerSoundEmitterComponent_C::MaxSprintSpeed' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, TimerHandle) == 0x0000F0, "Member 'UBP_PlayerSoundEmitterComponent_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, IsCrouching) == 0x0000F8, "Member 'UBP_PlayerSoundEmitterComponent_C::IsCrouching' has a wrong offset!");
static_assert(offsetof(UBP_PlayerSoundEmitterComponent_C, IsSliding) == 0x0000F9, "Member 'UBP_PlayerSoundEmitterComponent_C::IsSliding' has a wrong offset!");

}

