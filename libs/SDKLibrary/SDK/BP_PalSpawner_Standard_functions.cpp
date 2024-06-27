#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalSpawner_Standard

#include "Basic.hpp"

#include "BP_PalSpawner_Standard_classes.hpp"
#include "BP_PalSpawner_Standard_parameters.hpp"


namespace SDK
{

// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BlueprintTick_Despawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BlueprintTick_Despawning(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BlueprintTick_Despawning");

	Params::BP_PalSpawner_Standard_C_BlueprintTick_Despawning Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BlueprintTick_Spawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BlueprintTick_Spawning(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BlueprintTick_Spawning");

	Params::BP_PalSpawner_Standard_C_BlueprintTick_Spawning Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BP_PalSpawner_Standard_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BP_PalSpawner_Standard_AutoGenFunc");

	Params::BP_PalSpawner_Standard_C_BP_PalSpawner_Standard_AutoGenFunc Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckIntervalByDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSpawner_Standard_C::CheckIntervalByDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckIntervalByDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::CheckSpawn(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckSpawn");

	Params::BP_PalSpawner_Standard_C_CheckSpawn Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckWorldLoadCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalSpawner_Standard_C::CheckWorldLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckWorldLoadCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CreateDebugSpawnerGroupInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPalSpawnerGroupInfo             OneGroupInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalSpawner_Standard_C::CreateDebugSpawnerGroupInfo(const struct FPalSpawnerGroupInfo& OneGroupInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CreateDebugSpawnerGroupInfo");

	Params::BP_PalSpawner_Standard_C_CreateDebugSpawnerGroupInfo Parms{};

	Parms.OneGroupInfo = std::move(OneGroupInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Despawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalSpawner_Standard_C::Despawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Despawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.DespawnDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::DespawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "DespawnDelegate");

	Params::BP_PalSpawner_Standard_C_DespawnDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ExecuteUbergraph_BP_PalSpawner_Standard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ExecuteUbergraph_BP_PalSpawner_Standard");

	Params::BP_PalSpawner_Standard_C_ExecuteUbergraph_BP_PalSpawner_Standard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ExistAliveCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ExistAliveCharacter(bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ExistAliveCharacter");

	Params::BP_PalSpawner_Standard_C_ExistAliveCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "FindIndividualHandle");

	Params::BP_PalSpawner_Standard_C_FindIndividualHandle Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetAllSpawnedNPCHandle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                (Parm, OutParm)

void ABP_PalSpawner_Standard_C::GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetAllSpawnedNPCHandle");

	Params::BP_PalSpawner_Standard_C_GetAllSpawnedNPCHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handles != nullptr)
		*Handles = std::move(Parms.Handles);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetFixedSpawnInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalSpawnerGroupInfo             Group                                                  (Parm, OutParm)

void ABP_PalSpawner_Standard_C::GetFixedSpawnInfo(struct FPalSpawnerGroupInfo* Group)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetFixedSpawnInfo");

	Params::BP_PalSpawner_Standard_C_GetFixedSpawnInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Group != nullptr)
		*Group = std::move(Parms.Group);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnPointRadius
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_PalSpawner_Standard_C::GetSpawnPointRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnPointRadius");

	Params::BP_PalSpawner_Standard_C_GetSpawnPointRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Is Field Boss or Imprisonment Boss Spawner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsTimer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Is_Field_Boss_or_Imprisonment_Boss_Spawner(bool* IsTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Is Field Boss or Imprisonment Boss Spawner");

	Params::BP_PalSpawner_Standard_C_Is_Field_Boss_or_Imprisonment_Boss_Spawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimer != nullptr)
		*IsTimer = Parms.IsTimer;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsAlwaysSpawn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Always                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsAlwaysSpawn(bool* Always)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsAlwaysSpawn");

	Params::BP_PalSpawner_Standard_C_IsAlwaysSpawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Always != nullptr)
		*Always = Parms.Always;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsCharacterLoading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsLoading                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsCharacterLoading(bool* Param_IsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsCharacterLoading");

	Params::BP_PalSpawner_Standard_C_IsCharacterLoading Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsLoading != nullptr)
		*Param_IsLoading = Parms.Param_IsLoading;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsSuppressedByRandomIncident
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PalSpawner_Standard_C::IsSuppressedByRandomIncident()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsSuppressedByRandomIncident");

