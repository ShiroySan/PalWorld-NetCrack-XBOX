#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataRegistry

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// Enum DataRegistry.EDataRegistryAcquireStatus
// NumValues: 0x0008
enum class EDataRegistryAcquireStatus : uint8
{
	NotStarted                               = 0,
	WaitingForInitialAcquire                 = 1,
	InitialAcquireFinished                   = 2,
	WaitingForResources                      = 3,
	AcquireFinished                          = 4,
	AcquireError                             = 5,
	DoesNotExist                             = 6,
	EDataRegistryAcquireStatus_MAX           = 7,
};

// Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
// NumValues: 0x0005
enum class EMetaDataRegistrySourceAssetUsage : uint8
{
	NoAssets                                 = 0,
	SearchAssets                             = 1,
	RegisterAssets                           = 2,
	SearchAndRegisterAssets                  = 3,
	EMetaDataRegistrySourceAssetUsage_MAX    = 4,
};

// Enum DataRegistry.EDataRegistrySubsystemGetItemResult
// NumValues: 0x0003
enum class EDataRegistrySubsystemGetItemResult : uint8
{
	Found                                    = 0,
	NotFound                                 = 1,
	EDataRegistrySubsystemGetItemResult_MAX  = 2,
};

// Enum DataRegistry.EDataRegistryAvailability
// NumValues: 0x0007
enum class EDataRegistryAvailability : uint8
{
	DoesNotExist                             = 0,
	Unknown                                  = 1,
	Remote                                   = 2,
	OnDisk                                   = 3,
	LocalAsset                               = 4,
	PreCached                                = 5,
	EDataRegistryAvailability_MAX            = 6,
};

// ScriptStruct DataRegistry.DataRegistrySourceItemId
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FDataRegistrySourceItemId final
{
public:
	uint8                                         Pad_13B6[0x40];                                    // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDataRegistrySourceItemId) == 0x000008, "Wrong alignment on FDataRegistrySourceItemId");
static_assert(sizeof(FDataRegistrySourceItemId) == 0x000040, "Wrong size on FDataRegistrySourceItemId");

// ScriptStruct DataRegistry.DataRegistryLookup
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FDataRegistryLookup final
{
public:
	uint8                                         Pad_13B7[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDataRegistryLookup) == 0x000008, "Wrong alignment on FDataRegistryLookup");
static_assert(sizeof(FDataRegistryLookup) == 0x000020, "Wrong size on FDataRegistryLookup");

// ScriptStruct DataRegistry.DataRegistryCachePolicy
// 0x0014 (0x0014 - 0x0000)
struct FDataRegistryCachePolicy final
{
public:
	bool                                          bCacheIsAlwaysVolatile;                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCurveTableCacheVersion;                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13B8[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinNumberKept;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNumberKept;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ForceKeepSeconds;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ForceReleaseSeconds;                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataRegistryCachePolicy) == 0x000004, "Wrong alignment on FDataRegistryCachePolicy");
static_assert(sizeof(FDataRegistryCachePolicy) == 0x000014, "Wrong size on FDataRegistryCachePolicy");
static_assert(offsetof(FDataRegistryCachePolicy, bCacheIsAlwaysVolatile) == 0x000000, "Member 'FDataRegistryCachePolicy::bCacheIsAlwaysVolatile' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, bUseCurveTableCacheVersion) == 0x000001, "Member 'FDataRegistryCachePolicy::bUseCurveTableCacheVersion' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, MinNumberKept) == 0x000004, "Member 'FDataRegistryCachePolicy::MinNumberKept' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, MaxNumberKept) == 0x000008, "Member 'FDataRegistryCachePolicy::MaxNumberKept' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, ForceKeepSeconds) == 0x00000C, "Member 'FDataRegistryCachePolicy::ForceKeepSeconds' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, ForceReleaseSeconds) == 0x000010, "Member 'FDataRegistryCachePolicy::ForceReleaseSeconds' has a wrong offset!");

// ScriptStruct DataRegistry.DataRegistryType
// 0x0008 (0x0008 - 0x0000)
struct FDataRegistryType final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FDataRegistryType) == 0x000004, "Wrong alignment on FDataRegistryType");
static_assert(sizeof(FDataRegistryType) == 0x000008, "Wrong size on FDataRegistryType");
static_assert(offsetof(FDataRegistryType, Name) == 0x000000, "Member 'FDataRegistryType::Name' has a wrong offset!");

// ScriptStruct DataRegistry.DataRegistryId
// 0x0010 (0x0010 - 0x0000)
struct FDataRegistryId final
{
public:
	struct FDataRegistryType                      RegistryType;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ItemName;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataRegistryId) == 0x000004, "Wrong alignment on FDataRegistryId");
static_assert(sizeof(FDataRegistryId) == 0x000010, "Wrong size on FDataRegistryId");
static_assert(offsetof(FDataRegistryId, RegistryType) == 0x000000, "Member 'FDataRegistryId::RegistryType' has a wrong offset!");
static_assert(offsetof(FDataRegistryId, ItemName) == 0x000008, "Member 'FDataRegistryId::ItemName' has a wrong offset!");

// ScriptStruct DataRegistry.DataRegistryIdFormat
// 0x0008 (0x0008 - 0x0000)
struct FDataRegistryIdFormat final
{
public:
	struct FGameplayTag                           BaseGameplayTag;                                   // 0x0000(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataRegistryIdFormat) == 0x000004, "Wrong alignment on FDataRegistryIdFormat");
static_assert(sizeof(FDataRegistryIdFormat) == 0x000008, "Wrong size on FDataRegistryIdFormat");
static_assert(offsetof(FDataRegistryIdFormat, BaseGameplayTag) == 0x000000, "Member 'FDataRegistryIdFormat::BaseGameplayTag' has a wrong offset!");

// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
// 0x0008 (0x0008 - 0x0000)
struct FDataRegistrySource_DataTableRules final
{
public:
	bool                                          bPrecacheTable;                                    // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13B9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CachedTableKeepSeconds;                            // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataRegistrySource_DataTableRules) == 0x000004, "Wrong alignment on FDataRegistrySource_DataTableRules");
static_assert(sizeof(FDataRegistrySource_DataTableRules) == 0x000008, "Wrong size on FDataRegistrySource_DataTableRules");
static_assert(offsetof(FDataRegistrySource_DataTableRules, bPrecacheTable) == 0x000000, "Member 'FDataRegistrySource_DataTableRules::bPrecacheTable' has a wrong offset!");
static_assert(offsetof(FDataRegistrySource_DataTableRules, CachedTableKeepSeconds) == 0x000004, "Member 'FDataRegistrySource_DataTableRules::CachedTableKeepSeconds' has a wrong offset!");

}

