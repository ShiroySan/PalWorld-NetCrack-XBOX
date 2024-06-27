#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaIOCore

#include "Basic.hpp"

#include "MediaIOCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// 0x001C (0x001C - 0x0000)
struct MediaCapture_CaptureActiveSceneViewport final
{
public:
	struct FMediaCaptureOptions                   CaptureOptions;                                    // 0x0000(0x0018)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_187D[0x3];                                     // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MediaCapture_CaptureActiveSceneViewport) == 0x000004, "Wrong alignment on MediaCapture_CaptureActiveSceneViewport");
static_assert(sizeof(MediaCapture_CaptureActiveSceneViewport) == 0x00001C, "Wrong size on MediaCapture_CaptureActiveSceneViewport");
static_assert(offsetof(MediaCapture_CaptureActiveSceneViewport, CaptureOptions) == 0x000000, "Member 'MediaCapture_CaptureActiveSceneViewport::CaptureOptions' has a wrong offset!");
static_assert(offsetof(MediaCapture_CaptureActiveSceneViewport, ReturnValue) == 0x000018, "Member 'MediaCapture_CaptureActiveSceneViewport::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// 0x0028 (0x0028 - 0x0000)
struct MediaCapture_CaptureTextureRenderTarget2D final
{
public:
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaCaptureOptions                   CaptureOptions;                                    // 0x0008(0x0018)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_187E[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MediaCapture_CaptureTextureRenderTarget2D) == 0x000008, "Wrong alignment on MediaCapture_CaptureTextureRenderTarget2D");
static_assert(sizeof(MediaCapture_CaptureTextureRenderTarget2D) == 0x000028, "Wrong size on MediaCapture_CaptureTextureRenderTarget2D");
static_assert(offsetof(MediaCapture_CaptureTextureRenderTarget2D, RenderTarget) == 0x000000, "Member 'MediaCapture_CaptureTextureRenderTarget2D::RenderTarget' has a wrong offset!");
static_assert(offsetof(MediaCapture_CaptureTextureRenderTarget2D, CaptureOptions) == 0x000008, "Member 'MediaCapture_CaptureTextureRenderTarget2D::CaptureOptions' has a wrong offset!");
static_assert(offsetof(MediaCapture_CaptureTextureRenderTarget2D, ReturnValue) == 0x000020, "Member 'MediaCapture_CaptureTextureRenderTarget2D::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaCapture.SetMediaOutput
// 0x0008 (0x0008 - 0x0000)
struct MediaCapture_SetMediaOutput final
{
public:
	class UMediaOutput*                           InMediaOutput;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaCapture_SetMediaOutput) == 0x000008, "Wrong alignment on MediaCapture_SetMediaOutput");
static_assert(sizeof(MediaCapture_SetMediaOutput) == 0x000008, "Wrong size on MediaCapture_SetMediaOutput");
static_assert(offsetof(MediaCapture_SetMediaOutput, InMediaOutput) == 0x000000, "Member 'MediaCapture_SetMediaOutput::InMediaOutput' has a wrong offset!");

// Function MediaIOCore.MediaCapture.StopCapture
// 0x0001 (0x0001 - 0x0000)
struct MediaCapture_StopCapture final
{
public:
	bool                                          bAllowPendingFrameToBeProcess;                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaCapture_StopCapture) == 0x000001, "Wrong alignment on MediaCapture_StopCapture");
static_assert(sizeof(MediaCapture_StopCapture) == 0x000001, "Wrong size on MediaCapture_StopCapture");
static_assert(offsetof(MediaCapture_StopCapture, bAllowPendingFrameToBeProcess) == 0x000000, "Member 'MediaCapture_StopCapture::bAllowPendingFrameToBeProcess' has a wrong offset!");

// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// 0x0010 (0x0010 - 0x0000)
struct MediaCapture_UpdateTextureRenderTarget2D final
{
public:
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_187F[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MediaCapture_UpdateTextureRenderTarget2D) == 0x000008, "Wrong alignment on MediaCapture_UpdateTextureRenderTarget2D");
static_assert(sizeof(MediaCapture_UpdateTextureRenderTarget2D) == 0x000010, "Wrong size on MediaCapture_UpdateTextureRenderTarget2D");
static_assert(offsetof(MediaCapture_UpdateTextureRenderTarget2D, RenderTarget) == 0x000000, "Member 'MediaCapture_UpdateTextureRenderTarget2D::RenderTarget' has a wrong offset!");
static_assert(offsetof(MediaCapture_UpdateTextureRenderTarget2D, ReturnValue) == 0x000008, "Member 'MediaCapture_UpdateTextureRenderTarget2D::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// 0x0001 (0x0001 - 0x0000)
struct MediaCapture_GetDesiredPixelFormat final
{
public:
	EPixelFormat                                  ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaCapture_GetDesiredPixelFormat) == 0x000001, "Wrong alignment on MediaCapture_GetDesiredPixelFormat");
static_assert(sizeof(MediaCapture_GetDesiredPixelFormat) == 0x000001, "Wrong size on MediaCapture_GetDesiredPixelFormat");
static_assert(offsetof(MediaCapture_GetDesiredPixelFormat, ReturnValue) == 0x000000, "Member 'MediaCapture_GetDesiredPixelFormat::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaCapture.GetDesiredSize
// 0x0008 (0x0008 - 0x0000)
struct MediaCapture_GetDesiredSize final
{
public:
	struct FIntPoint                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaCapture_GetDesiredSize) == 0x000004, "Wrong alignment on MediaCapture_GetDesiredSize");
static_assert(sizeof(MediaCapture_GetDesiredSize) == 0x000008, "Wrong size on MediaCapture_GetDesiredSize");
static_assert(offsetof(MediaCapture_GetDesiredSize, ReturnValue) == 0x000000, "Member 'MediaCapture_GetDesiredSize::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaCapture.GetState
// 0x0001 (0x0001 - 0x0000)
struct MediaCapture_GetState final
{
public:
	EMediaCaptureState                            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaCapture_GetState) == 0x000001, "Wrong alignment on MediaCapture_GetState");
static_assert(sizeof(MediaCapture_GetState) == 0x000001, "Wrong size on MediaCapture_GetState");
static_assert(offsetof(MediaCapture_GetState, ReturnValue) == 0x000000, "Member 'MediaCapture_GetState::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaOutput.CreateMediaCapture
// 0x0008 (0x0008 - 0x0000)
struct MediaOutput_CreateMediaCapture final
{
public:
	class UMediaCapture*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaOutput_CreateMediaCapture) == 0x000008, "Wrong alignment on MediaOutput_CreateMediaCapture");
static_assert(sizeof(MediaOutput_CreateMediaCapture) == 0x000008, "Wrong size on MediaOutput_CreateMediaCapture");
static_assert(offsetof(MediaOutput_CreateMediaCapture, ReturnValue) == 0x000000, "Member 'MediaOutput_CreateMediaCapture::ReturnValue' has a wrong offset!");

// Function MediaIOCore.MediaOutput.Validate
// 0x0018 (0x0018 - 0x0000)
struct MediaOutput_Validate final
{
public:
	class FString                                 OutFailureReason;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1882[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MediaOutput_Validate) == 0x000008, "Wrong alignment on MediaOutput_Validate");
static_assert(sizeof(MediaOutput_Validate) == 0x000018, "Wrong size on MediaOutput_Validate");
static_assert(offsetof(MediaOutput_Validate, OutFailureReason) == 0x000000, "Member 'MediaOutput_Validate::OutFailureReason' has a wrong offset!");
static_assert(offsetof(MediaOutput_Validate, ReturnValue) == 0x000010, "Member 'MediaOutput_Validate::ReturnValue' has a wrong offset!");

}

