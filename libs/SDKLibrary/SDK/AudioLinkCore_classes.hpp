#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioLinkCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioLinkCore.AudioLinkSettingsAbstract
// 0x0010 (0x0038 - 0x0028)
class UAudioLinkSettingsAbstract : public UObject
{
public:
	uint8                                         Pad_1E1F[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioLinkSettingsAbstract">();
	}
	static class UAudioLinkSettingsAbstract* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioLinkSettingsAbstract>();
	}
};
static_assert(alignof(UAudioLinkSettingsAbstract) == 0x000008, "Wrong alignment on UAudioLinkSettingsAbstract");
static_assert(sizeof(UAudioLinkSettingsAbstract) == 0x000038, "Wrong size on UAudioLinkSettingsAbstract");

}

