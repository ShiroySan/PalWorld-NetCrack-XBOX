#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnhancedInput

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Slate_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum EnhancedInput.EInputActionValueType
// NumValues: 0x0005
enum class EInputActionValueType : uint8
{
	Boolean                                  = 0,
	Axis1D                                   = 1,
	Axis2D                                   = 2,
	Axis3D                                   = 3,
	EInputActionValueType_MAX                = 4,
};

// Enum EnhancedInput.EMappingQueryResult
// NumValues: 0x0006
enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled            = 0,
	Error_InputContextNotInActiveContexts    = 1,
	Error_InvalidAction                      = 2,
	NotMappable                              = 3,
	MappingAvailable                         = 4,
	EMappingQueryResult_MAX                  = 5,
};

// Enum EnhancedInput.EMappingQueryIssue
// NumValues: 0x0008
enum class EMappingQueryIssue : uint8
{
	NoIssue                                  = 0,
	ReservedByAction                         = 1,
	HidesExistingMapping                     = 2,
	HiddenByExistingMapping                  = 4,
	CollisionWithMappingInSameContext        = 8,
	ForcesTypePromotion                      = 16,
	ForcesTypeDemotion                       = 32,
	EMappingQueryIssue_MAX                   = 33,
};

// Enum EnhancedInput.EInputMappingRebuildType
// NumValues: 0x0004
enum class EInputMappingRebuildType : uint8
{
	None                                     = 0,
	Rebuild                                  = 1,
	RebuildWithFlush                         = 2,
	EInputMappingRebuildType_MAX             = 3,
};

// Enum EnhancedInput.EDeadZoneType
// NumValues: 0x0003
enum class EDeadZoneType : uint8
{
	Axial                                    = 0,
	Radial                                   = 1,
	EDeadZoneType_MAX                        = 2,
};

// Enum EnhancedInput.EFOVScalingType
// NumValues: 0x0003
enum class EFOVScalingType : uint8
{
	Standard                                 = 0,
	UE4_BackCompat                           = 1,
	EFOVScalingType_MAX                      = 2,
};

// Enum EnhancedInput.EInputAxisSwizzle
// NumValues: 0x0006
enum class EInputAxisSwizzle : uint8
{
	YXZ                                      = 0,
	ZYX                                      = 1,
	XZY                                      = 2,
	YZX                                      = 3,
	ZXY                                      = 4,
	EInputAxisSwizzle_MAX                    = 5,
};

// Enum EnhancedInput.ETriggerState
// NumValues: 0x0004
enum class ETriggerState : uint8
{
	None                                     = 0,
	Ongoing                                  = 1,
	Triggered                                = 2,
	ETriggerState_MAX                        = 3,
};

// Enum EnhancedInput.ETriggerEvent
// NumValues: 0x0007
enum class ETriggerEvent : uint8
{
	None                                     = 0,
	Triggered                                = 1,
	Started                                  = 2,
	Ongoing                                  = 3,
	Canceled                                 = 4,
	Completed                                = 5,
	ETriggerEvent_MAX                        = 6,
};

// Enum EnhancedInput.ETriggerType
// NumValues: 0x0004
enum class ETriggerType : uint8
{
	Explicit                                 = 0,
	Implicit                                 = 1,
	Blocker                                  = 2,
	ETriggerType_MAX                         = 3,
};

// Enum EnhancedInput.ETriggerEventsSupported
// NumValues: 0x0006
enum class ETriggerEventsSupported : uint8
{
	None                                     = 0,
	Instant                                  = 1,
	Uninterruptible                          = 2,
	Ongoing                                  = 4,
	All                                      = 7,
	ETriggerEventsSupported_MAX              = 8,
};

// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// 0x0018 (0x0018 - 0x0000)
struct FBlueprintEnhancedInputActionBinding final
{
public:
	class UInputAction*                           InputAction;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETriggerEvent                                 TriggerEvent;                                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22D1[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FunctionNameToBind;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22D2[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintEnhancedInputActionBinding) == 0x000008, "Wrong alignment on FBlueprintEnhancedInputActionBinding");
static_assert(sizeof(FBlueprintEnhancedInputActionBinding) == 0x000018, "Wrong size on FBlueprintEnhancedInputActionBinding");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0x000000, "Member 'FBlueprintEnhancedInputActionBinding::InputAction' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 0x000008, "Member 'FBlueprintEnhancedInputActionBinding::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 0x00000C, "Member 'FBlueprintEnhancedInputActionBinding::FunctionNameToBind' has a wrong offset!");

// ScriptStruct EnhancedInput.InputActionValue
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FInputActionValue final
{
public:
	uint8                                         Pad_22D3[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputActionValue) == 0x000008, "Wrong alignment on FInputActionValue");
static_assert(sizeof(FInputActionValue) == 0x000020, "Wrong size on FInputActionValue");

// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
// 0x0040 (0x0040 - 0x0000)
struct FPlayerMappableKeyOptions final
{
public:
	class UObject*                                MetaData;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DisplayName;                                       // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   DisplayCategory;                                   // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerMappableKeyOptions) == 0x000008, "Wrong alignment on FPlayerMappableKeyOptions");
static_assert(sizeof(FPlayerMappableKeyOptions) == 0x000040, "Wrong size on FPlayerMappableKeyOptions");
static_assert(offsetof(FPlayerMappableKeyOptions, MetaData) == 0x000000, "Member 'FPlayerMappableKeyOptions::MetaData' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, Name) == 0x000008, "Member 'FPlayerMappableKeyOptions::Name' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayName) == 0x000010, "Member 'FPlayerMappableKeyOptions::DisplayName' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayCategory) == 0x000028, "Member 'FPlayerMappableKeyOptions::DisplayCategory' has a wrong offset!");

// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// 0x0088 (0x0088 - 0x0000)
struct FEnhancedActionKeyMapping final
{
public:
	struct FPlayerMappableKeyOptions              PlayerMappableOptions;                             // 0x0000(0x0040)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                  Triggers;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                 Modifiers;                                         // 0x0050(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UInputAction*                           Action;                                            // 0x0060(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   Key;                                               // 0x0068(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsPlayerMappable : 1;                             // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShouldBeIgnored : 1;                              // 0x0080(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_22D4[0x7];                                     // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEnhancedActionKeyMapping) == 0x000008, "Wrong alignment on FEnhancedActionKeyMapping");
static_assert(sizeof(FEnhancedActionKeyMapping) == 0x000088, "Wrong size on FEnhancedActionKeyMapping");
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableOptions) == 0x000000, "Member 'FEnhancedActionKeyMapping::PlayerMappableOptions' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0x000040, "Member 'FEnhancedActionKeyMapping::Triggers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 0x000050, "Member 'FEnhancedActionKeyMapping::Modifiers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 0x000060, "Member 'FEnhancedActionKeyMapping::Action' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 0x000068, "Member 'FEnhancedActionKeyMapping::Key' has a wrong offset!");

// ScriptStruct EnhancedInput.MappingQueryIssue
// 0x0018 (0x0018 - 0x0000)
struct FMappingQueryIssue final
{
public:
	EMappingQueryIssue                            Issue;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22D5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   BlockingContext;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           BlockingAction;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMappingQueryIssue) == 0x000008, "Wrong alignment on FMappingQueryIssue");
static_assert(sizeof(FMappingQueryIssue) == 0x000018, "Wrong size on FMappingQueryIssue");
static_assert(offsetof(FMappingQueryIssue, Issue) == 0x000000, "Member 'FMappingQueryIssue::Issue' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 0x000008, "Member 'FMappingQueryIssue::BlockingContext' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 0x000010, "Member 'FMappingQueryIssue::BlockingAction' has a wrong offset!");

// ScriptStruct EnhancedInput.ModifyContextOptions
// 0x0001 (0x0001 - 0x0000)
struct FModifyContextOptions final
{
public:
	uint8                                         bIgnoreAllPressedKeysUntilRelease : 1;             // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceImmediately : 1;                             // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
};
static_assert(alignof(FModifyContextOptions) == 0x000001, "Wrong alignment on FModifyContextOptions");
static_assert(sizeof(FModifyContextOptions) == 0x000001, "Wrong size on FModifyContextOptions");

// ScriptStruct EnhancedInput.InjectedInputArray
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FInjectedInputArray final
{
public:
	uint8                                         Pad_22D6[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInjectedInputArray) == 0x000008, "Wrong alignment on FInjectedInputArray");
static_assert(sizeof(FInjectedInputArray) == 0x000010, "Wrong size on FInjectedInputArray");

// ScriptStruct EnhancedInput.InputActionInstance
// 0x0060 (0x0060 - 0x0000)
struct FInputActionInstance final
{
public:
	class UInputAction*                           SourceAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_22D7[0xB];                                     // 0x0008(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	ETriggerEvent                                 TriggerEvent;                                      // 0x0013(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastTriggeredWorldTime;                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputTrigger*>                  Triggers;                                          // 0x0018(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInputModifier*>                 Modifiers;                                         // 0x0028(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_22D8[0x20];                                    // 0x0038(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedProcessedTime;                              // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTriggeredTime;                              // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FInputActionInstance) == 0x000008, "Wrong alignment on FInputActionInstance");
static_assert(sizeof(FInputActionInstance) == 0x000060, "Wrong size on FInputActionInstance");
static_assert(offsetof(FInputActionInstance, SourceAction) == 0x000000, "Member 'FInputActionInstance::SourceAction' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 0x000013, "Member 'FInputActionInstance::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, LastTriggeredWorldTime) == 0x000014, "Member 'FInputActionInstance::LastTriggeredWorldTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Triggers) == 0x000018, "Member 'FInputActionInstance::Triggers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Modifiers) == 0x000028, "Member 'FInputActionInstance::Modifiers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedProcessedTime) == 0x000058, "Member 'FInputActionInstance::ElapsedProcessedTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedTriggeredTime) == 0x00005C, "Member 'FInputActionInstance::ElapsedTriggeredTime' has a wrong offset!");

// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// 0x0030 (0x0030 - 0x0000)
struct FBlueprintInputDebugKeyDelegateBinding final
{
public:
	struct FInputChord                            InputChord;                                        // 0x0000(0x0020)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputEvent                                   InputKeyEvent;                                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22D9[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FunctionNameToBind;                                // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExecuteWhenPaused;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22DA[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintInputDebugKeyDelegateBinding) == 0x000008, "Wrong alignment on FBlueprintInputDebugKeyDelegateBinding");
static_assert(sizeof(FBlueprintInputDebugKeyDelegateBinding) == 0x000030, "Wrong size on FBlueprintInputDebugKeyDelegateBinding");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0x000000, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputChord' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 0x000020, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputKeyEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 0x000024, "Member 'FBlueprintInputDebugKeyDelegateBinding::FunctionNameToBind' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, bExecuteWhenPaused) == 0x00002C, "Member 'FBlueprintInputDebugKeyDelegateBinding::bExecuteWhenPaused' has a wrong offset!");

// ScriptStruct EnhancedInput.InputComboStepData
// 0x0010 (0x0010 - 0x0000)
struct FInputComboStepData final
{
public:
	class UInputAction*                           ComboStepAction;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToPressKey;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22DB[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputComboStepData) == 0x000008, "Wrong alignment on FInputComboStepData");
static_assert(sizeof(FInputComboStepData) == 0x000010, "Wrong size on FInputComboStepData");
static_assert(offsetof(FInputComboStepData, ComboStepAction) == 0x000000, "Member 'FInputComboStepData::ComboStepAction' has a wrong offset!");
static_assert(offsetof(FInputComboStepData, TimeToPressKey) == 0x000008, "Member 'FInputComboStepData::TimeToPressKey' has a wrong offset!");

}

