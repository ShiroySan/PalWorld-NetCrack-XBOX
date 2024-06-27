#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Flamed

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C
// 0x0018 (0x0088 - 0x0070)
class UBP_VisualEffect_Status_Flamed_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Scale;                                             // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_Status_Flamed(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Status_Flamed_C">();
	}
	static class UBP_VisualEffect_Status_Flamed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Status_Flamed_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Status_Flamed_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Status_Flamed_C");
static_assert(sizeof(UBP_VisualEffect_Status_Flamed_C) == 0x000088, "Wrong size on UBP_VisualEffect_Status_Flamed_C");
static_assert(offsetof(UBP_VisualEffect_Status_Flamed_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Status_Flamed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Flamed_C, Scale) == 0x000078, "Member 'UBP_VisualEffect_Status_Flamed_C::Scale' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_Status_Flamed_C, Niagara) == 0x000080, "Member 'UBP_VisualEffect_Status_Flamed_C::Niagara' has a wrong offset!");

}

