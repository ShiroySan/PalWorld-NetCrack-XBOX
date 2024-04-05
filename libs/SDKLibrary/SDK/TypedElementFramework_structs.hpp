#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TypedElementFramework

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FScriptTypedElementHandle final
{
public:
	uint8                                         Pad_3255[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptTypedElementHandle) == 0x000008, "Wrong alignment on FScriptTypedElementHandle");
static_assert(sizeof(FScriptTypedElementHandle) == 0x000008, "Wrong size on FScriptTypedElementHandle");

// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FScriptTypedElementListProxy final
{
public:
	uint8                                         Pad_3256[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptTypedElementListProxy) == 0x000008, "Wrong alignment on FScriptTypedElementListProxy");
static_assert(sizeof(FScriptTypedElementListProxy) == 0x000010, "Wrong size on FScriptTypedElementListProxy");

}

