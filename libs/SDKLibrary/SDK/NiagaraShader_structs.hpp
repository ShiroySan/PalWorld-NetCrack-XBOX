#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraShader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum NiagaraShader.ENiagaraMipMapGenerationType
// NumValues: 0x0007
enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                               = 0,
	Linear                                   = 1,
	Blur1                                    = 2,
	Blur2                                    = 3,
	Blur3                                    = 4,
	Blur4                                    = 5,
	ENiagaraMipMapGenerationType_MAX         = 6,
};

// Enum NiagaraShader.ENiagaraGpuDispatchType
// NumValues: 0x0005
enum class ENiagaraGpuDispatchType : uint8
{
	OneD                                     = 0,
	TwoD                                     = 1,
	ThreeD                                   = 2,
	Custom                                   = 3,
	ENiagaraGpuDispatchType_MAX              = 4,
};

// Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
// NumValues: 0x0004
enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                                   = 0,
	OnSimulationReset                        = 1,
	NotOnSimulationReset                     = 2,
	ENiagaraSimStageExecuteBehavior_MAX      = 3,
};

// Enum NiagaraShader.FNiagaraCompileEventSeverity
// NumValues: 0x0005
enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                                      = 0,
	Display                                  = 1,
	Warning                                  = 2,
	Error                                    = 3,
	FNiagaraCompileEventSeverity_MAX         = 4,
};

// Enum NiagaraShader.FNiagaraCompileEventSource
// NumValues: 0x0003
enum class EFNiagaraCompileEventSource : uint8
{
	Unset                                    = 0,
	ScriptDependency                         = 1,
	FNiagaraCompileEventSource_MAX           = 2,
};

// ScriptStruct NiagaraShader.SimulationStageMetaData
// 0x0090 (0x0090 - 0x0000)
struct FSimulationStageMetaData final
{
public:
	class FName                                   SimulationStageName;                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   EnabledBinding;                                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountXBinding;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountYBinding;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountZBinding;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   IterationSource;                                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSimStageExecuteBehavior               ExecuteBehavior;                                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bWritesParticles : 1;                              // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPartialParticleUpdate : 1;                        // 0x0034(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bParticleIterationStateEnabled : 1;                // 0x0034(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideElementCount : 1;                         // 0x0034(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11A7[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ParticleIterationStateBinding;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A8[0x4];                                     // 0x0040(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              ParticleIterationStateRange;                       // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           OutputDestinations;                                // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           InputDataInterfaces;                               // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumIterations;                                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NumIterationsBinding;                              // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraGpuDispatchType                       GpuDispatchType;                                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11AA[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             GpuDispatchNumThreads;                             // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11AB[0x4];                                     // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSimulationStageMetaData) == 0x000008, "Wrong alignment on FSimulationStageMetaData");
static_assert(sizeof(FSimulationStageMetaData) == 0x000090, "Wrong size on FSimulationStageMetaData");
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x000000, "Member 'FSimulationStageMetaData::SimulationStageName' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, EnabledBinding) == 0x000008, "Member 'FSimulationStageMetaData::EnabledBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountXBinding) == 0x000010, "Member 'FSimulationStageMetaData::ElementCountXBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountYBinding) == 0x000018, "Member 'FSimulationStageMetaData::ElementCountYBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountZBinding) == 0x000020, "Member 'FSimulationStageMetaData::ElementCountZBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, IterationSource) == 0x000028, "Member 'FSimulationStageMetaData::IterationSource' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ExecuteBehavior) == 0x000030, "Member 'FSimulationStageMetaData::ExecuteBehavior' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateBinding) == 0x000038, "Member 'FSimulationStageMetaData::ParticleIterationStateBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateRange) == 0x000044, "Member 'FSimulationStageMetaData::ParticleIterationStateRange' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x000050, "Member 'FSimulationStageMetaData::OutputDestinations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, InputDataInterfaces) == 0x000060, "Member 'FSimulationStageMetaData::InputDataInterfaces' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterations) == 0x000070, "Member 'FSimulationStageMetaData::NumIterations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterationsBinding) == 0x000074, "Member 'FSimulationStageMetaData::NumIterationsBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchType) == 0x00007C, "Member 'FSimulationStageMetaData::GpuDispatchType' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchNumThreads) == 0x000080, "Member 'FSimulationStageMetaData::GpuDispatchNumThreads' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FNiagaraDataInterfaceGeneratedFunction final
{
public:
	uint8                                         Pad_11AC[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNiagaraDataInterfaceGeneratedFunction) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGeneratedFunction");
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x000028, "Wrong size on FNiagaraDataInterfaceGeneratedFunction");

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0038 (0x0038 - 0x0000)
struct FNiagaraDataInterfaceGPUParamInfo final
{
public:
	class FString                                 DataInterfaceHLSLSymbol;                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DIClassName;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ShaderParametersOffset;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11AD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraDataInterfaceGPUParamInfo) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGPUParamInfo");
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x000038, "Wrong size on FNiagaraDataInterfaceGPUParamInfo");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x000000, "Member 'FNiagaraDataInterfaceGPUParamInfo::DataInterfaceHLSLSymbol' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x000010, "Member 'FNiagaraDataInterfaceGPUParamInfo::DIClassName' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset) == 0x000020, "Member 'FNiagaraDataInterfaceGPUParamInfo::ShaderParametersOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x000028, "Member 'FNiagaraDataInterfaceGPUParamInfo::GeneratedFunctions' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
// 0x0018 (0x0018 - 0x0000)
struct FNiagaraShaderScriptExternalConstant final
{
public:
	class FName                                   Type;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraShaderScriptExternalConstant) == 0x000008, "Wrong alignment on FNiagaraShaderScriptExternalConstant");
