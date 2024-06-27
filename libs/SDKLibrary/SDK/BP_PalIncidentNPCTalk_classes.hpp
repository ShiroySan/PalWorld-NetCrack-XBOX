#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentNPCTalk

#include "Basic.hpp"

#include "E_PalItemShopTabType_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_PalIncidentBase_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C
// 0x00C0 (0x0220 - 0x0160)
class UBP_PalIncidentNPCTalk_C final : public UBP_PalIncidentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                             TalkData;                                          // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGuid                                  ShopID;                                            // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPalNPCMultiTalkHandle*                 MultiTalkHandle;                                   // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTalking;                                         // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShopping;                                        // 0x0189(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45B7[0x6];                                     // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalIncidentCamera_C*                Camera;                                            // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerViewTarget;                                  // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 TalkSequence;                                      // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsDelayFinish;                                     // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45B8[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayFinishElapsedTime;                            // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           ItemShopHUDParameter;                              // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           PalShopHUDParameter;                               // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_PalItemShopTabType                          OpenItemShopTabType;                               // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PalItemShopTabType                          OpenPalShopTabType;                                // 0x01D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45B9[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  TalkUIID;                                          // 0x01D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  ItemShopUIID;                                      // 0x01E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  PalShopUIID;                                       // 0x01F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BA[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CustomFunctionNames;                               // 0x0208(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddItemToInventory(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void AttachCamera();
	void Attack_to_Player(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void CreateCamera();
	void CunsumeRequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void CustomFunctionTemplate(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void CustomFunctionToServer(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void DetachCamera(double BlendTime);
	void ExecuteUbergraph_BP_PalIncidentNPCTalk(int32 EntryPoint);
	void FindTalkCameraLocation_NoHitPlayer(const struct FVector& PlayerLocation, const struct FVector& TargetLocation, const struct FVector& TalkCameraLocation, bool* Result, struct FVector* NewTalkCameraLocation);
	void GetCharacterTalk(class FName CharacterID, bool* HasTalkData, class UDataTable** Param_TalkData);
	void GetMultiTalk(class FName TalkId, bool* HasTalkData, class UDataTable** Param_TalkData, class FString* Param_TalkSequence);
	void GetOneTalk(class FName TalkId, bool* HasTalkData, class UDataTable** OneTalkData);
	void GetTalkCharacter(class APalCharacter** TalkCharacter);
	void GetTalkId(class FName* TalkId);
	void GetTalkType(EPalIncidentTalkType* TalkType);
	void HasRequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	bool IsExistCustomEvent(const class FName& CustomEventName);
	void Lottery_Index_by_Weights(TArray<double>& Weights, int32* Param_Index);
	void LotteryItemAndNum(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class FName* AddItemName1, int32* AddItemNum1);
	void On_Talk_Character_Captured();
	void OnBegin();
	void OnCanceled();
	void OnCustomEvent(const class FName& CustomEventName, const struct FPalNPCTalkSystemCustomFunctionParameters& Parameter);
	void OnDamageReaction(const struct FPalDamageRactionInfo& DamageReactionInfo);
	void OnEnd();
	void OnForceStop();
	void OnGenerated();
	void OnInitialized();
	void OnItemShopClosed(class UPalHUDDispatchParameterBase* Param);
	void OnLoaded_4657C8C34673DDF607731EB504BB6BC2(TSubclassOf<class UObject> Loaded);
	void OnLoaded_C353222C4BEC5555051A4EADFED69384(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F24E709545997EF6D7A638BDDC970200(TSubclassOf<class UObject> Loaded);
	void OnRegisteredItemShopEvent();
	void OnRegisteredPalShopEvent();
	void OnShopUIClosed(class UPalHUDDispatchParameterBase* Param);
	void OnTalkCharacterBattleModeChanged(bool IsBattle);
	void OnTalkCharacterDead(const struct FPalDeadInfo& Info);
	void OnTalkUIClosed(class UPalHUDDispatchParameterBase* Param);
	void OpenItemShop_AsyncLoadAsset(class UPalHUDDispatchParameterBase* HUDParam);
	void OpenItemShop_Buy(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void OpenItemShop_Internal(class UPalVenderDataComponent* VenderDataComponent);
	void OpenItemShop_Sell(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void OpenPalShop_AsyncLoadAsset(class UPalHUDDispatchParameterBase* HUDParam);
	void OpenPalShop_Buy(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void OpenPalShop_Internal(class UPalVenderDataComponent* VenderDataComponent);
	void OpenPalShop_Sell(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void RequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void ReturnToSpawnedPoint(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void ReturnToSpawnedPointSquad(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void Set_Disable_Movement_For_Target(bool IsDisable);
	void Setup(bool* Talkable);
	void SpawnItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param);
	void StartTalk();
	void Terminate();
	void Tick(float DeltaTime);
	void Tick_DelayFinish(double DeltaTime);
	void Tick_Talking(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentNPCTalk_C">();
	}
	static class UBP_PalIncidentNPCTalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentNPCTalk_C>();
	}
};
static_assert(alignof(UBP_PalIncidentNPCTalk_C) == 0x000010, "Wrong alignment on UBP_PalIncidentNPCTalk_C");
static_assert(sizeof(UBP_PalIncidentNPCTalk_C) == 0x000220, "Wrong size on UBP_PalIncidentNPCTalk_C");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, UberGraphFrame) == 0x000160, "Member 'UBP_PalIncidentNPCTalk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, TalkData) == 0x000168, "Member 'UBP_PalIncidentNPCTalk_C::TalkData' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, ShopID) == 0x000170, "Member 'UBP_PalIncidentNPCTalk_C::ShopID' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, MultiTalkHandle) == 0x000180, "Member 'UBP_PalIncidentNPCTalk_C::MultiTalkHandle' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, IsTalking) == 0x000188, "Member 'UBP_PalIncidentNPCTalk_C::IsTalking' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, IsShopping) == 0x000189, "Member 'UBP_PalIncidentNPCTalk_C::IsShopping' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, Camera) == 0x000190, "Member 'UBP_PalIncidentNPCTalk_C::Camera' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, PlayerViewTarget) == 0x000198, "Member 'UBP_PalIncidentNPCTalk_C::PlayerViewTarget' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, TalkSequence) == 0x0001A0, "Member 'UBP_PalIncidentNPCTalk_C::TalkSequence' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, IsDelayFinish) == 0x0001B0, "Member 'UBP_PalIncidentNPCTalk_C::IsDelayFinish' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, DelayFinishElapsedTime) == 0x0001B8, "Member 'UBP_PalIncidentNPCTalk_C::DelayFinishElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, ItemShopHUDParameter) == 0x0001C0, "Member 'UBP_PalIncidentNPCTalk_C::ItemShopHUDParameter' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, PalShopHUDParameter) == 0x0001C8, "Member 'UBP_PalIncidentNPCTalk_C::PalShopHUDParameter' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, OpenItemShopTabType) == 0x0001D0, "Member 'UBP_PalIncidentNPCTalk_C::OpenItemShopTabType' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, OpenPalShopTabType) == 0x0001D1, "Member 'UBP_PalIncidentNPCTalk_C::OpenPalShopTabType' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, TalkUIID) == 0x0001D4, "Member 'UBP_PalIncidentNPCTalk_C::TalkUIID' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, ItemShopUIID) == 0x0001E4, "Member 'UBP_PalIncidentNPCTalk_C::ItemShopUIID' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, PalShopUIID) == 0x0001F4, "Member 'UBP_PalIncidentNPCTalk_C::PalShopUIID' has a wrong offset!");
static_assert(offsetof(UBP_PalIncidentNPCTalk_C, CustomFunctionNames) == 0x000208, "Member 'UBP_PalIncidentNPCTalk_C::CustomFunctionNames' has a wrong offset!");

}

