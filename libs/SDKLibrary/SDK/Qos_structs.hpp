#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Qos

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Qos.EQosResponseType
// NumValues: 0x0004
enum class EQosResponseType : uint8
{
	NoResponse                               = 0,
	Success                                  = 1,
	Failure                                  = 2,
	EQosResponseType_MAX                     = 3,
};

// Enum Qos.EQosDatacenterResult
// NumValues: 0x0004
enum class EQosDatacenterResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Incomplete                               = 2,
	EQosDatacenterResult_MAX                 = 3,
};

// Enum Qos.EQosCompletionResult
// NumValues: 0x0005
enum class EQosCompletionResult : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Failure                                  = 2,
	Canceled                                 = 3,
	EQosCompletionResult_MAX                 = 4,
};

// ScriptStruct Qos.QosSubspaceComparisonParams
// 0x0010 (0x0010 - 0x0000)
struct FQosSubspaceComparisonParams final
{
public:
	int32                                         MaxNonSubspacePingMs;                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinSubspacePingMs;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ConstantMaxToleranceMs;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaledMaxTolerancePct;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FQosSubspaceComparisonParams) == 0x000004, "Wrong alignment on FQosSubspaceComparisonParams");
static_assert(sizeof(FQosSubspaceComparisonParams) == 0x000010, "Wrong size on FQosSubspaceComparisonParams");
static_assert(offsetof(FQosSubspaceComparisonParams, MaxNonSubspacePingMs) == 0x000000, "Member 'FQosSubspaceComparisonParams::MaxNonSubspacePingMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, MinSubspacePingMs) == 0x000004, "Member 'FQosSubspaceComparisonParams::MinSubspacePingMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, ConstantMaxToleranceMs) == 0x000008, "Member 'FQosSubspaceComparisonParams::ConstantMaxToleranceMs' has a wrong offset!");
static_assert(offsetof(FQosSubspaceComparisonParams, ScaledMaxTolerancePct) == 0x00000C, "Member 'FQosSubspaceComparisonParams::ScaledMaxTolerancePct' has a wrong offset!");

// ScriptStruct Qos.QosPingServerInfo
// 0x0018 (0x0018 - 0x0000)
struct FQosPingServerInfo final
{
public:
	class FString                                 Address;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Port;                                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A6[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FQosPingServerInfo) == 0x000008, "Wrong alignment on FQosPingServerInfo");
static_assert(sizeof(FQosPingServerInfo) == 0x000018, "Wrong size on FQosPingServerInfo");
static_assert(offsetof(FQosPingServerInfo, Address) == 0x000000, "Member 'FQosPingServerInfo::Address' has a wrong offset!");
static_assert(offsetof(FQosPingServerInfo, Port) == 0x000010, "Member 'FQosPingServerInfo::Port' has a wrong offset!");

// ScriptStruct Qos.QosDatacenterInfo
// 0x0038 (0x0038 - 0x0000)
struct FQosDatacenterInfo final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RegionId;                                          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FQosPingServerInfo>             Servers;                                           // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FQosDatacenterInfo) == 0x000008, "Wrong alignment on FQosDatacenterInfo");
static_assert(sizeof(FQosDatacenterInfo) == 0x000038, "Wrong size on FQosDatacenterInfo");
static_assert(offsetof(FQosDatacenterInfo, ID) == 0x000000, "Member 'FQosDatacenterInfo::ID' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, RegionId) == 0x000010, "Member 'FQosDatacenterInfo::RegionId' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, bEnabled) == 0x000020, "Member 'FQosDatacenterInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FQosDatacenterInfo, Servers) == 0x000028, "Member 'FQosDatacenterInfo::Servers' has a wrong offset!");

// ScriptStruct Qos.QosRegionInfo
// 0x0040 (0x0040 - 0x0000)
struct FQosRegionInfo final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(NativeAccessSpecifierPublic)
	class FString                                 RegionId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoAssignable;                                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowSubspaceBias;                                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQosSubspaceComparisonParams           SubspaceBiasParams;                                // 0x002C(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A8[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FQosRegionInfo) == 0x000008, "Wrong alignment on FQosRegionInfo");
static_assert(sizeof(FQosRegionInfo) == 0x000040, "Wrong size on FQosRegionInfo");
static_assert(offsetof(FQosRegionInfo, DisplayName) == 0x000000, "Member 'FQosRegionInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, RegionId) == 0x000018, "Member 'FQosRegionInfo::RegionId' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bEnabled) == 0x000028, "Member 'FQosRegionInfo::bEnabled' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bVisible) == 0x000029, "Member 'FQosRegionInfo::bVisible' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bAutoAssignable) == 0x00002A, "Member 'FQosRegionInfo::bAutoAssignable' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, bAllowSubspaceBias) == 0x00002B, "Member 'FQosRegionInfo::bAllowSubspaceBias' has a wrong offset!");
static_assert(offsetof(FQosRegionInfo, SubspaceBiasParams) == 0x00002C, "Member 'FQosRegionInfo::SubspaceBiasParams' has a wrong offset!");

// ScriptStruct Qos.DatacenterQosInstance
// 0x0068 (0x0068 - 0x0000)
struct FDatacenterQosInstance final
{
public:
	struct FQosDatacenterInfo                     Definition;                                        // 0x0000(0x0038)(Transient, NativeAccessSpecifierPublic)
	EQosDatacenterResult                          Result;                                            // 0x0038(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A9[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AvgPingMs;                                         // 0x003C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 PingResults;                                       // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_16AA[0x8];                                     // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LastCheckTimestamp;                                // 0x0058(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsable;                                           // 0x0060(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16AB[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDatacenterQosInstance) == 0x000008, "Wrong alignment on FDatacenterQosInstance");
static_assert(sizeof(FDatacenterQosInstance) == 0x000068, "Wrong size on FDatacenterQosInstance");
static_assert(offsetof(FDatacenterQosInstance, Definition) == 0x000000, "Member 'FDatacenterQosInstance::Definition' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, Result) == 0x000038, "Member 'FDatacenterQosInstance::Result' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, AvgPingMs) == 0x00003C, "Member 'FDatacenterQosInstance::AvgPingMs' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, PingResults) == 0x000040, "Member 'FDatacenterQosInstance::PingResults' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, LastCheckTimestamp) == 0x000058, "Member 'FDatacenterQosInstance::LastCheckTimestamp' has a wrong offset!");
static_assert(offsetof(FDatacenterQosInstance, bUsable) == 0x000060, "Member 'FDatacenterQosInstance::bUsable' has a wrong offset!");

// ScriptStruct Qos.RegionQosInstance
// 0x0050 (0x0050 - 0x0000)
struct FRegionQosInstance final
{
public:
	struct FQosRegionInfo                         Definition;                                        // 0x0000(0x0040)(Transient, NativeAccessSpecifierPublic)
	TArray<struct FDatacenterQosInstance>         DatacenterOptions;                                 // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRegionQosInstance) == 0x000008, "Wrong alignment on FRegionQosInstance");
static_assert(sizeof(FRegionQosInstance) == 0x000050, "Wrong size on FRegionQosInstance");
static_assert(offsetof(FRegionQosInstance, Definition) == 0x000000, "Member 'FRegionQosInstance::Definition' has a wrong offset!");
static_assert(offsetof(FRegionQosInstance, DatacenterOptions) == 0x000040, "Member 'FRegionQosInstance::DatacenterOptions' has a wrong offset!");

}

