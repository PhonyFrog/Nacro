#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x90 (0x180 - 0xF0)
// Class UACCommon.UACNetComponent
class UUACNetComponent : public UActorComponent
{
public:
	int32                                        PlayerID;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2456[0x8C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UACNetComponent");
		return Clss;
	}

	void SendPacketToServer(enum class EUACPacketType Type, TArray<uint8>& Packet);
	void SendPacketToClient(enum class EUACPacketType Type, TArray<uint8>& Packet);
	void SendClientHello();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
