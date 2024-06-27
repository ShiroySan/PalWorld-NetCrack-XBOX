#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundEngine

#include "Basic.hpp"

#include "MetasoundEngine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MetasoundFrontend_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MetasoundEngine.MetaSoundSource
// 0x0340 (0x07E0 - 0x04A0)
class alignas(0x10) UMetaSoundSource final : public USoundWaveProcedural
{
public:
	uint8                                         Pad_250F[0x68];                                    // 0x04A0(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;                             // 0x0508(0x01C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                           ReferencedAssetClassKeys;                          // 0x06D0(0x0050)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                          ReferencedAssetClassObjects;                       // 0x0720(0x0050)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;                          // 0x0770(0x0050)(Protected, NativeAccessSpecifierProtected)
	EMetasoundSourceAudioFormat                   OutputFormat;                                      // 0x07C0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2510[0x3];                                     // 0x07C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  AssetClassID;                                      // 0x07C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2511[0xC];                                     // 0x07D4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSource">();
	}
	static class UMetaSoundSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSource>();
	}
};
static_assert(alignof(UMetaSoundSource) == 0x000010, "Wrong alignment on UMetaSoundSource");
static_assert(sizeof(UMetaSoundSource) == 0x0007E0, "Wrong size on UMetaSoundSource");
static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 0x000508, "Member 'UMetaSoundSource::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassKeys) == 0x0006D0, "Member 'UMetaSoundSource::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassObjects) == 0x000720, "Member 'UMetaSoundSource::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferenceAssetClassCache) == 0x000770, "Member 'UMetaSoundSource::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 0x0007C0, "Member 'UMetaSoundSource::OutputFormat' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, AssetClassID) == 0x0007C4, "Member 'UMetaSoundSource::AssetClassID' has a wrong offset!");

// Class MetasoundEngine.MetaSoundSettings
// 0x0048 (0x0080 - 0x0038)
class UMetaSoundSettings final : public UDeveloperSettings
{
public:
	bool                                          bAutoUpdateEnabled;                                // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2512[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMetasoundFrontendClassName>    AutoUpdateDenylist;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x0050(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bAutoUpdateLogWarningOnDroppedConnection;          // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2513[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDirectoryPath>                 DirectoriesToRegister;                             // 0x0068(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         DenyListCacheChangeID;                             // 0x0078(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2514[0x4];                                     // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSettings">();
	}
	static class UMetaSoundSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSettings>();
	}
};
static_assert(alignof(UMetaSoundSettings) == 0x000008, "Wrong alignment on UMetaSoundSettings");
static_assert(sizeof(UMetaSoundSettings) == 0x000080, "Wrong size on UMetaSoundSettings");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateEnabled) == 0x000038, "Member 'UMetaSoundSettings::bAutoUpdateEnabled' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateDenylist) == 0x000040, "Member 'UMetaSoundSettings::AutoUpdateDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateAssetDenylist) == 0x000050, "Member 'UMetaSoundSettings::AutoUpdateAssetDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateLogWarningOnDroppedConnection) == 0x000060, "Member 'UMetaSoundSettings::bAutoUpdateLogWarningOnDroppedConnection' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 0x000068, "Member 'UMetaSoundSettings::DirectoriesToRegister' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DenyListCacheChangeID) == 0x000078, "Member 'UMetaSoundSettings::DenyListCacheChangeID' has a wrong offset!");

// Class MetasoundEngine.MetasoundEditorGraphBase
// 0x0000 (0x0060 - 0x0060)
class UMetasoundEditorGraphBase final : public UEdGraph
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundEditorGraphBase">();
	}
	static class UMetasoundEditorGraphBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundEditorGraphBase>();
	}
};
static_assert(alignof(UMetasoundEditorGraphBase) == 0x000008, "Wrong alignment on UMetasoundEditorGraphBase");
static_assert(sizeof(UMetasoundEditorGraphBase) == 0x000060, "Wrong size on UMetasoundEditorGraphBase");

// Class MetasoundEngine.MetaSoundPatch
// 0x0330 (0x0358 - 0x0028)
class UMetaSoundPatch final : public UObject
{
public:
	uint8                                         Pad_2515[0x68];                                    // 0x0028(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;                             // 0x0090(0x01C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                           ReferencedAssetClassKeys;                          // 0x0258(0x0050)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                          ReferencedAssetClassObjects;                       // 0x02A8(0x0050)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;                          // 0x02F8(0x0050)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                  AssetClassID;                                      // 0x0348(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundPatch">();
	}
	static class UMetaSoundPatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundPatch>();
	}
};
static_assert(alignof(UMetaSoundPatch) == 0x000008, "Wrong alignment on UMetaSoundPatch");
static_assert(sizeof(UMetaSoundPatch) == 0x000358, "Wrong size on UMetaSoundPatch");
static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 0x000090, "Member 'UMetaSoundPatch::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassKeys) == 0x000258, "Member 'UMetaSoundPatch::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassObjects) == 0x0002A8, "Member 'UMetaSoundPatch::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferenceAssetClassCache) == 0x0002F8, "Member 'UMetaSoundPatch::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, AssetClassID) == 0x000348, "Member 'UMetaSoundPatch::AssetClassID' has a wrong offset!");

// Class MetasoundEngine.MetaSoundAssetSubsystem
// 0x01B0 (0x01E0 - 0x0030)
class UMetaSoundAssetSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_2516[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2517[0x198];                                   // 0x0048(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RegisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);
	void UnregisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundAssetSubsystem">();
	}
	static class UMetaSoundAssetSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundAssetSubsystem>();
	}
};
static_assert(alignof(UMetaSoundAssetSubsystem) == 0x000008, "Wrong alignment on UMetaSoundAssetSubsystem");
static_assert(sizeof(UMetaSoundAssetSubsystem) == 0x0001E0, "Wrong size on UMetaSoundAssetSubsystem");
static_assert(offsetof(UMetaSoundAssetSubsystem, LoadingDependencies) == 0x000038, "Member 'UMetaSoundAssetSubsystem::LoadingDependencies' has a wrong offset!");

}

