#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalDeadBodyManager

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalDeadBodyManager.BP_PalDeadBodyManager_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PalDeadBodyManager_C final : public UPalDeadBodyManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalDeadBodyManager_C">();
	}
	static class UBP_PalDeadBodyManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalDeadBodyManager_C>();
	}
};
static_assert(alignof(UBP_PalDeadBodyManager_C) == 0x000008, "Wrong alignment on UBP_PalDeadBodyManager_C");
static_assert(sizeof(UBP_PalDeadBodyManager_C) == 0x000038, "Wrong size on UBP_PalDeadBodyManager_C");

}

