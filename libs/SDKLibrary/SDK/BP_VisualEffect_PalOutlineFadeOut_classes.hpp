#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_PalOutlineFadeOut

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C
// 0x0020 (0x0090 - 0x0070)
class UBP_VisualEffect_PalOutlineFadeOut_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Alpha;                                             // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fade_Speed;                                        // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Material;                                          // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_PalOutlineFadeOut_C">();
	}
	static class UBP_VisualEffect_PalOutlineFadeOut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_PalOutlineFadeOut_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_PalOutlineFadeOut_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_PalOutlineFadeOut_C");
static_assert(sizeof(UBP_VisualEffect_PalOutlineFadeOut_C) == 0x000090, "Wrong size on UBP_VisualEffect_PalOutlineFadeOut_C");
static_assert(offsetof(UBP_VisualEffect_PalOutlineFadeOut_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_PalOutlineFadeOut_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_PalOutlineFadeOut_C, Alpha) == 0x000078, "Member 'UBP_VisualEffect_PalOutlineFadeOut_C::Alpha' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_PalOutlineFadeOut_C, Fade_Speed) == 0x000080, "Member 'UBP_VisualEffect_PalOutlineFadeOut_C::Fade_Speed' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_PalOutlineFadeOut_C, Material) == 0x000088, "Member 'UBP_VisualEffect_PalOutlineFadeOut_C::Material' has a wrong offset!");

}

