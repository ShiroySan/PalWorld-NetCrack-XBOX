#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"


namespace SDK
{

// Enum AudioMixer.EAudioDeviceChangedRole
// NumValues: 0x0006
enum class EAudioDeviceChangedRole : uint8
{
	Invalid                                  = 0,
	Console                                  = 1,
	Multimedia                               = 2,
	Communications                           = 3,
	Count                                    = 4,
	EAudioDeviceChangedRole_MAX              = 5,
};

// Enum AudioMixer.EAudioDeviceChangedState
// NumValues: 0x0007
enum class EAudioDeviceChangedState : uint8
{
	Invalid                                  = 0,
	Active                                   = 1,
	Disabled                                 = 2,
	NotPresent                               = 3,
	Unplugged                                = 4,
	Count                                    = 5,
	EAudioDeviceChangedState_MAX             = 6,
};

// Enum AudioMixer.EAudioMixerChannelType
// NumValues: 0x0016
enum class EAudioMixerChannelType : uint8
{
	FrontLeft                                = 0,
	FrontRight                               = 1,
	FrontCenter                              = 2,
	LowFrequency                             = 3,
	BackLeft                                 = 4,
	BackRight                                = 5,
	FrontLeftOfCenter                        = 6,
	FrontRightOfCenter                       = 7,
	BackCenter                               = 8,
	SideLeft                                 = 9,
	SideRight                                = 10,
	TopCenter                                = 11,
	TopFrontLeft                             = 12,
	TopFrontCenter                           = 13,
	TopFrontRight                            = 14,
	TopBackLeft                              = 15,
	TopBackCenter                            = 16,
	TopBackRight                             = 17,
	Unknown                                  = 18,
	ChannelTypeCount                         = 19,
	DefaultChannel                           = 0,
	EAudioMixerChannelType_MAX               = 20,
};

// Enum AudioMixer.EAudioMixerStreamDataFormatType
// NumValues: 0x0005
enum class EAudioMixerStreamDataFormatType : uint8
{
	Unknown                                  = 0,
	Float                                    = 1,
	Int16                                    = 2,
	Unsupported                              = 3,
	EAudioMixerStreamDataFormatType_MAX      = 4,
};

// Enum AudioMixer.ESwapAudioOutputDeviceResultState
// NumValues: 0x0004
enum class ESwapAudioOutputDeviceResultState : uint8
{
	Failure                                  = 0,
	Success                                  = 1,
	None                                     = 2,
	ESwapAudioOutputDeviceResultState_MAX    = 3,
};

// Enum AudioMixer.EMusicalNoteName
// NumValues: 0x000D
enum class EMusicalNoteName : uint8
{
	C                                        = 0,
	Db                                       = 1,
	D                                        = 2,
	Eb                                       = 3,
	E                                        = 4,
	F                                        = 5,
	Gb                                       = 6,
	G                                        = 7,
	Ab                                       = 8,
	A                                        = 9,
	Bb                                       = 10,
	B                                        = 11,
	EMusicalNoteName_MAX                     = 12,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
// NumValues: 0x0007
enum class ESubmixEffectDynamicsProcessorType : uint8
{
	Compressor                               = 0,
	Limiter                                  = 1,
	Expander                                 = 2,
	Gate                                     = 3,
	UpwardsCompressor                        = 4,
	Count                                    = 5,
	ESubmixEffectDynamicsProcessorType_MAX   = 6,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
// NumValues: 0x0005
enum class ESubmixEffectDynamicsPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsPeakMode_MAX        = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
// NumValues: 0x0005
enum class ESubmixEffectDynamicsChannelLinkMode : uint8
{
	Disabled                                 = 0,
	Average                                  = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsKeySource
// NumValues: 0x0005
enum class ESubmixEffectDynamicsKeySource : uint8
{
	Default                                  = 0,
	AudioBus                                 = 1,
	Submix                                   = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsKeySource_MAX       = 4,
};

// ScriptStruct AudioMixer.AudioOutputDeviceInfo
// 0x0048 (0x0048 - 0x0000)
struct FAudioOutputDeviceInfo final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DeviceID;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumChannels;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SampleRate;                                        // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioMixerStreamDataFormatType               Format;                                            // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1637[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EAudioMixerChannelType>                OutputChannelArray;                                // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bIsSystemDefault : 1;                              // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsCurrentDevice : 1;                              // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1638[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioOutputDeviceInfo) == 0x000008, "Wrong alignment on FAudioOutputDeviceInfo");
static_assert(sizeof(FAudioOutputDeviceInfo) == 0x000048, "Wrong size on FAudioOutputDeviceInfo");
static_assert(offsetof(FAudioOutputDeviceInfo, Name) == 0x000000, "Member 'FAudioOutputDeviceInfo::Name' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, DeviceID) == 0x000010, "Member 'FAudioOutputDeviceInfo::DeviceID' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, NumChannels) == 0x000020, "Member 'FAudioOutputDeviceInfo::NumChannels' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, SampleRate) == 0x000024, "Member 'FAudioOutputDeviceInfo::SampleRate' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, Format) == 0x000028, "Member 'FAudioOutputDeviceInfo::Format' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, OutputChannelArray) == 0x000030, "Member 'FAudioOutputDeviceInfo::OutputChannelArray' has a wrong offset!");

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectEQBand final
{
public:
	float                                         Frequency;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Bandwidth;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainDb;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1639[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSubmixEffectEQBand) == 0x000004, "Wrong alignment on FSubmixEffectEQBand");
static_assert(sizeof(FSubmixEffectEQBand) == 0x000010, "Wrong size on FSubmixEffectEQBand");
static_assert(offsetof(FSubmixEffectEQBand, Frequency) == 0x000000, "Member 'FSubmixEffectEQBand::Frequency' has a wrong offset!");
static_assert(offsetof(FSubmixEffectEQBand, Bandwidth) == 0x000004, "Member 'FSubmixEffectEQBand::Bandwidth' has a wrong offset!");
static_assert(offsetof(FSubmixEffectEQBand, GainDb) == 0x000008, "Member 'FSubmixEffectEQBand::GainDb' has a wrong offset!");

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectSubmixEQSettings final
{
public:
	TArray<struct FSubmixEffectEQBand>            EQBands;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSubmixEffectSubmixEQSettings) == 0x000008, "Wrong alignment on FSubmixEffectSubmixEQSettings");
static_assert(sizeof(FSubmixEffectSubmixEQSettings) == 0x000010, "Wrong size on FSubmixEffectSubmixEQSettings");
static_assert(offsetof(FSubmixEffectSubmixEQSettings, EQBands) == 0x000000, "Member 'FSubmixEffectSubmixEQSettings::EQBands' has a wrong offset!");

// ScriptStruct AudioMixer.SwapAudioOutputResult
// 0x0028 (0x0028 - 0x0000)
struct FSwapAudioOutputResult final
{
public:
	class FString                                 CurrentDeviceId;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RequestedDeviceId;                                 // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESwapAudioOutputDeviceResultState             Result;                                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163A[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSwapAudioOutputResult) == 0x000008, "Wrong alignment on FSwapAudioOutputResult");
static_assert(sizeof(FSwapAudioOutputResult) == 0x000028, "Wrong size on FSwapAudioOutputResult");
static_assert(offsetof(FSwapAudioOutputResult, CurrentDeviceId) == 0x000000, "Member 'FSwapAudioOutputResult::CurrentDeviceId' has a wrong offset!");
static_assert(offsetof(FSwapAudioOutputResult, RequestedDeviceId) == 0x000010, "Member 'FSwapAudioOutputResult::RequestedDeviceId' has a wrong offset!");
static_assert(offsetof(FSwapAudioOutputResult, Result) == 0x000020, "Member 'FSwapAudioOutputResult::Result' has a wrong offset!");

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// 0x000C (0x000C - 0x0000)
struct FSubmixEffectDynamicProcessorFilterSettings final
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_163B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cutoff;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainDb;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSubmixEffectDynamicProcessorFilterSettings) == 0x000004, "Wrong alignment on FSubmixEffectDynamicProcessorFilterSettings");
static_assert(sizeof(FSubmixEffectDynamicProcessorFilterSettings) == 0x00000C, "Wrong size on FSubmixEffectDynamicProcessorFilterSettings");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, Cutoff) == 0x000004, "Member 'FSubmixEffectDynamicProcessorFilterSettings::Cutoff' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, GainDb) == 0x000008, "Member 'FSubmixEffectDynamicProcessorFilterSettings::GainDb' has a wrong offset!");

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0060 (0x0060 - 0x0000)
struct FSubmixEffectDynamicsProcessorSettings final
{
public:
	ESubmixEffectDynamicsProcessorType            DynamicsProcessorType;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsPeakMode                 PeakMode;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsChannelLinkMode          LinkMode;                                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163C[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InputGainDb;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThresholdDb;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ratio;                                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         KneeBandwidthDb;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LookAheadMsec;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTimeMsec;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTimeMsec;                                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsKeySource                KeySource;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioBus*                              ExternalAudioBus;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                           ExternalSubmix;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bChannelLinked : 1;                                // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAnalogMode : 1;                                   // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bBypass : 1;                                       // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKeyAudition : 1;                                  // 0x0038(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_163E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         KeyGainDb;                                         // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputGainDb;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                      // 0x0044(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                       // 0x0050(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_163F[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSubmixEffectDynamicsProcessorSettings) == 0x000008, "Wrong alignment on FSubmixEffectDynamicsProcessorSettings");
static_assert(sizeof(FSubmixEffectDynamicsProcessorSettings) == 0x000060, "Wrong size on FSubmixEffectDynamicsProcessorSettings");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x000000, "Member 'FSubmixEffectDynamicsProcessorSettings::DynamicsProcessorType' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, PeakMode) == 0x000001, "Member 'FSubmixEffectDynamicsProcessorSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LinkMode) == 0x000002, "Member 'FSubmixEffectDynamicsProcessorSettings::LinkMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, InputGainDb) == 0x000004, "Member 'FSubmixEffectDynamicsProcessorSettings::InputGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ThresholdDb) == 0x000008, "Member 'FSubmixEffectDynamicsProcessorSettings::ThresholdDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, Ratio) == 0x00000C, "Member 'FSubmixEffectDynamicsProcessorSettings::Ratio' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb) == 0x000010, "Member 'FSubmixEffectDynamicsProcessorSettings::KneeBandwidthDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec) == 0x000014, "Member 'FSubmixEffectDynamicsProcessorSettings::LookAheadMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec) == 0x000018, "Member 'FSubmixEffectDynamicsProcessorSettings::AttackTimeMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec) == 0x00001C, "Member 'FSubmixEffectDynamicsProcessorSettings::ReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeySource) == 0x000020, "Member 'FSubmixEffectDynamicsProcessorSettings::KeySource' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalAudioBus) == 0x000028, "Member 'FSubmixEffectDynamicsProcessorSettings::ExternalAudioBus' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix) == 0x000030, "Member 'FSubmixEffectDynamicsProcessorSettings::ExternalSubmix' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyGainDb) == 0x00003C, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, OutputGainDb) == 0x000040, "Member 'FSubmixEffectDynamicsProcessorSettings::OutputGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf) == 0x000044, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyHighshelf' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf) == 0x000050, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyLowshelf' has a wrong offset!");

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0040 (0x0040 - 0x0000)
struct FSubmixEffectReverbSettings final
{
public:
	bool                                          bBypassEarlyReflections;                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1640[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReflectionsDelay;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainHF;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsGain;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypassLateReflections;                            // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1641[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LateDelay;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayTime;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Density;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Diffusion;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirAbsorptionGainHF;                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayHFRatio;                                      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateGain;                                          // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gain;                                              // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WetLevel;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DryLevel;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypass;                                           // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1642[0x3];                                     // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSubmixEffectReverbSettings) == 0x000004, "Wrong alignment on FSubmixEffectReverbSettings");
static_assert(sizeof(FSubmixEffectReverbSettings) == 0x000040, "Wrong size on FSubmixEffectReverbSettings");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypassEarlyReflections) == 0x000000, "Member 'FSubmixEffectReverbSettings::bBypassEarlyReflections' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsDelay) == 0x000004, "Member 'FSubmixEffectReverbSettings::ReflectionsDelay' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, GainHF) == 0x000008, "Member 'FSubmixEffectReverbSettings::GainHF' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsGain) == 0x00000C, "Member 'FSubmixEffectReverbSettings::ReflectionsGain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypassLateReflections) == 0x000010, "Member 'FSubmixEffectReverbSettings::bBypassLateReflections' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, LateDelay) == 0x000014, "Member 'FSubmixEffectReverbSettings::LateDelay' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayTime) == 0x000018, "Member 'FSubmixEffectReverbSettings::DecayTime' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Density) == 0x00001C, "Member 'FSubmixEffectReverbSettings::Density' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Diffusion) == 0x000020, "Member 'FSubmixEffectReverbSettings::Diffusion' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, AirAbsorptionGainHF) == 0x000024, "Member 'FSubmixEffectReverbSettings::AirAbsorptionGainHF' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayHFRatio) == 0x000028, "Member 'FSubmixEffectReverbSettings::DecayHFRatio' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, LateGain) == 0x00002C, "Member 'FSubmixEffectReverbSettings::LateGain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Gain) == 0x000030, "Member 'FSubmixEffectReverbSettings::Gain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, WetLevel) == 0x000034, "Member 'FSubmixEffectReverbSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DryLevel) == 0x000038, "Member 'FSubmixEffectReverbSettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypass) == 0x00003C, "Member 'FSubmixEffectReverbSettings::bBypass' has a wrong offset!");

}

