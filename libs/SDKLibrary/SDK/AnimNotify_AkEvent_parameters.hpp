#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AkEvent

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// 0x0130 (0x0130 - 0x0000)
struct AnimNotify_AkEvent_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_400D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindOwnerActor_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_400E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_400F[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0088(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAkEventSoundByActor_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4010[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAkComponent_ComponentCreated;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4011[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetAkComponent_ReturnValue;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_AkEvent_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_AkEvent_C_Received_Notify");
static_assert(sizeof(AnimNotify_AkEvent_C_Received_Notify) == 0x000130, "Wrong size on AnimNotify_AkEvent_C_Received_Notify");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_AkEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_AkEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_AkEvent_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_AkEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000040, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_FindOwnerActor_ReturnValue) == 0x000048, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_FindOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor) == 0x000058, "Member 'AnimNotify_AkEvent_C_Received_Notify::K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'AnimNotify_AkEvent_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_IsDead_ReturnValue) == 0x000061, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, Temp_delegate_Variable) == 0x000088, "Member 'AnimNotify_AkEvent_C_Received_Notify::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_PlayAkEventSoundByActor_ReturnValue) == 0x000098, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_PlayAkEventSoundByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue_1) == 0x0000A0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x0000A8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue_1) == 0x0000B8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue) == 0x000108, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetAkComponent_ComponentCreated) == 0x000110, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetAkComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetAkComponent_ReturnValue) == 0x000118, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetAkComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_PostEventAtLocation_ReturnValue) == 0x000120, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_PostAkEvent_ReturnValue) == 0x000124, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

