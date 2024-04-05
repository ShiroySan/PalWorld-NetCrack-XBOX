#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x00A0 (0x01F0 - 0x0150)
class UNiagaraSystemWidget final : public UWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystemReference;                            // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x0158(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          AutoActivate;                                      // 0x01A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TickWhenPaused;                                    // 0x01A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C1F[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              DesiredWidgetSize;                                 // 0x01B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FakeDepthScale;                                    // 0x01C0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C20[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FakeDepthScaleDistance;                            // 0x01C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowDebugSystemInWorld;                            // 0x01C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableWarnings;                                   // 0x01C9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C21[0x16];                                    // 0x01CA(0x0016)(Fixing Size After Last Property [ Dumper-7 ])
	class ANiagaraUIActor*                        NiagaraActor;                                      // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                    NiagaraComponent;                                  // 0x01E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ActivateSystem(bool Reset);
	void DeactivateSystem();
	class UNiagaraUIComponent* GetNiagaraComponent();
	class UMaterialInterface* GetRemapMaterial(class UMaterialInterface* OriginalMaterial);
	void SetDesiredWidgetSize(const struct FVector2D& NewDesiredSize);
	void SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial);
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
	void UpdateTickWhenPaused(bool NewTickWhenPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystemWidget">();
	}
	static class UNiagaraSystemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystemWidget>();
	}
};
static_assert(alignof(UNiagaraSystemWidget) == 0x000008, "Wrong alignment on UNiagaraSystemWidget");
static_assert(sizeof(UNiagaraSystemWidget) == 0x0001F0, "Wrong size on UNiagaraSystemWidget");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x000150, "Member 'UNiagaraSystemWidget::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x000158, "Member 'UNiagaraSystemWidget::MaterialRemapList' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, AutoActivate) == 0x0001A8, "Member 'UNiagaraSystemWidget::AutoActivate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, TickWhenPaused) == 0x0001A9, "Member 'UNiagaraSystemWidget::TickWhenPaused' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, DesiredWidgetSize) == 0x0001B0, "Member 'UNiagaraSystemWidget::DesiredWidgetSize' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScale) == 0x0001C0, "Member 'UNiagaraSystemWidget::FakeDepthScale' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScaleDistance) == 0x0001C4, "Member 'UNiagaraSystemWidget::FakeDepthScaleDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, ShowDebugSystemInWorld) == 0x0001C8, "Member 'UNiagaraSystemWidget::ShowDebugSystemInWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, DisableWarnings) == 0x0001C9, "Member 'UNiagaraSystemWidget::DisableWarnings' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x0001E0, "Member 'UNiagaraSystemWidget::NiagaraActor' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x0001E8, "Member 'UNiagaraSystemWidget::NiagaraComponent' has a wrong offset!");

// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0290 - 0x0290)
class ANiagaraUIActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIActor">();
	}
	static class ANiagaraUIActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraUIActor>();
	}
};
static_assert(alignof(ANiagaraUIActor) == 0x000008, "Wrong alignment on ANiagaraUIActor");
static_assert(sizeof(ANiagaraUIActor) == 0x000290, "Wrong size on ANiagaraUIActor");

// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0010 (0x07E0 - 0x07D0)
class UNiagaraUIComponent final : public UNiagaraComponent
{
public:
	uint8                                         Pad_1C22[0x10];                                    // 0x07D0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIComponent">();
	}
	static class UNiagaraUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraUIComponent>();
	}
};
static_assert(alignof(UNiagaraUIComponent) == 0x000010, "Wrong alignment on UNiagaraUIComponent");
static_assert(sizeof(UNiagaraUIComponent) == 0x0007E0, "Wrong size on UNiagaraUIComponent");

}

