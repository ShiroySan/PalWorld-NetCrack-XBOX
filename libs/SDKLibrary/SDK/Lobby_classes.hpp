#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Lobby_structs.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class Lobby.LobbyBeaconClient
// 0x0088 (0x03A8 - 0x0320)
class ALobbyBeaconClient final : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                      LobbyState;                                        // 0x0320(0x0008)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                PlayerState;                                       // 0x0328(0x0008)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C7[0x1];                                     // 0x0330(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	ELobbyBeaconJoinState                         LobbyJoinServerState;                              // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16C8[0x76];                                    // 0x0332(0x0076)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientAckJoiningServer();
	void ClientJoinGame();
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientWasKicked(const class FText& KickReason);
	void ServerCheat(const class FString& Msg);
	void ServerDisconnectFromLobby();
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
	void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerNotifyJoiningServer();
	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconClient">();
	}
	static class ALobbyBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconClient>();
	}
};
static_assert(alignof(ALobbyBeaconClient) == 0x000008, "Wrong alignment on ALobbyBeaconClient");
static_assert(sizeof(ALobbyBeaconClient) == 0x0003A8, "Wrong size on ALobbyBeaconClient");
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x000320, "Member 'ALobbyBeaconClient::LobbyState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x000328, "Member 'ALobbyBeaconClient::PlayerState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x000331, "Member 'ALobbyBeaconClient::LobbyJoinServerState' has a wrong offset!");

// Class Lobby.LobbyBeaconHost
// 0x0040 (0x02F8 - 0x02B8)
class ALobbyBeaconHost final : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_16CA[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   LobbyStateClass;                                   // 0x02C0(0x0030)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                      LobbyState;                                        // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconHost">();
	}
	static class ALobbyBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconHost>();
	}
};
static_assert(alignof(ALobbyBeaconHost) == 0x000008, "Wrong alignment on ALobbyBeaconHost");
static_assert(sizeof(ALobbyBeaconHost) == 0x0002F8, "Wrong size on ALobbyBeaconHost");
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x0002C0, "Member 'ALobbyBeaconHost::LobbyStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x0002F0, "Member 'ALobbyBeaconHost::LobbyState' has a wrong offset!");

// Class Lobby.LobbyBeaconPlayerState
// 0x00D0 (0x0360 - 0x0290)
class ALobbyBeaconPlayerState final : public AInfo
{
public:
	class FText                                   DisplayName;                                       // 0x0290(0x0018)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x02A8(0x0030)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       PartyOwnerUniqueId;                                // 0x02D8(0x0030)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInLobby;                                          // 0x0308(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16CB[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AOnlineBeaconClient*                    ClientActor;                                       // 0x0310(0x0008)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16CC[0x48];                                    // 0x0318(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_InLobby();
	void OnRep_PartyOwner();
	void OnRep_UniqueId();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconPlayerState">();
	}
	static class ALobbyBeaconPlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconPlayerState>();
	}
};
static_assert(alignof(ALobbyBeaconPlayerState) == 0x000008, "Wrong alignment on ALobbyBeaconPlayerState");
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x000360, "Wrong size on ALobbyBeaconPlayerState");
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x000290, "Member 'ALobbyBeaconPlayerState::DisplayName' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x0002A8, "Member 'ALobbyBeaconPlayerState::UniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x0002D8, "Member 'ALobbyBeaconPlayerState::PartyOwnerUniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, bInLobby) == 0x000308, "Member 'ALobbyBeaconPlayerState::bInLobby' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x000310, "Member 'ALobbyBeaconPlayerState::ClientActor' has a wrong offset!");

// Class Lobby.LobbyBeaconState
// 0x01A8 (0x0438 - 0x0290)
class ALobbyBeaconState final : public AInfo
{
public:
	int32                                         MaxPlayers;                                        // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16CD[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ALobbyBeaconPlayerState>    LobbyBeaconPlayerStateClass;                       // 0x0298(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16CE[0x8];                                     // 0x02A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLobbyStarted;                                     // 0x02A8(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16CF[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaitForPlayersTimeRemaining;                       // 0x02AC(0x0004)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray             Players;                                           // 0x02B0(0x0120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_16D0[0x68];                                    // 0x03D0(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_LobbyStarted();
	void OnRep_WaitForPlayersTimeRemaining();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconState">();
	}
	static class ALobbyBeaconState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconState>();
	}
};
static_assert(alignof(ALobbyBeaconState) == 0x000008, "Wrong alignment on ALobbyBeaconState");
static_assert(sizeof(ALobbyBeaconState) == 0x000438, "Wrong size on ALobbyBeaconState");
static_assert(offsetof(ALobbyBeaconState, MaxPlayers) == 0x000290, "Member 'ALobbyBeaconState::MaxPlayers' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x000298, "Member 'ALobbyBeaconState::LobbyBeaconPlayerStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, bLobbyStarted) == 0x0002A8, "Member 'ALobbyBeaconState::bLobbyStarted' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, WaitForPlayersTimeRemaining) == 0x0002AC, "Member 'ALobbyBeaconState::WaitForPlayersTimeRemaining' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, Players) == 0x0002B0, "Member 'ALobbyBeaconState::Players' has a wrong offset!");

}

