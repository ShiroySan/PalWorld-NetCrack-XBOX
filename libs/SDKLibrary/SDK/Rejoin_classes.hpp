#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rejoin

#include "Basic.hpp"

#include "Rejoin_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Rejoin.RejoinCheck
// 0x0160 (0x0188 - 0x0028)
class URejoinCheck final : public UObject
{
public:
	ERejoinStatus                                 LastKnownStatus;                                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRejoinAfterCheck;                                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAttemptingRejoin;                                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_16F9[0x15D];                                   // 0x002B(0x015D)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RejoinCheck">();
	}
	static class URejoinCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<URejoinCheck>();
	}
};
static_assert(alignof(URejoinCheck) == 0x000008, "Wrong alignment on URejoinCheck");
static_assert(sizeof(URejoinCheck) == 0x000188, "Wrong size on URejoinCheck");
static_assert(offsetof(URejoinCheck, LastKnownStatus) == 0x000028, "Member 'URejoinCheck::LastKnownStatus' has a wrong offset!");
static_assert(offsetof(URejoinCheck, bRejoinAfterCheck) == 0x000029, "Member 'URejoinCheck::bRejoinAfterCheck' has a wrong offset!");
static_assert(offsetof(URejoinCheck, bAttemptingRejoin) == 0x00002A, "Member 'URejoinCheck::bAttemptingRejoin' has a wrong offset!");

}

