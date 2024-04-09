#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCharacterIconBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.ExecuteUbergraph_WBP_PalCharacterIconBase
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_softTexture;                    // 0x0038(0x0030)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase");
static_assert(sizeof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase) == 0x000068, "Wrong size on WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, EntryPoint) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, Temp_object_Variable) == 0x000020, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase, K2Node_CustomEvent_softTexture) == 0x000038, "Member 'WBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase::K2Node_CustomEvent_softTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.LoadIconEvent_Internal
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterIconBase_C_LoadIconEvent_Internal final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_LoadIconEvent_Internal");
static_assert(sizeof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal) == 0x000030, "Wrong size on WBP_PalCharacterIconBase_C_LoadIconEvent_Internal");
static_assert(offsetof(WBP_PalCharacterIconBase_C_LoadIconEvent_Internal, SoftTexture) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_LoadIconEvent_Internal::SoftTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoaded_2131D8E64037785EDD84EFACA46D7EBC
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");
static_assert(sizeof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC) == 0x000008, "Wrong size on WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC, Loaded) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC::Loaded' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoadedTexture__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature final
{
public:
	class UTexture2D*                             LoadedTexture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature, LoadedTexture) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature::LoadedTexture' has a wrong offset!");

// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.Setup
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalCharacterIconBase_C_Setup final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterIconBase_C_Setup) == 0x000008, "Wrong alignment on WBP_PalCharacterIconBase_C_Setup");
static_assert(sizeof(WBP_PalCharacterIconBase_C_Setup) == 0x000050, "Wrong size on WBP_PalCharacterIconBase_C_Setup");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CharacterID) == 0x000000, "Member 'WBP_PalCharacterIconBase_C_Setup::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000010, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterIconBase_C_Setup, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterIconBase_C_Setup::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");

}

