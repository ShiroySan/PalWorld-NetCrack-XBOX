#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidImplementation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluidImplementation.BP_FluidImplementation_C
// 0x00A0 (0x0140 - 0x00A0)
class UBP_FluidImplementation_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_FluidController_C*                  FluidControllerReference;                          // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FluidControllerTag;                                // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FluidSurfaceTag;                                   // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceOffsetUp;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceOffsetDown;                                   // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsePerBoneTrace;                                   // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTraceDebug;                                    // 0x00D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12A6[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FluidDrawSize;                                     // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FluidMaxDrawIntensity;                             // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFrustumCulling;                                 // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12A7[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FluidCullDistance;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VelocityDeterminesIntensity;                       // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12A8[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        VelocityDivideIntensity;                           // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FluidMeshTag;                                      // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Bones_to_Ignore;                                   // 0x0110(0x0010)(Edit, BlueprintVisible)
	TArray<class UMeshComponent*>                 MeshComponents;                                    // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	double                                        VelocityBegin;                                     // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DrawMaterialInstanceDynamic;                       // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FluidImplementation(int32 EntryPoint);
	void FindFluidController();
	void FluidTrace(const struct FVector& Location, bool* Valid);
	void PerBoneDraw(class FName Bone_Name, class UMeshComponent*& Mesh_Component);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidImplementation_C">();
	}
	static class UBP_FluidImplementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FluidImplementation_C>();
	}
};
static_assert(alignof(UBP_FluidImplementation_C) == 0x000008, "Wrong alignment on UBP_FluidImplementation_C");
static_assert(sizeof(UBP_FluidImplementation_C) == 0x000140, "Wrong size on UBP_FluidImplementation_C");
static_assert(offsetof(UBP_FluidImplementation_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_FluidImplementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidControllerReference) == 0x0000A8, "Member 'UBP_FluidImplementation_C::FluidControllerReference' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidControllerTag) == 0x0000B0, "Member 'UBP_FluidImplementation_C::FluidControllerTag' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidSurfaceTag) == 0x0000B8, "Member 'UBP_FluidImplementation_C::FluidSurfaceTag' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, TraceOffsetUp) == 0x0000C0, "Member 'UBP_FluidImplementation_C::TraceOffsetUp' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, TraceOffsetDown) == 0x0000C8, "Member 'UBP_FluidImplementation_C::TraceOffsetDown' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, UsePerBoneTrace) == 0x0000D0, "Member 'UBP_FluidImplementation_C::UsePerBoneTrace' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, ShowTraceDebug) == 0x0000D1, "Member 'UBP_FluidImplementation_C::ShowTraceDebug' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidDrawSize) == 0x0000D8, "Member 'UBP_FluidImplementation_C::FluidDrawSize' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidMaxDrawIntensity) == 0x0000E0, "Member 'UBP_FluidImplementation_C::FluidMaxDrawIntensity' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, UseFrustumCulling) == 0x0000E8, "Member 'UBP_FluidImplementation_C::UseFrustumCulling' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidCullDistance) == 0x0000F0, "Member 'UBP_FluidImplementation_C::FluidCullDistance' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, VelocityDeterminesIntensity) == 0x0000F8, "Member 'UBP_FluidImplementation_C::VelocityDeterminesIntensity' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, VelocityDivideIntensity) == 0x000100, "Member 'UBP_FluidImplementation_C::VelocityDivideIntensity' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, FluidMeshTag) == 0x000108, "Member 'UBP_FluidImplementation_C::FluidMeshTag' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, Bones_to_Ignore) == 0x000110, "Member 'UBP_FluidImplementation_C::Bones_to_Ignore' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, MeshComponents) == 0x000120, "Member 'UBP_FluidImplementation_C::MeshComponents' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, VelocityBegin) == 0x000130, "Member 'UBP_FluidImplementation_C::VelocityBegin' has a wrong offset!");
static_assert(offsetof(UBP_FluidImplementation_C, DrawMaterialInstanceDynamic) == 0x000138, "Member 'UBP_FluidImplementation_C::DrawMaterialInstanceDynamic' has a wrong offset!");

}

