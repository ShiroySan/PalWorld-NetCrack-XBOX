#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_BackupSelect

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_BackupSelect.WBP_Title_BackupSelect_C
// 0x0048 (0x0450 - 0x0408)
class UWBP_Title_BackupSelect_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     Text_BackupInfo;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NothingBackup;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*             WBP_PalCommonScrollList;                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedBackup;                                   // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetBackupDisplayData(TArray<struct FPalUIBackupSaveDisplayData>& DisplayData);
	void OnClickedCloseButton__DelegateSignature();
	void OnClickedBackupButton_Internal(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void OnClickedBackup__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void GetTopFocusTarget(class UWidget** TargetWidget);
	void ExecuteUbergraph_WBP_Title_BackupSelect(int32 EntryPoint);
	void Destruct();
	class UWidget* CustomNavi_ToListTop(EUINavigation Param_Navigation);
	class UWidget* CustomNavi_ToCloseButton(EUINavigation Param_Navigation);
	void BndEvt__WBP_Title_BackupSelect_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_BackupSelect_C">();
	}
	static class UWBP_Title_BackupSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_BackupSelect_C>();
	}
};
static_assert(alignof(UWBP_Title_BackupSelect_C) == 0x000008, "Wrong alignment on UWBP_Title_BackupSelect_C");
static_assert(sizeof(UWBP_Title_BackupSelect_C) == 0x000450, "Wrong size on UWBP_Title_BackupSelect_C");
static_assert(offsetof(UWBP_Title_BackupSelect_C, UberGraphFrame) == 0x000408, "Member 'UWBP_Title_BackupSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, Text_BackupInfo) == 0x000410, "Member 'UWBP_Title_BackupSelect_C::Text_BackupInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, Text_NothingBackup) == 0x000418, "Member 'UWBP_Title_BackupSelect_C::Text_NothingBackup' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, WBP_Menu_btn) == 0x000420, "Member 'UWBP_Title_BackupSelect_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, WBP_PalCommonScrollList) == 0x000428, "Member 'UWBP_Title_BackupSelect_C::WBP_PalCommonScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, OnClickedCloseButton) == 0x000430, "Member 'UWBP_Title_BackupSelect_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Title_BackupSelect_C, OnClickedBackup) == 0x000440, "Member 'UWBP_Title_BackupSelect_C::OnClickedBackup' has a wrong offset!");

}

