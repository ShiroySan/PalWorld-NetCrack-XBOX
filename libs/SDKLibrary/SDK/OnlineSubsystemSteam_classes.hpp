#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemSteam

#include "Basic.hpp"

#include "PacketHandler_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface final : public UHandlerComponentFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamAuthComponentModuleInterface">();
	}
	static class USteamAuthComponentModuleInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamAuthComponentModuleInterface>();
	}
};
static_assert(alignof(USteamAuthComponentModuleInterface) == 0x000008, "Wrong alignment on USteamAuthComponentModuleInterface");
static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x000028, "Wrong size on USteamAuthComponentModuleInterface");

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0000 (0x33A0 - 0x33A0)
class USteamNetConnection final : public UIpConnection
{
public:
	bool                                          bIsPassthrough;                                    // 0x3398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1708[0x7];                                     // 0x3399(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetConnection">();
	}
	static class USteamNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetConnection>();
	}
};
static_assert(alignof(USteamNetConnection) == 0x000010, "Wrong alignment on USteamNetConnection");
static_assert(sizeof(USteamNetConnection) == 0x0033A0, "Wrong size on USteamNetConnection");
static_assert(offsetof(USteamNetConnection, bIsPassthrough) == 0x003398, "Member 'USteamNetConnection::bIsPassthrough' has a wrong offset!");

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x0848 - 0x0840)
class USteamNetDriver final : public UIpNetDriver
{
public:
	uint8                                         Pad_1709[0x8];                                     // 0x0840(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetDriver">();
	}
	static class USteamNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetDriver>();
	}
};
static_assert(alignof(USteamNetDriver) == 0x000008, "Wrong alignment on USteamNetDriver");
static_assert(sizeof(USteamNetDriver) == 0x000848, "Wrong size on USteamNetDriver");

}

