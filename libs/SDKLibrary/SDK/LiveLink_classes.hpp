#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"
#include "LiveLinkInterface_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "LiveLink_structs.hpp"
#include "TimeManagement_classes.hpp"


namespace SDK
{

// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                          bInterpolatePropertyValues;                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11D2[0x17];                                    // 0x0029(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBasicFrameInterpolationProcessor">();
	}
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBasicFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000040, "Wrong size on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(offsetof(ULiveLinkBasicFrameInterpolationProcessor, bInterpolatePropertyValues) == 0x000028, "Member 'ULiveLinkBasicFrameInterpolationProcessor::bInterpolatePropertyValues' has a wrong offset!");

// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMessageBusSourceFactory final : public ULiveLinkSourceFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusSourceFactory">();
	}
	static class ULiveLinkMessageBusSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkMessageBusSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkMessageBusSourceFactory");
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x000028, "Wrong size on ULiveLinkMessageBusSourceFactory");

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (0x0050 - 0x0040)
class ULiveLinkAnimationFrameInterpolationProcessor final : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                         Pad_11D3[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationFrameInterpolationProcessor">();
	}
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000050, "Wrong size on ULiveLinkAnimationFrameInterpolationProcessor");

// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (0x0168 - 0x0160)
class ULiveLinkAnimationVirtualSubject final : public ULiveLinkVirtualSubject
{
public:
	uint8                                         Pad_11D4[0x1];                                     // 0x0160(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bAppendSubjectNameToBones;                         // 0x0161(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11D5[0x6];                                     // 0x0162(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationVirtualSubject">();
	}
	static class ULiveLinkAnimationVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkAnimationVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkAnimationVirtualSubject");
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x000168, "Wrong size on ULiveLinkAnimationVirtualSubject");
static_assert(offsetof(ULiveLinkAnimationVirtualSubject, bAppendSubjectNameToBones) == 0x000161, "Member 'ULiveLinkAnimationVirtualSubject::bAppendSubjectNameToBones' has a wrong offset!");

// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
	static void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData);
	static bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData);
	static void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	static void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	static void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	static TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	static TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	static TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
	static void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	static void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	static bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value);
	static void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceTypeFromGuid(const struct FGuid& SourceGuid);
	static TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	static void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	static void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName Param_TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	static bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	static bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	static bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	static bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	static int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	static void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle);
	static void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	static void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Param_Name);
	static void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* Param_TransformNames);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBlueprintLibrary">();
	}
	static class ULiveLinkBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBlueprintLibrary>();
	}
};
static_assert(alignof(ULiveLinkBlueprintLibrary) == 0x000008, "Wrong alignment on ULiveLinkBlueprintLibrary");
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x000028, "Wrong size on ULiveLinkBlueprintLibrary");

// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00C0 - 0x00A0)
class ULiveLinkComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             OnLiveLinkUpdated;                                 // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_11EA[0x10];                                    // 0x00B0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
	void GetSubjectData(const class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const class FName SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtWorldTime(const class FName SubjectName, const float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponent">();
	}
	static class ULiveLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponent>();
	}
};
static_assert(alignof(ULiveLinkComponent) == 0x000008, "Wrong alignment on ULiveLinkComponent");
static_assert(sizeof(ULiveLinkComponent) == 0x0000C0, "Wrong size on ULiveLinkComponent");
static_assert(offsetof(ULiveLinkComponent, OnLiveLinkUpdated) == 0x0000A0, "Member 'ULiveLinkComponent::OnLiveLinkUpdated' has a wrong offset!");

// Class LiveLink.LiveLinkDrivenComponent
// 0x0018 (0x00B8 - 0x00A0)
class ULiveLinkDrivenComponent final : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x00A0(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ActorTransformBone;                                // 0x00A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bModifyActorTransform;                             // 0x00B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSetRelativeLocation;                              // 0x00B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11EE[0x6];                                     // 0x00B2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDrivenComponent">();
	}
	static class ULiveLinkDrivenComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDrivenComponent>();
	}
};
static_assert(alignof(ULiveLinkDrivenComponent) == 0x000008, "Wrong alignment on ULiveLinkDrivenComponent");
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x0000B8, "Wrong size on ULiveLinkDrivenComponent");
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x0000A0, "Member 'ULiveLinkDrivenComponent::SubjectName' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x0000A8, "Member 'ULiveLinkDrivenComponent::ActorTransformBone' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bModifyActorTransform) == 0x0000B0, "Member 'ULiveLinkDrivenComponent::bModifyActorTransform' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bSetRelativeLocation) == 0x0000B1, "Member 'ULiveLinkDrivenComponent::bSetRelativeLocation' has a wrong offset!");

// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder final : public UObject
{
public:
	uint8                                         Pad_11EF[0x58];                                    // 0x0028(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
	static class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusFinder">();
	}
	static class ULiveLinkMessageBusFinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusFinder>();
	}
};
static_assert(alignof(ULiveLinkMessageBusFinder) == 0x000008, "Wrong alignment on ULiveLinkMessageBusFinder");
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x000080, "Wrong size on ULiveLinkMessageBusFinder");

