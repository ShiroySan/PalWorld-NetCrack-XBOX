#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryEquipment_PalIcon

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.ExecuteUbergraph_WBP_InventoryEquipment_PalIcon
// 0x0050 (0x0050 - 0x0000)
struct WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_IconId;                         // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalMonsterData    K2Node_MakeStruct_PalDataTableRowName_PalMonsterData; // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B84[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetPalIconInfoByCharacterID_outIcon;      // 0x0018(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GetPalIconInfoByCharacterID_outIsRare;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPalIconInfoByCharacterID_outIsBoss;    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon");
static_assert(sizeof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon) == 0x000050, "Wrong size on WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, EntryPoint) == 0x000000, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, K2Node_CustomEvent_IconId) == 0x000004, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::K2Node_CustomEvent_IconId' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, K2Node_MakeStruct_PalDataTableRowName_PalMonsterData) == 0x00000C, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::K2Node_MakeStruct_PalDataTableRowName_PalMonsterData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, CallFunc_GetPalIconInfoByCharacterID_outIcon) == 0x000018, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::CallFunc_GetPalIconInfoByCharacterID_outIcon' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, CallFunc_GetPalIconInfoByCharacterID_outIsRare) == 0x000048, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::CallFunc_GetPalIconInfoByCharacterID_outIsRare' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon, CallFunc_GetPalIconInfoByCharacterID_outIsBoss) == 0x000049, "Member 'WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon::CallFunc_GetPalIconInfoByCharacterID_outIsBoss' has a wrong offset!");

// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.Setup
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryEquipment_PalIcon_C_Setup final
{
public:
	class FName                                   IconId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_PalIcon_C_Setup) == 0x000004, "Wrong alignment on WBP_InventoryEquipment_PalIcon_C_Setup");
static_assert(sizeof(WBP_InventoryEquipment_PalIcon_C_Setup) == 0x000008, "Wrong size on WBP_InventoryEquipment_PalIcon_C_Setup");
static_assert(offsetof(WBP_InventoryEquipment_PalIcon_C_Setup, IconId) == 0x000000, "Member 'WBP_InventoryEquipment_PalIcon_C_Setup::IconId' has a wrong offset!");

}

