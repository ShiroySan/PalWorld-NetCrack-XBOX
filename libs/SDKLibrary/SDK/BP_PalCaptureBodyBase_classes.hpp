#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalCaptureBodyBase

#include "Basic.hpp"

#include "E_PalCaptureSphereBouncedReason_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "EPalSphereCaptureFailedReason_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C
// 0x0090 (0x0320 - 0x0290)
class ABP_PalCaptureBodyBase_C final : public APalSphereBodyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalSoundPlayerComponent_C*          SoundPlayer;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSuccessedCapture;                                // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFailedCapture;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CaptureLevel;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPassingCapturePhase;                             // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShakeBody;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSneakBonus;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsIntoBall;                                        // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBouncedBody;                                     // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRobberyBall;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NonTargetTimer;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalCaptureBodyBase(int32 EntryPoint);
	void Get_Is_Into_Ball(bool* IntoBall);
	class USceneComponent* GetAkOwnerComponent();
	void GetCaptureLevel(int32* Level);
	void GetTargetActor(class APalCharacter** TargetActor);
	void GetTargetHandle(class UPalIndividualCharacterHandle** Param_TargetHandle);
	void IsSneakBonusEnabled(bool* Enabled);
	void OnBouncedBody__DelegateSignature(E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* Param_TargetHandle);
	void OnFailedCapture__DelegateSignature(class UPalIndividualCharacterHandle* Param_TargetHandle, EPalSphereCaptureFailedReason FailedReason);
	void OnPassingCapturePhase__DelegateSignature(int32 PhaseCount, class UPalIndividualCharacterHandle* Param_TargetHandle);
	void OnShakeBody__DelegateSignature(class ABP_PalCaptureBodyBase_C* ShakedBody);
	void OnSuccessedCapture__DelegateSignature(class UPalIndividualCharacterHandle* Param_TargetHandle);
	void PlaySound(const struct FPalDataTableRowName_SoundID& ID);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetCaptureLevel(int32 NewParam);
	void SetCaptureLevelInternal(int32 Level);
	void SetCaptureLevelToALL(int32 Level);
	void SetIsIntoBall(bool IntoBall);
	void SetSneakBonusFlag(bool Flag);
	void SetSneakBonusFlagInternal(bool IsSneak);
	void SetSneakBonusFlagToALL(bool IsSneak);
	void SetTargetHandle(class UPalIndividualCharacterHandle* Param_TargetHandle);
	void SetTargetIDToALL(const struct FPalInstanceID& TargetId);
	void Setup(class APalCharacter* TargetCharacter);
	void SetupInServer(class APalCharacter* TargetCharacter);
	void SetupInternal(class APalCharacter* TargetCharacter);
	void SetupToALL(class APalCharacter* Target);

	void GetOwnerCharacterOrRiderCharacter(class AActor** Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCaptureBodyBase_C">();
	}
	static class ABP_PalCaptureBodyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalCaptureBodyBase_C>();
	}
};
static_assert(alignof(ABP_PalCaptureBodyBase_C) == 0x000008, "Wrong alignment on ABP_PalCaptureBodyBase_C");
static_assert(sizeof(ABP_PalCaptureBodyBase_C) == 0x000320, "Wrong size on ABP_PalCaptureBodyBase_C");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_PalCaptureBodyBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, SoundPlayer) == 0x000298, "Member 'ABP_PalCaptureBodyBase_C::SoundPlayer' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_PalCaptureBodyBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, OnSuccessedCapture) == 0x0002A8, "Member 'ABP_PalCaptureBodyBase_C::OnSuccessedCapture' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, OnFailedCapture) == 0x0002B8, "Member 'ABP_PalCaptureBodyBase_C::OnFailedCapture' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, TargetHandle) == 0x0002C8, "Member 'ABP_PalCaptureBodyBase_C::TargetHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, CaptureLevel) == 0x0002D0, "Member 'ABP_PalCaptureBodyBase_C::CaptureLevel' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, OnPassingCapturePhase) == 0x0002D8, "Member 'ABP_PalCaptureBodyBase_C::OnPassingCapturePhase' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, OnShakeBody) == 0x0002E8, "Member 'ABP_PalCaptureBodyBase_C::OnShakeBody' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, IsSneakBonus) == 0x0002F8, "Member 'ABP_PalCaptureBodyBase_C::IsSneakBonus' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, IsIntoBall) == 0x0002F9, "Member 'ABP_PalCaptureBodyBase_C::IsIntoBall' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, OnBouncedBody) == 0x000300, "Member 'ABP_PalCaptureBodyBase_C::OnBouncedBody' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, IsRobberyBall) == 0x000310, "Member 'ABP_PalCaptureBodyBase_C::IsRobberyBall' has a wrong offset!");
static_assert(offsetof(ABP_PalCaptureBodyBase_C, NonTargetTimer) == 0x000318, "Member 'ABP_PalCaptureBodyBase_C::NonTargetTimer' has a wrong offset!");

}

