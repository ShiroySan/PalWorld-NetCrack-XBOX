#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseFileHandler

#include "Basic.hpp"


namespace SDK
{

// Enum WwiseFileHandler.EWwiseLanguageRequirement
// NumValues: 0x0004
enum class EWwiseLanguageRequirement : uint8
{
	IsDefault                                = 0,
	IsOptional                               = 1,
	SFX                                      = 2,
	EWwiseLanguageRequirement_MAX            = 3,
};

// Enum WwiseFileHandler.EWwiseSoundBankType
// NumValues: 0x0004
enum class EWwiseSoundBankType : uint8
{
	User                                     = 0,
	Event                                    = 30,
	Bus                                      = 31,
	EWwiseSoundBankType_MAX                  = 32,
};

// ScriptStruct WwiseFileHandler.WwiseExternalSourceCookedData
// 0x000C (0x000C - 0x0000)
struct FWwiseExternalSourceCookedData final
{
public:
	int32                                         Cookie;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseExternalSourceCookedData) == 0x000004, "Wrong alignment on FWwiseExternalSourceCookedData");
static_assert(sizeof(FWwiseExternalSourceCookedData) == 0x00000C, "Wrong size on FWwiseExternalSourceCookedData");
static_assert(offsetof(FWwiseExternalSourceCookedData, Cookie) == 0x000000, "Member 'FWwiseExternalSourceCookedData::Cookie' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceCookedData, DebugName) == 0x000004, "Member 'FWwiseExternalSourceCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseFileHandler.WwiseLanguageCookedData
// 0x0010 (0x0010 - 0x0000)
struct FWwiseLanguageCookedData final
{
public:
	int32                                         LanguageId;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LanguageName;                                      // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWwiseLanguageRequirement                     LanguageRequirement;                               // 0x000C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBC[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseLanguageCookedData) == 0x000004, "Wrong alignment on FWwiseLanguageCookedData");
static_assert(sizeof(FWwiseLanguageCookedData) == 0x000010, "Wrong size on FWwiseLanguageCookedData");
static_assert(offsetof(FWwiseLanguageCookedData, LanguageId) == 0x000000, "Member 'FWwiseLanguageCookedData::LanguageId' has a wrong offset!");
static_assert(offsetof(FWwiseLanguageCookedData, LanguageName) == 0x000004, "Member 'FWwiseLanguageCookedData::LanguageName' has a wrong offset!");
static_assert(offsetof(FWwiseLanguageCookedData, LanguageRequirement) == 0x00000C, "Member 'FWwiseLanguageCookedData::LanguageRequirement' has a wrong offset!");

// ScriptStruct WwiseFileHandler.WwiseMediaCookedData
// 0x0020 (0x0020 - 0x0000)
struct FWwiseMediaCookedData final
{
public:
	int32                                         MediaId;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MediaPathName;                                     // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PrefetchSize;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MemoryAlignment;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeviceMemory;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStreaming;                                        // 0x0015(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBD[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DebugName;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseMediaCookedData) == 0x000004, "Wrong alignment on FWwiseMediaCookedData");
static_assert(sizeof(FWwiseMediaCookedData) == 0x000020, "Wrong size on FWwiseMediaCookedData");
static_assert(offsetof(FWwiseMediaCookedData, MediaId) == 0x000000, "Member 'FWwiseMediaCookedData::MediaId' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, MediaPathName) == 0x000004, "Member 'FWwiseMediaCookedData::MediaPathName' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, PrefetchSize) == 0x00000C, "Member 'FWwiseMediaCookedData::PrefetchSize' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, MemoryAlignment) == 0x000010, "Member 'FWwiseMediaCookedData::MemoryAlignment' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, bDeviceMemory) == 0x000014, "Member 'FWwiseMediaCookedData::bDeviceMemory' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, bStreaming) == 0x000015, "Member 'FWwiseMediaCookedData::bStreaming' has a wrong offset!");
static_assert(offsetof(FWwiseMediaCookedData, DebugName) == 0x000018, "Member 'FWwiseMediaCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseFileHandler.WwiseSoundBankCookedData
// 0x001C (0x001C - 0x0000)
struct FWwiseSoundBankCookedData
{
public:
	int32                                         SoundBankId;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SoundBankPathName;                                 // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MemoryAlignment;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeviceMemory;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bContainsMedia;                                    // 0x0011(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWwiseSoundBankType                           SoundBankType;                                     // 0x0012(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CBE[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DebugName;                                         // 0x0014(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseSoundBankCookedData) == 0x000004, "Wrong alignment on FWwiseSoundBankCookedData");
static_assert(sizeof(FWwiseSoundBankCookedData) == 0x00001C, "Wrong size on FWwiseSoundBankCookedData");
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankId) == 0x000000, "Member 'FWwiseSoundBankCookedData::SoundBankId' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankPathName) == 0x000004, "Member 'FWwiseSoundBankCookedData::SoundBankPathName' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, MemoryAlignment) == 0x00000C, "Member 'FWwiseSoundBankCookedData::MemoryAlignment' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, bDeviceMemory) == 0x000010, "Member 'FWwiseSoundBankCookedData::bDeviceMemory' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, bContainsMedia) == 0x000011, "Member 'FWwiseSoundBankCookedData::bContainsMedia' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankType) == 0x000012, "Member 'FWwiseSoundBankCookedData::SoundBankType' has a wrong offset!");
static_assert(offsetof(FWwiseSoundBankCookedData, DebugName) == 0x000014, "Member 'FWwiseSoundBankCookedData::DebugName' has a wrong offset!");

}

