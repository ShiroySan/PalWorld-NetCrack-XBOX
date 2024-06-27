#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalBulletCreator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PalBulletCreator.BP_PalBulletCreator_C.CreateBullet
// 0x0150 (0x0150 - 0x0000)
struct BP_PalBulletCreator_C_CreateBullet final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         Weapon;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class APalBullet>                 BulletClass;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_1255[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnTransform;                                    // 0x0020(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpawnActorCollisionHandlingMethod            CollisionHandlingOverride;                         // 0x0080(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1256[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Owner;                                             // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Instigator;                                        // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                             ReturnValue;                                       // 0x0098(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                             CreatedBullet;                                     // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1257[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalPassiveSkillEffect>         CallFunc_GetSkillEffectList_ReturnValue;           // 0x00B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSneakAttackRate_ReturnValue;           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalPassiveSkillEffect>         CallFunc_GetSkillEffectList_ReturnValue_1;         // 0x00C8(0x0010)(ReferenceParm)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1258[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBullet*                             CallFunc_SpawnBullet_ReturnValue;                  // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPassiveSkillEffect                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0030)()
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1259[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBulletModifierComponent*            CallFunc_AddComponentByClass_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_125A[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBulletCreator_C_CreateBullet) == 0x000010, "Wrong alignment on BP_PalBulletCreator_C_CreateBullet");
static_assert(sizeof(BP_PalBulletCreator_C_CreateBullet) == 0x000150, "Wrong size on BP_PalBulletCreator_C_CreateBullet");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, WorldContextObject) == 0x000000, "Member 'BP_PalBulletCreator_C_CreateBullet::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, Weapon) == 0x000008, "Member 'BP_PalBulletCreator_C_CreateBullet::Weapon' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, BulletClass) == 0x000010, "Member 'BP_PalBulletCreator_C_CreateBullet::BulletClass' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, SpawnTransform) == 0x000020, "Member 'BP_PalBulletCreator_C_CreateBullet::SpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CollisionHandlingOverride) == 0x000080, "Member 'BP_PalBulletCreator_C_CreateBullet::CollisionHandlingOverride' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, Owner) == 0x000088, "Member 'BP_PalBulletCreator_C_CreateBullet::Owner' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, Instigator) == 0x000090, "Member 'BP_PalBulletCreator_C_CreateBullet::Instigator' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, ReturnValue) == 0x000098, "Member 'BP_PalBulletCreator_C_CreateBullet::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CreatedBullet) == 0x0000A0, "Member 'BP_PalBulletCreator_C_CreateBullet::CreatedBullet' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_IsValidClass_ReturnValue) == 0x0000A8, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_IsValid_ReturnValue_1) == 0x0000AA, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_GetSkillEffectList_ReturnValue) == 0x0000B0, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_GetSkillEffectList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_GetSneakAttackRate_ReturnValue) == 0x0000C4, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_GetSneakAttackRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_GetSkillEffectList_ReturnValue_1) == 0x0000C8, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_GetSkillEffectList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x0000D8, "Member 'BP_PalBulletCreator_C_CreateBullet::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'BP_PalBulletCreator_C_CreateBullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_SpawnBullet_ReturnValue) == 0x0000E8, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_SpawnBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'BP_PalBulletCreator_C_CreateBullet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_GetWeaponDamage_ReturnValue) == 0x0000F4, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Map_Find_Value) == 0x000128, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Map_Find_ReturnValue) == 0x000130, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_AddComponentByClass_ReturnValue) == 0x000138, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, Temp_int_Loop_Counter_Variable) == 0x000140, "Member 'BP_PalBulletCreator_C_CreateBullet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBulletCreator_C_CreateBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000148, "Member 'BP_PalBulletCreator_C_CreateBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

