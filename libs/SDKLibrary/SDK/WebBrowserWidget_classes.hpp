#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebBrowserWidget

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class WebBrowserWidget.WebBrowser
// 0x0058 (0x01A8 - 0x0150)
class UWebBrowser final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnUrlChanged;                                      // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBeforePopup;                                     // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnConsoleMessage;                                  // 0x0170(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 InitialURL;                                        // 0x0180(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsTransparency;                             // 0x0190(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C64[0x17];                                    // 0x0191(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ExecuteJavascript(const class FString& ScriptText);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	void LoadURL(const class FString& NewURL);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line);
	void OnUrlChanged__DelegateSignature(const class FText& Text);

	class FText GetTitleText() const;
	class FString GetUrl() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebBrowser">();
	}
	static class UWebBrowser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebBrowser>();
	}
};
static_assert(alignof(UWebBrowser) == 0x000008, "Wrong alignment on UWebBrowser");
static_assert(sizeof(UWebBrowser) == 0x0001A8, "Wrong size on UWebBrowser");
static_assert(offsetof(UWebBrowser, OnUrlChanged) == 0x000150, "Member 'UWebBrowser::OnUrlChanged' has a wrong offset!");
static_assert(offsetof(UWebBrowser, OnBeforePopup) == 0x000160, "Member 'UWebBrowser::OnBeforePopup' has a wrong offset!");
static_assert(offsetof(UWebBrowser, OnConsoleMessage) == 0x000170, "Member 'UWebBrowser::OnConsoleMessage' has a wrong offset!");
static_assert(offsetof(UWebBrowser, InitialURL) == 0x000180, "Member 'UWebBrowser::InitialURL' has a wrong offset!");
static_assert(offsetof(UWebBrowser, bSupportsTransparency) == 0x000190, "Member 'UWebBrowser::bSupportsTransparency' has a wrong offset!");

// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0060 (0x0088 - 0x0028)
class UWebBrowserAssetManager final : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>               DefaultMaterial;                                   // 0x0028(0x0030)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C66[0x30];                                    // 0x0058(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebBrowserAssetManager">();
	}
	static class UWebBrowserAssetManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebBrowserAssetManager>();
	}
};
static_assert(alignof(UWebBrowserAssetManager) == 0x000008, "Wrong alignment on UWebBrowserAssetManager");
static_assert(sizeof(UWebBrowserAssetManager) == 0x000088, "Wrong size on UWebBrowserAssetManager");
static_assert(offsetof(UWebBrowserAssetManager, DefaultMaterial) == 0x000028, "Member 'UWebBrowserAssetManager::DefaultMaterial' has a wrong offset!");

}

