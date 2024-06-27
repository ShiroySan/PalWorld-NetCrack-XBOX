#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_Hair

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Player_Hair.ABP_Player_Hair_C.AnimBlueprintGeneratedConstantData
// 0x00FF (0x0100 - 0x0001)
struct ABP_Player_Hair::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_3DCE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_20;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_21;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_22;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_23;                                 // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_24;                                   // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_25;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_26;                                 // 0x0031(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_27;                                 // 0x0032(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DD0[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_28;                                // 0x0038(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_29;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0068(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00E8(0x0018)()
};
static_assert(alignof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Player_Hair::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData) == 0x000100, "Wrong size on ABP_Player_Hair::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __NameProperty_20) == 0x000004, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__NameProperty_20' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __NameProperty_21) == 0x00000C, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__NameProperty_21' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __NameProperty_22) == 0x000014, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__NameProperty_22' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __BlendProfile_23) == 0x000020, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__BlendProfile_23' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __CurveFloat_24) == 0x000028, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__CurveFloat_24' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __BoolProperty_25) == 0x000030, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__BoolProperty_25' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __EnumProperty_26) == 0x000031, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__EnumProperty_26' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __EnumProperty_27) == 0x000032, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__EnumProperty_27' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __ArrayProperty_28) == 0x000038, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__ArrayProperty_28' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, __StructProperty_29) == 0x000048, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::__StructProperty_29' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000068, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000E8, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Player_Hair.ABP_Player_Hair_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ABP_Player_Hair::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Player_Hair::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_Player_Hair::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Player_Hair::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ABP_Player_Hair::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Player_Hair::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_Player_Hair::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

