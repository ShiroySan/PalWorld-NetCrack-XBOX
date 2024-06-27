#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelingComponents

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
// NumValues: 0x0004
enum class EBaseCreateFromSelectedTargetType : uint32
{
	NewObject                                = 0,
	FirstInputObject                         = 1,
	LastInputObject                          = 2,
	EBaseCreateFromSelectedTargetType_MAX    = 3,
};

// Enum ModelingComponents.EUVLayoutPreviewSide
// NumValues: 0x0003
enum class EUVLayoutPreviewSide : uint32
{
	Left                                     = 0,
	Right                                    = 1,
	EUVLayoutPreviewSide_MAX                 = 2,
};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
// NumValues: 0x0003
enum class ESpaceCurveControlPointTransformMode : uint32
{
	Shared                                   = 0,
	PerVertex                                = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
// NumValues: 0x0004
enum class ESpaceCurveControlPointOriginMode : uint32
{
	Shared                                   = 0,
	First                                    = 1,
	Last                                     = 2,
	ESpaceCurveControlPointOriginMode_MAX    = 3,
};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
// NumValues: 0x0003
enum class ESpaceCurveControlPointFalloffType : uint32
{
	Linear                                   = 0,
	Smooth                                   = 1,
	ESpaceCurveControlPointFalloffType_MAX   = 2,
};

// Enum ModelingComponents.ECreateModelingObjectResult
// NumValues: 0x000A
enum class ECreateModelingObjectResult : uint8
{
	Ok                                       = 0,
	Cancelled                                = 1,
	Failed_Unknown                           = 2,
	Failed_NoAPIFound                        = 3,
	Failed_InvalidWorld                      = 4,
	Failed_InvalidMesh                       = 5,
	Failed_InvalidTexture                    = 6,
	Failed_AssetCreationFailed               = 7,
	Failed_ActorCreationFailed               = 8,
	ECreateModelingObjectResult_MAX          = 9,
};

// Enum ModelingComponents.ECreateMeshObjectSourceMeshType
// NumValues: 0x0003
enum class ECreateMeshObjectSourceMeshType : uint8
{
	MeshDescription                          = 0,
	DynamicMesh                              = 1,
	ECreateMeshObjectSourceMeshType_MAX      = 2,
};

// Enum ModelingComponents.ECreateObjectTypeHint
// NumValues: 0x0005
enum class ECreateObjectTypeHint : uint8
{
	Undefined                                = 0,
	StaticMesh                               = 1,
	Volume                                   = 2,
	DynamicMeshActor                         = 3,
	ECreateObjectTypeHint_MAX                = 4,
};

// Enum ModelingComponents.EHandleSourcesMethod
// NumValues: 0x0006
enum class EHandleSourcesMethod : uint8
{
	DeleteSources                            = 0,
	HideSources                              = 1,
	KeepSources                              = 2,
	KeepFirstSource                          = 3,
	KeepLastSource                           = 4,
	EHandleSourcesMethod_MAX                 = 5,
};

// Enum ModelingComponents.EMultiTransformerMode
// NumValues: 0x0003
enum class EMultiTransformerMode : uint8
{
	DefaultGizmo                             = 1,
	QuickAxisTranslation                     = 2,
	EMultiTransformerMode_MAX                = 3,
};

// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
// 0x0003 (0x0003 - 0x0000)
struct FModelingToolsAxisFilter final
{
public:
	bool                                          bAxisX;                                            // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAxisY;                                            // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAxisZ;                                            // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FModelingToolsAxisFilter) == 0x000001, "Wrong alignment on FModelingToolsAxisFilter");
static_assert(sizeof(FModelingToolsAxisFilter) == 0x000003, "Wrong size on FModelingToolsAxisFilter");
static_assert(offsetof(FModelingToolsAxisFilter, bAxisX) == 0x000000, "Member 'FModelingToolsAxisFilter::bAxisX' has a wrong offset!");
static_assert(offsetof(FModelingToolsAxisFilter, bAxisY) == 0x000001, "Member 'FModelingToolsAxisFilter::bAxisY' has a wrong offset!");
static_assert(offsetof(FModelingToolsAxisFilter, bAxisZ) == 0x000002, "Member 'FModelingToolsAxisFilter::bAxisZ' has a wrong offset!");

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// 0x0048 (0x0048 - 0x0000)
struct FRenderableTriangleVertex final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV;                                                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4A[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRenderableTriangleVertex) == 0x000008, "Wrong alignment on FRenderableTriangleVertex");
static_assert(sizeof(FRenderableTriangleVertex) == 0x000048, "Wrong size on FRenderableTriangleVertex");
static_assert(offsetof(FRenderableTriangleVertex, Position) == 0x000000, "Member 'FRenderableTriangleVertex::Position' has a wrong offset!");
static_assert(offsetof(FRenderableTriangleVertex, UV) == 0x000018, "Member 'FRenderableTriangleVertex::UV' has a wrong offset!");
static_assert(offsetof(FRenderableTriangleVertex, Normal) == 0x000028, "Member 'FRenderableTriangleVertex::Normal' has a wrong offset!");
static_assert(offsetof(FRenderableTriangleVertex, Color) == 0x000040, "Member 'FRenderableTriangleVertex::Color' has a wrong offset!");

// ScriptStruct ModelingComponents.RenderableTriangle
// 0x00E0 (0x00E0 - 0x0000)
struct FRenderableTriangle final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex              Vertex0;                                           // 0x0008(0x0048)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex              Vertex1;                                           // 0x0050(0x0048)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex              Vertex2;                                           // 0x0098(0x0048)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRenderableTriangle) == 0x000008, "Wrong alignment on FRenderableTriangle");
static_assert(sizeof(FRenderableTriangle) == 0x0000E0, "Wrong size on FRenderableTriangle");
static_assert(offsetof(FRenderableTriangle, Material) == 0x000000, "Member 'FRenderableTriangle::Material' has a wrong offset!");
static_assert(offsetof(FRenderableTriangle, Vertex0) == 0x000008, "Member 'FRenderableTriangle::Vertex0' has a wrong offset!");
static_assert(offsetof(FRenderableTriangle, Vertex1) == 0x000050, "Member 'FRenderableTriangle::Vertex1' has a wrong offset!");
static_assert(offsetof(FRenderableTriangle, Vertex2) == 0x000098, "Member 'FRenderableTriangle::Vertex2' has a wrong offset!");

// ScriptStruct ModelingComponents.CreateMeshObjectParams
// 0x05E0 (0x05E0 - 0x0000)
struct FCreateMeshObjectParams final
{
public:
	class UPrimitiveComponent*                    SourceComponent;                                   // 0x0000(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECreateObjectTypeHint                         TypeHint;                                          // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    TypeHintClass;                                     // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TypeHintExtended;                                  // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 TargetWorld;                                       // 0x0020(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0030(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BaseName;                                          // 0x0090(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             Materials;                                         // 0x00A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             AssetMaterials;                                    // 0x00B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x00C0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTraceFlag                           CollisionMode;                                     // 0x00C1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRaytracingSupport;                          // 0x00C2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRecomputeNormals;                           // 0x00C3(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRecomputeTangents;                          // 0x00C4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableNanite;                                     // 0x00C5(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4E[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NaniteProxyTrianglePercent;                        // 0x00C8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshNaniteSettings                    NaniteSettings;                                    // 0x00CC(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B4F[0x4F8];                                   // 0x00E8(0x04F8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCreateMeshObjectParams) == 0x000010, "Wrong alignment on FCreateMeshObjectParams");
static_assert(sizeof(FCreateMeshObjectParams) == 0x0005E0, "Wrong size on FCreateMeshObjectParams");
static_assert(offsetof(FCreateMeshObjectParams, SourceComponent) == 0x000000, "Member 'FCreateMeshObjectParams::SourceComponent' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, TypeHint) == 0x000008, "Member 'FCreateMeshObjectParams::TypeHint' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, TypeHintClass) == 0x000010, "Member 'FCreateMeshObjectParams::TypeHintClass' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, TypeHintExtended) == 0x000018, "Member 'FCreateMeshObjectParams::TypeHintExtended' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, TargetWorld) == 0x000020, "Member 'FCreateMeshObjectParams::TargetWorld' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, Transform) == 0x000030, "Member 'FCreateMeshObjectParams::Transform' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, BaseName) == 0x000090, "Member 'FCreateMeshObjectParams::BaseName' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, Materials) == 0x0000A0, "Member 'FCreateMeshObjectParams::Materials' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, AssetMaterials) == 0x0000B0, "Member 'FCreateMeshObjectParams::AssetMaterials' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, bEnableCollision) == 0x0000C0, "Member 'FCreateMeshObjectParams::bEnableCollision' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, CollisionMode) == 0x0000C1, "Member 'FCreateMeshObjectParams::CollisionMode' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRaytracingSupport) == 0x0000C2, "Member 'FCreateMeshObjectParams::bEnableRaytracingSupport' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRecomputeNormals) == 0x0000C3, "Member 'FCreateMeshObjectParams::bEnableRecomputeNormals' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, bEnableRecomputeTangents) == 0x0000C4, "Member 'FCreateMeshObjectParams::bEnableRecomputeTangents' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, bEnableNanite) == 0x0000C5, "Member 'FCreateMeshObjectParams::bEnableNanite' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, NaniteProxyTrianglePercent) == 0x0000C8, "Member 'FCreateMeshObjectParams::NaniteProxyTrianglePercent' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectParams, NaniteSettings) == 0x0000CC, "Member 'FCreateMeshObjectParams::NaniteSettings' has a wrong offset!");

