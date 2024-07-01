#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Base

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NPC_Base.BP_NPC_Base_C.BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature");
static_assert(sizeof(BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature) == 0x000008, "Wrong size on BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature");
static_assert(offsetof(BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature, Component) == 0x000000, "Member 'BP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature::Component' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.CreateWeapon
// 0x0038 (0x0038 - 0x0000)
struct BP_NPC_Base_C_CreateWeapon final
{
public:
	bool                                          DefaultEquip;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWeaponType                                WeaponType;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 TempWeaponClass;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_NPCWeaponGenerator_C*               CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWeaponType                                CallFunc_GetWeaponType_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponEquip_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_CreateWeapon) == 0x000008, "Wrong alignment on BP_NPC_Base_C_CreateWeapon");
static_assert(sizeof(BP_NPC_Base_C_CreateWeapon) == 0x000038, "Wrong size on BP_NPC_Base_C_CreateWeapon");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, DefaultEquip) == 0x000000, "Member 'BP_NPC_Base_C_CreateWeapon::DefaultEquip' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, WeaponType) == 0x000001, "Member 'BP_NPC_Base_C_CreateWeapon::WeaponType' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, TempWeaponClass) == 0x000008, "Member 'BP_NPC_Base_C_CreateWeapon::TempWeaponClass' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000020, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_GetCharacterID_ReturnValue) == 0x000028, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_GetWeaponType_ReturnValue) == 0x000030, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_GetWeaponType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_CreateWeapon, CallFunc_GetWeaponEquip_ReturnValue) == 0x000031, "Member 'BP_NPC_Base_C_CreateWeapon::CallFunc_GetWeaponEquip_ReturnValue' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.DestoryWeapon
// 0x0010 (0x0010 - 0x0000)
struct BP_NPC_Base_C_DestoryWeapon final
{
public:
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_DestoryWeapon) == 0x000008, "Wrong alignment on BP_NPC_Base_C_DestoryWeapon");
static_assert(sizeof(BP_NPC_Base_C_DestoryWeapon) == 0x000010, "Wrong size on BP_NPC_Base_C_DestoryWeapon");
static_assert(offsetof(BP_NPC_Base_C_DestoryWeapon, CallFunc_GetHasWeapon_ReturnValue) == 0x000000, "Member 'BP_NPC_Base_C_DestoryWeapon::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_DestoryWeapon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_NPC_Base_C_DestoryWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.ExecuteUbergraph_BP_NPC_Base
// 0x00B8 (0x00B8 - 0x0000)
struct BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0020(0x0050)(NoDestructor)
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalExpDatabase*                        CallFunc_GetExpDatabase_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_ComponentBoundEvent_component;              // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x00A8(0x0004)(NoDestructor)
	bool                                          K2Node_CustomEvent_Active;                         // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2F[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base) == 0x000008, "Wrong alignment on BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base");
static_assert(sizeof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base) == 0x0000B8, "Wrong size on BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, EntryPoint) == 0x000000, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000014, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_CustomEvent_DeadInfo) == 0x000020, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, CallFunc_GetExpDatabase_ReturnValue) == 0x000080, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::CallFunc_GetExpDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, CallFunc_GetController_ReturnValue) == 0x000088, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_Event_EndPlayReason) == 0x000090, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_ComponentBoundEvent_component) == 0x000098, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_ComponentBoundEvent_component' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x0000A0, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_MakeStruct_PalSoundOptions) == 0x0000A8, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_CustomEvent_Active) == 0x0000AC, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_CustomEvent_Active' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base, K2Node_CustomEvent_InCharacter) == 0x0000B0, "Member 'BP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base::K2Node_CustomEvent_InCharacter' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.OnDestoryEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_NPC_Base_C_OnDestoryEvent__DelegateSignature final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_OnDestoryEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_NPC_Base_C_OnDestoryEvent__DelegateSignature");
static_assert(sizeof(BP_NPC_Base_C_OnDestoryEvent__DelegateSignature) == 0x000008, "Wrong size on BP_NPC_Base_C_OnDestoryEvent__DelegateSignature");
static_assert(offsetof(BP_NPC_Base_C_OnDestoryEvent__DelegateSignature, Character) == 0x000000, "Member 'BP_NPC_Base_C_OnDestoryEvent__DelegateSignature::Character' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPC_Base_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_NPC_Base_C_ReceiveEndPlay");
static_assert(sizeof(BP_NPC_Base_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_NPC_Base_C_ReceiveEndPlay");
static_assert(offsetof(BP_NPC_Base_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_NPC_Base_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.SetActive_Interact_ToAll
// 0x0001 (0x0001 - 0x0000)
struct BP_NPC_Base_C_SetActive_Interact_ToAll final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_SetActive_Interact_ToAll) == 0x000001, "Wrong alignment on BP_NPC_Base_C_SetActive_Interact_ToAll");
static_assert(sizeof(BP_NPC_Base_C_SetActive_Interact_ToAll) == 0x000001, "Wrong size on BP_NPC_Base_C_SetActive_Interact_ToAll");
static_assert(offsetof(BP_NPC_Base_C_SetActive_Interact_ToAll, Active) == 0x000000, "Member 'BP_NPC_Base_C_SetActive_Interact_ToAll::Active' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.SetMaterial
// 0x0018 (0x0018 - 0x0000)
struct BP_NPC_Base_C_SetMaterial final
{
public:
	class UMaterialInstance*                      Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D30[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_SetMaterial) == 0x000008, "Wrong alignment on BP_NPC_Base_C_SetMaterial");
static_assert(sizeof(BP_NPC_Base_C_SetMaterial) == 0x000018, "Wrong size on BP_NPC_Base_C_SetMaterial");
static_assert(offsetof(BP_NPC_Base_C_SetMaterial, Material) == 0x000000, "Member 'BP_NPC_Base_C_SetMaterial::Material' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetMaterial, Temp_int_Variable) == 0x000008, "Member 'BP_NPC_Base_C_SetMaterial::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetMaterial, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_NPC_Base_C_SetMaterial::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetMaterial, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_NPC_Base_C_SetMaterial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.SetupInteraction
// 0x0048 (0x0048 - 0x0000)
struct BP_NPC_Base_C_SetupInteraction final
{
public:
	TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_Delegates_self_CastInput;                 // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalInteractDelegates*                  CallFunc_Delegates_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_SetIndicatorInterface_self_CastInput;     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C_SetupInteraction) == 0x000008, "Wrong alignment on BP_NPC_Base_C_SetupInteraction");
static_assert(sizeof(BP_NPC_Base_C_SetupInteraction) == 0x000048, "Wrong size on BP_NPC_Base_C_SetupInteraction");
static_assert(offsetof(BP_NPC_Base_C_SetupInteraction, CallFunc_Delegates_self_CastInput) == 0x000000, "Member 'BP_NPC_Base_C_SetupInteraction::CallFunc_Delegates_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetupInteraction, CallFunc_Delegates_ReturnValue) == 0x000010, "Member 'BP_NPC_Base_C_SetupInteraction::CallFunc_Delegates_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetupInteraction, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_NPC_Base_C_SetupInteraction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetupInteraction, CallFunc_SetIndicatorInterface_self_CastInput) == 0x000028, "Member 'BP_NPC_Base_C_SetupInteraction::CallFunc_SetIndicatorInterface_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_NPC_Base_C_SetupInteraction, CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput) == 0x000038, "Member 'BP_NPC_Base_C_SetupInteraction::CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.�������_0
// 0x0008 (0x0008 - 0x0000)
struct BP_NPC_Base_C__________0 final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_Base_C__________0) == 0x000008, "Wrong alignment on BP_NPC_Base_C__________0");
static_assert(sizeof(BP_NPC_Base_C__________0) == 0x000008, "Wrong size on BP_NPC_Base_C__________0");
static_assert(offsetof(BP_NPC_Base_C__________0, InCharacter) == 0x000000, "Member 'BP_NPC_Base_C__________0::InCharacter' has a wrong offset!");

// Function BP_NPC_Base.BP_NPC_Base_C.�������_2
// 0x0050 (0x0050 - 0x0000)
struct BP_NPC_Base_C__________2 final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_NPC_Base_C__________2) == 0x000008, "Wrong alignment on BP_NPC_Base_C__________2");
static_assert(sizeof(BP_NPC_Base_C__________2) == 0x000050, "Wrong size on BP_NPC_Base_C__________2");
static_assert(offsetof(BP_NPC_Base_C__________2, DeadInfo) == 0x000000, "Member 'BP_NPC_Base_C__________2::DeadInfo' has a wrong offset!");

}

