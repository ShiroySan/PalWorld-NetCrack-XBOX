#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landmass

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Landmass.EBrushFalloffMode
// NumValues: 0x0003
enum class EBrushFalloffMode : uint8
{
	Angle                                    = 0,
	Width                                    = 1,
	EBrushFalloffMode_MAX                    = 2,
};

// Enum Landmass.EBrushBlendType
// NumValues: 0x0004
enum class EBrushBlendType : uint8
{
	AlphaBlend                               = 0,
	Min                                      = 1,
	Max                                      = 2,
	Additive                                 = 3,
};

// ScriptStruct Landmass.BrushEffectBlurring
// 0x0008 (0x0008 - 0x0000)
struct FBrushEffectBlurring final
{
public:
	bool                                          bBlurShape;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Radius;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBrushEffectBlurring) == 0x000004, "Wrong alignment on FBrushEffectBlurring");
static_assert(sizeof(FBrushEffectBlurring) == 0x000008, "Wrong size on FBrushEffectBlurring");
static_assert(offsetof(FBrushEffectBlurring, bBlurShape) == 0x000000, "Member 'FBrushEffectBlurring::bBlurShape' has a wrong offset!");
static_assert(offsetof(FBrushEffectBlurring, Radius) == 0x000004, "Member 'FBrushEffectBlurring::Radius' has a wrong offset!");

// ScriptStruct Landmass.BrushEffectCurlNoise
// 0x0010 (0x0010 - 0x0000)
struct FBrushEffectCurlNoise final
{
public:
	float                                         Curl1Amount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Curl2Amount;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Curl1Tiling;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Curl2Tiling;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBrushEffectCurlNoise) == 0x000004, "Wrong alignment on FBrushEffectCurlNoise");
static_assert(sizeof(FBrushEffectCurlNoise) == 0x000010, "Wrong size on FBrushEffectCurlNoise");
static_assert(offsetof(FBrushEffectCurlNoise, Curl1Amount) == 0x000000, "Member 'FBrushEffectCurlNoise::Curl1Amount' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Amount) == 0x000004, "Member 'FBrushEffectCurlNoise::Curl2Amount' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl1Tiling) == 0x000008, "Member 'FBrushEffectCurlNoise::Curl1Tiling' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurlNoise, Curl2Tiling) == 0x00000C, "Member 'FBrushEffectCurlNoise::Curl2Tiling' has a wrong offset!");

// ScriptStruct Landmass.BrushEffectCurves
// 0x0020 (0x0020 - 0x0000)
struct FBrushEffectCurves final
{
public:
	bool                                          bUseCurveChannel;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            ElevationCurveAsset;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChannelEdgeOffset;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChannelDepth;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveRampWidth;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBrushEffectCurves) == 0x000008, "Wrong alignment on FBrushEffectCurves");
static_assert(sizeof(FBrushEffectCurves) == 0x000020, "Wrong size on FBrushEffectCurves");
static_assert(offsetof(FBrushEffectCurves, bUseCurveChannel) == 0x000000, "Member 'FBrushEffectCurves::bUseCurveChannel' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ElevationCurveAsset) == 0x000008, "Member 'FBrushEffectCurves::ElevationCurveAsset' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ChannelEdgeOffset) == 0x000010, "Member 'FBrushEffectCurves::ChannelEdgeOffset' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, ChannelDepth) == 0x000014, "Member 'FBrushEffectCurves::ChannelDepth' has a wrong offset!");
static_assert(offsetof(FBrushEffectCurves, CurveRampWidth) == 0x000018, "Member 'FBrushEffectCurves::CurveRampWidth' has a wrong offset!");

// ScriptStruct Landmass.BrushEffectDisplacement
// 0x0028 (0x0028 - 0x0000)
struct FBrushEffectDisplacement final
{
public:
	float                                         DisplacementHeight;                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplacementTiling;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Midpoint;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Channel;                                           // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WeightmapInfluence;                                // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBrushEffectDisplacement) == 0x000008, "Wrong alignment on FBrushEffectDisplacement");
static_assert(sizeof(FBrushEffectDisplacement) == 0x000028, "Wrong size on FBrushEffectDisplacement");
static_assert(offsetof(FBrushEffectDisplacement, DisplacementHeight) == 0x000000, "Member 'FBrushEffectDisplacement::DisplacementHeight' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, DisplacementTiling) == 0x000004, "Member 'FBrushEffectDisplacement::DisplacementTiling' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Texture) == 0x000008, "Member 'FBrushEffectDisplacement::Texture' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Midpoint) == 0x000010, "Member 'FBrushEffectDisplacement::Midpoint' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, Channel) == 0x000014, "Member 'FBrushEffectDisplacement::Channel' has a wrong offset!");
static_assert(offsetof(FBrushEffectDisplacement, WeightmapInfluence) == 0x000024, "Member 'FBrushEffectDisplacement::WeightmapInfluence' has a wrong offset!");

