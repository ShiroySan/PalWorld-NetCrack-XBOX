#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_MenuBG

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_MenuBG.WBP_Title_MenuBG_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Title_MenuBG_C final : public UUserWidget
{
public:
	class UImage*                                 Image_BG;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BGGrd_L;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BGGrd_R;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_MenuBG_C">();
	}
	static class UWBP_Title_MenuBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_MenuBG_C>();
	}
};
static_assert(alignof(UWBP_Title_MenuBG_C) == 0x000008, "Wrong alignment on UWBP_Title_MenuBG_C");
static_assert(sizeof(UWBP_Title_MenuBG_C) == 0x000290, "Wrong size on UWBP_Title_MenuBG_C");
static_assert(offsetof(UWBP_Title_MenuBG_C, Image_BG) == 0x000278, "Member 'UWBP_Title_MenuBG_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuBG_C, Image_BGGrd_L) == 0x000280, "Member 'UWBP_Title_MenuBG_C::Image_BGGrd_L' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuBG_C, Image_BGGrd_R) == 0x000288, "Member 'UWBP_Title_MenuBG_C::Image_BGGrd_R' has a wrong offset!");

}

