#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaIOCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MediaIOCore.EFileMediaOutputPixelFormat
// NumValues: 0x0003
enum class EFileMediaOutputPixelFormat : uint32
{
	B8G8R8A8                                 = 0,
	FloatRGBA                                = 1,
	EFileMediaOutputPixelFormat_MAX          = 2,
};

// Enum MediaIOCore.EMediaCaptureState
// NumValues: 0x0006
enum class EMediaCaptureState : uint8
{
	Error                                    = 0,
	Capturing                                = 1,
	Preparing                                = 2,
	StopRequested                            = 3,
	Stopped                                  = 4,
	EMediaCaptureState_MAX                   = 5,
};

// Enum MediaIOCore.EMediaCaptureResourceType
// NumValues: 0x0003
enum class EMediaCaptureResourceType : uint8
{
	Texture                                  = 0,
	Buffer                                   = 1,
	EMediaCaptureResourceType_MAX            = 2,
};

// Enum MediaIOCore.EMediaCaptureCroppingType
// NumValues: 0x0005
enum class EMediaCaptureCroppingType : uint8
{
	None                                     = 0,
	Center                                   = 1,
	TopLeft                                  = 2,
	Custom                                   = 3,
	EMediaCaptureCroppingType_MAX            = 4,
};

// Enum MediaIOCore.EMediaCaptureOverrunAction
// NumValues: 0x0003
enum class EMediaCaptureOverrunAction : uint8
{
	Flush                                    = 0,
	Skip                                     = 1,
	EMediaCaptureOverrunAction_MAX           = 2,
};

// Enum MediaIOCore.EMediaIOTransportType
// NumValues: 0x0005
enum class EMediaIOTransportType : uint32
{
	SingleLink                               = 0,
	DualLink                                 = 1,
	QuadLink                                 = 2,
	HDMI                                     = 3,
	EMediaIOTransportType_MAX                = 4,
};

// Enum MediaIOCore.EMediaIOQuadLinkTransportType
// NumValues: 0x0003
enum class EMediaIOQuadLinkTransportType : uint32
{
	SquareDivision                           = 0,
	TwoSampleInterleave                      = 1,
	EMediaIOQuadLinkTransportType_MAX        = 2,
};

// Enum MediaIOCore.EMediaIOStandardType
// NumValues: 0x0004
enum class EMediaIOStandardType : uint32
{
	Progressive                              = 0,
	Interlaced                               = 1,
	ProgressiveSegmentedFrame                = 2,
	EMediaIOStandardType_MAX                 = 3,
};

// Enum MediaIOCore.EMediaIOTimecodeFormat
// NumValues: 0x0004
enum class EMediaIOTimecodeFormat : uint32
{
	None                                     = 0,
	LTC                                      = 1,
	VITC                                     = 2,
	EMediaIOTimecodeFormat_MAX               = 3,
};

// Enum MediaIOCore.EMediaIOAutoDetectableTimecodeFormat
// NumValues: 0x0005
enum class EMediaIOAutoDetectableTimecodeFormat : uint8
{
	None                                     = 0,
	LTC                                      = 1,
	VITC                                     = 2,
	Auto                                     = 255,
	EMediaIOAutoDetectableTimecodeFormat_MAX = 256,
};

// Enum MediaIOCore.EMediaIOInputType
// NumValues: 0x0003
enum class EMediaIOInputType : uint32
{
	Fill                                     = 0,
	FillAndKey                               = 1,
	EMediaIOInputType_MAX                    = 2,
};

// Enum MediaIOCore.EMediaIOOutputType
// NumValues: 0x0003
enum class EMediaIOOutputType : uint32
{
	Fill                                     = 0,
	FillAndKey                               = 1,
	EMediaIOOutputType_MAX                   = 2,
};

