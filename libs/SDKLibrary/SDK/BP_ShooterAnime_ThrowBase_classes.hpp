#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShooterAnime_ThrowBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShooterAnime_ThrowBase.BP_ShooterAnime_ThrowBase_C
// 0x0018 (0x0298 - 0x0280)
class UBP_ShooterAnime_ThrowBase_C final : public UPalShooterAnimeAssetBase
{
public:
	class UAnimMontage*                           Ride_Fire_Front;                                   // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Ride_Fire_Right;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Ride_Fire_Left;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShooterAnime_ThrowBase_C">();
	}
	static class UBP_ShooterAnime_ThrowBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ShooterAnime_ThrowBase_C>();
	}
};
static_assert(alignof(UBP_ShooterAnime_ThrowBase_C) == 0x000008, "Wrong alignment on UBP_ShooterAnime_ThrowBase_C");
static_assert(sizeof(UBP_ShooterAnime_ThrowBase_C) == 0x000298, "Wrong size on UBP_ShooterAnime_ThrowBase_C");
static_assert(offsetof(UBP_ShooterAnime_ThrowBase_C, Ride_Fire_Front) == 0x000280, "Member 'UBP_ShooterAnime_ThrowBase_C::Ride_Fire_Front' has a wrong offset!");
static_assert(offsetof(UBP_ShooterAnime_ThrowBase_C, Ride_Fire_Right) == 0x000288, "Member 'UBP_ShooterAnime_ThrowBase_C::Ride_Fire_Right' has a wrong offset!");
static_assert(offsetof(UBP_ShooterAnime_ThrowBase_C, Ride_Fire_Left) == 0x000290, "Member 'UBP_ShooterAnime_ThrowBase_C::Ride_Fire_Left' has a wrong offset!");

}

