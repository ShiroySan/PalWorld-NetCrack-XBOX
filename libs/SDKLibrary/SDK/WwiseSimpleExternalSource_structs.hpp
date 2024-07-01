#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseSimpleExternalSource

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
// 0x0030 (0x0038 - 0x0008)
struct FWwiseExternalSourceCookieDefaultMedia final : public FTableRowBase
{
public:
	int32                                         ExternalSourceCookie;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ExternalSourceName;                                // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MediaInfoId;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MediaName;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseExternalSourceCookieDefaultMedia) == 0x000008, "Wrong alignment on FWwiseExternalSourceCookieDefaultMedia");
static_assert(sizeof(FWwiseExternalSourceCookieDefaultMedia) == 0x000038, "Wrong size on FWwiseExternalSourceCookieDefaultMedia");
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceCookie) == 0x000008, "Member 'FWwiseExternalSourceCookieDefaultMedia::ExternalSourceCookie' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceName) == 0x000010, "Member 'FWwiseExternalSourceCookieDefaultMedia::ExternalSourceName' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, MediaInfoId) == 0x000020, "Member 'FWwiseExternalSourceCookieDefaultMedia::MediaInfoId' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, MediaName) == 0x000028, "Member 'FWwiseExternalSourceCookieDefaultMedia::MediaName' has a wrong offset!");

// ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
// 0x0020 (0x0028 - 0x0008)
struct FWwiseExternalSourceMediaInfo final : public FTableRowBase
{
public:
	int32                                         ExternalSourceMediaInfoId;                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MediaName;                                         // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CodecID;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsStreamed;                                       // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDeviceMemory;                                  // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE6[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MemoryAlignment;                                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PrefetchSize;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CE7[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseExternalSourceMediaInfo) == 0x000008, "Wrong alignment on FWwiseExternalSourceMediaInfo");
static_assert(sizeof(FWwiseExternalSourceMediaInfo) == 0x000028, "Wrong size on FWwiseExternalSourceMediaInfo");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, ExternalSourceMediaInfoId) == 0x000008, "Member 'FWwiseExternalSourceMediaInfo::ExternalSourceMediaInfoId' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, MediaName) == 0x00000C, "Member 'FWwiseExternalSourceMediaInfo::MediaName' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, CodecID) == 0x000014, "Member 'FWwiseExternalSourceMediaInfo::CodecID' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, bIsStreamed) == 0x000018, "Member 'FWwiseExternalSourceMediaInfo::bIsStreamed' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, bUseDeviceMemory) == 0x000019, "Member 'FWwiseExternalSourceMediaInfo::bUseDeviceMemory' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, MemoryAlignment) == 0x00001C, "Member 'FWwiseExternalSourceMediaInfo::MemoryAlignment' has a wrong offset!");
static_assert(offsetof(FWwiseExternalSourceMediaInfo, PrefetchSize) == 0x000020, "Member 'FWwiseExternalSourceMediaInfo::PrefetchSize' has a wrong offset!");

}

