#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraAnimNotifies

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "NiagaraAnimNotifies_structs.hpp"


namespace SDK
{

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                         Template;                                          // 0x0030(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0038(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocationOffset;                                    // 0x0040(0x0018)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0058(0x0018)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bDestroyAtEnd;                                     // 0x0070(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119D[0x7];                                     // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_TimedNiagaraEffect">();
	}
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_TimedNiagaraEffect>();
	}
};
static_assert(alignof(UAnimNotifyState_TimedNiagaraEffect) == 0x000008, "Wrong alignment on UAnimNotifyState_TimedNiagaraEffect");
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffect) == 0x000078, "Wrong size on UAnimNotifyState_TimedNiagaraEffect");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 0x000030, "Member 'UAnimNotifyState_TimedNiagaraEffect::Template' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 0x000038, "Member 'UAnimNotifyState_TimedNiagaraEffect::SocketName' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 0x000040, "Member 'UAnimNotifyState_TimedNiagaraEffect::LocationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 0x000058, "Member 'UAnimNotifyState_TimedNiagaraEffect::RotationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, bDestroyAtEnd) == 0x000070, "Member 'UAnimNotifyState_TimedNiagaraEffect::bDestroyAtEnd' has a wrong offset!");

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// 0x0070 (0x00E8 - 0x0078)
class UAnimNotifyState_TimedNiagaraEffectAdvanced final : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                          bEnableNormalizedNotifyProgress;                   // 0x0078(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119E[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NotifyProgressUserParameter;                       // 0x007C(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119F[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCurveParameterPair>            AnimCurves;                                        // 0x0088(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A0[0x50];                                    // 0x0098(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetNotifyProgress(class UMeshComponent* MeshComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_TimedNiagaraEffectAdvanced">();
	}
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_TimedNiagaraEffectAdvanced>();
	}
};
static_assert(alignof(UAnimNotifyState_TimedNiagaraEffectAdvanced) == 0x000008, "Wrong alignment on UAnimNotifyState_TimedNiagaraEffectAdvanced");
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced) == 0x0000E8, "Wrong size on UAnimNotifyState_TimedNiagaraEffectAdvanced");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, bEnableNormalizedNotifyProgress) == 0x000078, "Member 'UAnimNotifyState_TimedNiagaraEffectAdvanced::bEnableNormalizedNotifyProgress' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, NotifyProgressUserParameter) == 0x00007C, "Member 'UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyProgressUserParameter' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, AnimCurves) == 0x000088, "Member 'UAnimNotifyState_TimedNiagaraEffectAdvanced::AnimCurves' has a wrong offset!");

// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// 0x0098 (0x00D0 - 0x0038)
class alignas(0x10) UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                         Template;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocationOffset;                                    // 0x0040(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0058(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0070(0x0018)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAbsoluteScale;                                    // 0x0088(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A2[0x37];                                    // 0x0089(0x0037)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Attached : 1;                                      // 0x00C0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11A3[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x00C4(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A4[0x4];                                     // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UFXSystemComponent* GetSpawnedEffect() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayNiagaraEffect">();
	}
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayNiagaraEffect>();
	}
};
static_assert(alignof(UAnimNotify_PlayNiagaraEffect) == 0x000010, "Wrong alignment on UAnimNotify_PlayNiagaraEffect");
static_assert(sizeof(UAnimNotify_PlayNiagaraEffect) == 0x0000D0, "Wrong size on UAnimNotify_PlayNiagaraEffect");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 0x000038, "Member 'UAnimNotify_PlayNiagaraEffect::Template' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 0x000040, "Member 'UAnimNotify_PlayNiagaraEffect::LocationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 0x000058, "Member 'UAnimNotify_PlayNiagaraEffect::RotationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 0x000070, "Member 'UAnimNotify_PlayNiagaraEffect::Scale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, bAbsoluteScale) == 0x000088, "Member 'UAnimNotify_PlayNiagaraEffect::bAbsoluteScale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 0x0000C4, "Member 'UAnimNotify_PlayNiagaraEffect::SocketName' has a wrong offset!");

}

