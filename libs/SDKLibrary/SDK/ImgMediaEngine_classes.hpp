#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImgMediaEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ImgMediaEngine.ImgMediaPlaybackComponent
// 0x0028 (0x00C8 - 0x00A0)
class UImgMediaPlaybackComponent final : public UActorComponent
{
public:
	float                                         LODBias;                                           // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2485[0x24];                                    // 0x00A4(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImgMediaPlaybackComponent">();
	}
	static class UImgMediaPlaybackComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImgMediaPlaybackComponent>();
	}
};
static_assert(alignof(UImgMediaPlaybackComponent) == 0x000008, "Wrong alignment on UImgMediaPlaybackComponent");
static_assert(sizeof(UImgMediaPlaybackComponent) == 0x0000C8, "Wrong size on UImgMediaPlaybackComponent");
static_assert(offsetof(UImgMediaPlaybackComponent, LODBias) == 0x0000A0, "Member 'UImgMediaPlaybackComponent::LODBias' has a wrong offset!");

}

