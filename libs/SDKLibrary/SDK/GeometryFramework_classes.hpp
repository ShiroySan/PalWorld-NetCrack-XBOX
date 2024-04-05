#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GeometryFramework_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// Class GeometryFramework.BaseDynamicMeshComponent
// 0x0070 (0x05E0 - 0x0570)
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                         Pad_1BAF[0x20];                                    // 0x0570(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bExplicitShowWireframe;                            // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB0[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           WireframeColor;                                    // 0x0594(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDynamicMeshComponentColorOverrideMode        ColorMode;                                         // 0x05A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB1[0x3];                                     // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 ConstantColor;                                     // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFlatShading;                                // 0x05AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableViewModeOverrides;                          // 0x05AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB2[0x2];                                     // 0x05AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideRenderMaterial;                            // 0x05B0(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     SecondaryRenderMaterial;                           // 0x05B8(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1BB3[0x1];                                     // 0x05C0(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEnableRayTracing;                                 // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB4[0x6];                                     // 0x05C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             BaseMaterials;                                     // 0x05C8(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB5[0x8];                                     // 0x05D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearOverrideRenderMaterial();
	void ClearSecondaryRenderMaterial();
	class UDynamicMesh* GetDynamicMesh();
	void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
	void SetConstantOverrideColor(const struct FColor& NewColor);
	void SetEnableFlatShading(bool bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableWireframeRenderPass(bool bEnable);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetShadowsEnabled(bool bEnabled);
	void SetViewModeOverridesEnabled(bool bEnabled);

	EDynamicMeshComponentColorOverrideMode GetColorOverrideMode() const;
	struct FColor GetConstantOverrideColor() const;
	bool GetEnableRaytracing() const;
	bool GetEnableWireframeRenderPass() const;
	bool GetFlatShadingEnabled() const;
	class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex) const;
	bool GetSecondaryBuffersVisibility() const;
	class UMaterialInterface* GetSecondaryRenderMaterial() const;
	bool GetShadowsEnabled() const;
	bool GetViewModeOverridesEnabled() const;
	bool HasOverrideRenderMaterial(int32 K) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseDynamicMeshComponent">();
	}
	static class UBaseDynamicMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseDynamicMeshComponent>();
	}
};
static_assert(alignof(UBaseDynamicMeshComponent) == 0x000010, "Wrong alignment on UBaseDynamicMeshComponent");
static_assert(sizeof(UBaseDynamicMeshComponent) == 0x0005E0, "Wrong size on UBaseDynamicMeshComponent");
static_assert(offsetof(UBaseDynamicMeshComponent, bExplicitShowWireframe) == 0x000590, "Member 'UBaseDynamicMeshComponent::bExplicitShowWireframe' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, WireframeColor) == 0x000594, "Member 'UBaseDynamicMeshComponent::WireframeColor' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, ColorMode) == 0x0005A4, "Member 'UBaseDynamicMeshComponent::ColorMode' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, ConstantColor) == 0x0005A8, "Member 'UBaseDynamicMeshComponent::ConstantColor' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableFlatShading) == 0x0005AC, "Member 'UBaseDynamicMeshComponent::bEnableFlatShading' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableViewModeOverrides) == 0x0005AD, "Member 'UBaseDynamicMeshComponent::bEnableViewModeOverrides' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, OverrideRenderMaterial) == 0x0005B0, "Member 'UBaseDynamicMeshComponent::OverrideRenderMaterial' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, SecondaryRenderMaterial) == 0x0005B8, "Member 'UBaseDynamicMeshComponent::SecondaryRenderMaterial' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableRayTracing) == 0x0005C1, "Member 'UBaseDynamicMeshComponent::bEnableRayTracing' has a wrong offset!");
static_assert(offsetof(UBaseDynamicMeshComponent, BaseMaterials) == 0x0005C8, "Member 'UBaseDynamicMeshComponent::BaseMaterials' has a wrong offset!");

