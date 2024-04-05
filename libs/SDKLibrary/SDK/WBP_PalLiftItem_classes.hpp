#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalLiftItem

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalLiftItem.WBP_PalLiftItem_C
// 0x0020 (0x0428 - 0x0408)
class UWBP_PalLiftItem_C final : public UPalUserWidget
{
public:
	class UWidgetAnimation*                       FailedOpShake;                                     // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot;                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_PalInGameMenuItemSlotButton;                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUILiftSlotModel*                    Model;                                             // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Dispose();
	void On_Update_Icon_Texture_Path(TSoftObjectPtr<class UTexture2D> IconTexture);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnFailedItemOperation();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnUpdateCount(int32 Count);
	void OnUpdateHandleSlot(class UPalIndividualCharacterSlot* TargetHandleSlot);
	void Setup(class UPalUILiftSlotModel* Param_Model);
	void ShowSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLiftItem_C">();
	}
	static class UWBP_PalLiftItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLiftItem_C>();
	}
};
static_assert(alignof(UWBP_PalLiftItem_C) == 0x000008, "Wrong alignment on UWBP_PalLiftItem_C");
static_assert(sizeof(UWBP_PalLiftItem_C) == 0x000428, "Wrong size on UWBP_PalLiftItem_C");
static_assert(offsetof(UWBP_PalLiftItem_C, FailedOpShake) == 0x000408, "Member 'UWBP_PalLiftItem_C::FailedOpShake' has a wrong offset!");
static_assert(offsetof(UWBP_PalLiftItem_C, WBP_PalCommonCharacterSlot) == 0x000410, "Member 'UWBP_PalLiftItem_C::WBP_PalCommonCharacterSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalLiftItem_C, WBP_PalInGameMenuItemSlotButton) == 0x000418, "Member 'UWBP_PalLiftItem_C::WBP_PalInGameMenuItemSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalLiftItem_C, Model) == 0x000420, "Member 'UWBP_PalLiftItem_C::Model' has a wrong offset!");

}

