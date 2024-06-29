#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraCalibrationCoreMovieScene

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentSection
// 0x0050 (0x0158 - 0x0108)
class UMovieSceneLensComponentSection final : public UMovieSceneHookSection
{
public:
	bool                                          bReapplyNodalOffset;                               // 0x0108(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1854[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULensFile*                              OverrideLensFile;                                  // 0x0110(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensFile*                              CachedLensFile;                                    // 0x0118(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>        DistortionParameterChannels;                       // 0x0120(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>        FxFyChannels;                                      // 0x0130(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatChannel>        ImageCenterChannels;                               // 0x0140(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1855[0x8];                                     // 0x0150(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLensComponentSection">();
	}
	static class UMovieSceneLensComponentSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLensComponentSection>();
	}
};
static_assert(alignof(UMovieSceneLensComponentSection) == 0x000008, "Wrong alignment on UMovieSceneLensComponentSection");
static_assert(sizeof(UMovieSceneLensComponentSection) == 0x000158, "Wrong size on UMovieSceneLensComponentSection");
static_assert(offsetof(UMovieSceneLensComponentSection, bReapplyNodalOffset) == 0x000108, "Member 'UMovieSceneLensComponentSection::bReapplyNodalOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneLensComponentSection, OverrideLensFile) == 0x000110, "Member 'UMovieSceneLensComponentSection::OverrideLensFile' has a wrong offset!");
static_assert(offsetof(UMovieSceneLensComponentSection, CachedLensFile) == 0x000118, "Member 'UMovieSceneLensComponentSection::CachedLensFile' has a wrong offset!");
static_assert(offsetof(UMovieSceneLensComponentSection, DistortionParameterChannels) == 0x000120, "Member 'UMovieSceneLensComponentSection::DistortionParameterChannels' has a wrong offset!");
static_assert(offsetof(UMovieSceneLensComponentSection, FxFyChannels) == 0x000130, "Member 'UMovieSceneLensComponentSection::FxFyChannels' has a wrong offset!");
static_assert(offsetof(UMovieSceneLensComponentSection, ImageCenterChannels) == 0x000140, "Member 'UMovieSceneLensComponentSection::ImageCenterChannels' has a wrong offset!");

// Class CameraCalibrationCoreMovieScene.MovieSceneLensComponentTrack
// 0x0010 (0x00A8 - 0x0098)
class UMovieSceneLensComponentTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLensComponentTrack">();
	}
	static class UMovieSceneLensComponentTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLensComponentTrack>();
	}
};
static_assert(alignof(UMovieSceneLensComponentTrack) == 0x000008, "Wrong alignment on UMovieSceneLensComponentTrack");
static_assert(sizeof(UMovieSceneLensComponentTrack) == 0x0000A8, "Wrong size on UMovieSceneLensComponentTrack");
static_assert(offsetof(UMovieSceneLensComponentTrack, Sections) == 0x000098, "Member 'UMovieSceneLensComponentTrack::Sections' has a wrong offset!");

}