// ScriptStruct ModelingComponents.CreateMeshObjectResult
// 0x0020 (0x0020 - 0x0000)
struct FCreateMeshObjectResult final
{
public:
	ECreateModelingObjectResult                   ResultCode;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B50[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 NewActor;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    NewComponent;                                      // 0x0010(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                NewAsset;                                          // 0x0018(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCreateMeshObjectResult) == 0x000008, "Wrong alignment on FCreateMeshObjectResult");
static_assert(sizeof(FCreateMeshObjectResult) == 0x000020, "Wrong size on FCreateMeshObjectResult");
static_assert(offsetof(FCreateMeshObjectResult, ResultCode) == 0x000000, "Member 'FCreateMeshObjectResult::ResultCode' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectResult, NewActor) == 0x000008, "Member 'FCreateMeshObjectResult::NewActor' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectResult, NewComponent) == 0x000010, "Member 'FCreateMeshObjectResult::NewComponent' has a wrong offset!");
static_assert(offsetof(FCreateMeshObjectResult, NewAsset) == 0x000018, "Member 'FCreateMeshObjectResult::NewAsset' has a wrong offset!");

// ScriptStruct ModelingComponents.CreateTextureObjectParams
// 0x0030 (0x0030 - 0x0000)
struct FCreateTextureObjectParams final
{
public:
	int32                                         TypeHintExtended;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B51[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 TargetWorld;                                       // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                StoreRelativeToObject;                             // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BaseName;                                          // 0x0018(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             GeneratedTransientTexture;                         // 0x0028(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCreateTextureObjectParams) == 0x000008, "Wrong alignment on FCreateTextureObjectParams");
static_assert(sizeof(FCreateTextureObjectParams) == 0x000030, "Wrong size on FCreateTextureObjectParams");
static_assert(offsetof(FCreateTextureObjectParams, TypeHintExtended) == 0x000000, "Member 'FCreateTextureObjectParams::TypeHintExtended' has a wrong offset!");
static_assert(offsetof(FCreateTextureObjectParams, TargetWorld) == 0x000008, "Member 'FCreateTextureObjectParams::TargetWorld' has a wrong offset!");
static_assert(offsetof(FCreateTextureObjectParams, StoreRelativeToObject) == 0x000010, "Member 'FCreateTextureObjectParams::StoreRelativeToObject' has a wrong offset!");
static_assert(offsetof(FCreateTextureObjectParams, BaseName) == 0x000018, "Member 'FCreateTextureObjectParams::BaseName' has a wrong offset!");
static_assert(offsetof(FCreateTextureObjectParams, GeneratedTransientTexture) == 0x000028, "Member 'FCreateTextureObjectParams::GeneratedTransientTexture' has a wrong offset!");

// ScriptStruct ModelingComponents.CreateTextureObjectResult
// 0x0010 (0x0010 - 0x0000)
struct FCreateTextureObjectResult final
{
public:
	ECreateModelingObjectResult                   ResultCode;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B52[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                NewAsset;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCreateTextureObjectResult) == 0x000008, "Wrong alignment on FCreateTextureObjectResult");
static_assert(sizeof(FCreateTextureObjectResult) == 0x000010, "Wrong size on FCreateTextureObjectResult");
static_assert(offsetof(FCreateTextureObjectResult, ResultCode) == 0x000000, "Member 'FCreateTextureObjectResult::ResultCode' has a wrong offset!");
static_assert(offsetof(FCreateTextureObjectResult, NewAsset) == 0x000008, "Member 'FCreateTextureObjectResult::NewAsset' has a wrong offset!");

}

