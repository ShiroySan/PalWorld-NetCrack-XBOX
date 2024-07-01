#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpreadSheetToCsv

#include "Basic.hpp"


namespace SDK::Params
{

// Function SpreadSheetToCsv.SpreadSheetImpoter.Create
// 0x0008 (0x0008 - 0x0000)
struct SpreadSheetImpoter_Create final
{
public:
	class USpreadSheetImpoter*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_Create) == 0x000008, "Wrong alignment on SpreadSheetImpoter_Create");
static_assert(sizeof(SpreadSheetImpoter_Create) == 0x000008, "Wrong size on SpreadSheetImpoter_Create");
static_assert(offsetof(SpreadSheetImpoter_Create, ReturnValue) == 0x000000, "Member 'SpreadSheetImpoter_Create::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.CreateSheetUrlString
// 0x0020 (0x0020 - 0x0000)
struct SpreadSheetImpoter_CreateSheetUrlString final
{
public:
	class FName                                   SheetId;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SheetNameId;                                       // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_CreateSheetUrlString) == 0x000008, "Wrong alignment on SpreadSheetImpoter_CreateSheetUrlString");
static_assert(sizeof(SpreadSheetImpoter_CreateSheetUrlString) == 0x000020, "Wrong size on SpreadSheetImpoter_CreateSheetUrlString");
static_assert(offsetof(SpreadSheetImpoter_CreateSheetUrlString, SheetId) == 0x000000, "Member 'SpreadSheetImpoter_CreateSheetUrlString::SheetId' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_CreateSheetUrlString, SheetNameId) == 0x000008, "Member 'SpreadSheetImpoter_CreateSheetUrlString::SheetNameId' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_CreateSheetUrlString, ReturnValue) == 0x000010, "Member 'SpreadSheetImpoter_CreateSheetUrlString::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.GetRequest
// 0x0020 (0x0020 - 0x0000)
struct SpreadSheetImpoter_GetRequest final
{
public:
	class FName                                   SheetId;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SheetName;                                         // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Key;                                               // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpreadSheetImpoter*                    ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_GetRequest) == 0x000008, "Wrong alignment on SpreadSheetImpoter_GetRequest");
static_assert(sizeof(SpreadSheetImpoter_GetRequest) == 0x000020, "Wrong size on SpreadSheetImpoter_GetRequest");
static_assert(offsetof(SpreadSheetImpoter_GetRequest, SheetId) == 0x000000, "Member 'SpreadSheetImpoter_GetRequest::SheetId' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_GetRequest, SheetName) == 0x000008, "Member 'SpreadSheetImpoter_GetRequest::SheetName' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_GetRequest, Key) == 0x000010, "Member 'SpreadSheetImpoter_GetRequest::Key' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_GetRequest, ReturnValue) == 0x000018, "Member 'SpreadSheetImpoter_GetRequest::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.FromString
// 0x0018 (0x0018 - 0x0000)
struct SpreadSheetImpoter_FromString final
{
public:
	class FString                                 Data;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BD5[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SpreadSheetImpoter_FromString) == 0x000008, "Wrong alignment on SpreadSheetImpoter_FromString");
static_assert(sizeof(SpreadSheetImpoter_FromString) == 0x000018, "Wrong size on SpreadSheetImpoter_FromString");
static_assert(offsetof(SpreadSheetImpoter_FromString, Data) == 0x000000, "Member 'SpreadSheetImpoter_FromString::Data' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_FromString, ReturnValue) == 0x000010, "Member 'SpreadSheetImpoter_FromString::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.PostProcessImport
// 0x0001 (0x0001 - 0x0000)
struct SpreadSheetImpoter_PostProcessImport final
{
public:
	bool                                          bAppliedPostProcess;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_PostProcessImport) == 0x000001, "Wrong alignment on SpreadSheetImpoter_PostProcessImport");
static_assert(sizeof(SpreadSheetImpoter_PostProcessImport) == 0x000001, "Wrong size on SpreadSheetImpoter_PostProcessImport");
static_assert(offsetof(SpreadSheetImpoter_PostProcessImport, bAppliedPostProcess) == 0x000000, "Member 'SpreadSheetImpoter_PostProcessImport::bAppliedPostProcess' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.ToCsvString
// 0x0010 (0x0010 - 0x0000)
struct SpreadSheetImpoter_ToCsvString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_ToCsvString) == 0x000008, "Wrong alignment on SpreadSheetImpoter_ToCsvString");
static_assert(sizeof(SpreadSheetImpoter_ToCsvString) == 0x000010, "Wrong size on SpreadSheetImpoter_ToCsvString");
static_assert(offsetof(SpreadSheetImpoter_ToCsvString, ReturnValue) == 0x000000, "Member 'SpreadSheetImpoter_ToCsvString::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.ToCsvStringForLocalizedText
// 0x0020 (0x0020 - 0x0000)
struct SpreadSheetImpoter_ToCsvStringForLocalizedText final
{
public:
	class FString                                 PickCultureName;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_ToCsvStringForLocalizedText) == 0x000008, "Wrong alignment on SpreadSheetImpoter_ToCsvStringForLocalizedText");
static_assert(sizeof(SpreadSheetImpoter_ToCsvStringForLocalizedText) == 0x000020, "Wrong size on SpreadSheetImpoter_ToCsvStringForLocalizedText");
static_assert(offsetof(SpreadSheetImpoter_ToCsvStringForLocalizedText, PickCultureName) == 0x000000, "Member 'SpreadSheetImpoter_ToCsvStringForLocalizedText::PickCultureName' has a wrong offset!");
static_assert(offsetof(SpreadSheetImpoter_ToCsvStringForLocalizedText, ReturnValue) == 0x000010, "Member 'SpreadSheetImpoter_ToCsvStringForLocalizedText::ReturnValue' has a wrong offset!");

// Function SpreadSheetToCsv.SpreadSheetImpoter.IsExistNewRecord
// 0x0001 (0x0001 - 0x0000)
struct SpreadSheetImpoter_IsExistNewRecord final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpreadSheetImpoter_IsExistNewRecord) == 0x000001, "Wrong alignment on SpreadSheetImpoter_IsExistNewRecord");
static_assert(sizeof(SpreadSheetImpoter_IsExistNewRecord) == 0x000001, "Wrong size on SpreadSheetImpoter_IsExistNewRecord");
static_assert(offsetof(SpreadSheetImpoter_IsExistNewRecord, ReturnValue) == 0x000000, "Member 'SpreadSheetImpoter_IsExistNewRecord::ReturnValue' has a wrong offset!");

}

