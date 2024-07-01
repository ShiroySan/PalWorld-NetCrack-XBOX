#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioSynesthesia

#include "Basic.hpp"


namespace SDK
{

// Enum AudioSynesthesia.EConstantQNormalizationEnum
// NumValues: 0x0004
enum class EConstantQNormalizationEnum : uint8
{
	EqualEuclideanNorm                       = 0,
	EqualEnergy                              = 1,
	EqualAmplitude                           = 2,
	EConstantQNormalizationEnum_MAX          = 3,
};

// Enum AudioSynesthesia.EConstantQFFTSizeEnum
// NumValues: 0x0009
enum class EConstantQFFTSizeEnum : uint8
{
	Min                                      = 0,
	XXSmall                                  = 1,
	XSmall                                   = 2,
	Small                                    = 3,
	Medium                                   = 4,
	Large                                    = 5,
	XLarge                                   = 6,
	XXLarge                                  = 7,
	Max                                      = 8,
};

// Enum AudioSynesthesia.ELoudnessCurveTypeEnum
// NumValues: 0x0006
enum class ELoudnessCurveTypeEnum : uint8
{
	A                                        = 0,
	B                                        = 1,
	C                                        = 2,
	D                                        = 3,
	None                                     = 4,
	ELoudnessCurveTypeEnum_MAX               = 5,
};

// Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
// NumValues: 0x0006
enum class ELoudnessNRTCurveTypeEnum : uint8
{
	A                                        = 0,
	B                                        = 1,
	C                                        = 2,
	D                                        = 3,
	None                                     = 4,
	ELoudnessNRTCurveTypeEnum_MAX            = 5,
};

// Enum AudioSynesthesia.EMeterPeakType
// NumValues: 0x0005
enum class EMeterPeakType : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	EMeterPeakType_MAX                       = 4,
};

// ScriptStruct AudioSynesthesia.LoudnessResults
// 0x0010 (0x0010 - 0x0000)
struct FLoudnessResults final
{
public:
	float                                         Loudness;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalizedLoudness;                                // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PerceptualEnergy;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeSeconds;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLoudnessResults) == 0x000004, "Wrong alignment on FLoudnessResults");
static_assert(sizeof(FLoudnessResults) == 0x000010, "Wrong size on FLoudnessResults");
static_assert(offsetof(FLoudnessResults, Loudness) == 0x000000, "Member 'FLoudnessResults::Loudness' has a wrong offset!");
static_assert(offsetof(FLoudnessResults, NormalizedLoudness) == 0x000004, "Member 'FLoudnessResults::NormalizedLoudness' has a wrong offset!");
static_assert(offsetof(FLoudnessResults, PerceptualEnergy) == 0x000008, "Member 'FLoudnessResults::PerceptualEnergy' has a wrong offset!");
static_assert(offsetof(FLoudnessResults, TimeSeconds) == 0x00000C, "Member 'FLoudnessResults::TimeSeconds' has a wrong offset!");

// ScriptStruct AudioSynesthesia.MeterResults
// 0x0014 (0x0014 - 0x0000)
struct FMeterResults final
{
public:
	float                                         TimeSeconds;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeterValue;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValue;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSamplesClipping;                                // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClippingValue;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMeterResults) == 0x000004, "Wrong alignment on FMeterResults");
static_assert(sizeof(FMeterResults) == 0x000014, "Wrong size on FMeterResults");
static_assert(offsetof(FMeterResults, TimeSeconds) == 0x000000, "Member 'FMeterResults::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FMeterResults, MeterValue) == 0x000004, "Member 'FMeterResults::MeterValue' has a wrong offset!");
static_assert(offsetof(FMeterResults, PeakValue) == 0x000008, "Member 'FMeterResults::PeakValue' has a wrong offset!");
static_assert(offsetof(FMeterResults, NumSamplesClipping) == 0x00000C, "Member 'FMeterResults::NumSamplesClipping' has a wrong offset!");
static_assert(offsetof(FMeterResults, ClippingValue) == 0x000010, "Member 'FMeterResults::ClippingValue' has a wrong offset!");

// ScriptStruct AudioSynesthesia.SynesthesiaSpectrumResults
// 0x0018 (0x0018 - 0x0000)
struct FSynesthesiaSpectrumResults final
{
public:
	float                                         TimeSeconds;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23EC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 SpectrumValues;                                    // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSynesthesiaSpectrumResults) == 0x000008, "Wrong alignment on FSynesthesiaSpectrumResults");
static_assert(sizeof(FSynesthesiaSpectrumResults) == 0x000018, "Wrong size on FSynesthesiaSpectrumResults");
static_assert(offsetof(FSynesthesiaSpectrumResults, TimeSeconds) == 0x000000, "Member 'FSynesthesiaSpectrumResults::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FSynesthesiaSpectrumResults, SpectrumValues) == 0x000008, "Member 'FSynesthesiaSpectrumResults::SpectrumValues' has a wrong offset!");

}

