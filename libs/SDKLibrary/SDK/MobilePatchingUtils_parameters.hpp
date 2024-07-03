#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobilePatchingUtils

#include "Basic.hpp"


namespace SDK::Params
{

// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// 0x0004 (0x0004 - 0x0000)
struct MobileInstalledContent_GetDiskFreeSpace final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobileInstalledContent_GetDiskFreeSpace) == 0x000004, "Wrong alignment on MobileInstalledContent_GetDiskFreeSpace");
static_assert(sizeof(MobileInstalledContent_GetDiskFreeSpace) == 0x000004, "Wrong size on MobileInstalledContent_GetDiskFreeSpace");
static_assert(offsetof(MobileInstalledContent_GetDiskFreeSpace, ReturnValue) == 0x000000, "Member 'MobileInstalledContent_GetDiskFreeSpace::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// 0x0004 (0x0004 - 0x0000)
struct MobileInstalledContent_GetInstalledContentSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobileInstalledContent_GetInstalledContentSize) == 0x000004, "Wrong alignment on MobileInstalledContent_GetInstalledContentSize");
static_assert(sizeof(MobileInstalledContent_GetInstalledContentSize) == 0x000004, "Wrong size on MobileInstalledContent_GetInstalledContentSize");
static_assert(offsetof(MobileInstalledContent_GetInstalledContentSize, ReturnValue) == 0x000000, "Member 'MobileInstalledContent_GetInstalledContentSize::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// 0x0020 (0x0020 - 0x0000)
struct MobileInstalledContent_Mount final
{
public:
	int32                                         PakOrder;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MountPoint;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MobileInstalledContent_Mount) == 0x000008, "Wrong alignment on MobileInstalledContent_Mount");
static_assert(sizeof(MobileInstalledContent_Mount) == 0x000020, "Wrong size on MobileInstalledContent_Mount");
static_assert(offsetof(MobileInstalledContent_Mount, PakOrder) == 0x000000, "Member 'MobileInstalledContent_Mount::PakOrder' has a wrong offset!");
static_assert(offsetof(MobileInstalledContent_Mount, MountPoint) == 0x000008, "Member 'MobileInstalledContent_Mount::MountPoint' has a wrong offset!");
static_assert(offsetof(MobileInstalledContent_Mount, ReturnValue) == 0x000018, "Member 'MobileInstalledContent_Mount::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// 0x0004 (0x0004 - 0x0000)
struct MobilePendingContent_GetDownloadSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetDownloadSize) == 0x000004, "Wrong alignment on MobilePendingContent_GetDownloadSize");
static_assert(sizeof(MobilePendingContent_GetDownloadSize) == 0x000004, "Wrong size on MobilePendingContent_GetDownloadSize");
static_assert(offsetof(MobilePendingContent_GetDownloadSize, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetDownloadSize::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// 0x0004 (0x0004 - 0x0000)
struct MobilePendingContent_GetDownloadSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetDownloadSpeed) == 0x000004, "Wrong alignment on MobilePendingContent_GetDownloadSpeed");
static_assert(sizeof(MobilePendingContent_GetDownloadSpeed) == 0x000004, "Wrong size on MobilePendingContent_GetDownloadSpeed");
static_assert(offsetof(MobilePendingContent_GetDownloadSpeed, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetDownloadSpeed::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// 0x0018 (0x0018 - 0x0000)
struct MobilePendingContent_GetDownloadStatusText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetDownloadStatusText) == 0x000008, "Wrong alignment on MobilePendingContent_GetDownloadStatusText");
static_assert(sizeof(MobilePendingContent_GetDownloadStatusText) == 0x000018, "Wrong size on MobilePendingContent_GetDownloadStatusText");
static_assert(offsetof(MobilePendingContent_GetDownloadStatusText, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetDownloadStatusText::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// 0x0004 (0x0004 - 0x0000)
struct MobilePendingContent_GetInstallProgress final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetInstallProgress) == 0x000004, "Wrong alignment on MobilePendingContent_GetInstallProgress");
static_assert(sizeof(MobilePendingContent_GetInstallProgress) == 0x000004, "Wrong size on MobilePendingContent_GetInstallProgress");
static_assert(offsetof(MobilePendingContent_GetInstallProgress, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetInstallProgress::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// 0x0004 (0x0004 - 0x0000)
struct MobilePendingContent_GetRequiredDiskSpace final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetRequiredDiskSpace) == 0x000004, "Wrong alignment on MobilePendingContent_GetRequiredDiskSpace");
static_assert(sizeof(MobilePendingContent_GetRequiredDiskSpace) == 0x000004, "Wrong size on MobilePendingContent_GetRequiredDiskSpace");
static_assert(offsetof(MobilePendingContent_GetRequiredDiskSpace, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetRequiredDiskSpace::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// 0x0004 (0x0004 - 0x0000)
struct MobilePendingContent_GetTotalDownloadedSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_GetTotalDownloadedSize) == 0x000004, "Wrong alignment on MobilePendingContent_GetTotalDownloadedSize");
static_assert(sizeof(MobilePendingContent_GetTotalDownloadedSize) == 0x000004, "Wrong size on MobilePendingContent_GetTotalDownloadedSize");
static_assert(offsetof(MobilePendingContent_GetTotalDownloadedSize, ReturnValue) == 0x000000, "Member 'MobilePendingContent_GetTotalDownloadedSize::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// 0x0020 (0x0020 - 0x0000)
struct MobilePendingContent_StartInstall final
{
public:
	TDelegate<void()>                             OnSucceeded;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class FText ErrorText, int32 ErrorCode)> OnFailed;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePendingContent_StartInstall) == 0x000004, "Wrong alignment on MobilePendingContent_StartInstall");
