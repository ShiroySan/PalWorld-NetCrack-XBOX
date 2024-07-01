#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionGenerateEnergy_Fire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionGenerateEnergy_Fire.BP_ActionGenerateEnergy_Fire_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionGenerateEnergy_Fire_C final : public UPalActionBase
{
public:
	uint8                                         Pad_36FD[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 _____;                                             // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      SpawnedEffect;                                     // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Effect;                                            // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionGenerateEnergy_Fire(int32 EntryPoint);
	void Find_Cooking_Montage(class UAnimMontage** Montage, bool* Exist);
	void OnBeginAction();
	void OnBlendOut_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnBlendOut_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnCompleted_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnCompleted_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnInterrupted_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnNotifyBegin_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnNotifyBegin_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnNotifyEnd_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnNotifyEnd_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void SpawnEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionGenerateEnergy_Fire_C">();
	}
	static class UBP_ActionGenerateEnergy_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionGenerateEnergy_Fire_C>();
	}
};
static_assert(alignof(UBP_ActionGenerateEnergy_Fire_C) == 0x000010, "Wrong alignment on UBP_ActionGenerateEnergy_Fire_C");
static_assert(sizeof(UBP_ActionGenerateEnergy_Fire_C) == 0x000160, "Wrong size on UBP_ActionGenerateEnergy_Fire_C");
static_assert(offsetof(UBP_ActionGenerateEnergy_Fire_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionGenerateEnergy_Fire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionGenerateEnergy_Fire_C, _____) == 0x000148, "Member 'UBP_ActionGenerateEnergy_Fire_C::_____' has a wrong offset!");
static_assert(offsetof(UBP_ActionGenerateEnergy_Fire_C, SpawnedEffect) == 0x000150, "Member 'UBP_ActionGenerateEnergy_Fire_C::SpawnedEffect' has a wrong offset!");
static_assert(offsetof(UBP_ActionGenerateEnergy_Fire_C, Effect) == 0x000158, "Member 'UBP_ActionGenerateEnergy_Fire_C::Effect' has a wrong offset!");

}

