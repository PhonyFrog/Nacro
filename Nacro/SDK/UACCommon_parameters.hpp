#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x18 (0x18 - 0x0)
// Function UACCommon.UACNetComponent.SendPacketToServer
struct UUACNetComponent_SendPacketToServer_Params
{
public:
	enum class EUACPacketType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Packet;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UACCommon.UACNetComponent.SendPacketToClient
struct UUACNetComponent_SendPacketToClient_Params
{
public:
	enum class EUACPacketType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Packet;                                            // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UACCommon.UACNetComponent.SendClientHello
struct UUACNetComponent_SendClientHello_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
