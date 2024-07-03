#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_AliveRagdoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_AliveRagdoll.BP_Action_AliveRagdoll_C
// 0x00D0 (0x0210 - 0x0140)
class UBP_Action_AliveRagdoll_C : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsRagdoll;                                         // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreLocation;                                       // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_168[0x8];                                      // 0x0168(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             MeshTF;                                            // 0x0170(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndAble;                                           // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InBoneName;                                        // 0x01D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x01DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefaultCollisionProfile;                           // 0x01E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      Niagara;                                           // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AomukeOrLeft;                                      // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartHeight;                                       // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlowCharacter();
	void DisableRagdoll();
	void ExecuteUbergraph_BP_Action_AliveRagdoll(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnLoaded_1E91249448FAC6F71D7339ACA5AC1552(class UObject* Loaded);
	void ResetActorTransform(bool SafeHeight);
	void SetDefaultMeshTF();
	void SpawnStunEffect(TSoftObjectPtr<class UNiagaraSystem> Path);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_AliveRagdoll_C">();
	}
	static class UBP_Action_AliveRagdoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_AliveRagdoll_C>();
	}
};
static_assert(alignof(UBP_Action_AliveRagdoll_C) == 0x000010, "Wrong alignment on UBP_Action_AliveRagdoll_C");
static_assert(sizeof(UBP_Action_AliveRagdoll_C) == 0x000210, "Wrong size on UBP_Action_AliveRagdoll_C");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_AliveRagdoll_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, IsRagdoll) == 0x000148, "Member 'UBP_Action_AliveRagdoll_C::IsRagdoll' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, PreLocation) == 0x000150, "Member 'UBP_Action_AliveRagdoll_C::PreLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, MeshTF) == 0x000170, "Member 'UBP_Action_AliveRagdoll_C::MeshTF' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, EndAble) == 0x0001D0, "Member 'UBP_Action_AliveRagdoll_C::EndAble' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, InBoneName) == 0x0001D4, "Member 'UBP_Action_AliveRagdoll_C::InBoneName' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, FlagName) == 0x0001DC, "Member 'UBP_Action_AliveRagdoll_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, DefaultCollisionProfile) == 0x0001E4, "Member 'UBP_Action_AliveRagdoll_C::DefaultCollisionProfile' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, Niagara) == 0x0001F0, "Member 'UBP_Action_AliveRagdoll_C::Niagara' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, Scale) == 0x0001F8, "Member 'UBP_Action_AliveRagdoll_C::Scale' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, AomukeOrLeft) == 0x000200, "Member 'UBP_Action_AliveRagdoll_C::AomukeOrLeft' has a wrong offset!");
static_assert(offsetof(UBP_Action_AliveRagdoll_C, StartHeight) == 0x000208, "Member 'UBP_Action_AliveRagdoll_C::StartHeight' has a wrong offset!");

}

