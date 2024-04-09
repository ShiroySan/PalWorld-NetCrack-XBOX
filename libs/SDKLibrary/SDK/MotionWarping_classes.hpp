#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotionWarping

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MotionWarping_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MotionWarping.AnimNotifyState_MotionWarping
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_MotionWarping final : public UAnimNotifyState
{
public:
	class URootMotionModifier*                    RootMotionModifier;                                // 0x0030(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime) const;
	void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_MotionWarping">();
	}
	static class UAnimNotifyState_MotionWarping* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_MotionWarping>();
	}
};
static_assert(alignof(UAnimNotifyState_MotionWarping) == 0x000008, "Wrong alignment on UAnimNotifyState_MotionWarping");
static_assert(sizeof(UAnimNotifyState_MotionWarping) == 0x000038, "Wrong size on UAnimNotifyState_MotionWarping");
static_assert(offsetof(UAnimNotifyState_MotionWarping, RootMotionModifier) == 0x000030, "Member 'UAnimNotifyState_MotionWarping::RootMotionModifier' has a wrong offset!");

// Class MotionWarping.MotionWarpingUtilities
// 0x0000 (0x0028 - 0x0028)
class UMotionWarpingUtilities final : public UBlueprintFunctionLibrary
{
public:
	static struct FTransform ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
	static void GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, class FName WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
	static void GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionWarpingUtilities">();
	}
	static class UMotionWarpingUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionWarpingUtilities>();
	}
};
static_assert(alignof(UMotionWarpingUtilities) == 0x000008, "Wrong alignment on UMotionWarpingUtilities");
static_assert(sizeof(UMotionWarpingUtilities) == 0x000028, "Wrong size on UMotionWarpingUtilities");

// Class MotionWarping.MotionWarpingComponent
// 0x0040 (0x00E0 - 0x00A0)
class UMotionWarpingComponent final : public UActorComponent
{
public:
	bool                                          bSearchForWindowsInAnimsWithinMontages;            // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B78[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPreUpdate;                                       // 0x00A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ACharacter>              CharacterOwner;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URootMotionModifier*>            Modifiers;                                         // 0x00C0(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FMotionWarpingTarget>           WarpTargets;                                       // 0x00D0(0x0010)(Net, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	void AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget);
	void AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, const class USceneComponent* Component, class FName BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	void DisableAllRootMotionModifiers();
	int32 RemoveWarpTarget(class FName WarpTargetName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionWarpingComponent">();
	}
	static class UMotionWarpingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionWarpingComponent>();
	}
};
static_assert(alignof(UMotionWarpingComponent) == 0x000008, "Wrong alignment on UMotionWarpingComponent");
static_assert(sizeof(UMotionWarpingComponent) == 0x0000E0, "Wrong size on UMotionWarpingComponent");
static_assert(offsetof(UMotionWarpingComponent, bSearchForWindowsInAnimsWithinMontages) == 0x0000A0, "Member 'UMotionWarpingComponent::bSearchForWindowsInAnimsWithinMontages' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, OnPreUpdate) == 0x0000A8, "Member 'UMotionWarpingComponent::OnPreUpdate' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, CharacterOwner) == 0x0000B8, "Member 'UMotionWarpingComponent::CharacterOwner' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, Modifiers) == 0x0000C0, "Member 'UMotionWarpingComponent::Modifiers' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, WarpTargets) == 0x0000D0, "Member 'UMotionWarpingComponent::WarpTargets' has a wrong offset!");

