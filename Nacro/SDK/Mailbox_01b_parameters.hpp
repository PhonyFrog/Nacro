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
// 0x0 (0x0 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.UserConstructionScript
struct AMailbox_01b_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.OnLootRepeat
struct AMailbox_01b_C_OnLootRepeat_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.OnLoot
struct AMailbox_01b_C_OnLoot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.OnBeginSearch
struct AMailbox_01b_C_OnBeginSearch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.ReceiveBeginPlay
struct AMailbox_01b_C_ReceiveBeginPlay_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function Mailbox_01b.Mailbox_01b_C.ExecuteUbergraph_Mailbox_01b
struct AMailbox_01b_C_ExecuteUbergraph_Mailbox_01b_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RegisterForMissionEvents_ReturnValue;     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
