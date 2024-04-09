#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameOver_Rescue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameOver_Rescue.WBP_GameOver_Rescue_C
// 0x0010 (0x0418 - 0x0408)
class UWBP_GameOver_Rescue_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_Rescue;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GameOver_Rescue(int32 EntryPoint);
	void UpdateRescue(double Remain);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameOver_Rescue_C">();
	}
	static class UWBP_GameOver_Rescue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameOver_Rescue_C>();
	}
};
static_assert(alignof(UWBP_GameOver_Rescue_C) == 0x000008, "Wrong alignment on UWBP_GameOver_Rescue_C");
static_assert(sizeof(UWBP_GameOver_Rescue_C) == 0x000418, "Wrong size on UWBP_GameOver_Rescue_C");
static_assert(offsetof(UWBP_GameOver_Rescue_C, UberGraphFrame) == 0x000408, "Member 'UWBP_GameOver_Rescue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_Rescue_C, ProgressBar_Rescue) == 0x000410, "Member 'UWBP_GameOver_Rescue_C::ProgressBar_Rescue' has a wrong offset!");

}