// Class MotionWarping.RootMotionModifier
// 0x00C8 (0x00F0 - 0x0028)
#pragma pack(push, 0x1)
class alignas(0x10) URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;                                         // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PreviousPosition;                                  // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentPosition;                                   // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B7B[0xC];                                     // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             StartTransform;                                    // 0x0050(0x0060)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ActualStartTime;                                   // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnActivateDelegate;                                // 0x00B4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnUpdateDelegate;                                  // 0x00C4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnDeactivateDelegate;                              // 0x00D4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionModifierState                      State;                                             // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1B7C[0x3];                                     // 0x00E5(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier">();
	}
	static class URootMotionModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier>();
	}
};
#pragma pack(pop)
static_assert(alignof(URootMotionModifier) == 0x000010, "Wrong alignment on URootMotionModifier");
static_assert(sizeof(URootMotionModifier) == 0x0000F0, "Wrong size on URootMotionModifier");
static_assert(offsetof(URootMotionModifier, Animation) == 0x000028, "Member 'URootMotionModifier::Animation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, StartTime) == 0x000030, "Member 'URootMotionModifier::StartTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, EndTime) == 0x000034, "Member 'URootMotionModifier::EndTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, PreviousPosition) == 0x000038, "Member 'URootMotionModifier::PreviousPosition' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, CurrentPosition) == 0x00003C, "Member 'URootMotionModifier::CurrentPosition' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, Weight) == 0x000040, "Member 'URootMotionModifier::Weight' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, StartTransform) == 0x000050, "Member 'URootMotionModifier::StartTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, ActualStartTime) == 0x0000B0, "Member 'URootMotionModifier::ActualStartTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnActivateDelegate) == 0x0000B4, "Member 'URootMotionModifier::OnActivateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnUpdateDelegate) == 0x0000C4, "Member 'URootMotionModifier::OnUpdateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnDeactivateDelegate) == 0x0000D4, "Member 'URootMotionModifier::OnDeactivateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, State) == 0x0000E4, "Member 'URootMotionModifier::State' has a wrong offset!");

// Class MotionWarping.RootMotionModifier_Warp
// 0x0160 (0x0250 - 0x00F0)
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                   WarpTargetName;                                    // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarpPointAnimProvider                        WarpPointAnimProvider;                             // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B7D[0xF];                                     // 0x00F1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WarpPointAnimTransform;                            // 0x0100(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   WarpPointAnimBoneName;                             // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarpTranslation;                                  // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreZAxis;                                      // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                             AddTranslationEasingFunc;                          // 0x016A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B7E[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            AddTranslationEasingCurve;                         // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarpRotation;                                     // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMotionWarpRotationType                       RotationType;                                      // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B7F[0x2];                                     // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WarpRotationTimeMultiplier;                        // 0x017C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             CachedTargetTransform;                             // 0x0180(0x0060)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1B80[0x70];                                    // 0x01E0(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_Warp">();
	}
	static class URootMotionModifier_Warp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_Warp>();
	}
};
static_assert(alignof(URootMotionModifier_Warp) == 0x000010, "Wrong alignment on URootMotionModifier_Warp");
static_assert(sizeof(URootMotionModifier_Warp) == 0x000250, "Wrong size on URootMotionModifier_Warp");
static_assert(offsetof(URootMotionModifier_Warp, WarpTargetName) == 0x0000E8, "Member 'URootMotionModifier_Warp::WarpTargetName' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimProvider) == 0x0000F0, "Member 'URootMotionModifier_Warp::WarpPointAnimProvider' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimTransform) == 0x000100, "Member 'URootMotionModifier_Warp::WarpPointAnimTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimBoneName) == 0x000160, "Member 'URootMotionModifier_Warp::WarpPointAnimBoneName' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bWarpTranslation) == 0x000168, "Member 'URootMotionModifier_Warp::bWarpTranslation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bIgnoreZAxis) == 0x000169, "Member 'URootMotionModifier_Warp::bIgnoreZAxis' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingFunc) == 0x00016A, "Member 'URootMotionModifier_Warp::AddTranslationEasingFunc' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingCurve) == 0x000170, "Member 'URootMotionModifier_Warp::AddTranslationEasingCurve' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bWarpRotation) == 0x000178, "Member 'URootMotionModifier_Warp::bWarpRotation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, RotationType) == 0x000179, "Member 'URootMotionModifier_Warp::RotationType' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpRotationTimeMultiplier) == 0x00017C, "Member 'URootMotionModifier_Warp::WarpRotationTimeMultiplier' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, CachedTargetTransform) == 0x000180, "Member 'URootMotionModifier_Warp::CachedTargetTransform' has a wrong offset!");

