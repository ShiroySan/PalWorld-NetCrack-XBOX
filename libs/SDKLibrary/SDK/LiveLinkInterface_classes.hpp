#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "LiveLinkInterface_structs.hpp"


namespace SDK
{

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFramePreProcessor : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFramePreProcessor">();
	}
	static class ULiveLinkFramePreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFramePreProcessor>();
	}
};
static_assert(alignof(ULiveLinkFramePreProcessor) == 0x000008, "Wrong alignment on ULiveLinkFramePreProcessor");
static_assert(sizeof(ULiveLinkFramePreProcessor) == 0x000028, "Wrong size on ULiveLinkFramePreProcessor");

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFrameInterpolationProcessor">();
	}
	static class ULiveLinkFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkFrameInterpolationProcessor) == 0x000028, "Wrong size on ULiveLinkFrameInterpolationProcessor");

// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0080 (0x00A8 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                           Mode;                                              // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;                                    // 0x0030(0x0060)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 ConnectionString;                                  // 0x0090(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSourceFactory>     Factory;                                           // 0x00A0(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSourceSettings">();
	}
	static class ULiveLinkSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkSourceSettings");
static_assert(sizeof(ULiveLinkSourceSettings) == 0x0000A8, "Wrong size on ULiveLinkSourceSettings");
static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 0x000028, "Member 'ULiveLinkSourceSettings::Mode' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 0x000030, "Member 'ULiveLinkSourceSettings::BufferSettings' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 0x000090, "Member 'ULiveLinkSourceSettings::ConnectionString' has a wrong offset!");
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 0x0000A0, "Member 'ULiveLinkSourceSettings::Factory' has a wrong offset!");

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (0x00F8 - 0x00A8)
class ULiveLinkCurveRemapSettings final : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings       CurveConversionSettings;                           // 0x00A8(0x0050)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkCurveRemapSettings">();
	}
	static class ULiveLinkCurveRemapSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkCurveRemapSettings>();
	}
};
static_assert(alignof(ULiveLinkCurveRemapSettings) == 0x000008, "Wrong alignment on ULiveLinkCurveRemapSettings");
static_assert(sizeof(ULiveLinkCurveRemapSettings) == 0x0000F8, "Wrong size on ULiveLinkCurveRemapSettings");
static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 0x0000A8, "Member 'ULiveLinkCurveRemapSettings::CurveConversionSettings' has a wrong offset!");

// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x0138 (0x0160 - 0x0028)
class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                         Pad_11E3[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULiveLinkRole>              Role;                                              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>           Subjects;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>       FrameTranslators;                                  // 0x0048(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                          bRebroadcastSubject;                               // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_11E4[0x107];                                   // 0x0059(0x0107)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkVirtualSubject">();
	}
	static class ULiveLinkVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkVirtualSubject");
static_assert(sizeof(ULiveLinkVirtualSubject) == 0x000160, "Wrong size on ULiveLinkVirtualSubject");
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 0x000030, "Member 'ULiveLinkVirtualSubject::Role' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 0x000038, "Member 'ULiveLinkVirtualSubject::Subjects' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 0x000048, "Member 'ULiveLinkVirtualSubject::FrameTranslators' has a wrong offset!");
static_assert(offsetof(ULiveLinkVirtualSubject, bRebroadcastSubject) == 0x000058, "Member 'ULiveLinkVirtualSubject::bRebroadcastSubject' has a wrong offset!");

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSourceFactory">();
	}
	static class ULiveLinkSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkSourceFactory");
static_assert(sizeof(ULiveLinkSourceFactory) == 0x000028, "Wrong size on ULiveLinkSourceFactory");

// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameTranslator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkFrameTranslator">();
	}
	static class ULiveLinkFrameTranslator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkFrameTranslator>();
	}
};
static_assert(alignof(ULiveLinkFrameTranslator) == 0x000008, "Wrong alignment on ULiveLinkFrameTranslator");
static_assert(sizeof(ULiveLinkFrameTranslator) == 0x000028, "Wrong size on ULiveLinkFrameTranslator");

