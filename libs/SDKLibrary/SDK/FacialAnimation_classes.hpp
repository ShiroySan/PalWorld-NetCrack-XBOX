#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FacialAnimation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x0CA0 - 0x0C60)
class UAudioCurveSourceComponent final : public UAudioComponent
{
public:
	uint8                                         Pad_C60[0x8];                                      // 0x0C60(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CurveSourceBindingName;                            // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveSyncOffset;                                   // 0x0C70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C74[0x2C];                                     // 0x0C74(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCurveSourceComponent">();
	}
	static class UAudioCurveSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCurveSourceComponent>();
	}
};
static_assert(alignof(UAudioCurveSourceComponent) == 0x000010, "Wrong alignment on UAudioCurveSourceComponent");
static_assert(sizeof(UAudioCurveSourceComponent) == 0x000CA0, "Wrong size on UAudioCurveSourceComponent");
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x000C68, "Member 'UAudioCurveSourceComponent::CurveSourceBindingName' has a wrong offset!");
static_assert(offsetof(UAudioCurveSourceComponent, CurveSyncOffset) == 0x000C70, "Member 'UAudioCurveSourceComponent::CurveSyncOffset' has a wrong offset!");

}

