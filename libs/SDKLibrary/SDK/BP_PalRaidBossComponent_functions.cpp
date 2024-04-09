#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRaidBossComponent

#include "Basic.hpp"

#include "BP_PalRaidBossComponent_classes.hpp"
#include "BP_PalRaidBossComponent_parameters.hpp"


namespace SDK
{

// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.DespawnVolume
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalRaidBossComponent_C::DespawnVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "DespawnVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.ExecuteUbergraph_BP_PalRaidBossComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRaidBossComponent_C::ExecuteUbergraph_BP_PalRaidBossComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "ExecuteUbergraph_BP_PalRaidBossComponent");

	Params::BP_PalRaidBossComponent_C_ExecuteUbergraph_BP_PalRaidBossComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalRaidBossComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRaidBossComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "ReceiveEndPlay");

	Params::BP_PalRaidBossComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRaidBossComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "ReceiveTick");

	Params::BP_PalRaidBossComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.Spawn Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PalRaidBossComponent_C::Spawn_Delegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "Spawn Delegate");

	Params::BP_PalRaidBossComponent_C_Spawn_Delegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.Spawn One Pal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalRaidBossSpawnInfo            SpawnInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SpawnerTransform                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalRaidBossComponent_C::Spawn_One_Pal(const struct FPalRaidBossSpawnInfo& SpawnInfo, int32 Param_Index, const struct FTransform& SpawnerTransform, class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "Spawn One Pal");

	Params::BP_PalRaidBossComponent_C_Spawn_One_Pal Parms{};

	Parms.SpawnInfo = std::move(SpawnInfo);
	Parms.Param_Index = Param_Index;
	Parms.SpawnerTransform = std::move(SpawnerTransform);

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.Spawn Volume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalRaidBossComponent_C::Spawn_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "Spawn Volume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRaidBossComponent.BP_PalRaidBossComponent_C.SpawnRaidBoss_BP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalRaidBossSpawnInfoList        SpawnInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                       SpawnTransform                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>OutIndividualHandle                                    (Parm, OutParm)

void UBP_PalRaidBossComponent_C::SpawnRaidBoss_BP(const struct FPalRaidBossSpawnInfoList& SpawnInfo, const struct FTransform& SpawnTransform, TArray<class UPalIndividualCharacterHandle*>* OutIndividualHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossComponent_C", "SpawnRaidBoss_BP");

	Params::BP_PalRaidBossComponent_C_SpawnRaidBoss_BP Parms{};

	Parms.SpawnInfo = std::move(SpawnInfo);
	Parms.SpawnTransform = std::move(SpawnTransform);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIndividualHandle != nullptr)
		*OutIndividualHandle = std::move(Parms.OutIndividualHandle);
}

}