static_assert(sizeof(FNiagaraShaderScriptExternalConstant) == 0x000018, "Wrong size on FNiagaraShaderScriptExternalConstant");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Type) == 0x000000, "Member 'FNiagaraShaderScriptExternalConstant::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Name) == 0x000008, "Member 'FNiagaraShaderScriptExternalConstant::Name' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
// 0x0058 (0x0058 - 0x0000)
struct FNiagaraShaderScriptParametersMetadata final
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         LooseMetadataNames;                                // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bExternalConstantsInterpolated;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11AE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_11AF[0x20];                                    // 0x0038(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNiagaraShaderScriptParametersMetadata) == 0x000008, "Wrong alignment on FNiagaraShaderScriptParametersMetadata");
static_assert(sizeof(FNiagaraShaderScriptParametersMetadata) == 0x000058, "Wrong size on FNiagaraShaderScriptParametersMetadata");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo) == 0x000000, "Member 'FNiagaraShaderScriptParametersMetadata::DataInterfaceParamInfo' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames) == 0x000010, "Member 'FNiagaraShaderScriptParametersMetadata::LooseMetadataNames' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, bExternalConstantsInterpolated) == 0x000020, "Member 'FNiagaraShaderScriptParametersMetadata::bExternalConstantsInterpolated' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, ExternalConstants) == 0x000028, "Member 'FNiagaraShaderScriptParametersMetadata::ExternalConstants' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0068 (0x0068 - 0x0000)
struct FNiagaraCompileEvent final
{
public:
	EFNiagaraCompileEventSeverity                 Severity;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11B0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ShortDescription;                                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDismissable;                                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11B1[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  NodeGuid;                                          // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  PinGuid;                                           // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11B2[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          StackGuids;                                        // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	EFNiagaraCompileEventSource                   Source;                                            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11B3[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNiagaraCompileEvent) == 0x000008, "Wrong alignment on FNiagaraCompileEvent");
static_assert(sizeof(FNiagaraCompileEvent) == 0x000068, "Wrong size on FNiagaraCompileEvent");
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x000000, "Member 'FNiagaraCompileEvent::Severity' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x000008, "Member 'FNiagaraCompileEvent::Message' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 0x000018, "Member 'FNiagaraCompileEvent::ShortDescription' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, bDismissable) == 0x000028, "Member 'FNiagaraCompileEvent::bDismissable' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x00002C, "Member 'FNiagaraCompileEvent::NodeGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x00003C, "Member 'FNiagaraCompileEvent::PinGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x000050, "Member 'FNiagaraCompileEvent::StackGuids' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, Source) == 0x000060, "Member 'FNiagaraCompileEvent::Source' has a wrong offset!");

}

