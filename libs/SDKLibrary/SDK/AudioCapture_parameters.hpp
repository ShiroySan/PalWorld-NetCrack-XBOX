#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCapture

#include "Basic.hpp"

#include "AudioCapture_structs.hpp"


namespace SDK::Params
{

// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// 0x0014 (0x0014 - 0x0000)
struct AudioCapture_GetAudioCaptureDeviceInfo final
{
public:
	struct FAudioCaptureDeviceInfo                OutInfo;                                           // 0x0000(0x0010)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2445[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AudioCapture_GetAudioCaptureDeviceInfo) == 0x000004, "Wrong alignment on AudioCapture_GetAudioCaptureDeviceInfo");
static_assert(sizeof(AudioCapture_GetAudioCaptureDeviceInfo) == 0x000014, "Wrong size on AudioCapture_GetAudioCaptureDeviceInfo");
static_assert(offsetof(AudioCapture_GetAudioCaptureDeviceInfo, OutInfo) == 0x000000, "Member 'AudioCapture_GetAudioCaptureDeviceInfo::OutInfo' has a wrong offset!");
static_assert(offsetof(AudioCapture_GetAudioCaptureDeviceInfo, ReturnValue) == 0x000010, "Member 'AudioCapture_GetAudioCaptureDeviceInfo::ReturnValue' has a wrong offset!");

// Function AudioCapture.AudioCapture.IsCapturingAudio
// 0x0001 (0x0001 - 0x0000)
struct AudioCapture_IsCapturingAudio final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioCapture_IsCapturingAudio) == 0x000001, "Wrong alignment on AudioCapture_IsCapturingAudio");
static_assert(sizeof(AudioCapture_IsCapturingAudio) == 0x000001, "Wrong size on AudioCapture_IsCapturingAudio");
static_assert(offsetof(AudioCapture_IsCapturingAudio, ReturnValue) == 0x000000, "Member 'AudioCapture_IsCapturingAudio::ReturnValue' has a wrong offset!");

// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// 0x0008 (0x0008 - 0x0000)
struct AudioCaptureFunctionLibrary_CreateAudioCapture final
{
public:
	class UAudioCapture*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioCaptureFunctionLibrary_CreateAudioCapture) == 0x000008, "Wrong alignment on AudioCaptureFunctionLibrary_CreateAudioCapture");
static_assert(sizeof(AudioCaptureFunctionLibrary_CreateAudioCapture) == 0x000008, "Wrong size on AudioCaptureFunctionLibrary_CreateAudioCapture");
static_assert(offsetof(AudioCaptureFunctionLibrary_CreateAudioCapture, ReturnValue) == 0x000000, "Member 'AudioCaptureFunctionLibrary_CreateAudioCapture::ReturnValue' has a wrong offset!");

// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
// 0x0040 (0x0040 - 0x0000)
struct AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString final
{
public:
	struct FAudioInputDeviceInfo                  Info;                                              // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0030(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString) == 0x000008, "Wrong alignment on AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString");
static_assert(sizeof(AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString) == 0x000040, "Wrong size on AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString");
static_assert(offsetof(AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString, Info) == 0x000000, "Member 'AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString::Info' has a wrong offset!");
static_assert(offsetof(AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString, ReturnValue) == 0x000030, "Member 'AudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString::ReturnValue' has a wrong offset!");

// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
// 0x0018 (0x0018 - 0x0000)
struct AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(TArray<struct FAudioInputDeviceInfo>& AvailableDevices)> OnObtainDevicesEvent;                              // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices) == 0x000008, "Wrong alignment on AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices");
static_assert(sizeof(AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices) == 0x000018, "Wrong size on AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices");
static_assert(offsetof(AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices, WorldContextObject) == 0x000000, "Member 'AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices, OnObtainDevicesEvent) == 0x000008, "Member 'AudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices::OnObtainDevicesEvent' has a wrong offset!");

}