// Enum MediaIOCore.EMediaIOReferenceType
// NumValues: 0x0004
enum class EMediaIOReferenceType : uint32
{
	FreeRun                                  = 0,
	External                                 = 1,
	Input                                    = 2,
	EMediaIOReferenceType_MAX                = 3,
};

// ScriptStruct MediaIOCore.MediaCaptureOptions
// 0x0018 (0x0018 - 0x0000)
struct FMediaCaptureOptions final
{
public:
	EMediaCaptureOverrunAction                    OverrunAction;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaCaptureCroppingType                     Crop;                                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1875[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              CustomCapturePoint;                                // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bResizeSourceBuffer;                               // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipFrameWhenRunningExpensiveTasks;               // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConvertToDesiredPixelFormat;                      // 0x000E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceAlphaToOneOnConversion;                      // 0x000F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyLinearToSRGBConversion;                      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutostopOnCapture;                                // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1876[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfFramesToCapture;                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaCaptureOptions) == 0x000004, "Wrong alignment on FMediaCaptureOptions");
static_assert(sizeof(FMediaCaptureOptions) == 0x000018, "Wrong size on FMediaCaptureOptions");
static_assert(offsetof(FMediaCaptureOptions, OverrunAction) == 0x000000, "Member 'FMediaCaptureOptions::OverrunAction' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, Crop) == 0x000001, "Member 'FMediaCaptureOptions::Crop' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, CustomCapturePoint) == 0x000004, "Member 'FMediaCaptureOptions::CustomCapturePoint' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bResizeSourceBuffer) == 0x00000C, "Member 'FMediaCaptureOptions::bResizeSourceBuffer' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bSkipFrameWhenRunningExpensiveTasks) == 0x00000D, "Member 'FMediaCaptureOptions::bSkipFrameWhenRunningExpensiveTasks' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bConvertToDesiredPixelFormat) == 0x00000E, "Member 'FMediaCaptureOptions::bConvertToDesiredPixelFormat' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bForceAlphaToOneOnConversion) == 0x00000F, "Member 'FMediaCaptureOptions::bForceAlphaToOneOnConversion' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bApplyLinearToSRGBConversion) == 0x000010, "Member 'FMediaCaptureOptions::bApplyLinearToSRGBConversion' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, bAutostopOnCapture) == 0x000011, "Member 'FMediaCaptureOptions::bAutostopOnCapture' has a wrong offset!");
static_assert(offsetof(FMediaCaptureOptions, NumberOfFramesToCapture) == 0x000014, "Member 'FMediaCaptureOptions::NumberOfFramesToCapture' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOAutoDetectableTimecodeFormat_Backup
// 0x0008 (0x0008 - 0x0000)
struct FMediaIOAutoDetectableTimecodeFormat_Backup final
{
public:
	EMediaIOTimecodeFormat                        TimecodeFormat;                                    // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoDetect;                                       // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1877[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMediaIOAutoDetectableTimecodeFormat_Backup) == 0x000004, "Wrong alignment on FMediaIOAutoDetectableTimecodeFormat_Backup");
static_assert(sizeof(FMediaIOAutoDetectableTimecodeFormat_Backup) == 0x000008, "Wrong size on FMediaIOAutoDetectableTimecodeFormat_Backup");
static_assert(offsetof(FMediaIOAutoDetectableTimecodeFormat_Backup, TimecodeFormat) == 0x000000, "Member 'FMediaIOAutoDetectableTimecodeFormat_Backup::TimecodeFormat' has a wrong offset!");
static_assert(offsetof(FMediaIOAutoDetectableTimecodeFormat_Backup, bAutoDetect) == 0x000004, "Member 'FMediaIOAutoDetectableTimecodeFormat_Backup::bAutoDetect' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIODevice
// 0x000C (0x000C - 0x0000)
struct FMediaIODevice final
{
public:
	class FName                                   DeviceName;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeviceIdentifier;                                  // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIODevice) == 0x000004, "Wrong alignment on FMediaIODevice");
static_assert(sizeof(FMediaIODevice) == 0x00000C, "Wrong size on FMediaIODevice");
static_assert(offsetof(FMediaIODevice, DeviceName) == 0x000000, "Member 'FMediaIODevice::DeviceName' has a wrong offset!");
static_assert(offsetof(FMediaIODevice, DeviceIdentifier) == 0x000008, "Member 'FMediaIODevice::DeviceIdentifier' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOConnection
// 0x0020 (0x0020 - 0x0000)
struct FMediaIOConnection final
{
public:
	struct FMediaIODevice                         Device;                                            // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   Protocol;                                          // 0x000C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOTransportType                         TransportType;                                     // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOQuadLinkTransportType                 QuadTransportType;                                 // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PortIdentifier;                                    // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIOConnection) == 0x000004, "Wrong alignment on FMediaIOConnection");
static_assert(sizeof(FMediaIOConnection) == 0x000020, "Wrong size on FMediaIOConnection");
static_assert(offsetof(FMediaIOConnection, Device) == 0x000000, "Member 'FMediaIOConnection::Device' has a wrong offset!");
static_assert(offsetof(FMediaIOConnection, Protocol) == 0x00000C, "Member 'FMediaIOConnection::Protocol' has a wrong offset!");
static_assert(offsetof(FMediaIOConnection, TransportType) == 0x000014, "Member 'FMediaIOConnection::TransportType' has a wrong offset!");
static_assert(offsetof(FMediaIOConnection, QuadTransportType) == 0x000018, "Member 'FMediaIOConnection::QuadTransportType' has a wrong offset!");
static_assert(offsetof(FMediaIOConnection, PortIdentifier) == 0x00001C, "Member 'FMediaIOConnection::PortIdentifier' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOMode
// 0x0018 (0x0018 - 0x0000)
struct FMediaIOMode final
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              Resolution;                                        // 0x0008(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOStandardType                          Standard;                                          // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeviceModeIdentifier;                              // 0x0014(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIOMode) == 0x000004, "Wrong alignment on FMediaIOMode");
static_assert(sizeof(FMediaIOMode) == 0x000018, "Wrong size on FMediaIOMode");
static_assert(offsetof(FMediaIOMode, FrameRate) == 0x000000, "Member 'FMediaIOMode::FrameRate' has a wrong offset!");
static_assert(offsetof(FMediaIOMode, Resolution) == 0x000008, "Member 'FMediaIOMode::Resolution' has a wrong offset!");
static_assert(offsetof(FMediaIOMode, Standard) == 0x000010, "Member 'FMediaIOMode::Standard' has a wrong offset!");
static_assert(offsetof(FMediaIOMode, DeviceModeIdentifier) == 0x000014, "Member 'FMediaIOMode::DeviceModeIdentifier' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOConfiguration
// 0x003C (0x003C - 0x0000)
struct FMediaIOConfiguration final
{
public:
	bool                                          bIsInput;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1878[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMediaIOConnection                     MediaConnection;                                   // 0x0004(0x0020)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMediaIOMode                           MediaMode;                                         // 0x0024(0x0018)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIOConfiguration) == 0x000004, "Wrong alignment on FMediaIOConfiguration");
static_assert(sizeof(FMediaIOConfiguration) == 0x00003C, "Wrong size on FMediaIOConfiguration");
static_assert(offsetof(FMediaIOConfiguration, bIsInput) == 0x000000, "Member 'FMediaIOConfiguration::bIsInput' has a wrong offset!");
static_assert(offsetof(FMediaIOConfiguration, MediaConnection) == 0x000004, "Member 'FMediaIOConfiguration::MediaConnection' has a wrong offset!");
static_assert(offsetof(FMediaIOConfiguration, MediaMode) == 0x000024, "Member 'FMediaIOConfiguration::MediaMode' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOInputConfiguration
// 0x0044 (0x0044 - 0x0000)
struct FMediaIOInputConfiguration final
{
public:
	struct FMediaIOConfiguration                  MediaConfiguration;                                // 0x0000(0x003C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	EMediaIOInputType                             InputType;                                         // 0x003C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         KeyPortIdentifier;                                 // 0x0040(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIOInputConfiguration) == 0x000004, "Wrong alignment on FMediaIOInputConfiguration");
static_assert(sizeof(FMediaIOInputConfiguration) == 0x000044, "Wrong size on FMediaIOInputConfiguration");
static_assert(offsetof(FMediaIOInputConfiguration, MediaConfiguration) == 0x000000, "Member 'FMediaIOInputConfiguration::MediaConfiguration' has a wrong offset!");
static_assert(offsetof(FMediaIOInputConfiguration, InputType) == 0x00003C, "Member 'FMediaIOInputConfiguration::InputType' has a wrong offset!");
static_assert(offsetof(FMediaIOInputConfiguration, KeyPortIdentifier) == 0x000040, "Member 'FMediaIOInputConfiguration::KeyPortIdentifier' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOOutputConfiguration
// 0x004C (0x004C - 0x0000)
struct FMediaIOOutputConfiguration final
{
public:
	struct FMediaIOConfiguration                  MediaConfiguration;                                // 0x0000(0x003C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	EMediaIOOutputType                            OutputType;                                        // 0x003C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         KeyPortIdentifier;                                 // 0x0040(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaIOReferenceType                         OutputReference;                                   // 0x0044(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReferencePortIdentifier;                           // 0x0048(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaIOOutputConfiguration) == 0x000004, "Wrong alignment on FMediaIOOutputConfiguration");
static_assert(sizeof(FMediaIOOutputConfiguration) == 0x00004C, "Wrong size on FMediaIOOutputConfiguration");
static_assert(offsetof(FMediaIOOutputConfiguration, MediaConfiguration) == 0x000000, "Member 'FMediaIOOutputConfiguration::MediaConfiguration' has a wrong offset!");
static_assert(offsetof(FMediaIOOutputConfiguration, OutputType) == 0x00003C, "Member 'FMediaIOOutputConfiguration::OutputType' has a wrong offset!");
static_assert(offsetof(FMediaIOOutputConfiguration, KeyPortIdentifier) == 0x000040, "Member 'FMediaIOOutputConfiguration::KeyPortIdentifier' has a wrong offset!");
static_assert(offsetof(FMediaIOOutputConfiguration, OutputReference) == 0x000044, "Member 'FMediaIOOutputConfiguration::OutputReference' has a wrong offset!");
static_assert(offsetof(FMediaIOOutputConfiguration, ReferencePortIdentifier) == 0x000048, "Member 'FMediaIOOutputConfiguration::ReferencePortIdentifier' has a wrong offset!");

// ScriptStruct MediaIOCore.MediaIOVideoTimecodeConfiguration
// 0x0040 (0x0040 - 0x0000)
struct FMediaIOVideoTimecodeConfiguration final
{
public:
	struct FMediaIOConfiguration                  MediaConfiguration;                                // 0x0000(0x003C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	EMediaIOAutoDetectableTimecodeFormat          TimecodeFormat;                                    // 0x003C(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1879[0x3];                                     // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMediaIOVideoTimecodeConfiguration) == 0x000004, "Wrong alignment on FMediaIOVideoTimecodeConfiguration");
static_assert(sizeof(FMediaIOVideoTimecodeConfiguration) == 0x000040, "Wrong size on FMediaIOVideoTimecodeConfiguration");
static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, MediaConfiguration) == 0x000000, "Member 'FMediaIOVideoTimecodeConfiguration::MediaConfiguration' has a wrong offset!");
static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, TimecodeFormat) == 0x00003C, "Member 'FMediaIOVideoTimecodeConfiguration::TimecodeFormat' has a wrong offset!");

}

