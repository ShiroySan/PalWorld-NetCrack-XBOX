#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkCamera

#include "Basic.hpp"

#include "CameraCalibrationCore_structs.hpp"
#include "LiveLinkComponents_classes.hpp"
#include "LiveLinkCamera_structs.hpp"


namespace SDK
{

// Class LiveLinkCamera.LiveLinkCameraController
// 0x0060 (0x00C8 - 0x0068)
class ULiveLinkCameraController final : public ULiveLinkControllerBase
{
public:
	bool                                          bUseCameraRange;                                   // 0x0068(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1988[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLensFilePicker                        LensFilePicker;                                    // 0x0070(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkCameraControllerUpdateFlags   UpdateFlags;                                       // 0x0080(0x0007)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1989[0x41];                                    // 0x0087(0x0041)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkCameraController">();
	}
	static class ULiveLinkCameraController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkCameraController>();
	}
};
static_assert(alignof(ULiveLinkCameraController) == 0x000008, "Wrong alignment on ULiveLinkCameraController");
static_assert(sizeof(ULiveLinkCameraController) == 0x0000C8, "Wrong size on ULiveLinkCameraController");
static_assert(offsetof(ULiveLinkCameraController, bUseCameraRange) == 0x000068, "Member 'ULiveLinkCameraController::bUseCameraRange' has a wrong offset!");
static_assert(offsetof(ULiveLinkCameraController, LensFilePicker) == 0x000070, "Member 'ULiveLinkCameraController::LensFilePicker' has a wrong offset!");
static_assert(offsetof(ULiveLinkCameraController, UpdateFlags) == 0x000080, "Member 'ULiveLinkCameraController::UpdateFlags' has a wrong offset!");

}

