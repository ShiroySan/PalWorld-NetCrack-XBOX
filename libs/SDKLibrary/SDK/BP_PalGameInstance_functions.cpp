#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalGameInstance

#include "Basic.hpp"

#include "BP_PalGameInstance_classes.hpp"
#include "BP_PalGameInstance_parameters.hpp"


namespace SDK
{

// Function BP_PalGameInstance.BP_PalGameInstance_C.BP_PalGameInstance_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::BP_PalGameInstance_AutoGenFunc(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "BP_PalGameInstance_AutoGenFunc");

	Params::BP_PalGameInstance_C_BP_PalGameInstance_AutoGenFunc Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.Completed_32AFD11A49E65B7255FF4BA375D305CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ErrorStr                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "Completed_32AFD11A49E65B7255FF4BA375D305CC");

	Params::BP_PalGameInstance_C_Completed_32AFD11A49E65B7255FF4BA375D305CC Parms{};

	Parms.IsSuccess = IsSuccess;
	Parms.ErrorStr = std::move(ErrorStr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.ExecuteUbergraph_BP_PalGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "ExecuteUbergraph_BP_PalGameInstance");

	Params::BP_PalGameInstance_C_ExecuteUbergraph_BP_PalGameInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.LoadingFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PalGameInstance_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "LoadingFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.LoadLevel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UWorld>            Level                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// class FString                           Options                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// bool                                    AutoClose                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::LoadLevel(const TSoftObjectPtr<class UWorld> Level, const class FString& Options, bool AutoClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "LoadLevel");

	Params::BP_PalGameInstance_C_LoadLevel Parms{};

	Parms.Level = Level;
	Parms.Options = std::move(Options);
	Parms.AutoClose = AutoClose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnCloseMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*     Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::OnCloseMap(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnCloseMap");

	Params::BP_PalGameInstance_C_OnCloseMap Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnCompleteSetup
// (BlueprintCallable, BlueprintEvent)

void UBP_PalGameInstance_C::OnCompleteSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnCompleteSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnFinishCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::OnFinishCutscene(bool IsSkipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnFinishCutscene");

	Params::BP_PalGameInstance_C_OnFinishCutscene Parms{};

	Parms.IsSkipped = IsSkipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnShowSelectRespawnMap
// (BlueprintCallable, BlueprintEvent)

void UBP_PalGameInstance_C::OnShowSelectRespawnMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnShowSelectRespawnMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OverrideLoadMap
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UWorld>            World                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UBP_PalGameInstance_C::OverrideLoadMap(const TSoftObjectPtr<class UWorld>& World)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OverrideLoadMap");

	Params::BP_PalGameInstance_C_OverrideLoadMap Parms{};

	Parms.World = World;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetActivePlayerActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::SetActivePlayerActor(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetActivePlayerActor");

	Params::BP_PalGameInstance_C_SetActivePlayerActor Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetPlayerSelectMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelecting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::SetPlayerSelectMap(bool IsSelecting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetPlayerSelectMap");

	Params::BP_PalGameInstance_C_SetPlayerSelectMap Parms{};

	Parms.IsSelecting = IsSelecting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetupGameInit
// (Event, Public, BlueprintEvent)

void UBP_PalGameInstance_C::SetupGameInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetupGameInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.ShowCharacterMakeScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PalGameInstance_C::ShowCharacterMakeScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "ShowCharacterMakeScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bListenServer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::StartGame(bool bNewGame, bool bListenServer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartGame");

	Params::BP_PalGameInstance_C_StartGame Parms{};

	Parms.bNewGame = bNewGame;
	Parms.bListenServer = bListenServer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartLoading
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadingScreen_Transition_C*  CurrentLoadingWidget                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::StartLoading(const class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartLoading");

	Params::BP_PalGameInstance_C_StartLoading Parms{};

	Parms.CurrentLoadingWidget = CurrentLoadingWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartOpening
// (BlueprintCallable, BlueprintEvent)

void UBP_PalGameInstance_C::StartOpening()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartOpening");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.�������
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::________(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalGameInstance_C", "�������");

	Params::BP_PalGameInstance_C_________ Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

