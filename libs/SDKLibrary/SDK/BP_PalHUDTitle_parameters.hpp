#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalHUDTitle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PalHUDTitle.BP_PalHUDTitle_C.OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0) == 0x000008, "Wrong alignment on BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0");
static_assert(sizeof(BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0) == 0x000008, "Wrong size on BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0");
static_assert(offsetof(BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0, Loaded) == 0x000000, "Member 'BP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0::Loaded' has a wrong offset!");

// Function BP_PalHUDTitle.BP_PalHUDTitle_C.ExecuteUbergraph_BP_PalHUDTitle
// 0x0048 (0x0048 - 0x0000)
struct BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D84[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D85[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_PushWidgetStackableUI_ReturnValue;        // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle) == 0x000008, "Wrong alignment on BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle");
static_assert(sizeof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle) == 0x000048, "Wrong size on BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, EntryPoint) == 0x000000, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, Temp_class_Variable) == 0x000020, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI) == 0x000028, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle, CallFunc_PushWidgetStackableUI_ReturnValue) == 0x000034, "Member 'BP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle::CallFunc_PushWidgetStackableUI_ReturnValue' has a wrong offset!");

}

