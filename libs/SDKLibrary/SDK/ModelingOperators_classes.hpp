#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelingOperators

#include "Basic.hpp"

#include "InteractiveToolsFramework_classes.hpp"
#include "ModelingOperators_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ModelingOperators.RecomputeUVsToolProperties
// 0x0030 (0x00D8 - 0x00A8)
class URecomputeUVsToolProperties final : public UInteractiveToolPropertySet
{
public:
	bool                                          bEnablePolygroupSupport;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B6F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ERecomputeUVsPropertiesIslandMode             IslandGeneration;                                  // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecomputeUVsPropertiesUnwrapType             UnwrapType;                                        // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecomputeUVsToolOrientationMode              AutoRotation;                                      // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreserveIrregularity;                             // 0x00B8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B70[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SmoothingSteps;                                    // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmoothingAlpha;                                    // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MergingDistortionThreshold;                        // 0x00C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MergingAngleThreshold;                             // 0x00C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecomputeUVsPropertiesLayoutType             LayoutType;                                        // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TextureResolution;                                 // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalizeScale;                                    // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RecomputeUVsToolProperties">();
	}
	static class URecomputeUVsToolProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecomputeUVsToolProperties>();
	}
};
static_assert(alignof(URecomputeUVsToolProperties) == 0x000008, "Wrong alignment on URecomputeUVsToolProperties");
static_assert(sizeof(URecomputeUVsToolProperties) == 0x0000D8, "Wrong size on URecomputeUVsToolProperties");
static_assert(offsetof(URecomputeUVsToolProperties, bEnablePolygroupSupport) == 0x0000A8, "Member 'URecomputeUVsToolProperties::bEnablePolygroupSupport' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, IslandGeneration) == 0x0000AC, "Member 'URecomputeUVsToolProperties::IslandGeneration' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, UnwrapType) == 0x0000B0, "Member 'URecomputeUVsToolProperties::UnwrapType' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, AutoRotation) == 0x0000B4, "Member 'URecomputeUVsToolProperties::AutoRotation' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, bPreserveIrregularity) == 0x0000B8, "Member 'URecomputeUVsToolProperties::bPreserveIrregularity' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, SmoothingSteps) == 0x0000BC, "Member 'URecomputeUVsToolProperties::SmoothingSteps' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, SmoothingAlpha) == 0x0000C0, "Member 'URecomputeUVsToolProperties::SmoothingAlpha' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, MergingDistortionThreshold) == 0x0000C4, "Member 'URecomputeUVsToolProperties::MergingDistortionThreshold' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, MergingAngleThreshold) == 0x0000C8, "Member 'URecomputeUVsToolProperties::MergingAngleThreshold' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, LayoutType) == 0x0000CC, "Member 'URecomputeUVsToolProperties::LayoutType' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, TextureResolution) == 0x0000D0, "Member 'URecomputeUVsToolProperties::TextureResolution' has a wrong offset!");
static_assert(offsetof(URecomputeUVsToolProperties, NormalizeScale) == 0x0000D4, "Member 'URecomputeUVsToolProperties::NormalizeScale' has a wrong offset!");

// Class ModelingOperators.UVLayoutProperties
// 0x0028 (0x00D0 - 0x00A8)
class UUVLayoutProperties final : public UInteractiveToolPropertySet
{
public:
	EUVLayoutType                                 LayoutType;                                        // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TextureResolution;                                 // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B71[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Translation;                                       // 0x00B8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowFlips;                                       // 0x00C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B72[0x7];                                     // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UVLayoutProperties">();
	}
	static class UUVLayoutProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUVLayoutProperties>();
	}
};
static_assert(alignof(UUVLayoutProperties) == 0x000008, "Wrong alignment on UUVLayoutProperties");
static_assert(sizeof(UUVLayoutProperties) == 0x0000D0, "Wrong size on UUVLayoutProperties");
static_assert(offsetof(UUVLayoutProperties, LayoutType) == 0x0000A8, "Member 'UUVLayoutProperties::LayoutType' has a wrong offset!");
static_assert(offsetof(UUVLayoutProperties, TextureResolution) == 0x0000AC, "Member 'UUVLayoutProperties::TextureResolution' has a wrong offset!");
static_assert(offsetof(UUVLayoutProperties, Scale) == 0x0000B0, "Member 'UUVLayoutProperties::Scale' has a wrong offset!");
static_assert(offsetof(UUVLayoutProperties, Translation) == 0x0000B8, "Member 'UUVLayoutProperties::Translation' has a wrong offset!");
static_assert(offsetof(UUVLayoutProperties, bAllowFlips) == 0x0000C8, "Member 'UUVLayoutProperties::bAllowFlips' has a wrong offset!");

// Class ModelingOperators.RecomputeUVsOpFactory
// 0x00C8 (0x00F0 - 0x0028)
class alignas(0x10) URecomputeUVsOpFactory final : public UObject
{
public:
	uint8                                         Pad_1B73[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class URecomputeUVsToolProperties*            Settings;                                          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B74[0xB8];                                    // 0x0038(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RecomputeUVsOpFactory">();
	}
	static class URecomputeUVsOpFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecomputeUVsOpFactory>();
	}
};
static_assert(alignof(URecomputeUVsOpFactory) == 0x000010, "Wrong alignment on URecomputeUVsOpFactory");
static_assert(sizeof(URecomputeUVsOpFactory) == 0x0000F0, "Wrong size on URecomputeUVsOpFactory");
static_assert(offsetof(URecomputeUVsOpFactory, Settings) == 0x000030, "Member 'URecomputeUVsOpFactory::Settings' has a wrong offset!");

// Class ModelingOperators.UVLayoutOperatorFactory
// 0x00C8 (0x00F0 - 0x0028)
class alignas(0x10) UUVLayoutOperatorFactory final : public UObject
{
public:
	uint8                                         Pad_1B75[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UUVLayoutProperties*                    Settings;                                          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B76[0xB8];                                    // 0x0038(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UVLayoutOperatorFactory">();
	}
	static class UUVLayoutOperatorFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUVLayoutOperatorFactory>();
	}
};
static_assert(alignof(UUVLayoutOperatorFactory) == 0x000010, "Wrong alignment on UUVLayoutOperatorFactory");
static_assert(sizeof(UUVLayoutOperatorFactory) == 0x0000F0, "Wrong size on UUVLayoutOperatorFactory");
static_assert(offsetof(UUVLayoutOperatorFactory, Settings) == 0x000030, "Member 'UUVLayoutOperatorFactory::Settings' has a wrong offset!");

}

