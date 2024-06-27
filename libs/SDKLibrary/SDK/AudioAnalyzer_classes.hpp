#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioAnalyzer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class AudioAnalyzer.AudioAnalyzerAssetBase
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerAssetBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerAssetBase">();
	}
	static class UAudioAnalyzerAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerAssetBase>();
	}
};
static_assert(alignof(UAudioAnalyzerAssetBase) == 0x000008, "Wrong alignment on UAudioAnalyzerAssetBase");
static_assert(sizeof(UAudioAnalyzerAssetBase) == 0x000028, "Wrong size on UAudioAnalyzerAssetBase");

// Class AudioAnalyzer.AudioAnalyzerNRT
// 0x0050 (0x0078 - 0x0028)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                             Sound;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DurationInSeconds;                                 // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2539[0x44];                                    // 0x0034(0x0044)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerNRT">();
	}
	static class UAudioAnalyzerNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerNRT>();
	}
};
static_assert(alignof(UAudioAnalyzerNRT) == 0x000008, "Wrong alignment on UAudioAnalyzerNRT");
static_assert(sizeof(UAudioAnalyzerNRT) == 0x000078, "Wrong size on UAudioAnalyzerNRT");
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x000028, "Member 'UAudioAnalyzerNRT::Sound' has a wrong offset!");
static_assert(offsetof(UAudioAnalyzerNRT, DurationInSeconds) == 0x000030, "Member 'UAudioAnalyzerNRT::DurationInSeconds' has a wrong offset!");

// Class AudioAnalyzer.AudioAnalyzerSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerSettings">();
	}
	static class UAudioAnalyzerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerSettings>();
	}
};
static_assert(alignof(UAudioAnalyzerSettings) == 0x000008, "Wrong alignment on UAudioAnalyzerSettings");
static_assert(sizeof(UAudioAnalyzerSettings) == 0x000028, "Wrong size on UAudioAnalyzerSettings");

// Class AudioAnalyzer.AudioAnalyzer
// 0x0068 (0x0090 - 0x0028)
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                              AudioBus;                                          // 0x0028(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_253A[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioAnalyzerSubsystem*                AudioAnalyzerSubsystem;                            // 0x0038(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_253B[0x50];                                    // 0x0040(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
	void StopAnalyzing(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzer">();
	}
	static class UAudioAnalyzer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzer>();
	}
};
static_assert(alignof(UAudioAnalyzer) == 0x000008, "Wrong alignment on UAudioAnalyzer");
static_assert(sizeof(UAudioAnalyzer) == 0x000090, "Wrong size on UAudioAnalyzer");
static_assert(offsetof(UAudioAnalyzer, AudioBus) == 0x000028, "Member 'UAudioAnalyzer::AudioBus' has a wrong offset!");
static_assert(offsetof(UAudioAnalyzer, AudioAnalyzerSubsystem) == 0x000038, "Member 'UAudioAnalyzer::AudioAnalyzerSubsystem' has a wrong offset!");

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerNRTSettings">();
	}
	static class UAudioAnalyzerNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerNRTSettings>();
	}
};
static_assert(alignof(UAudioAnalyzerNRTSettings) == 0x000008, "Wrong alignment on UAudioAnalyzerNRTSettings");
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x000028, "Wrong size on UAudioAnalyzerNRTSettings");

// Class AudioAnalyzer.AudioAnalyzerSubsystem
// 0x0020 (0x0050 - 0x0030)
class UAudioAnalyzerSubsystem final : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                 AudioAnalyzers;                                    // 0x0030(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_253C[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerSubsystem">();
	}
	static class UAudioAnalyzerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerSubsystem>();
	}
};
static_assert(alignof(UAudioAnalyzerSubsystem) == 0x000008, "Wrong alignment on UAudioAnalyzerSubsystem");
static_assert(sizeof(UAudioAnalyzerSubsystem) == 0x000050, "Wrong size on UAudioAnalyzerSubsystem");
static_assert(offsetof(UAudioAnalyzerSubsystem, AudioAnalyzers) == 0x000030, "Member 'UAudioAnalyzerSubsystem::AudioAnalyzers' has a wrong offset!");

}

