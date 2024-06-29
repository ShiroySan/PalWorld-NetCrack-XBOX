#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputCore

#include "Basic.hpp"


namespace SDK
{

// Enum InputCore.ETouchIndex
// NumValues: 0x000D
enum class ETouchIndex : uint8
{
	Touch1                                   = 0,
	Touch2                                   = 1,
	Touch3                                   = 2,
	Touch4                                   = 3,
	Touch5                                   = 4,
	Touch6                                   = 5,
	Touch7                                   = 6,
	Touch8                                   = 7,
	Touch9                                   = 8,
	Touch10                                  = 9,
	CursorPointerIndex                       = 10,
	MAX_TOUCHES                              = 11,
	ETouchIndex_MAX                          = 12,
};

// Enum InputCore.EControllerHand
// NumValues: 0x0014
enum class EControllerHand : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	AnyHand                                  = 2,
	Pad                                      = 3,
	ExternalCamera                           = 4,
	Gun                                      = 5,
	HMD                                      = 6,
	Special_1                                = 7,
	Special_2                                = 8,
	Special_3                                = 9,
	Special_4                                = 10,
	Special_5                                = 11,
	Special_6                                = 12,
	Special_7                                = 13,
	Special_8                                = 14,
	Special_9                                = 15,
	Special_10                               = 16,
	Special_11                               = 17,
	ControllerHand_Count                     = 18,
	EControllerHand_MAX                      = 19,
};

// Enum InputCore.EConsoleForGamepadLabels
// NumValues: 0x0004
enum class EConsoleForGamepadLabels : uint8
{
	None                                     = 0,
	XBoxOne                                  = 1,
	PS4                                      = 2,
	EConsoleForGamepadLabels_MAX             = 3,
};

// Enum InputCore.ETouchType
// NumValues: 0x0008
enum class ETouchType : uint8
{
	Began                                    = 0,
	Moved                                    = 1,
	Stationary                               = 2,
	ForceChanged                             = 3,
	FirstMove                                = 4,
	Ended                                    = 5,
	NumTypes                                 = 6,
	ETouchType_MAX                           = 7,
};

// ScriptStruct InputCore.Key
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FKey final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3277[0x10];                                    // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKey) == 0x000008, "Wrong alignment on FKey");
static_assert(sizeof(FKey) == 0x000018, "Wrong size on FKey");
static_assert(offsetof(FKey, KeyName) == 0x000000, "Member 'FKey::KeyName' has a wrong offset!");

}