// Class LiveLinkInterface.LiveLinkController
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkController final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkController">();
	}
	static class ULiveLinkController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkController>();
	}
};
static_assert(alignof(ULiveLinkController) == 0x000008, "Wrong alignment on ULiveLinkController");
static_assert(sizeof(ULiveLinkController) == 0x000028, "Wrong size on ULiveLinkController");

// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRole : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRole">();
	}
	static class ULiveLinkRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRole>();
	}
};
static_assert(alignof(ULiveLinkRole) == 0x000008, "Wrong alignment on ULiveLinkRole");
static_assert(sizeof(ULiveLinkRole) == 0x000028, "Wrong size on ULiveLinkRole");

// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0040 (0x0068 - 0x0028)
class ULiveLinkSubjectSettings final : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>     PreProcessors;                                     // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*   InterpolationProcessor;                            // 0x0038(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>       Translators;                                       // 0x0040(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>              Role;                                              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             FrameRate;                                         // 0x0058(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRebroadcastSubject;                               // 0x0060(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11E5[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSubjectSettings">();
	}
	static class ULiveLinkSubjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSubjectSettings>();
	}
};
static_assert(alignof(ULiveLinkSubjectSettings) == 0x000008, "Wrong alignment on ULiveLinkSubjectSettings");
static_assert(sizeof(ULiveLinkSubjectSettings) == 0x000068, "Wrong size on ULiveLinkSubjectSettings");
static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 0x000028, "Member 'ULiveLinkSubjectSettings::PreProcessors' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 0x000038, "Member 'ULiveLinkSubjectSettings::InterpolationProcessor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 0x000040, "Member 'ULiveLinkSubjectSettings::Translators' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 0x000050, "Member 'ULiveLinkSubjectSettings::Role' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 0x000058, "Member 'ULiveLinkSubjectSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkSubjectSettings, bRebroadcastSubject) == 0x000060, "Member 'ULiveLinkSubjectSettings::bRebroadcastSubject' has a wrong offset!");

// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBasicRole">();
	}
	static class ULiveLinkBasicRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBasicRole>();
	}
};
static_assert(alignof(ULiveLinkBasicRole) == 0x000008, "Wrong alignment on ULiveLinkBasicRole");
static_assert(sizeof(ULiveLinkBasicRole) == 0x000028, "Wrong size on ULiveLinkBasicRole");

// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkAnimationRole final : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationRole">();
	}
	static class ULiveLinkAnimationRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationRole>();
	}
};
static_assert(alignof(ULiveLinkAnimationRole) == 0x000008, "Wrong alignment on ULiveLinkAnimationRole");
static_assert(sizeof(ULiveLinkAnimationRole) == 0x000028, "Wrong size on ULiveLinkAnimationRole");

// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformRole">();
	}
	static class ULiveLinkTransformRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformRole>();
	}
};
static_assert(alignof(ULiveLinkTransformRole) == 0x000008, "Wrong alignment on ULiveLinkTransformRole");
static_assert(sizeof(ULiveLinkTransformRole) == 0x000028, "Wrong size on ULiveLinkTransformRole");

// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkCameraRole final : public ULiveLinkTransformRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkCameraRole">();
	}
	static class ULiveLinkCameraRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkCameraRole>();
	}
};
static_assert(alignof(ULiveLinkCameraRole) == 0x000008, "Wrong alignment on ULiveLinkCameraRole");
static_assert(sizeof(ULiveLinkCameraRole) == 0x000028, "Wrong size on ULiveLinkCameraRole");

// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkLightRole final : public ULiveLinkTransformRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkLightRole">();
	}
	static class ULiveLinkLightRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkLightRole>();
	}
};
static_assert(alignof(ULiveLinkLightRole) == 0x000008, "Wrong alignment on ULiveLinkLightRole");
static_assert(sizeof(ULiveLinkLightRole) == 0x000028, "Wrong size on ULiveLinkLightRole");

}

