#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalActionTransportItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalActionTransportItem.BP_PalActionTransportItem_C
// 0x0010 (0x0170 - 0x0160)
class UBP_PalActionTransportItem_C final : public UPalActionTransportItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PalActionTransportItem(int32 EntryPoint);
	void FindMontage(class UAnimMontage** Montage, bool* Exist);
	void OnBeginAction();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalActionTransportItem_C">();
	}
	static class UBP_PalActionTransportItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalActionTransportItem_C>();
	}
};
static_assert(alignof(UBP_PalActionTransportItem_C) == 0x000010, "Wrong alignment on UBP_PalActionTransportItem_C");
static_assert(sizeof(UBP_PalActionTransportItem_C) == 0x000170, "Wrong size on UBP_PalActionTransportItem_C");
static_assert(offsetof(UBP_PalActionTransportItem_C, UberGraphFrame) == 0x000160, "Member 'UBP_PalActionTransportItem_C::UberGraphFrame' has a wrong offset!");

}

