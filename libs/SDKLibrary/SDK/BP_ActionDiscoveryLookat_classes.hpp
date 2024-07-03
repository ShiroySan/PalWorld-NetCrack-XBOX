#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDiscoveryLookat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionDiscoveryLookat_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagra;                                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionDiscoveryLookat(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnFinishedFX(class UNiagaraComponent* PSystem);
	void TickAction(float DeltaTime);
	void TurnToTargetOneFrame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDiscoveryLookat_C">();
	}
	static class UBP_ActionDiscoveryLookat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDiscoveryLookat_C>();
	}
};
static_assert(alignof(UBP_ActionDiscoveryLookat_C) == 0x000010, "Wrong alignment on UBP_ActionDiscoveryLookat_C");
static_assert(sizeof(UBP_ActionDiscoveryLookat_C) == 0x000150, "Wrong size on UBP_ActionDiscoveryLookat_C");
static_assert(offsetof(UBP_ActionDiscoveryLookat_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionDiscoveryLookat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionDiscoveryLookat_C, Niagra) == 0x000148, "Member 'UBP_ActionDiscoveryLookat_C::Niagra' has a wrong offset!");

}

