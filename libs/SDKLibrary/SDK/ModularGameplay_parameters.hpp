#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplay

#include "Basic.hpp"

#include "ModularGameplay_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// 0x0010 (0x0010 - 0x0000)
struct GameFrameworkComponentManager_AddReceiver final
{
public:
	class AActor*                                 Receiver;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddOnlyInGameWorlds;                              // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DD[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_AddReceiver) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_AddReceiver");
static_assert(sizeof(GameFrameworkComponentManager_AddReceiver) == 0x000010, "Wrong size on GameFrameworkComponentManager_AddReceiver");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_AddReceiver::Receiver' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, bAddOnlyInGameWorlds) == 0x000008, "Member 'GameFrameworkComponentManager_AddReceiver::bAddOnlyInGameWorlds' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
// 0x0030 (0x0030 - 0x0000)
struct GameFrameworkComponentManager_RegisterAndCallForActorInitState final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FeatureName;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           RequiredState;                                     // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;                                          // 0x0018(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCallImmediately;                                  // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DE[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_RegisterAndCallForActorInitState) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RegisterAndCallForActorInitState");
static_assert(sizeof(GameFrameworkComponentManager_RegisterAndCallForActorInitState) == 0x000030, "Wrong size on GameFrameworkComponentManager_RegisterAndCallForActorInitState");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, Actor) == 0x000000, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::Actor' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, FeatureName) == 0x000008, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::FeatureName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, RequiredState) == 0x000010, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, Delegate) == 0x000018, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, bCallImmediately) == 0x000028, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, ReturnValue) == 0x000029, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
// 0x0058 (0x0058 - 0x0000)
struct GameFrameworkComponentManager_RegisterAndCallForClassInitState final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0030)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FeatureName;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           RequiredState;                                     // 0x0038(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;                                          // 0x0040(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCallImmediately;                                  // 0x0050(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0051(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DF[0x6];                                     // 0x0052(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_RegisterAndCallForClassInitState) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RegisterAndCallForClassInitState");
static_assert(sizeof(GameFrameworkComponentManager_RegisterAndCallForClassInitState) == 0x000058, "Wrong size on GameFrameworkComponentManager_RegisterAndCallForClassInitState");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, ActorClass) == 0x000000, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::ActorClass' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, FeatureName) == 0x000030, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::FeatureName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, RequiredState) == 0x000038, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, Delegate) == 0x000040, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, bCallImmediately) == 0x000050, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, ReturnValue) == 0x000051, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// 0x0008 (0x0008 - 0x0000)
struct GameFrameworkComponentManager_RemoveReceiver final
{
public:
	class AActor*                                 Receiver;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RemoveReceiver");
static_assert(sizeof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong size on GameFrameworkComponentManager_RemoveReceiver");
static_assert(offsetof(GameFrameworkComponentManager_RemoveReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_RemoveReceiver::Receiver' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
// 0x0018 (0x0018 - 0x0000)
struct GameFrameworkComponentManager_SendExtensionEvent final
{
public:
	class AActor*                                 Receiver;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   EventName;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyInGameWorlds;                                 // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E0[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_SendExtensionEvent) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_SendExtensionEvent");
static_assert(sizeof(GameFrameworkComponentManager_SendExtensionEvent) == 0x000018, "Wrong size on GameFrameworkComponentManager_SendExtensionEvent");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_SendExtensionEvent::Receiver' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, EventName) == 0x000008, "Member 'GameFrameworkComponentManager_SendExtensionEvent::EventName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, bOnlyInGameWorlds) == 0x000010, "Member 'GameFrameworkComponentManager_SendExtensionEvent::bOnlyInGameWorlds' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
// 0x0020 (0x0020 - 0x0000)
struct GameFrameworkComponentManager_UnregisterActorInitStateDelegate final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove;                                  // 0x0008(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E1[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_UnregisterActorInitStateDelegate");
static_assert(sizeof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate) == 0x000020, "Wrong size on GameFrameworkComponentManager_UnregisterActorInitStateDelegate");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, Actor) == 0x000000, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::Actor' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, DelegateToRemove) == 0x000008, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::DelegateToRemove' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, ReturnValue) == 0x000018, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
// 0x0048 (0x0048 - 0x0000)
struct GameFrameworkComponentManager_UnregisterClassInitStateDelegate final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0030)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove;                                  // 0x0030(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E2[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_UnregisterClassInitStateDelegate");
static_assert(sizeof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate) == 0x000048, "Wrong size on GameFrameworkComponentManager_UnregisterClassInitStateDelegate");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, ActorClass) == 0x000000, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::ActorClass' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, DelegateToRemove) == 0x000030, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::DelegateToRemove' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, ReturnValue) == 0x000040, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
// 0x001C (0x001C - 0x0000)
struct GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange final
{
public:
	struct FGameplayTag                           RequiredState;                                     // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCallImmediately;                                  // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E3[0x2];                                     // 0x001A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange");
static_assert(sizeof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange) == 0x00001C, "Wrong size on GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, RequiredState) == 0x000000, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, Delegate) == 0x000008, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, bCallImmediately) == 0x000018, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, ReturnValue) == 0x000019, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
// 0x0014 (0x0014 - 0x0000)
struct GameFrameworkInitStateInterface_UnregisterInitStateDelegate final
{
public:
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E4[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_UnregisterInitStateDelegate");
static_assert(sizeof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate) == 0x000014, "Wrong size on GameFrameworkInitStateInterface_UnregisterInitStateDelegate");
static_assert(offsetof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate, Delegate) == 0x000000, "Member 'GameFrameworkInitStateInterface_UnregisterInitStateDelegate::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate, ReturnValue) == 0x000010, "Member 'GameFrameworkInitStateInterface_UnregisterInitStateDelegate::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
// 0x0008 (0x0008 - 0x0000)
struct GameFrameworkInitStateInterface_GetFeatureName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameFrameworkInitStateInterface_GetFeatureName) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_GetFeatureName");
static_assert(sizeof(GameFrameworkInitStateInterface_GetFeatureName) == 0x000008, "Wrong size on GameFrameworkInitStateInterface_GetFeatureName");
static_assert(offsetof(GameFrameworkInitStateInterface_GetFeatureName, ReturnValue) == 0x000000, "Member 'GameFrameworkInitStateInterface_GetFeatureName::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState
// 0x0008 (0x0008 - 0x0000)
struct GameFrameworkInitStateInterface_GetInitState final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameFrameworkInitStateInterface_GetInitState) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_GetInitState");
static_assert(sizeof(GameFrameworkInitStateInterface_GetInitState) == 0x000008, "Wrong size on GameFrameworkInitStateInterface_GetInitState");
static_assert(offsetof(GameFrameworkInitStateInterface_GetInitState, ReturnValue) == 0x000000, "Member 'GameFrameworkInitStateInterface_GetInitState::ReturnValue' has a wrong offset!");

// Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
// 0x000C (0x000C - 0x0000)
struct GameFrameworkInitStateInterface_HasReachedInitState final
{
public:
	struct FGameplayTag                           DesiredState;                                      // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13E5[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkInitStateInterface_HasReachedInitState) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_HasReachedInitState");
static_assert(sizeof(GameFrameworkInitStateInterface_HasReachedInitState) == 0x00000C, "Wrong size on GameFrameworkInitStateInterface_HasReachedInitState");
static_assert(offsetof(GameFrameworkInitStateInterface_HasReachedInitState, DesiredState) == 0x000000, "Member 'GameFrameworkInitStateInterface_HasReachedInitState::DesiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_HasReachedInitState, ReturnValue) == 0x000008, "Member 'GameFrameworkInitStateInterface_HasReachedInitState::ReturnValue' has a wrong offset!");

}

