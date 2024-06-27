#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MRMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MRMesh_structs.hpp"


namespace SDK
{

// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0310 - 0x02A0)
class UMockDataMeshTrackerComponent final : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_             OnMeshTrackerUpdated;                              // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          ScanWorld;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestNormals;                                    // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestVertexConfidence;                           // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeshTrackerVertexColorMode                   VertexColorMode;                                   // 0x02B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3359[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FColor>                         BlockVertexColors;                                 // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceZero;                     // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceOne;                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpdateInterval;                                    // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_335A[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMRMeshComponent*                       MRMesh;                                            // 0x02F0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_335B[0x18];                                    // 0x02F8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Param_Index, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<float>& Confidence);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MockDataMeshTrackerComponent">();
	}
	static class UMockDataMeshTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMockDataMeshTrackerComponent>();
	}
};
static_assert(alignof(UMockDataMeshTrackerComponent) == 0x000010, "Wrong alignment on UMockDataMeshTrackerComponent");
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x000310, "Wrong size on UMockDataMeshTrackerComponent");
static_assert(offsetof(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated) == 0x0002A0, "Member 'UMockDataMeshTrackerComponent::OnMeshTrackerUpdated' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, ScanWorld) == 0x0002B0, "Member 'UMockDataMeshTrackerComponent::ScanWorld' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestNormals) == 0x0002B1, "Member 'UMockDataMeshTrackerComponent::RequestNormals' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestVertexConfidence) == 0x0002B2, "Member 'UMockDataMeshTrackerComponent::RequestVertexConfidence' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x0002B3, "Member 'UMockDataMeshTrackerComponent::VertexColorMode' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0002B8, "Member 'UMockDataMeshTrackerComponent::BlockVertexColors' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0002C8, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceZero' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0002D8, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceOne' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, UpdateInterval) == 0x0002E8, "Member 'UMockDataMeshTrackerComponent::UpdateInterval' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0002F0, "Member 'UMockDataMeshTrackerComponent::MRMesh' has a wrong offset!");

// Class MRMesh.MRMeshBodyHolder
// 0x0208 (0x0230 - 0x0028)
class UMRMeshBodyHolder final : public UObject
{
public:
	uint8                                         Pad_335D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             BodySetup;                                         // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                          BodyInstance;                                      // 0x0038(0x0190)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_335E[0x68];                                    // 0x01C8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshBodyHolder">();
	}
	static class UMRMeshBodyHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshBodyHolder>();
	}
};
static_assert(alignof(UMRMeshBodyHolder) == 0x000008, "Wrong alignment on UMRMeshBodyHolder");
static_assert(sizeof(UMRMeshBodyHolder) == 0x000230, "Wrong size on UMRMeshBodyHolder");
static_assert(offsetof(UMRMeshBodyHolder, BodySetup) == 0x000030, "Member 'UMRMeshBodyHolder::BodySetup' has a wrong offset!");
static_assert(offsetof(UMRMeshBodyHolder, BodyInstance) == 0x000038, "Member 'UMRMeshBodyHolder::BodyInstance' has a wrong offset!");

// Class MRMesh.MRMeshComponent
// 0x0080 (0x05C0 - 0x0540)
class UMRMeshComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_335F[0x8];                                     // 0x0538(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material;                                          // 0x0540(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                     WireframeMaterial;                                 // 0x0548(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bCreateMeshProxySections;                          // 0x0550(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUpdateNavMeshOnMeshUpdate;                        // 0x0551(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3360[0x1];                                     // 0x0552(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bNeverCreateCollisionMesh;                         // 0x0553(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3361[0x44];                                    // 0x0554(0x0044)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMRMeshBodyHolder*>              BodyHolders;                                       // 0x0598(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3362[0x18];                                    // 0x05A8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();
	void ForceNavMeshUpdate();
	void RequestNavMeshUpdate();
	void SetEnableMeshOcclusion(bool bEnable);
	void SetUseWireframe(bool bUseWireframe);
	void SetWireframeColor(const struct FLinearColor& InColor);
	void SetWireframeMaterial(class UMaterialInterface* InMaterial);

	bool GetEnableMeshOcclusion() const;
	bool GetUseWireframe() const;
	const struct FLinearColor GetWireframeColor() const;
	bool IsConnected() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshComponent">();
	}
	static class UMRMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshComponent>();
	}
};
static_assert(alignof(UMRMeshComponent) == 0x000010, "Wrong alignment on UMRMeshComponent");
static_assert(sizeof(UMRMeshComponent) == 0x0005C0, "Wrong size on UMRMeshComponent");
static_assert(offsetof(UMRMeshComponent, Material) == 0x000540, "Member 'UMRMeshComponent::Material' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x000548, "Member 'UMRMeshComponent::WireframeMaterial' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bCreateMeshProxySections) == 0x000550, "Member 'UMRMeshComponent::bCreateMeshProxySections' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bUpdateNavMeshOnMeshUpdate) == 0x000551, "Member 'UMRMeshComponent::bUpdateNavMeshOnMeshUpdate' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bNeverCreateCollisionMesh) == 0x000553, "Member 'UMRMeshComponent::bNeverCreateCollisionMesh' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, BodyHolders) == 0x000598, "Member 'UMRMeshComponent::BodyHolders' has a wrong offset!");

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase final : public UObject
{
public:
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
	void DisconnectMRMesh();
	void PauseReconstruction();
	void StartReconstruction();
	void StopReconstruction();

	bool IsReconstructionPaused() const;
	bool IsReconstructionStarted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReconstructorBase">();
	}
	static class UMeshReconstructorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReconstructorBase>();
	}
};
static_assert(alignof(UMeshReconstructorBase) == 0x000008, "Wrong alignment on UMeshReconstructorBase");
static_assert(sizeof(UMeshReconstructorBase) == 0x000028, "Wrong size on UMeshReconstructorBase");

}

