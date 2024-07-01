#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalLocalPlayerSystemSound

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.OnChangeHunger
// 0x0020 (0x0020 - 0x0000)
struct BP_PalLocalPlayerSystemSound_C_OnChangeHunger final
{
public:
	EPalStatusHungerType                          Current;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalStatusHungerType                          Last;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EEC[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EED[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger) == 0x000008, "Wrong alignment on BP_PalLocalPlayerSystemSound_C_OnChangeHunger");
static_assert(sizeof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger) == 0x000020, "Wrong size on BP_PalLocalPlayerSystemSound_C_OnChangeHunger");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, Current) == 0x000000, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::Current' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, Last) == 0x000001, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::Last' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000010, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000012, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_OnChangeHunger, CallFunc_GetHUDService_ReturnValue_1) == 0x000018, "Member 'BP_PalLocalPlayerSystemSound_C_OnChangeHunger::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");

// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.SetupLocalPlayer
// 0x0030 (0x0030 - 0x0000)
struct BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalStatusHungerType Current, EPalStatusHungerType Last)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EEE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer) == 0x000008, "Wrong alignment on BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer");
static_assert(sizeof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer) == 0x000030, "Wrong size on BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer, Player) == 0x000000, "Member 'BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer::Player' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer, CallFunc_GetIndividualParameter_ReturnValue) == 0x000028, "Member 'BP_PalLocalPlayerSystemSound_C_SetupLocalPlayer::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");

}

