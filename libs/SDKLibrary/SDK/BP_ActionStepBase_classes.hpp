#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionStepBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionStepBase.BP_ActionStepBase_C
// 0x00F0 (0x0230 - 0x0140)
#pragma pack(push, 0x1)
class alignas(0x10) UBP_ActionStepBase_C : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StepTime;                                          // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            StepCurve;                                         // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        StepType;                                          // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanEndStep;                                        // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16A[0x6];                                      // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanCrouchCancel;                                   // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CrouchCancelTime;                                  // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            StepCurve_Location;                                // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MoveDirection;                                     // 0x01A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_MoveDistance;                                // 0x01C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentFallingSpeed;                               // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_FallingAcceleration;                         // 0x01D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         IgnoreActors;                                      // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        Const_MaxFallingSpeed;                             // 0x01E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_MaxAirborneTime;                             // 0x01F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentAirboneTime;                                // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETraceTypeQuery                               Const_TraceChannel;                                // 0x0200(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Const_DrawDebugType;                               // 0x0201(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_202[0x6];                                      // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CapsuleHeightHalf_Max;                             // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CapsuleHeightHalf_Min;                             // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer_forCapsule;                                  // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActionTimer;                                       // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanGainSP();
	bool CanNextActionCancel();
	void CheckEndAction();
	void CheckFrontHight(double DeltaTime, bool* CanThrough);
	void CheckOtherCharacter(const struct FVector& NextPlayerPos, bool* IsStop);
	void DisableMovement(bool Disable);
	void DisableShooter(bool Disable);
	void EndStep();
	void ExecuteUbergraph_BP_ActionStepBase(int32 EntryPoint);
	void LayCheck_ForSweepMove(const struct FVector& DesiredPos, struct FVector* ResultActorPos, bool* IsHit);
	void OnBeginAction();
	void OnEndAction();
	void OnEndStepWhenCrouch();
	void StepMove_Location(double DeltaTime);
	void TickAction(float DeltaTime);
	void UpdateCapsuleHeight(double DetaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionStepBase_C">();
	}
	static class UBP_ActionStepBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionStepBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UBP_ActionStepBase_C) == 0x000010, "Wrong alignment on UBP_ActionStepBase_C");
static_assert(sizeof(UBP_ActionStepBase_C) == 0x000230, "Wrong size on UBP_ActionStepBase_C");
static_assert(offsetof(UBP_ActionStepBase_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionStepBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, FlagName) == 0x000148, "Member 'UBP_ActionStepBase_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, StepTime) == 0x000150, "Member 'UBP_ActionStepBase_C::StepTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, StepCurve) == 0x000158, "Member 'UBP_ActionStepBase_C::StepCurve' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Timer) == 0x000160, "Member 'UBP_ActionStepBase_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, StepType) == 0x000168, "Member 'UBP_ActionStepBase_C::StepType' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CanEndStep) == 0x000169, "Member 'UBP_ActionStepBase_C::CanEndStep' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Montage) == 0x000170, "Member 'UBP_ActionStepBase_C::Montage' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CanCrouchCancel) == 0x000178, "Member 'UBP_ActionStepBase_C::CanCrouchCancel' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CrouchCancelTime) == 0x000180, "Member 'UBP_ActionStepBase_C::CrouchCancelTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, StepCurve_Location) == 0x000188, "Member 'UBP_ActionStepBase_C::StepCurve_Location' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, StartLocation) == 0x000190, "Member 'UBP_ActionStepBase_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, MoveDirection) == 0x0001A8, "Member 'UBP_ActionStepBase_C::MoveDirection' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_MoveDistance) == 0x0001C0, "Member 'UBP_ActionStepBase_C::Const_MoveDistance' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CurrentFallingSpeed) == 0x0001C8, "Member 'UBP_ActionStepBase_C::CurrentFallingSpeed' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_FallingAcceleration) == 0x0001D0, "Member 'UBP_ActionStepBase_C::Const_FallingAcceleration' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, IgnoreActors) == 0x0001D8, "Member 'UBP_ActionStepBase_C::IgnoreActors' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_MaxFallingSpeed) == 0x0001E8, "Member 'UBP_ActionStepBase_C::Const_MaxFallingSpeed' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_MaxAirborneTime) == 0x0001F0, "Member 'UBP_ActionStepBase_C::Const_MaxAirborneTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CurrentAirboneTime) == 0x0001F8, "Member 'UBP_ActionStepBase_C::CurrentAirboneTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_TraceChannel) == 0x000200, "Member 'UBP_ActionStepBase_C::Const_TraceChannel' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Const_DrawDebugType) == 0x000201, "Member 'UBP_ActionStepBase_C::Const_DrawDebugType' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CapsuleHeightHalf_Max) == 0x000208, "Member 'UBP_ActionStepBase_C::CapsuleHeightHalf_Max' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, CapsuleHeightHalf_Min) == 0x000210, "Member 'UBP_ActionStepBase_C::CapsuleHeightHalf_Min' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, Timer_forCapsule) == 0x000218, "Member 'UBP_ActionStepBase_C::Timer_forCapsule' has a wrong offset!");
static_assert(offsetof(UBP_ActionStepBase_C, ActionTimer) == 0x000220, "Member 'UBP_ActionStepBase_C::ActionTimer' has a wrong offset!");

}

