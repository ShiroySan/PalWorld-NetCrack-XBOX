#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Proxy_ReturnToBallEmissive

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_Proxy_ReturnToBallEmissive.BP_VisualEffect_Proxy_ReturnToBallEmissive_C
// 0x0008 (0x0078 - 0x0070)
class UBP_VisualEffect_Proxy_ReturnToBallEmissive_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive(int32 EntryPoint);
	void OnBeginVisualEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Proxy_ReturnToBallEmissive_C">();
	}
	static class UBP_VisualEffect_Proxy_ReturnToBallEmissive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Proxy_ReturnToBallEmissive_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Proxy_ReturnToBallEmissive_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Proxy_ReturnToBallEmissive_C");
static_assert(sizeof(UBP_VisualEffect_Proxy_ReturnToBallEmissive_C) == 0x000078, "Wrong size on UBP_VisualEffect_Proxy_ReturnToBallEmissive_C");
static_assert(offsetof(UBP_VisualEffect_Proxy_ReturnToBallEmissive_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Proxy_ReturnToBallEmissive_C::UberGraphFrame' has a wrong offset!");

}