// Class LiveLink.LiveLinkMessageBusSourceSettings
// 0x0000 (0x00A8 - 0x00A8)
class ULiveLinkMessageBusSourceSettings final : public ULiveLinkSourceSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusSourceSettings">();
	}
	static class ULiveLinkMessageBusSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkMessageBusSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkMessageBusSourceSettings");
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x0000A8, "Wrong size on ULiveLinkMessageBusSourceSettings");

// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkTimeSynchronizationSource final : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x0030(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11F1[0x48];                                    // 0x0038(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTimeSynchronizationSource">();
	}
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTimeSynchronizationSource>();
	}
};
static_assert(alignof(ULiveLinkTimeSynchronizationSource) == 0x000008, "Wrong alignment on ULiveLinkTimeSynchronizationSource");
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x000080, "Wrong size on ULiveLinkTimeSynchronizationSource");
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x000030, "Member 'ULiveLinkTimeSynchronizationSource::SubjectName' has a wrong offset!");

// Class LiveLink.LiveLinkPreset
// 0x0028 (0x0050 - 0x0028)
class ULiveLinkPreset final : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>          Sources;                                           // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubjectPreset>         Subjects;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11F2[0x8];                                     // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void BuildFromClient();

	bool AddToClient(const bool bRecreatePresets) const;
	bool ApplyToClient() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkPreset">();
	}
	static class ULiveLinkPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkPreset>();
	}
};
static_assert(alignof(ULiveLinkPreset) == 0x000008, "Wrong alignment on ULiveLinkPreset");
static_assert(sizeof(ULiveLinkPreset) == 0x000050, "Wrong size on ULiveLinkPreset");
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x000028, "Member 'ULiveLinkPreset::Sources' has a wrong offset!");
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x000038, "Member 'ULiveLinkPreset::Subjects' has a wrong offset!");

// Class LiveLink.LiveLinkUserSettings
// 0x0010 (0x0038 - 0x0028)
class ULiveLinkUserSettings final : public UObject
{
public:
	struct FDirectoryPath                         PresetSaveDir;                                     // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkUserSettings">();
	}
	static class ULiveLinkUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkUserSettings>();
	}
};
static_assert(alignof(ULiveLinkUserSettings) == 0x000008, "Wrong alignment on ULiveLinkUserSettings");
static_assert(sizeof(ULiveLinkUserSettings) == 0x000038, "Wrong size on ULiveLinkUserSettings");
static_assert(offsetof(ULiveLinkUserSettings, PresetSaveDir) == 0x000028, "Member 'ULiveLinkUserSettings::PresetSaveDir' has a wrong offset!");

// Class LiveLink.LiveLinkSettings
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLinkSettings final : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>    DefaultRoleSettings;                               // 0x0028(0x0010)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;                       // 0x0038(0x0008)(ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULiveLinkPreset>         DefaultLiveLinkPreset;                             // 0x0040(0x0030)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClockOffsetCorrectionStep;                         // 0x0070(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELiveLinkSourceMode                           DefaultMessageBusSourceMode;                       // 0x0074(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11F3[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MessageBusPingRequestFrequency;                    // 0x0078(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusHeartbeatFrequency;                      // 0x0080(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusHeartbeatTimeout;                        // 0x0088(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusTimeBeforeRemovingInactiveSource;        // 0x0090(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        TimeWithoutFrameToBeConsiderAsInvalid;             // 0x0098(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ValidColor;                                        // 0x00A0(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InvalidColor;                                      // 0x00B0(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         TextSizeSource;                                    // 0x00C0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         TextSizeSubject;                                   // 0x00C1(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11F4[0x6];                                     // 0x00C2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSettings">();
	}
	static class ULiveLinkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSettings>();
	}
};
static_assert(alignof(ULiveLinkSettings) == 0x000008, "Wrong alignment on ULiveLinkSettings");
static_assert(sizeof(ULiveLinkSettings) == 0x0000C8, "Wrong size on ULiveLinkSettings");
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x000028, "Member 'ULiveLinkSettings::DefaultRoleSettings' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x000038, "Member 'ULiveLinkSettings::FrameInterpolationProcessor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x000040, "Member 'ULiveLinkSettings::DefaultLiveLinkPreset' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, ClockOffsetCorrectionStep) == 0x000070, "Member 'ULiveLinkSettings::ClockOffsetCorrectionStep' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x000074, "Member 'ULiveLinkSettings::DefaultMessageBusSourceMode' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusPingRequestFrequency) == 0x000078, "Member 'ULiveLinkSettings::MessageBusPingRequestFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatFrequency) == 0x000080, "Member 'ULiveLinkSettings::MessageBusHeartbeatFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatTimeout) == 0x000088, "Member 'ULiveLinkSettings::MessageBusHeartbeatTimeout' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource) == 0x000090, "Member 'ULiveLinkSettings::MessageBusTimeBeforeRemovingInactiveSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid) == 0x000098, "Member 'ULiveLinkSettings::TimeWithoutFrameToBeConsiderAsInvalid' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x0000A0, "Member 'ULiveLinkSettings::ValidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x0000B0, "Member 'ULiveLinkSettings::InvalidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSource) == 0x0000C0, "Member 'ULiveLinkSettings::TextSizeSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSubject) == 0x0000C1, "Member 'ULiveLinkSettings::TextSizeSubject' has a wrong offset!");