// ScriptStruct Landmass.BrushEffectSmoothBlending
// 0x0008 (0x0008 - 0x0000)
struct FBrushEffectSmoothBlending final
{
public:
	float                                         InnerSmoothDistance;                               // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OuterSmoothDistance;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBrushEffectSmoothBlending) == 0x000004, "Wrong alignment on FBrushEffectSmoothBlending");
static_assert(sizeof(FBrushEffectSmoothBlending) == 0x000008, "Wrong size on FBrushEffectSmoothBlending");
static_assert(offsetof(FBrushEffectSmoothBlending, InnerSmoothDistance) == 0x000000, "Member 'FBrushEffectSmoothBlending::InnerSmoothDistance' has a wrong offset!");
static_assert(offsetof(FBrushEffectSmoothBlending, OuterSmoothDistance) == 0x000004, "Member 'FBrushEffectSmoothBlending::OuterSmoothDistance' has a wrong offset!");

// ScriptStruct Landmass.BrushEffectTerracing
// 0x0014 (0x0014 - 0x0000)
struct FBrushEffectTerracing final
{
public:
	float                                         TerraceAlpha;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TerraceSpacing;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TerraceSmoothness;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaskLength;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaskStartOffset;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBrushEffectTerracing) == 0x000004, "Wrong alignment on FBrushEffectTerracing");
static_assert(sizeof(FBrushEffectTerracing) == 0x000014, "Wrong size on FBrushEffectTerracing");
static_assert(offsetof(FBrushEffectTerracing, TerraceAlpha) == 0x000000, "Member 'FBrushEffectTerracing::TerraceAlpha' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, TerraceSpacing) == 0x000004, "Member 'FBrushEffectTerracing::TerraceSpacing' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, TerraceSmoothness) == 0x000008, "Member 'FBrushEffectTerracing::TerraceSmoothness' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, MaskLength) == 0x00000C, "Member 'FBrushEffectTerracing::MaskLength' has a wrong offset!");
static_assert(offsetof(FBrushEffectTerracing, MaskStartOffset) == 0x000010, "Member 'FBrushEffectTerracing::MaskStartOffset' has a wrong offset!");

// ScriptStruct Landmass.LandmassBrushEffectsList
// 0x0060 (0x0060 - 0x0000)
struct FLandmassBrushEffectsList final
{
public:
	struct FBrushEffectBlurring                   Blurring;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBrushEffectCurlNoise                  CurlNoise;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBrushEffectDisplacement               Displacement;                                      // 0x0018(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBrushEffectSmoothBlending             SmoothBlending;                                    // 0x0040(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBrushEffectTerracing                  Terracing;                                         // 0x0048(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandmassBrushEffectsList) == 0x000008, "Wrong alignment on FLandmassBrushEffectsList");
static_assert(sizeof(FLandmassBrushEffectsList) == 0x000060, "Wrong size on FLandmassBrushEffectsList");
static_assert(offsetof(FLandmassBrushEffectsList, Blurring) == 0x000000, "Member 'FLandmassBrushEffectsList::Blurring' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, CurlNoise) == 0x000008, "Member 'FLandmassBrushEffectsList::CurlNoise' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, Displacement) == 0x000018, "Member 'FLandmassBrushEffectsList::Displacement' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, SmoothBlending) == 0x000040, "Member 'FLandmassBrushEffectsList::SmoothBlending' has a wrong offset!");
static_assert(offsetof(FLandmassBrushEffectsList, Terracing) == 0x000048, "Member 'FLandmassBrushEffectsList::Terracing' has a wrong offset!");

// ScriptStruct Landmass.LandmassFalloffSettings
// 0x0014 (0x0014 - 0x0000)
struct FLandmassFalloffSettings final
{
public:
	EBrushFalloffMode                             FalloffMode;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FalloffAngle;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FalloffWidth;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EdgeOffset;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ZOffset;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLandmassFalloffSettings) == 0x000004, "Wrong alignment on FLandmassFalloffSettings");
static_assert(sizeof(FLandmassFalloffSettings) == 0x000014, "Wrong size on FLandmassFalloffSettings");
static_assert(offsetof(FLandmassFalloffSettings, FalloffMode) == 0x000000, "Member 'FLandmassFalloffSettings::FalloffMode' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, FalloffAngle) == 0x000004, "Member 'FLandmassFalloffSettings::FalloffAngle' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, FalloffWidth) == 0x000008, "Member 'FLandmassFalloffSettings::FalloffWidth' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, EdgeOffset) == 0x00000C, "Member 'FLandmassFalloffSettings::EdgeOffset' has a wrong offset!");
static_assert(offsetof(FLandmassFalloffSettings, ZOffset) == 0x000010, "Member 'FLandmassFalloffSettings::ZOffset' has a wrong offset!");

// ScriptStruct Landmass.LandmassTerrainCarvingSettings
// 0x0080 (0x0080 - 0x0000)
struct FLandmassTerrainCarvingSettings final
{
public:
	EBrushBlendType                               BlendMode;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvertShape;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLandmassFalloffSettings               FalloffSettings;                                   // 0x0004(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLandmassBrushEffectsList              Effects;                                           // 0x0018(0x0060)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLandmassTerrainCarvingSettings) == 0x000008, "Wrong alignment on FLandmassTerrainCarvingSettings");
static_assert(sizeof(FLandmassTerrainCarvingSettings) == 0x000080, "Wrong size on FLandmassTerrainCarvingSettings");
static_assert(offsetof(FLandmassTerrainCarvingSettings, BlendMode) == 0x000000, "Member 'FLandmassTerrainCarvingSettings::BlendMode' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, bInvertShape) == 0x000001, "Member 'FLandmassTerrainCarvingSettings::bInvertShape' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, FalloffSettings) == 0x000004, "Member 'FLandmassTerrainCarvingSettings::FalloffSettings' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Effects) == 0x000018, "Member 'FLandmassTerrainCarvingSettings::Effects' has a wrong offset!");
static_assert(offsetof(FLandmassTerrainCarvingSettings, Priority) == 0x000078, "Member 'FLandmassTerrainCarvingSettings::Priority' has a wrong offset!");

}