// Class MotionWarping.RootMotionModifier_SimpleWarp
// 0x0000 (0x0250 - 0x0250)
class URootMotionModifier_SimpleWarp final : public URootMotionModifier_Warp
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_SimpleWarp">();
	}
	static class URootMotionModifier_SimpleWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_SimpleWarp>();
	}
};
static_assert(alignof(URootMotionModifier_SimpleWarp) == 0x000010, "Wrong alignment on URootMotionModifier_SimpleWarp");
static_assert(sizeof(URootMotionModifier_SimpleWarp) == 0x000250, "Wrong size on URootMotionModifier_SimpleWarp");

// Class MotionWarping.RootMotionModifier_Scale
// 0x0010 (0x0100 - 0x00F0)
class URootMotionModifier_Scale final : public URootMotionModifier
{
public:
	struct FVector                                Scale;                                             // 0x00E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_Scale">();
	}
	static class URootMotionModifier_Scale* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_Scale>();
	}
};
static_assert(alignof(URootMotionModifier_Scale) == 0x000010, "Wrong alignment on URootMotionModifier_Scale");
static_assert(sizeof(URootMotionModifier_Scale) == 0x000100, "Wrong size on URootMotionModifier_Scale");
static_assert(offsetof(URootMotionModifier_Scale, Scale) == 0x0000E8, "Member 'URootMotionModifier_Scale::Scale' has a wrong offset!");

// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// 0x0160 (0x03B0 - 0x0250)
class URootMotionModifier_AdjustmentBlendWarp final : public URootMotionModifier_Warp
{
public:
	bool                                          bWarpIKBones;                                      // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B81[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           IKBones;                                           // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B82[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CachedMeshTransform;                               // 0x0270(0x0060)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                             CachedMeshRelativeTransform;                       // 0x02D0(0x0060)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                             CachedRootMotion;                                  // 0x0330(0x0060)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimSequenceTrackContainer            Result;                                            // 0x0390(0x0020)(Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_AdjustmentBlendWarp">();
	}
	static class URootMotionModifier_AdjustmentBlendWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_AdjustmentBlendWarp>();
	}
};
static_assert(alignof(URootMotionModifier_AdjustmentBlendWarp) == 0x000010, "Wrong alignment on URootMotionModifier_AdjustmentBlendWarp");
static_assert(sizeof(URootMotionModifier_AdjustmentBlendWarp) == 0x0003B0, "Wrong size on URootMotionModifier_AdjustmentBlendWarp");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, bWarpIKBones) == 0x000250, "Member 'URootMotionModifier_AdjustmentBlendWarp::bWarpIKBones' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, IKBones) == 0x000258, "Member 'URootMotionModifier_AdjustmentBlendWarp::IKBones' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform) == 0x000270, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedMeshTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform) == 0x0002D0, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedMeshRelativeTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion) == 0x000330, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedRootMotion' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, Result) == 0x000390, "Member 'URootMotionModifier_AdjustmentBlendWarp::Result' has a wrong offset!");

// Class MotionWarping.RootMotionModifier_SkewWarp
// 0x0000 (0x0250 - 0x0250)
class URootMotionModifier_SkewWarp final : public URootMotionModifier_Warp
{
public:
	static class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_SkewWarp">();
	}
	static class URootMotionModifier_SkewWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_SkewWarp>();
	}
};
static_assert(alignof(URootMotionModifier_SkewWarp) == 0x000010, "Wrong alignment on URootMotionModifier_SkewWarp");
static_assert(sizeof(URootMotionModifier_SkewWarp) == 0x000250, "Wrong size on URootMotionModifier_SkewWarp");

}

