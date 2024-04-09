#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryEquipment_ItemInfo_TecnologyList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_TecnologyList.WBP_InventoryEquipment_ItemInfo_TecnologyList_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Name;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Num;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_sp;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Stock;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList(int32 EntryPoint);
	void SetInfo(const class FText& Param_Name, int32 Num, TSoftObjectPtr<class UTexture2D> Param_Icon, int32 Stock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryEquipment_ItemInfo_TecnologyList_C">();
	}
	static class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryEquipment_ItemInfo_TecnologyList_C>();
	}
};
static_assert(alignof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C) == 0x000008, "Wrong alignment on UWBP_InventoryEquipment_ItemInfo_TecnologyList_C");
static_assert(sizeof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C) == 0x0002B0, "Wrong size on UWBP_InventoryEquipment_ItemInfo_TecnologyList_C");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, Base) == 0x000280, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, BP_PalTextBlock_Name) == 0x000288, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::BP_PalTextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, BP_PalTextBlock_Num) == 0x000290, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::BP_PalTextBlock_Num' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, BP_PalTextBlock_sp) == 0x000298, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::BP_PalTextBlock_sp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, BP_PalTextBlock_Stock) == 0x0002A0, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::BP_PalTextBlock_Stock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C, Icon) == 0x0002A8, "Member 'UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::Icon' has a wrong offset!");

}

