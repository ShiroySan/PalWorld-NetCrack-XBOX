#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotionWarping

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MotionWarping.ERootMotionModifierState
// NumValues: 0x0005
enum class ERootMotionModifierState : uint8
{
	Waiting                                  = 0,
	Active                                   = 1,
	MarkedForRemoval                         = 2,
	Disabled                                 = 3,
	ERootMotionModifierState_MAX             = 4,
};

// Enum MotionWarping.EMotionWarpRotationType
// NumValues: 0x0003
enum class EMotionWarpRotationType : uint8
{
	Default                                  = 0,
	Facing                                   = 1,
	EMotionWarpRotationType_MAX              = 2,
};

// Enum MotionWarping.EWarpPointAnimProvider
// NumValues: 0x0004
enum class EWarpPointAnimProvider : uint8
{
	None                                     = 0,
	Static                                   = 1,
	Bone                                     = 2,
	EWarpPointAnimProvider_MAX               = 3,
};

// ScriptStruct MotionWarping.MotionWarpingWindowData
// 0x0010 (0x0010 - 0x0000)
struct FMotionWarpingWindowData final
{
public:
	class UAnimNotifyState_MotionWarping*         AnimNotify;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMotionWarpingWindowData) == 0x000008, "Wrong alignment on FMotionWarpingWindowData");
static_assert(sizeof(FMotionWarpingWindowData) == 0x000010, "Wrong size on FMotionWarpingWindowData");
static_assert(offsetof(FMotionWarpingWindowData, AnimNotify) == 0x000000, "Member 'FMotionWarpingWindowData::AnimNotify' has a wrong offset!");
static_assert(offsetof(FMotionWarpingWindowData, StartTime) == 0x000008, "Member 'FMotionWarpingWindowData::StartTime' has a wrong offset!");
static_assert(offsetof(FMotionWarpingWindowData, EndTime) == 0x00000C, "Member 'FMotionWarpingWindowData::EndTime' has a wrong offset!");

// ScriptStruct MotionWarping.MotionWarpingUpdateContext
// 0x001C (0x001C - 0x0000)
struct FMotionWarpingUpdateContext final
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;                                         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PreviousPosition;                                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentPosition;                                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaSeconds;                                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMotionWarpingUpdateContext) == 0x000004, "Wrong alignment on FMotionWarpingUpdateContext");
static_assert(sizeof(FMotionWarpingUpdateContext) == 0x00001C, "Wrong size on FMotionWarpingUpdateContext");
static_assert(offsetof(FMotionWarpingUpdateContext, Animation) == 0x000000, "Member 'FMotionWarpingUpdateContext::Animation' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, PreviousPosition) == 0x000008, "Member 'FMotionWarpingUpdateContext::PreviousPosition' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, CurrentPosition) == 0x00000C, "Member 'FMotionWarpingUpdateContext::CurrentPosition' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, Weight) == 0x000010, "Member 'FMotionWarpingUpdateContext::Weight' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, PlayRate) == 0x000014, "Member 'FMotionWarpingUpdateContext::PlayRate' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, DeltaSeconds) == 0x000018, "Member 'FMotionWarpingUpdateContext::DeltaSeconds' has a wrong offset!");

// ScriptStruct MotionWarping.MotionWarpingTarget
// 0x0050 (0x0050 - 0x0000)
struct FMotionWarpingTarget final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>         Component;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFollowComponent;                                  // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BF3[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMotionWarpingTarget) == 0x000008, "Wrong alignment on FMotionWarpingTarget");
static_assert(sizeof(FMotionWarpingTarget) == 0x000050, "Wrong size on FMotionWarpingTarget");
static_assert(offsetof(FMotionWarpingTarget, Name) == 0x000000, "Member 'FMotionWarpingTarget::Name' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Location) == 0x000008, "Member 'FMotionWarpingTarget::Location' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Rotation) == 0x000020, "Member 'FMotionWarpingTarget::Rotation' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Component) == 0x000038, "Member 'FMotionWarpingTarget::Component' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, BoneName) == 0x000040, "Member 'FMotionWarpingTarget::BoneName' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, bFollowComponent) == 0x000048, "Member 'FMotionWarpingTarget::bFollowComponent' has a wrong offset!");

// ScriptStruct MotionWarping.MotionDeltaTrack
// 0x0060 (0x0060 - 0x0000)
struct FMotionDeltaTrack final
{
public:
	TArray<struct FTransform>                     BoneTransformTrack;                                // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        DeltaTranslationTrack;                             // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                       DeltaRotationTrack;                                // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                TotalTranslation;                                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               TotalRotation;                                     // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMotionDeltaTrack) == 0x000008, "Wrong alignment on FMotionDeltaTrack");
static_assert(sizeof(FMotionDeltaTrack) == 0x000060, "Wrong size on FMotionDeltaTrack");
static_assert(offsetof(FMotionDeltaTrack, BoneTransformTrack) == 0x000000, "Member 'FMotionDeltaTrack::BoneTransformTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, DeltaTranslationTrack) == 0x000010, "Member 'FMotionDeltaTrack::DeltaTranslationTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, DeltaRotationTrack) == 0x000020, "Member 'FMotionDeltaTrack::DeltaRotationTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, TotalTranslation) == 0x000030, "Member 'FMotionDeltaTrack::TotalTranslation' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, TotalRotation) == 0x000048, "Member 'FMotionDeltaTrack::TotalRotation' has a wrong offset!");

// ScriptStruct MotionWarping.MotionDeltaTrackContainer
// 0x0010 (0x0010 - 0x0000)
struct FMotionDeltaTrackContainer final
{
public:
	TArray<struct FMotionDeltaTrack>              Tracks;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMotionDeltaTrackContainer) == 0x000008, "Wrong alignment on FMotionDeltaTrackContainer");
static_assert(sizeof(FMotionDeltaTrackContainer) == 0x000010, "Wrong size on FMotionDeltaTrackContainer");
static_assert(offsetof(FMotionDeltaTrackContainer, Tracks) == 0x000000, "Member 'FMotionDeltaTrackContainer::Tracks' has a wrong offset!");

}

