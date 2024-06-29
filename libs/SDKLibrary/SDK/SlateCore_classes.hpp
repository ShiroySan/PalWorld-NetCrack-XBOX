#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlateCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset final : public UObject
{
public:
	class USlateWidgetStyleContainerBase*         CustomStyle;                                       // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleAsset">();
	}
	static class USlateWidgetStyleAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateWidgetStyleAsset>();
	}
};
static_assert(alignof(USlateWidgetStyleAsset) == 0x000008, "Wrong alignment on USlateWidgetStyleAsset");
static_assert(sizeof(USlateWidgetStyleAsset) == 0x000030, "Wrong size on USlateWidgetStyleAsset");
static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 0x000028, "Member 'USlateWidgetStyleAsset::CustomStyle' has a wrong offset!");

// Class SlateCore.FontBulkData
// 0x0048 (0x0070 - 0x0028)
class UFontBulkData final : public UObject
{
public:
	uint8                                         Pad_32C5[0x48];                                    // 0x0028(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontBulkData">();
	}
	static class UFontBulkData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFontBulkData>();
	}
};
static_assert(alignof(UFontBulkData) == 0x000008, "Wrong alignment on UFontBulkData");
static_assert(sizeof(UFontBulkData) == 0x000070, "Wrong size on UFontBulkData");

// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class IFontFaceInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontFaceInterface">();
	}
	static class IFontFaceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFontFaceInterface>();
	}
};
static_assert(alignof(IFontFaceInterface) == 0x000008, "Wrong alignment on IFontFaceInterface");
static_assert(sizeof(IFontFaceInterface) == 0x000028, "Wrong size on IFontFaceInterface");

// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class IFontProviderInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontProviderInterface">();
	}
	static class IFontProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFontProviderInterface>();
	}
};
static_assert(alignof(IFontProviderInterface) == 0x000008, "Wrong alignment on IFontProviderInterface");
static_assert(sizeof(IFontProviderInterface) == 0x000028, "Wrong size on IFontProviderInterface");

// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateTypes">();
	}
	static class USlateTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateTypes>();
	}
};
static_assert(alignof(USlateTypes) == 0x000008, "Wrong alignment on USlateTypes");
static_assert(sizeof(USlateTypes) == 0x000028, "Wrong size on USlateTypes");

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                         Pad_32C6[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleContainerBase">();
	}
	static class USlateWidgetStyleContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateWidgetStyleContainerBase>();
	}
};
static_assert(alignof(USlateWidgetStyleContainerBase) == 0x000008, "Wrong alignment on USlateWidgetStyleContainerBase");
static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x000030, "Wrong size on USlateWidgetStyleContainerBase");

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class ISlateWidgetStyleContainerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleContainerInterface">();
	}
	static class ISlateWidgetStyleContainerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISlateWidgetStyleContainerInterface>();
	}
};
static_assert(alignof(ISlateWidgetStyleContainerInterface) == 0x000008, "Wrong alignment on ISlateWidgetStyleContainerInterface");
static_assert(sizeof(ISlateWidgetStyleContainerInterface) == 0x000028, "Wrong size on ISlateWidgetStyleContainerInterface");

// Class SlateCore.SlateThemeManager
// 0x0998 (0x09C0 - 0x0028)
class USlateThemeManager final : public UObject
{
public:
	struct FGuid                                  CurrentThemeId;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStyleColorList                        ActiveColors;                                      // 0x0038(0x0988)(Edit, Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateThemeManager">();
	}
	static class USlateThemeManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateThemeManager>();
	}
};
static_assert(alignof(USlateThemeManager) == 0x000008, "Wrong alignment on USlateThemeManager");
static_assert(sizeof(USlateThemeManager) == 0x0009C0, "Wrong size on USlateThemeManager");
static_assert(offsetof(USlateThemeManager, CurrentThemeId) == 0x000028, "Member 'USlateThemeManager::CurrentThemeId' has a wrong offset!");
static_assert(offsetof(USlateThemeManager, ActiveColors) == 0x000038, "Member 'USlateThemeManager::ActiveColors' has a wrong offset!");

}

