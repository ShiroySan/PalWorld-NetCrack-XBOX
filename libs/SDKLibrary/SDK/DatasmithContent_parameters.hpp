#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DatasmithContent

#include "Basic.hpp"


namespace SDK::Params
{

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// 0x0010 (0x0010 - 0x0000)
struct DatasmithContentBlueprintLibrary_GetDatasmithUserData final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDatasmithAssetUserData*                ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DatasmithContentBlueprintLibrary_GetDatasmithUserData) == 0x000008, "Wrong alignment on DatasmithContentBlueprintLibrary_GetDatasmithUserData");
static_assert(sizeof(DatasmithContentBlueprintLibrary_GetDatasmithUserData) == 0x000010, "Wrong size on DatasmithContentBlueprintLibrary_GetDatasmithUserData");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserData, Object) == 0x000000, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserData::Object' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserData, ReturnValue) == 0x000008, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserData::ReturnValue' has a wrong offset!");

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// 0x0038 (0x0038 - 0x0000)
struct DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringToMatch;                                     // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           OutKeys;                                           // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutValues;                                         // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue) == 0x000008, "Wrong alignment on DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue");
static_assert(sizeof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue) == 0x000038, "Wrong size on DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, Object) == 0x000000, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue::Object' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, StringToMatch) == 0x000008, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue::StringToMatch' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, OutKeys) == 0x000018, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue::OutKeys' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue, OutValues) == 0x000028, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue::OutValues' has a wrong offset!");

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// 0x0028 (0x0028 - 0x0000)
struct DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Key;                                               // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPartialMatchKey;                                  // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_232E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey) == 0x000008, "Wrong alignment on DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey");
static_assert(sizeof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey) == 0x000028, "Wrong size on DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, Object) == 0x000000, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey::Object' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, Key) == 0x000008, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey::Key' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, bPartialMatchKey) == 0x000010, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey::bPartialMatchKey' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey, ReturnValue) == 0x000018, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey::ReturnValue' has a wrong offset!");

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
// 0x0028 (0x0028 - 0x0000)
struct DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Key;                                               // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPartialMatchKey;                                  // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_232F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey) == 0x000008, "Wrong alignment on DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey");
static_assert(sizeof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey) == 0x000028, "Wrong size on DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey, Object) == 0x000000, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey::Object' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey, Key) == 0x000008, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey::Key' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey, bPartialMatchKey) == 0x000010, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey::bPartialMatchKey' has a wrong offset!");
static_assert(offsetof(DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey, ReturnValue) == 0x000018, "Member 'DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey::ReturnValue' has a wrong offset!");

// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// 0x0008 (0x0008 - 0x0000)
struct DatasmithImportedSequencesActor_PlayLevelSequence final
{
public:
	class ULevelSequence*                         SequenceToPlay;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DatasmithImportedSequencesActor_PlayLevelSequence) == 0x000008, "Wrong alignment on DatasmithImportedSequencesActor_PlayLevelSequence");
static_assert(sizeof(DatasmithImportedSequencesActor_PlayLevelSequence) == 0x000008, "Wrong size on DatasmithImportedSequencesActor_PlayLevelSequence");
static_assert(offsetof(DatasmithImportedSequencesActor_PlayLevelSequence, SequenceToPlay) == 0x000000, "Member 'DatasmithImportedSequencesActor_PlayLevelSequence::SequenceToPlay' has a wrong offset!");

}

