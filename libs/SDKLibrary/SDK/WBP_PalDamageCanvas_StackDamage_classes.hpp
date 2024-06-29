#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalDamageCanvas_StackDamage

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C
// 0x0090 (0x0498 - 0x0408)
class UWBP_PalDamageCanvas_StackDamage_C final : public UPalDamageDisplayCanvas
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Damage;                                            // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41CA[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Hit_Location;                                      // 0x0428(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class AActor>, class UPalUIDamageTextBase*> DisplayingDamageTextMap;                           // 0x0440(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        DisplayTime;                                       // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddDamageTextEvent(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, EPalDamageTextType* TextType);
	void CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location);
	void CleanUpMap();
	void CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget);
	void Destruct();
	void ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage(int32 EntryPoint);
	void IsExistDamageText(class AActor* Defender, bool* IsExist);
	void OnRequestedCloseWidget(class UPalUIDamageTextBase* SelfWidget);
	void OnSetup();
	void UpdateDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalDamageCanvas_StackDamage_C">();
	}
	static class UWBP_PalDamageCanvas_StackDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalDamageCanvas_StackDamage_C>();
	}
};
static_assert(alignof(UWBP_PalDamageCanvas_StackDamage_C) == 0x000008, "Wrong alignment on UWBP_PalDamageCanvas_StackDamage_C");
static_assert(sizeof(UWBP_PalDamageCanvas_StackDamage_C) == 0x000498, "Wrong size on UWBP_PalDamageCanvas_StackDamage_C");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalDamageCanvas_StackDamage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, Default_In) == 0x000410, "Member 'UWBP_PalDamageCanvas_StackDamage_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, CanvasPanel_0) == 0x000418, "Member 'UWBP_PalDamageCanvas_StackDamage_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, Damage) == 0x000420, "Member 'UWBP_PalDamageCanvas_StackDamage_C::Damage' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, Hit_Location) == 0x000428, "Member 'UWBP_PalDamageCanvas_StackDamage_C::Hit_Location' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, DisplayingDamageTextMap) == 0x000440, "Member 'UWBP_PalDamageCanvas_StackDamage_C::DisplayingDamageTextMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageCanvas_StackDamage_C, DisplayTime) == 0x000490, "Member 'UWBP_PalDamageCanvas_StackDamage_C::DisplayTime' has a wrong offset!");

}