// Class GeometryFramework.DynamicMeshComponent
// 0x0210 (0x07F0 - 0x05E0)
class UDynamicMeshComponent final : public UBaseDynamicMeshComponent
{
public:
	class UDynamicMesh*                           MeshObject;                                        // 0x05E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1BB8[0xF8];                                    // 0x05E8(0x00F8)(Fixing Size After Last Property [ Dumper-7 ])
	EDynamicMeshComponentTangentsMode             TangentsType;                                      // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1BB9[0x3F];                                    // 0x06E1(0x003F)(Fixing Size After Last Property [ Dumper-7 ])
	ECollisionTraceFlag                           CollisionType;                                     // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncCooking;                                  // 0x0721(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableComplexCollision;                           // 0x0722(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeferCollisionUpdates;                            // 0x0723(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BBA[0x4];                                     // 0x0724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             MeshBodySetup;                                     // 0x0728(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1BBB[0x38];                                    // 0x0730(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKAggregateGeom                        AggGeom;                                           // 0x0768(0x0068)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UBodySetup*>                     AsyncBodySetupQueue;                               // 0x07D0(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_1BBC[0x10];                                    // 0x07E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
	void EnableComplexAsSimpleCollision();
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetDynamicMesh(class UDynamicMesh* NewMesh);
	void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
	void UpdateCollision(bool bOnlyIfPending);
	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);

	EDynamicMeshComponentTangentsMode GetTangentsType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshComponent">();
	}
	static class UDynamicMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshComponent>();
	}
};
static_assert(alignof(UDynamicMeshComponent) == 0x000010, "Wrong alignment on UDynamicMeshComponent");
static_assert(sizeof(UDynamicMeshComponent) == 0x0007F0, "Wrong size on UDynamicMeshComponent");
static_assert(offsetof(UDynamicMeshComponent, MeshObject) == 0x0005E0, "Member 'UDynamicMeshComponent::MeshObject' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, TangentsType) == 0x0006E0, "Member 'UDynamicMeshComponent::TangentsType' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, CollisionType) == 0x000720, "Member 'UDynamicMeshComponent::CollisionType' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, bUseAsyncCooking) == 0x000721, "Member 'UDynamicMeshComponent::bUseAsyncCooking' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, bEnableComplexCollision) == 0x000722, "Member 'UDynamicMeshComponent::bEnableComplexCollision' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, bDeferCollisionUpdates) == 0x000723, "Member 'UDynamicMeshComponent::bDeferCollisionUpdates' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, MeshBodySetup) == 0x000728, "Member 'UDynamicMeshComponent::MeshBodySetup' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, AggGeom) == 0x000768, "Member 'UDynamicMeshComponent::AggGeom' has a wrong offset!");
static_assert(offsetof(UDynamicMeshComponent, AsyncBodySetupQueue) == 0x0007D0, "Member 'UDynamicMeshComponent::AsyncBodySetupQueue' has a wrong offset!");

// Class GeometryFramework.MeshCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCommandChangeTarget">();
	}
	static class IMeshCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshCommandChangeTarget>();
	}
};
static_assert(alignof(IMeshCommandChangeTarget) == 0x000008, "Wrong alignment on IMeshCommandChangeTarget");
static_assert(sizeof(IMeshCommandChangeTarget) == 0x000028, "Wrong size on IMeshCommandChangeTarget");

// Class GeometryFramework.MeshReplacementCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshReplacementCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplacementCommandChangeTarget">();
	}
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshReplacementCommandChangeTarget>();
	}
};
static_assert(alignof(IMeshReplacementCommandChangeTarget) == 0x000008, "Wrong alignment on IMeshReplacementCommandChangeTarget");
static_assert(sizeof(IMeshReplacementCommandChangeTarget) == 0x000028, "Wrong size on IMeshReplacementCommandChangeTarget");

// Class GeometryFramework.MeshVertexCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshVertexCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshVertexCommandChangeTarget">();
	}
	static class IMeshVertexCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshVertexCommandChangeTarget>();
	}
};
static_assert(alignof(IMeshVertexCommandChangeTarget) == 0x000008, "Wrong alignment on IMeshVertexCommandChangeTarget");
static_assert(sizeof(IMeshVertexCommandChangeTarget) == 0x000028, "Wrong size on IMeshVertexCommandChangeTarget");

// Class GeometryFramework.DynamicMeshActor
// 0x0018 (0x02A8 - 0x0290)
class ADynamicMeshActor final : public AActor
{
public:
	class UDynamicMeshComponent*                  DynamicMeshComponent;                              // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableComputeMeshPool;                            // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BBD[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicMeshPool*                       DynamicMeshPool;                                   // 0x02A0(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UDynamicMesh* AllocateComputeMesh();
	void FreeAllComputeMeshes();
	class UDynamicMeshPool* GetComputeMeshPool();
	void ReleaseAllComputeMeshes();
	bool ReleaseComputeMesh(class UDynamicMesh* Mesh);

