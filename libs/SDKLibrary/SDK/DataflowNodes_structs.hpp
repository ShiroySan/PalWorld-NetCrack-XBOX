#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowNodes

#include "Basic.hpp"

#include "DataflowCore_structs.hpp"


namespace SDK
{

// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
// 0x0010 (0x00E0 - 0x00D0)
struct FGetSkeletalMeshDataflowNode final : public FDataflowNode
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x00D0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetSkeletalMeshDataflowNode) == 0x000008, "Wrong alignment on FGetSkeletalMeshDataflowNode");
static_assert(sizeof(FGetSkeletalMeshDataflowNode) == 0x0000E0, "Wrong size on FGetSkeletalMeshDataflowNode");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, SkeletalMesh) == 0x0000D0, "Member 'FGetSkeletalMeshDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, PropertyName) == 0x0000D8, "Member 'FGetSkeletalMeshDataflowNode::PropertyName' has a wrong offset!");

// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
// 0x0018 (0x00E8 - 0x00D0)
struct FSkeletalMeshBoneDataflowNode final : public FDataflowNode
{
public:
	class FName                                   BoneName;                                          // 0x00D0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoneIndexOut;                                      // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36E4[0x4];                                     // 0x00E4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSkeletalMeshBoneDataflowNode) == 0x000008, "Wrong alignment on FSkeletalMeshBoneDataflowNode");
static_assert(sizeof(FSkeletalMeshBoneDataflowNode) == 0x0000E8, "Wrong size on FSkeletalMeshBoneDataflowNode");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneName) == 0x0000D0, "Member 'FSkeletalMeshBoneDataflowNode::BoneName' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, SkeletalMesh) == 0x0000D8, "Member 'FSkeletalMeshBoneDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneIndexOut) == 0x0000E0, "Member 'FSkeletalMeshBoneDataflowNode::BoneIndexOut' has a wrong offset!");

// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
// 0x0010 (0x00E0 - 0x00D0)
struct FGetStaticMeshDataflowNode final : public FDataflowNode
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x00D0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetStaticMeshDataflowNode) == 0x000008, "Wrong alignment on FGetStaticMeshDataflowNode");
static_assert(sizeof(FGetStaticMeshDataflowNode) == 0x0000E0, "Wrong size on FGetStaticMeshDataflowNode");
static_assert(offsetof(FGetStaticMeshDataflowNode, StaticMesh) == 0x0000D0, "Member 'FGetStaticMeshDataflowNode::StaticMesh' has a wrong offset!");
static_assert(offsetof(FGetStaticMeshDataflowNode, PropertyName) == 0x0000D8, "Member 'FGetStaticMeshDataflowNode::PropertyName' has a wrong offset!");

}

