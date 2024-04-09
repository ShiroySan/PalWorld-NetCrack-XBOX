#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluidController.BP_FluidController_C
// 0x0090 (0x0320 - 0x0290)
class ABP_FluidController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentRT;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FAC[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Time;                                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FluidTransfer;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FluidSimulation;                                   // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NormalSimulation;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableSimulation;                                  // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FAD[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FluidUpdateRate;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FluidTravelSpeed;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FluidDampening;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Height_0;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Height_1;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Height_2;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         RenderTargetSize;                                  // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FAE[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 FluidOut;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 FluidOutNormal;                                    // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        NormalIntensity;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearRenderTargets();
	void CreateMaterials();
	void ExecuteUbergraph_BP_FluidController(int32 EntryPoint);
	void GetPreviousRT(int32 CurrentRTIndex, int32 FramesOld, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTargetOut);
	void GetRT(int32 Param_Index, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTarget);
	void GetRT_Height(int32 Param_Index, class UTextureRenderTarget2D** RenderTarget);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidController_C">();
	}
	static class ABP_FluidController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidController_C>();
	}
};
static_assert(alignof(ABP_FluidController_C) == 0x000008, "Wrong alignment on ABP_FluidController_C");
static_assert(sizeof(ABP_FluidController_C) == 0x000320, "Wrong size on ABP_FluidController_C");
static_assert(offsetof(ABP_FluidController_C, UberGraphFrame) == 0x000290, "Member 'ABP_FluidController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, Icon) == 0x000298, "Member 'ABP_FluidController_C::Icon' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, CurrentRT) == 0x0002A0, "Member 'ABP_FluidController_C::CurrentRT' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, Time) == 0x0002A8, "Member 'ABP_FluidController_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidTransfer) == 0x0002B0, "Member 'ABP_FluidController_C::FluidTransfer' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidSimulation) == 0x0002B8, "Member 'ABP_FluidController_C::FluidSimulation' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, NormalSimulation) == 0x0002C0, "Member 'ABP_FluidController_C::NormalSimulation' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, EnableSimulation) == 0x0002C8, "Member 'ABP_FluidController_C::EnableSimulation' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidUpdateRate) == 0x0002D0, "Member 'ABP_FluidController_C::FluidUpdateRate' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidTravelSpeed) == 0x0002D8, "Member 'ABP_FluidController_C::FluidTravelSpeed' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidDampening) == 0x0002E0, "Member 'ABP_FluidController_C::FluidDampening' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, Height_0) == 0x0002E8, "Member 'ABP_FluidController_C::Height_0' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, Height_1) == 0x0002F0, "Member 'ABP_FluidController_C::Height_1' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, Height_2) == 0x0002F8, "Member 'ABP_FluidController_C::Height_2' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, RenderTargetSize) == 0x000300, "Member 'ABP_FluidController_C::RenderTargetSize' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidOut) == 0x000308, "Member 'ABP_FluidController_C::FluidOut' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, FluidOutNormal) == 0x000310, "Member 'ABP_FluidController_C::FluidOutNormal' has a wrong offset!");
static_assert(offsetof(ABP_FluidController_C, NormalIntensity) == 0x000318, "Member 'ABP_FluidController_C::NormalIntensity' has a wrong offset!");

}

