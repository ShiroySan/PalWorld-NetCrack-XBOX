#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraAnimNotifies

#include "Basic.hpp"


namespace SDK::Params
{

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemComponent*                     ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong alignment on AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect");
static_assert(sizeof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect) == 0x000010, "Wrong size on AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, MeshComp) == 0x000000, "Member 'AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, ReturnValue) == 0x000008, "Member 'AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect::ReturnValue' has a wrong offset!");

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E7[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress) == 0x000008, "Wrong alignment on AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress");
static_assert(sizeof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress) == 0x000010, "Wrong size on AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, MeshComp) == 0x000000, "Member 'AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, ReturnValue) == 0x000008, "Member 'AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress::ReturnValue' has a wrong offset!");

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// 0x0008 (0x0008 - 0x0000)
struct AnimNotify_PlayNiagaraEffect_GetSpawnedEffect final
{
public:
	class UFXSystemComponent*                     ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong alignment on AnimNotify_PlayNiagaraEffect_GetSpawnedEffect");
static_assert(sizeof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong size on AnimNotify_PlayNiagaraEffect_GetSpawnedEffect");
static_assert(offsetof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect, ReturnValue) == 0x000000, "Member 'AnimNotify_PlayNiagaraEffect_GetSpawnedEffect::ReturnValue' has a wrong offset!");

}

