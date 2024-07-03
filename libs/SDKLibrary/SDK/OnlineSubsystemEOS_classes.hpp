#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOS

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SocketSubsystemEOS_classes.hpp"
#include "OnlineSubsystemEOS_structs.hpp"


namespace SDK
{

// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0000 (0x0848 - 0x0848)
class UNetDriverEOS final : public UNetDriverEOSBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDriverEOS">();
	}
	static class UNetDriverEOS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriverEOS>();
	}
};
static_assert(alignof(UNetDriverEOS) == 0x000008, "Wrong alignment on UNetDriverEOS");
static_assert(sizeof(UNetDriverEOS) == 0x000848, "Wrong size on UNetDriverEOS");

// Class OnlineSubsystemEOS.EOSArtifactSettings
// 0x0000 (0x0030 - 0x0030)
class UEOSArtifactSettings final : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSArtifactSettings">();
	}
	static class UEOSArtifactSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSArtifactSettings>();
	}
};
static_assert(alignof(UEOSArtifactSettings) == 0x000008, "Wrong alignment on UEOSArtifactSettings");
static_assert(sizeof(UEOSArtifactSettings) == 0x000030, "Wrong size on UEOSArtifactSettings");

// Class OnlineSubsystemEOS.EOSSettings
// 0x0058 (0x0090 - 0x0038)
class UEOSSettings final : public URuntimeOptionsBase
{
public:
	class FString                                 CacheDir;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultArtifactName;                               // 0x0048(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TickBudgetInMilliseconds;                          // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOverlay;                                    // 0x005C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableSocialOverlay;                              // 0x005D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEditorOverlay;                              // 0x005E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldEnforceBeingLaunchedByEGS;                  // 0x005F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         TitleStorageTags;                                  // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         TitleStorageReadChunkLength;                       // 0x0070(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FArtifactSettings>              Artifacts;                                         // 0x0078(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bUseEAS;                                           // 0x0088(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseEOSConnect;                                    // 0x0089(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorStatsToEOS;                                 // 0x008A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorAchievementsToEOS;                          // 0x008B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseEOSSessions;                                   // 0x008C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMirrorPresenceToEAS;                              // 0x008D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDeviceIdLogin;                                 // 0x008E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideDedicatedServer;                          // 0x008F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSSettings">();
	}
	static class UEOSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSSettings>();
	}
};
static_assert(alignof(UEOSSettings) == 0x000008, "Wrong alignment on UEOSSettings");
static_assert(sizeof(UEOSSettings) == 0x000090, "Wrong size on UEOSSettings");
static_assert(offsetof(UEOSSettings, CacheDir) == 0x000038, "Member 'UEOSSettings::CacheDir' has a wrong offset!");
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 0x000048, "Member 'UEOSSettings::DefaultArtifactName' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TickBudgetInMilliseconds) == 0x000058, "Member 'UEOSSettings::TickBudgetInMilliseconds' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableOverlay) == 0x00005C, "Member 'UEOSSettings::bEnableOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableSocialOverlay) == 0x00005D, "Member 'UEOSSettings::bEnableSocialOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableEditorOverlay) == 0x00005E, "Member 'UEOSSettings::bEnableEditorOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bShouldEnforceBeingLaunchedByEGS) == 0x00005F, "Member 'UEOSSettings::bShouldEnforceBeingLaunchedByEGS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 0x000060, "Member 'UEOSSettings::TitleStorageTags' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageReadChunkLength) == 0x000070, "Member 'UEOSSettings::TitleStorageReadChunkLength' has a wrong offset!");
static_assert(offsetof(UEOSSettings, Artifacts) == 0x000078, "Member 'UEOSSettings::Artifacts' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEAS) == 0x000088, "Member 'UEOSSettings::bUseEAS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSConnect) == 0x000089, "Member 'UEOSSettings::bUseEOSConnect' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorStatsToEOS) == 0x00008A, "Member 'UEOSSettings::bMirrorStatsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorAchievementsToEOS) == 0x00008B, "Member 'UEOSSettings::bMirrorAchievementsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSSessions) == 0x00008C, "Member 'UEOSSettings::bUseEOSSessions' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorPresenceToEAS) == 0x00008D, "Member 'UEOSSettings::bMirrorPresenceToEAS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseDeviceIdLogin) == 0x00008E, "Member 'UEOSSettings::bUseDeviceIdLogin' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bOverrideDedicatedServer) == 0x00008F, "Member 'UEOSSettings::bOverrideDedicatedServer' has a wrong offset!");

}

