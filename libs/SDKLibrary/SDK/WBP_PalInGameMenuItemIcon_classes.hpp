#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalInGameMenuItemIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalItemIconBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C
// 0x0018 (0x0458 - 0x0440)
class UWBP_PalInGameMenuItemIcon_C final : public UWBP_PalItemIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalInGameMenuItemIcon_C;        // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_363;                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_57;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void EmptyEvent();
	void ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint);
	void LoadedTextureEvent(class UTexture2D* LoadedTexture);
	void OnInitialized();
	void StartLoadEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalInGameMenuItemIcon_C">();
	}
	static class UWBP_PalInGameMenuItemIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalInGameMenuItemIcon_C>();
	}
};
static_assert(alignof(UWBP_PalInGameMenuItemIcon_C) == 0x000008, "Wrong alignment on UWBP_PalInGameMenuItemIcon_C");
static_assert(sizeof(UWBP_PalInGameMenuItemIcon_C) == 0x000458, "Wrong size on UWBP_PalInGameMenuItemIcon_C");
static_assert(offsetof(UWBP_PalInGameMenuItemIcon_C, UberGraphFrame_WBP_PalInGameMenuItemIcon_C) == 0x000440, "Member 'UWBP_PalInGameMenuItemIcon_C::UberGraphFrame_WBP_PalInGameMenuItemIcon_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalInGameMenuItemIcon_C, CircularThrobber_363) == 0x000448, "Member 'UWBP_PalInGameMenuItemIcon_C::CircularThrobber_363' has a wrong offset!");
static_assert(offsetof(UWBP_PalInGameMenuItemIcon_C, Image_57) == 0x000450, "Member 'UWBP_PalInGameMenuItemIcon_C::Image_57' has a wrong offset!");

}

