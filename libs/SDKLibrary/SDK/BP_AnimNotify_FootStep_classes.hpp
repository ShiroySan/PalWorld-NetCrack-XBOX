#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xC0 - 0x70)
// BlueprintGeneratedClass BP_AnimNotify_FootStep.BP_AnimNotify_FootStep_C
class UBP_AnimNotify_FootStep_C : public UPalAnimNotify_FootStep
{
public:
	double                                       InWaterRate_Feet;                                  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_Feet;                              // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mute;                                              // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalLandingType                   LandingType;                                       // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalFootType                      FootType;                                          // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UPalSoundSlot>           DebugSoundSlot;                                    // 0x88(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	enum class EPhysicalSurface                  DebugPhysicsMaterial;                              // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StepCount;                                         // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_FootStep_C* GetDefaultObj();

	void CreateFootstepDecal(class AActor* Owner, const struct FTransform& FootTransform, class AActor* NewLocalVar_0, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_GetFloorPosition_HitResult, bool CallFunc_GetFloorPosition_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EPhysicalSurface CallFunc_GetFloorPhisicalSurface_ReturnValue, bool CallFunc_HasFloorPhysMaterial_ReturnValue);
	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void IsPlaySound(bool* PlaySound, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnRollStepEffect(class AActor* Owner, double Y, double X, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	void IsSteppingShallows(class AActor* OwnerActor, bool* NewParam, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEnteredWater_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetInWaterRate_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void PlayStepSound(class AActor* Owner, const struct FPalDataTableRowName_SoundID& SoundId, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_1, bool CallFunc_IsFootStepRun_IsFootStepRun);
	void PlaySound(class AActor* Owner, const struct FPalDataTableRowName_SoundID& SoundId, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEditorPreviewActor_ReturnValue, const class FString& CallFunc_MakeSwitchStatePalSize_PalSize, bool CallFunc_Not_PreBool_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions_1, bool CallFunc_IsPlaySound_PlaySound);
	void IsFootStepRun(class AActor* Owner, bool* IsFootStepRun, bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Get_Foot_Transform(class AActor* Owner, enum class EPalFootType FootType, struct FTransform* NewTransform, class UPalFootIKComponent* FootIK, class UPalCharacterMovementComponent* Movement, const struct FRotator& Rot, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalFootIKComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FFootIKSetting& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void CreateEffect(class AActor* Owner, const struct FTransform& FootTransform, enum class EPalLandingType NewParam, enum class EPhysicalSurface PhysicalSurface, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void Create_Foot_Step_Effect(class AActor* OwnerActor, const struct FTransform& FootTransform, class UPalCharacterMovementComponent* Movement, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSteppingShallows_NewParam, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetFloorPhisicalSurface_ReturnValue, bool CallFunc_HasFloorPhysMaterial_ReturnValue);
	void ProcJumpLanding(class AActor* Owner, enum class EPalFootType FootType, class AActor* _Owner, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void ProcFootStep(class AActor* Owner, enum class EPalFootType FootType, const struct FPalDataTableRowName_SoundID& SoundId, const struct FTransform& FootTransform, const struct FTransform& CallFunc_Get_Foot_Transform_NewTransform);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* Owner, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, class AActor* CallFunc_FindOwnerActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UObject* K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsRollStep_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsFalling_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsFootStep_ReturnValue, bool CallFunc_IsJumpLanding_ReturnValue);
};

}