static_assert(sizeof(MobilePendingContent_StartInstall) == 0x000020, "Wrong size on MobilePendingContent_StartInstall");
static_assert(offsetof(MobilePendingContent_StartInstall, OnSucceeded) == 0x000000, "Member 'MobilePendingContent_StartInstall::OnSucceeded' has a wrong offset!");
static_assert(offsetof(MobilePendingContent_StartInstall, OnFailed) == 0x000010, "Member 'MobilePendingContent_StartInstall::OnFailed' has a wrong offset!");

// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// 0x0010 (0x0010 - 0x0000)
struct MobilePatchingLibrary_GetActiveDeviceProfileName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePatchingLibrary_GetActiveDeviceProfileName) == 0x000008, "Wrong alignment on MobilePatchingLibrary_GetActiveDeviceProfileName");
static_assert(sizeof(MobilePatchingLibrary_GetActiveDeviceProfileName) == 0x000010, "Wrong size on MobilePatchingLibrary_GetActiveDeviceProfileName");
static_assert(offsetof(MobilePatchingLibrary_GetActiveDeviceProfileName, ReturnValue) == 0x000000, "Member 'MobilePatchingLibrary_GetActiveDeviceProfileName::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// 0x0018 (0x0018 - 0x0000)
struct MobilePatchingLibrary_GetInstalledContent final
{
public:
	class FString                                 InstallDirectory;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMobileInstalledContent*                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePatchingLibrary_GetInstalledContent) == 0x000008, "Wrong alignment on MobilePatchingLibrary_GetInstalledContent");
static_assert(sizeof(MobilePatchingLibrary_GetInstalledContent) == 0x000018, "Wrong size on MobilePatchingLibrary_GetInstalledContent");
static_assert(offsetof(MobilePatchingLibrary_GetInstalledContent, InstallDirectory) == 0x000000, "Member 'MobilePatchingLibrary_GetInstalledContent::InstallDirectory' has a wrong offset!");
static_assert(offsetof(MobilePatchingLibrary_GetInstalledContent, ReturnValue) == 0x000010, "Member 'MobilePatchingLibrary_GetInstalledContent::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// 0x0010 (0x0010 - 0x0000)
struct MobilePatchingLibrary_GetSupportedPlatformNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePatchingLibrary_GetSupportedPlatformNames) == 0x000008, "Wrong alignment on MobilePatchingLibrary_GetSupportedPlatformNames");
static_assert(sizeof(MobilePatchingLibrary_GetSupportedPlatformNames) == 0x000010, "Wrong size on MobilePatchingLibrary_GetSupportedPlatformNames");
static_assert(offsetof(MobilePatchingLibrary_GetSupportedPlatformNames, ReturnValue) == 0x000000, "Member 'MobilePatchingLibrary_GetSupportedPlatformNames::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// 0x0001 (0x0001 - 0x0000)
struct MobilePatchingLibrary_HasActiveWiFiConnection final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePatchingLibrary_HasActiveWiFiConnection) == 0x000001, "Wrong alignment on MobilePatchingLibrary_HasActiveWiFiConnection");
static_assert(sizeof(MobilePatchingLibrary_HasActiveWiFiConnection) == 0x000001, "Wrong size on MobilePatchingLibrary_HasActiveWiFiConnection");
static_assert(offsetof(MobilePatchingLibrary_HasActiveWiFiConnection, ReturnValue) == 0x000000, "Member 'MobilePatchingLibrary_HasActiveWiFiConnection::ReturnValue' has a wrong offset!");

// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// 0x0050 (0x0050 - 0x0000)
struct MobilePatchingLibrary_RequestContent final
{
public:
	class FString                                 RemoteManifestURL;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CloudURL;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InstallDirectory;                                  // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UMobilePendingContent* MobilePendingContent)> OnSucceeded;                                       // 0x0030(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class FText ErrorText, int32 ErrorCode)> OnFailed;                                          // 0x0040(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MobilePatchingLibrary_RequestContent) == 0x000008, "Wrong alignment on MobilePatchingLibrary_RequestContent");
static_assert(sizeof(MobilePatchingLibrary_RequestContent) == 0x000050, "Wrong size on MobilePatchingLibrary_RequestContent");
static_assert(offsetof(MobilePatchingLibrary_RequestContent, RemoteManifestURL) == 0x000000, "Member 'MobilePatchingLibrary_RequestContent::RemoteManifestURL' has a wrong offset!");
static_assert(offsetof(MobilePatchingLibrary_RequestContent, CloudURL) == 0x000010, "Member 'MobilePatchingLibrary_RequestContent::CloudURL' has a wrong offset!");
static_assert(offsetof(MobilePatchingLibrary_RequestContent, InstallDirectory) == 0x000020, "Member 'MobilePatchingLibrary_RequestContent::InstallDirectory' has a wrong offset!");
static_assert(offsetof(MobilePatchingLibrary_RequestContent, OnSucceeded) == 0x000030, "Member 'MobilePatchingLibrary_RequestContent::OnSucceeded' has a wrong offset!");
static_assert(offsetof(MobilePatchingLibrary_RequestContent, OnFailed) == 0x000040, "Member 'MobilePatchingLibrary_RequestContent::OnFailed' has a wrong offset!");

}

