#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalGroupManager

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalGroupManager.BP_PalGroupManager_C
// 0x0000 (0x0268 - 0x0268)
class UBP_PalGroupManager_C final : public UPalGroupManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalGroupManager_C">();
	}
	static class UBP_PalGroupManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalGroupManager_C>();
	}
};
static_assert(alignof(UBP_PalGroupManager_C) == 0x000008, "Wrong alignment on UBP_PalGroupManager_C");
static_assert(sizeof(UBP_PalGroupManager_C) == 0x000268, "Wrong size on UBP_PalGroupManager_C");

}

