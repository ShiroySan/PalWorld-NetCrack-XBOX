#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IrisStub

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct IrisStub.NetSerializerConfig
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FNetSerializerConfig
{
};
#pragma pack(pop)
static_assert(alignof(FNetSerializerConfig) == 0x000001, "Wrong alignment on FNetSerializerConfig");
static_assert(sizeof(FNetSerializerConfig) == 0x000001, "Wrong size on FNetSerializerConfig");

// ScriptStruct IrisStub.PolymorphicStructNetSerializerConfig
// 0x0001 (0x0001 - 0x0000)
struct FPolymorphicStructNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         Pad_11EB[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPolymorphicStructNetSerializerConfig) == 0x000001, "Wrong alignment on FPolymorphicStructNetSerializerConfig");
static_assert(sizeof(FPolymorphicStructNetSerializerConfig) == 0x000001, "Wrong size on FPolymorphicStructNetSerializerConfig");

// ScriptStruct IrisStub.PolymorphicArrayStructNetSerializerConfig
// 0x0001 (0x0001 - 0x0000)
struct FPolymorphicArrayStructNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         Pad_11EC[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPolymorphicArrayStructNetSerializerConfig) == 0x000001, "Wrong alignment on FPolymorphicArrayStructNetSerializerConfig");
static_assert(sizeof(FPolymorphicArrayStructNetSerializerConfig) == 0x000001, "Wrong size on FPolymorphicArrayStructNetSerializerConfig");

}

