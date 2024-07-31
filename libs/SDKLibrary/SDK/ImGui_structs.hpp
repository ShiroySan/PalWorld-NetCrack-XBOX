#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImGui

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum ImGui.EImGuiCanvasSizeType
// NumValues: 0x0004
enum class EImGuiCanvasSizeType : uint8
{
	Custom                                   = 0,
	Desktop                                  = 1,
	Viewport                                 = 2,
	EImGuiCanvasSizeType_MAX                 = 3,
};

// Enum ImGui.EImGuiDPIScaleMethod
// NumValues: 0x0003
enum class EImGuiDPIScaleMethod : uint8
{
	ImGui                                    = 0,
	Slate                                    = 1,
	EImGuiDPIScaleMethod_MAX                 = 2,
};

// ScriptStruct ImGui.ImGuiKeyInfo
// 0x0020 (0x0020 - 0x0000)
struct FImGuiKeyInfo final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECheckBoxState                                Shift;                                             // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECheckBoxState                                Ctrl;                                              // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECheckBoxState                                Alt;                                               // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECheckBoxState                                Cmd;                                               // 0x001B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImGuiKeyInfo) == 0x000008, "Wrong alignment on FImGuiKeyInfo");
static_assert(sizeof(FImGuiKeyInfo) == 0x000020, "Wrong size on FImGuiKeyInfo");
static_assert(offsetof(FImGuiKeyInfo, Key) == 0x000000, "Member 'FImGuiKeyInfo::Key' has a wrong offset!");
static_assert(offsetof(FImGuiKeyInfo, Shift) == 0x000018, "Member 'FImGuiKeyInfo::Shift' has a wrong offset!");
static_assert(offsetof(FImGuiKeyInfo, Ctrl) == 0x000019, "Member 'FImGuiKeyInfo::Ctrl' has a wrong offset!");
static_assert(offsetof(FImGuiKeyInfo, Alt) == 0x00001A, "Member 'FImGuiKeyInfo::Alt' has a wrong offset!");
static_assert(offsetof(FImGuiKeyInfo, Cmd) == 0x00001B, "Member 'FImGuiKeyInfo::Cmd' has a wrong offset!");

// ScriptStruct ImGui.ImGuiCanvasSizeInfo
// 0x0010 (0x0010 - 0x0000)
struct FImGuiCanvasSizeInfo final
{
public:
	EImGuiCanvasSizeType                          SizeType;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Width;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Height;                                            // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExtendToViewport;                                 // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImGuiCanvasSizeInfo) == 0x000004, "Wrong alignment on FImGuiCanvasSizeInfo");
static_assert(sizeof(FImGuiCanvasSizeInfo) == 0x000010, "Wrong size on FImGuiCanvasSizeInfo");
static_assert(offsetof(FImGuiCanvasSizeInfo, SizeType) == 0x000000, "Member 'FImGuiCanvasSizeInfo::SizeType' has a wrong offset!");
static_assert(offsetof(FImGuiCanvasSizeInfo, Width) == 0x000004, "Member 'FImGuiCanvasSizeInfo::Width' has a wrong offset!");
static_assert(offsetof(FImGuiCanvasSizeInfo, Height) == 0x000008, "Member 'FImGuiCanvasSizeInfo::Height' has a wrong offset!");
static_assert(offsetof(FImGuiCanvasSizeInfo, bExtendToViewport) == 0x00000C, "Member 'FImGuiCanvasSizeInfo::bExtendToViewport' has a wrong offset!");

// ScriptStruct ImGui.ImGuiDPIScaleInfo
// 0x0098 (0x0098 - 0x0000)
struct FImGuiDPIScaleInfo final
{
public:
	EImGuiDPIScaleMethod                          ScalingMethod;                                     // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRuntimeFloatCurve                     DPICurve;                                          // 0x0008(0x0088)(Edit, Config, Protected, NativeAccessSpecifierProtected)
	bool                                          bScaleWithCurve;                                   // 0x0090(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImGuiDPIScaleInfo) == 0x000008, "Wrong alignment on FImGuiDPIScaleInfo");
static_assert(sizeof(FImGuiDPIScaleInfo) == 0x000098, "Wrong size on FImGuiDPIScaleInfo");
static_assert(offsetof(FImGuiDPIScaleInfo, ScalingMethod) == 0x000000, "Member 'FImGuiDPIScaleInfo::ScalingMethod' has a wrong offset!");
static_assert(offsetof(FImGuiDPIScaleInfo, Scale) == 0x000004, "Member 'FImGuiDPIScaleInfo::Scale' has a wrong offset!");
static_assert(offsetof(FImGuiDPIScaleInfo, DPICurve) == 0x000008, "Member 'FImGuiDPIScaleInfo::DPICurve' has a wrong offset!");
static_assert(offsetof(FImGuiDPIScaleInfo, bScaleWithCurve) == 0x000090, "Member 'FImGuiDPIScaleInfo::bScaleWithCurve' has a wrong offset!");

}