	Params::BP_PalSpawner_Standard_C_IsSuppressedByRandomIncident Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsWorldPartitionLoadComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsLoading                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsWorldPartitionLoadComplete(bool* Param_IsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsWorldPartitionLoadComplete");

	Params::BP_PalSpawner_Standard_C_IsWorldPartitionLoadComplete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsLoading != nullptr)
		*Param_IsLoading = Parms.Param_IsLoading;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Lottery and Spawn Reauest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalSpawner_Standard_C::Lottery_and_Spawn_Reauest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Lottery and Spawn Reauest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.LotterySpawnPalListIndex
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo             SpawnGroup                                             (Parm, OutParm)

void ABP_PalSpawner_Standard_C::LotterySpawnPalListIndex(bool* Success, struct FPalSpawnerGroupInfo* SpawnGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "LotterySpawnPalListIndex");

	Params::BP_PalSpawner_Standard_C_LotterySpawnPalListIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SpawnGroup != nullptr)
		*SpawnGroup = std::move(Parms.SpawnGroup);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.OnCaptured
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SelfPal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "OnCaptured");

	Params::BP_PalSpawner_Standard_C_OnCaptured Parms{};

	Parms.SelfPal = SelfPal;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.OnDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_PalSpawner_Standard_C::OnDead(const struct FPalDeadInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "OnDead");

	Params::BP_PalSpawner_Standard_C_OnDead Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSpawner_Standard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ReceiveEndPlay");

	Params::BP_PalSpawner_Standard_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.RemoveHandleList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Monster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::RemoveHandleList(class APalCharacter* Monster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "RemoveHandleList");

	Params::BP_PalSpawner_Standard_C_RemoveHandleList Parms{};

	Parms.Monster = Monster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.SetAllNPCLocation
// (Event, Protected, BlueprintEvent)

void ABP_PalSpawner_Standard_C::SetAllNPCLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "SetAllNPCLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Spawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalSpawnerGroupInfo             SpawnGroup                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalSpawner_Standard_C::Spawn(const struct FPalSpawnerGroupInfo& SpawnGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Spawn");

	Params::BP_PalSpawner_Standard_C_Spawn Parms{};

	Parms.SpawnGroup = std::move(SpawnGroup);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Spawn Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Spawn_Delegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Spawn Delegate");

	Params::BP_PalSpawner_Standard_C_Spawn_Delegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.SpawnRequest_ByOutside
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDeleteAliveCharacter                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::SpawnRequest_ByOutside(bool IsDeleteAliveCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "SpawnRequest_ByOutside");

	Params::BP_PalSpawner_Standard_C_SpawnRequest_ByOutside Parms{};

	Parms.IsDeleteAliveCharacter = IsDeleteAliveCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void ABP_PalSpawner_Standard_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetMaxMonsterLevel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_PalSpawner_Standard_C::GetMaxMonsterLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetMaxMonsterLevel");

	Params::BP_PalSpawner_Standard_C_GetMaxMonsterLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetOriginalSpawnGroupList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FPalSpawnerGroupInfo>     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FPalSpawnerGroupInfo> ABP_PalSpawner_Standard_C::GetOriginalSpawnGroupList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetOriginalSpawnGroupList");

	Params::BP_PalSpawner_Standard_C_GetOriginalSpawnGroupList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnerName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_PalSpawner_Standard_C::GetSpawnerName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnerName");

	Params::BP_PalSpawner_Standard_C_GetSpawnerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnerType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EPalSpawnedCharacterType                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EPalSpawnedCharacterType ABP_PalSpawner_Standard_C::GetSpawnerType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnerType");

	Params::BP_PalSpawner_Standard_C_GetSpawnerType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnGroupList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalSpawnerGroupInfo>     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FPalSpawnerGroupInfo> ABP_PalSpawner_Standard_C::GetSpawnGroupList(class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnGroupList");

	Params::BP_PalSpawner_Standard_C_GetSpawnGroupList Parms{};

	Parms.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

