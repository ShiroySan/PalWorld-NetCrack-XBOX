#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AndroidFileServer

#include "Basic.hpp"

#include "AndroidFileServer_structs.hpp"


namespace SDK::Params
{

// Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
// 0x0001 (0x0001 - 0x0000)
struct AndroidFileServerBPLibrary_IsFileServerRunning final
{
public:
	EAFSActiveType                                ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AndroidFileServerBPLibrary_IsFileServerRunning) == 0x000001, "Wrong alignment on AndroidFileServerBPLibrary_IsFileServerRunning");
static_assert(sizeof(AndroidFileServerBPLibrary_IsFileServerRunning) == 0x000001, "Wrong size on AndroidFileServerBPLibrary_IsFileServerRunning");
static_assert(offsetof(AndroidFileServerBPLibrary_IsFileServerRunning, ReturnValue) == 0x000000, "Member 'AndroidFileServerBPLibrary_IsFileServerRunning::ReturnValue' has a wrong offset!");

// Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
// 0x000C (0x000C - 0x0000)
struct AndroidFileServerBPLibrary_StartFileServer final
{
public:
	bool                                          bUSB;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNetwork;                                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24DB[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Port;                                              // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24DC[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AndroidFileServerBPLibrary_StartFileServer) == 0x000004, "Wrong alignment on AndroidFileServerBPLibrary_StartFileServer");
static_assert(sizeof(AndroidFileServerBPLibrary_StartFileServer) == 0x00000C, "Wrong size on AndroidFileServerBPLibrary_StartFileServer");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, bUSB) == 0x000000, "Member 'AndroidFileServerBPLibrary_StartFileServer::bUSB' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, bNetwork) == 0x000001, "Member 'AndroidFileServerBPLibrary_StartFileServer::bNetwork' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, Port) == 0x000004, "Member 'AndroidFileServerBPLibrary_StartFileServer::Port' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, ReturnValue) == 0x000008, "Member 'AndroidFileServerBPLibrary_StartFileServer::ReturnValue' has a wrong offset!");

// Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
// 0x0003 (0x0003 - 0x0000)
struct AndroidFileServerBPLibrary_StopFileServer final
{
public:
	bool                                          bUSB;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNetwork;                                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AndroidFileServerBPLibrary_StopFileServer) == 0x000001, "Wrong alignment on AndroidFileServerBPLibrary_StopFileServer");
static_assert(sizeof(AndroidFileServerBPLibrary_StopFileServer) == 0x000003, "Wrong size on AndroidFileServerBPLibrary_StopFileServer");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, bUSB) == 0x000000, "Member 'AndroidFileServerBPLibrary_StopFileServer::bUSB' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, bNetwork) == 0x000001, "Member 'AndroidFileServerBPLibrary_StopFileServer::bNetwork' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, ReturnValue) == 0x000002, "Member 'AndroidFileServerBPLibrary_StopFileServer::ReturnValue' has a wrong offset!");

}

