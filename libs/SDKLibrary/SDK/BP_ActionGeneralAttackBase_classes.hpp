#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionGeneralAttackBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C
// 0x0100 (0x0250 - 0x0150)
class UBP_ActionGeneralAttackBase_C : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSkillEffectSpawnParameter>     SkillEffectSpawnParameters;                        // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSkillEffectSpawnParameter>     GeneralEffectSpawnParameters;                      // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsStartMovement;                                   // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTerminatingAction;                               // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FD[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTimerHandle>                   TimerHandles;                                      // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class APalSkillEffectBase>> SpawnedEffects;                                    // 0x0190(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ReadyAnimationTime;                                // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ProcessAnimationTime;                              // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AfterAnimationTime;                                // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        ReadyAnimationType;                                // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        ReadyLoopAnimationType;                            // 0x01B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        ProcessAnimationType;                              // 0x01BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        ProcessLoopAnimationType;                          // 0x01BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        AfterAnimationType;                                // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FE[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticCharacterParameterComponent*  StaticCharacterComponent;                          // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x01C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisableMovement;                                 // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FF[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BeginMovementDisableTime;                          // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndMovementDisableTimeFromEnd;                     // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        YawRate;                                           // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BreakActionBlendTime;                              // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementStartOffset;                               // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementTime;                                      // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementTimer;                                     // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            MovementCurve;                                     // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MovementPerSec;                                    // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseMontageFacialNotify;                          // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableShorteningAnimationTimeWhenPalRidden;        // 0x0221(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFindTargetOnRiding;                              // 0x0222(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3700[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FindTargetHeight;                                  // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindTargetDegree;                                  // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindTargetDistance;                                // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnProcess;                                         // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName, EPalBodyLocationType BodyLocation);
	void CallEffect(const struct FSkillEffectSpawnParameter& Parameter);
	bool CanGainSP();
	bool CanStepCancel();
	void CheckFastTerminate(double DeltaTime);
	void CheckMontageFacialNotify();
	void CheckMontageFacialNotify_OneAnime(EPalGeneralMontageType AnimType, bool* UseMontageFacialNotify);
	void DoAfterAnimation();
	void DoEnd();
	void DoProcessAnimation();
	void DoStartMovement();
	void EndFacial();
	void ExecuteUbergraph_BP_ActionGeneralAttackBase(int32 EntryPoint);
	void FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect);
	void Get_Attack_Owner(class AActor** OwnerActor);
	void GetSkillEffectTarget(class AActor** ActionTarget);
	void Movement_Enable();
	void OnBeginAction();
	void OnBreakAction();
	void OnEndAction();
	void OnProcess__DelegateSignature();
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void OnStartAfterAnimation();
	void OnStartProcessAnimation();
	void OnStartReadyAnimation();
	void PlayAfterAnimation();
	void PlayEffectByTime(TArray<struct FSkillEffectSpawnParameter>& EffectList);
	void PlayProcessAnimation();
	void PlayReadyAnimation();
	void Set_Disable_Movement(bool Enable);
	void SetDisableMovement();
	void SetSkillEffectClass(struct FSkillEffectSpawnParameter& SkillEffectParams, class UClass* NewEffectClass);
	void SetSkillEffectTimeOffset(struct FSkillEffectSpawnParameter& EffectSpawnParams, double NewTimeOffset);
	void SetupMovementControl();
	void SetWalkSpeed(bool IsSlow);
	void SetYawRotateRate(double Rate);
	void ShortenAnimationTimeWhenPalRidden();
	void StopAnimation();
	void TickAction(float DeltaTime);
	void TickMovement(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionGeneralAttackBase_C">();
	}
	static class UBP_ActionGeneralAttackBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionGeneralAttackBase_C>();
	}
};
static_assert(alignof(UBP_ActionGeneralAttackBase_C) == 0x000010, "Wrong alignment on UBP_ActionGeneralAttackBase_C");
static_assert(sizeof(UBP_ActionGeneralAttackBase_C) == 0x000250, "Wrong size on UBP_ActionGeneralAttackBase_C");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, UberGraphFrame) == 0x000150, "Member 'UBP_ActionGeneralAttackBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, SkillEffectSpawnParameters) == 0x000158, "Member 'UBP_ActionGeneralAttackBase_C::SkillEffectSpawnParameters' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, GeneralEffectSpawnParameters) == 0x000168, "Member 'UBP_ActionGeneralAttackBase_C::GeneralEffectSpawnParameters' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, IsStartMovement) == 0x000178, "Member 'UBP_ActionGeneralAttackBase_C::IsStartMovement' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, IsTerminatingAction) == 0x000179, "Member 'UBP_ActionGeneralAttackBase_C::IsTerminatingAction' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, TimerHandles) == 0x000180, "Member 'UBP_ActionGeneralAttackBase_C::TimerHandles' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, SpawnedEffects) == 0x000190, "Member 'UBP_ActionGeneralAttackBase_C::SpawnedEffects' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ReadyAnimationTime) == 0x0001A0, "Member 'UBP_ActionGeneralAttackBase_C::ReadyAnimationTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ProcessAnimationTime) == 0x0001A8, "Member 'UBP_ActionGeneralAttackBase_C::ProcessAnimationTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, AfterAnimationTime) == 0x0001B0, "Member 'UBP_ActionGeneralAttackBase_C::AfterAnimationTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ReadyAnimationType) == 0x0001B8, "Member 'UBP_ActionGeneralAttackBase_C::ReadyAnimationType' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ReadyLoopAnimationType) == 0x0001B9, "Member 'UBP_ActionGeneralAttackBase_C::ReadyLoopAnimationType' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ProcessAnimationType) == 0x0001BA, "Member 'UBP_ActionGeneralAttackBase_C::ProcessAnimationType' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, ProcessLoopAnimationType) == 0x0001BB, "Member 'UBP_ActionGeneralAttackBase_C::ProcessLoopAnimationType' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, AfterAnimationType) == 0x0001BC, "Member 'UBP_ActionGeneralAttackBase_C::AfterAnimationType' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, StaticCharacterComponent) == 0x0001C0, "Member 'UBP_ActionGeneralAttackBase_C::StaticCharacterComponent' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, FlagName) == 0x0001C8, "Member 'UBP_ActionGeneralAttackBase_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, IsDisableMovement) == 0x0001D0, "Member 'UBP_ActionGeneralAttackBase_C::IsDisableMovement' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, BeginMovementDisableTime) == 0x0001D8, "Member 'UBP_ActionGeneralAttackBase_C::BeginMovementDisableTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, EndMovementDisableTimeFromEnd) == 0x0001E0, "Member 'UBP_ActionGeneralAttackBase_C::EndMovementDisableTimeFromEnd' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, YawRate) == 0x0001E8, "Member 'UBP_ActionGeneralAttackBase_C::YawRate' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, BreakActionBlendTime) == 0x0001F0, "Member 'UBP_ActionGeneralAttackBase_C::BreakActionBlendTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, MovementStartOffset) == 0x0001F8, "Member 'UBP_ActionGeneralAttackBase_C::MovementStartOffset' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, MovementTime) == 0x000200, "Member 'UBP_ActionGeneralAttackBase_C::MovementTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, MovementTimer) == 0x000208, "Member 'UBP_ActionGeneralAttackBase_C::MovementTimer' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, MovementCurve) == 0x000210, "Member 'UBP_ActionGeneralAttackBase_C::MovementCurve' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, MovementPerSec) == 0x000218, "Member 'UBP_ActionGeneralAttackBase_C::MovementPerSec' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, IsUseMontageFacialNotify) == 0x000220, "Member 'UBP_ActionGeneralAttackBase_C::IsUseMontageFacialNotify' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, EnableShorteningAnimationTimeWhenPalRidden) == 0x000221, "Member 'UBP_ActionGeneralAttackBase_C::EnableShorteningAnimationTimeWhenPalRidden' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, IsFindTargetOnRiding) == 0x000222, "Member 'UBP_ActionGeneralAttackBase_C::IsFindTargetOnRiding' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, FindTargetHeight) == 0x000228, "Member 'UBP_ActionGeneralAttackBase_C::FindTargetHeight' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, FindTargetDegree) == 0x000230, "Member 'UBP_ActionGeneralAttackBase_C::FindTargetDegree' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, FindTargetDistance) == 0x000238, "Member 'UBP_ActionGeneralAttackBase_C::FindTargetDistance' has a wrong offset!");
static_assert(offsetof(UBP_ActionGeneralAttackBase_C, OnProcess) == 0x000240, "Member 'UBP_ActionGeneralAttackBase_C::OnProcess' has a wrong offset!");

}

