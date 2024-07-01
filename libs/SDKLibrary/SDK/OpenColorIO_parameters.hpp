#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenColorIO

#include "Basic.hpp"

#include "OpenColorIO_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
// 0x00A0 (0x00A0 - 0x0000)
struct OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorConversionSettings    ConversionSettings;                                // 0x0008(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture*                               InputTexture;                                      // 0x0088(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 OutputRenderTarget;                                // 0x0090(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0098(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_187A[0x7];                                     // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform) == 0x000008, "Wrong alignment on OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform");
static_assert(sizeof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform) == 0x0000A0, "Wrong size on OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform");
static_assert(offsetof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, WorldContextObject) == 0x000000, "Member 'OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, ConversionSettings) == 0x000008, "Member 'OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform::ConversionSettings' has a wrong offset!");
static_assert(offsetof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, InputTexture) == 0x000088, "Member 'OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform::InputTexture' has a wrong offset!");
static_assert(offsetof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, OutputRenderTarget) == 0x000090, "Member 'OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform::OutputRenderTarget' has a wrong offset!");
static_assert(offsetof(OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, ReturnValue) == 0x000098, "Member 'OpenColorIOBlueprintLibrary_ApplyColorSpaceTransform::ReturnValue' has a wrong offset!");

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
// 0x0090 (0x0090 - 0x0000)
struct OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension final
{
public:
	struct FOpenColorIODisplayConfiguration       InDisplayConfiguration;                            // 0x0000(0x0088)(Parm, NativeAccessSpecifierPublic)
	class UOpenColorIODisplayExtensionWrapper*    ReturnValue;                                       // 0x0088(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension) == 0x000008, "Wrong alignment on OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension");
static_assert(sizeof(OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension) == 0x000090, "Wrong size on OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension, InDisplayConfiguration) == 0x000000, "Member 'OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension::InDisplayConfiguration' has a wrong offset!");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension, ReturnValue) == 0x000088, "Member 'OpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension::ReturnValue' has a wrong offset!");

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
// 0x00F0 (0x00F0 - 0x0000)
struct OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension final
{
public:
	struct FOpenColorIODisplayConfiguration       InDisplayConfiguration;                            // 0x0000(0x0088)(Parm, NativeAccessSpecifierPublic)
	uint8                                         Pad_1880[0x8];                                     // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSceneViewExtensionIsActiveFunctor     IsActiveFunction;                                  // 0x0090(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UOpenColorIODisplayExtensionWrapper*    ReturnValue;                                       // 0x00E0(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1881[0x8];                                     // 0x00E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension) == 0x000010, "Wrong alignment on OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension");
static_assert(sizeof(OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension) == 0x0000F0, "Wrong size on OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension, InDisplayConfiguration) == 0x000000, "Member 'OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension::InDisplayConfiguration' has a wrong offset!");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension, IsActiveFunction) == 0x000090, "Member 'OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension::IsActiveFunction' has a wrong offset!");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension, ReturnValue) == 0x0000E0, "Member 'OpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension::ReturnValue' has a wrong offset!");

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
// 0x0088 (0x0088 - 0x0000)
struct OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration final
{
public:
	struct FOpenColorIODisplayConfiguration       InDisplayConfiguration;                            // 0x0000(0x0088)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration) == 0x000008, "Wrong alignment on OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration");
static_assert(sizeof(OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration) == 0x000088, "Wrong size on OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration, InDisplayConfiguration) == 0x000000, "Member 'OpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration::InDisplayConfiguration' has a wrong offset!");

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
// 0x0050 (0x0050 - 0x0000)
struct OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction final
{
public:
	struct FSceneViewExtensionIsActiveFunctor     IsActiveFunction;                                  // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction) == 0x000010, "Wrong alignment on OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction");
static_assert(sizeof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction) == 0x000050, "Wrong size on OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction, IsActiveFunction) == 0x000000, "Member 'OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction::IsActiveFunction' has a wrong offset!");

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
// 0x0010 (0x0010 - 0x0000)
struct OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions final
{
public:
	TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions) == 0x000008, "Wrong alignment on OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions");
static_assert(sizeof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions) == 0x000010, "Wrong size on OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions");
static_assert(offsetof(OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions, IsActiveFunctions) == 0x000000, "Member 'OpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions::IsActiveFunctions' has a wrong offset!");

}