	class UDynamicMeshComponent* GetDynamicMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshActor">();
	}
	static class ADynamicMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADynamicMeshActor>();
	}
};
static_assert(alignof(ADynamicMeshActor) == 0x000008, "Wrong alignment on ADynamicMeshActor");
static_assert(sizeof(ADynamicMeshActor) == 0x0002A8, "Wrong size on ADynamicMeshActor");
static_assert(offsetof(ADynamicMeshActor, DynamicMeshComponent) == 0x000290, "Member 'ADynamicMeshActor::DynamicMeshComponent' has a wrong offset!");
static_assert(offsetof(ADynamicMeshActor, bEnableComputeMeshPool) == 0x000298, "Member 'ADynamicMeshActor::bEnableComputeMeshPool' has a wrong offset!");
static_assert(offsetof(ADynamicMeshActor, DynamicMeshPool) == 0x0002A0, "Member 'ADynamicMeshActor::DynamicMeshPool' has a wrong offset!");

// Class GeometryFramework.DynamicMeshGenerator
// 0x0000 (0x0028 - 0x0028)
class UDynamicMeshGenerator final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshGenerator">();
	}
	static class UDynamicMeshGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshGenerator>();
	}
};
static_assert(alignof(UDynamicMeshGenerator) == 0x000008, "Wrong alignment on UDynamicMeshGenerator");
static_assert(sizeof(UDynamicMeshGenerator) == 0x000028, "Wrong size on UDynamicMeshGenerator");

// Class GeometryFramework.DynamicMesh
// 0x0088 (0x00B0 - 0x0028)
class UDynamicMesh final : public UObject
{
public:
	uint8                                         Pad_1BBF[0x48];                                    // 0x0028(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             MeshModifiedBPEvent;                               // 0x0070(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BC0[0x20];                                    // 0x0080(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicMeshGenerator*                  MeshGenerator;                                     // 0x00A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableMeshGenerator;                              // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BC1[0x7];                                     // 0x00A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UDynamicMesh* Reset();
	class UDynamicMesh* ResetToCube();

	int32 GetTriangleCount() const;
	bool IsEmpty() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMesh">();
	}
	static class UDynamicMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMesh>();
	}
};
static_assert(alignof(UDynamicMesh) == 0x000008, "Wrong alignment on UDynamicMesh");
static_assert(sizeof(UDynamicMesh) == 0x0000B0, "Wrong size on UDynamicMesh");
static_assert(offsetof(UDynamicMesh, MeshModifiedBPEvent) == 0x000070, "Member 'UDynamicMesh::MeshModifiedBPEvent' has a wrong offset!");
static_assert(offsetof(UDynamicMesh, MeshGenerator) == 0x0000A0, "Member 'UDynamicMesh::MeshGenerator' has a wrong offset!");
static_assert(offsetof(UDynamicMesh, bEnableMeshGenerator) == 0x0000A8, "Member 'UDynamicMesh::bEnableMeshGenerator' has a wrong offset!");

// Class GeometryFramework.DynamicMeshPool
// 0x0020 (0x0048 - 0x0028)
class UDynamicMeshPool final : public UObject
{
public:
	TArray<class UDynamicMesh*>                   CachedMeshes;                                      // 0x0028(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDynamicMesh*>                   AllCreatedMeshes;                                  // 0x0038(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	void FreeAllMeshes();
	class UDynamicMesh* RequestMesh();
	void ReturnAllMeshes();
	void ReturnMesh(class UDynamicMesh* Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshPool">();
	}
	static class UDynamicMeshPool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshPool>();
	}
};
static_assert(alignof(UDynamicMeshPool) == 0x000008, "Wrong alignment on UDynamicMeshPool");
static_assert(sizeof(UDynamicMeshPool) == 0x000048, "Wrong size on UDynamicMeshPool");
static_assert(offsetof(UDynamicMeshPool, CachedMeshes) == 0x000028, "Member 'UDynamicMeshPool::CachedMeshes' has a wrong offset!");
static_assert(offsetof(UDynamicMeshPool, AllCreatedMeshes) == 0x000038, "Member 'UDynamicMeshPool::AllCreatedMeshes' has a wrong offset!");

}

