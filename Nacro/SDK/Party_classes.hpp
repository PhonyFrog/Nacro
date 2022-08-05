#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AB4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Chatroom");
		return Clss;
	}

};

// 0x468 (0x490 - 0x28)
// Class Party.Party
class UParty : public UObject
{
public:
	uint8                                        Pad_1AB5[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultMaxPartySize;                               // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLeavingPersistentParty;                           // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AB6[0x3F3];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Party");
		return Clss;
	}

};

// 0x5B8 (0x5E0 - 0x28)
// Class Party.PartyGameState
class UPartyGameState : public UObject
{
public:
	class UScriptStruct*                         PartyStateRefDef;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AB7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningUserId;                                      // 0x38(0x18)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AB8[0x118];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDebugAcceptingMembers;                            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AB9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStayWithPartyOnDisconnect;                        // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPartyMemberState>         PartyMemberStateClass;                             // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABB[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABC[0x338];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyGameState");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class Party.PartyMemberState
class UPartyMemberState : public UObject
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x28(0x18)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class UScriptStruct*                         MemberStateRefDef;                                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasAnnouncedJoin;                                 // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ABE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyMemberState");
		return Clss;
	}

	bool IsPartyLeader();
	bool IsLocalPlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
