#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MRMesh

#include "Basic.hpp"


namespace SDK
{

// Enum MRMesh.EMeshTrackerVertexColorMode
// NumValues: 0x0004
enum class EMeshTrackerVertexColorMode : uint8
{
	None                                     = 0,
	Confidence                               = 1,
	Block                                    = 2,
	EMeshTrackerVertexColorMode_MAX          = 3,
};

// ScriptStruct MRMesh.MRMeshConfiguration
// 0x0001 (0x0001 - 0x0000)
struct FMRMeshConfiguration final
{
public:
	uint8                                         Pad_3184[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMRMeshConfiguration) == 0x000001, "Wrong alignment on FMRMeshConfiguration");
static_assert(sizeof(FMRMeshConfiguration) == 0x000001, "Wrong size on FMRMeshConfiguration");

}