// Class LiveLink.LiveLinkTimecodeProvider
// 0x0090 (0x00C0 - 0x0030)
class ULiveLinkTimecodeProvider final : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                    SubjectKey;                                        // 0x0030(0x0018)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ELiveLinkTimecodeProviderEvaluationType       Evaluation;                                        // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bOverrideFrameRate;                                // 0x004C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11F5[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             OverrideFrameRate;                                 // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         BufferSize;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11F6[0x64];                                    // 0x005C(0x0064)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTimecodeProvider">();
	}
	static class ULiveLinkTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTimecodeProvider>();
	}
};
static_assert(alignof(ULiveLinkTimecodeProvider) == 0x000008, "Wrong alignment on ULiveLinkTimecodeProvider");
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x0000C0, "Wrong size on ULiveLinkTimecodeProvider");
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x000030, "Member 'ULiveLinkTimecodeProvider::SubjectKey' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x000048, "Member 'ULiveLinkTimecodeProvider::Evaluation' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, bOverrideFrameRate) == 0x00004C, "Member 'ULiveLinkTimecodeProvider::bOverrideFrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x000050, "Member 'ULiveLinkTimecodeProvider::OverrideFrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, BufferSize) == 0x000058, "Member 'ULiveLinkTimecodeProvider::BufferSize' has a wrong offset!");

// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// 0x0008 (0x00B0 - 0x00A8)
class ULiveLinkVirtualSubjectSourceSettings final : public ULiveLinkSourceSettings
{
public:
	class FName                                   SourceName;                                        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkVirtualSubjectSourceSettings">();
	}
	static class ULiveLinkVirtualSubjectSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkVirtualSubjectSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkVirtualSubjectSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkVirtualSubjectSourceSettings");
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x0000B0, "Wrong size on ULiveLinkVirtualSubjectSourceSettings");
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x0000A8, "Member 'ULiveLinkVirtualSubjectSourceSettings::SourceName' has a wrong offset!");

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0048 (0x0070 - 0x0028)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	ELiveLinkAxis                                 FrontAxis;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ELiveLinkAxis                                 RightAxis;                                         // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ELiveLinkAxis                                 UpAxis;                                            // 0x002A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseOffsetPosition;                                // 0x002B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseOffsetOrientation;                             // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_11F7[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OffsetPosition;                                    // 0x0030(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                               OffsetOrientation;                                 // 0x0048(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_11F8[0x10];                                    // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformAxisSwitchPreProcessor">();
	}
	static class ULiveLinkTransformAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000070, "Wrong size on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis) == 0x000028, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::FrontAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis) == 0x000029, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::RightAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis) == 0x00002A, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::UpAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetPosition) == 0x00002B, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetPosition' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetOrientation) == 0x00002C, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetOrientation' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition) == 0x000030, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::OffsetPosition' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation) == 0x000048, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::OffsetOrientation' has a wrong offset!");

// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (0x0070 - 0x0070)
class ULiveLinkAnimationAxisSwitchPreProcessor final : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationAxisSwitchPreProcessor">();
	}
	static class ULiveLinkAnimationAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000070, "Wrong size on ULiveLinkAnimationAxisSwitchPreProcessor");

// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkAnimationRoleToTransform final : public ULiveLinkFrameTranslator
{
public:
	class FName                                   BoneName;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_11F9[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationRoleToTransform">();
	}
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationRoleToTransform>();
	}
};
static_assert(alignof(ULiveLinkAnimationRoleToTransform) == 0x000008, "Wrong alignment on ULiveLinkAnimationRoleToTransform");
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x000040, "Wrong size on ULiveLinkAnimationRoleToTransform");
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x000028, "Member 'ULiveLinkAnimationRoleToTransform::BoneName' has a wrong offset!");

// Class LiveLink.LiveLinkBlueprintVirtualSubject
// 0x0028 (0x0188 - 0x0160)
class ULiveLinkBlueprintVirtualSubject final : public ULiveLinkVirtualSubject
{
public:
	uint8                                         Pad_11FA[0x28];                                    // 0x0160(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnInitialize();
	void OnUpdate();
	bool UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
	bool UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBlueprintVirtualSubject">();
	}
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBlueprintVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkBlueprintVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkBlueprintVirtualSubject");
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x000188, "Wrong size on ULiveLinkBlueprintVirtualSubject");

}

