#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TItle

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "CommonUser_structs.hpp"
#include "Engine_structs.hpp"
#include "E_PalUITitleMenuButtonType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TItle.WBP_TItle_C
// 0x0058 (0x0478 - 0x0420)
class UWBP_TItle_C final : public UPalUITitleBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Title_MenuBG_C*                    WBP_Title_MenuBG;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleMenu_C*                       WBP_TitleMenu;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECommonUserPrivilege                          Requested_Privilege;                               // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C42[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_TitleFriendButton_OLD_C*>   TitleFriendButtons;                                // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ULoadingProcessTask*                    CurrentLoadingScreen;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoadingScreen_Transition_C*        CurrentWidget;                                     // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_TitleSaveDataButton_OLD_C*> TitleSaveDataButtons;                              // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_Title_MenuButton_C*                LastClickedButton;                                 // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature(class UWBP_Title_MenuButton_C* ButtonWidget);
	void Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD(const class UPocketpairUserInfo* UserInfo, bool bSuccess, const class FString& ErrorStr);
	void ExecuteUbergraph_WBP_TItle(int32 EntryPoint);
	void OnClickedMenu_Internal(class UWBP_Title_MenuButton_C* ButtonWidget);
	void OnClosedQuitGameDialog(bool bResult);
	void OnSetup();
	void OpenQuitGameDialog();
	void SwitchUser();
	void WBP_TItle_AutoGenFunc(bool bResult);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TItle_C">();
	}
	static class UWBP_TItle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TItle_C>();
	}
};
static_assert(alignof(UWBP_TItle_C) == 0x000008, "Wrong alignment on UWBP_TItle_C");
static_assert(sizeof(UWBP_TItle_C) == 0x000478, "Wrong size on UWBP_TItle_C");
static_assert(offsetof(UWBP_TItle_C, UberGraphFrame) == 0x000420, "Member 'UWBP_TItle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, WBP_Title_MenuBG) == 0x000428, "Member 'UWBP_TItle_C::WBP_Title_MenuBG' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, WBP_TitleMenu) == 0x000430, "Member 'UWBP_TItle_C::WBP_TitleMenu' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, Requested_Privilege) == 0x000438, "Member 'UWBP_TItle_C::Requested_Privilege' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, TitleFriendButtons) == 0x000440, "Member 'UWBP_TItle_C::TitleFriendButtons' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, CurrentLoadingScreen) == 0x000450, "Member 'UWBP_TItle_C::CurrentLoadingScreen' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, CurrentWidget) == 0x000458, "Member 'UWBP_TItle_C::CurrentWidget' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, TitleSaveDataButtons) == 0x000460, "Member 'UWBP_TItle_C::TitleSaveDataButtons' has a wrong offset!");
static_assert(offsetof(UWBP_TItle_C, LastClickedButton) == 0x000470, "Member 'UWBP_TItle_C::LastClickedButton' has a wrong offset!");

}

