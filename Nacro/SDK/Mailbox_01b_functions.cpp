#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Mailbox_01b.Mailbox_01b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMailbox_01b_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "UserConstructionScript");

	Params::AMailbox_01b_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_01b.Mailbox_01b_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void AMailbox_01b_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "OnLootRepeat");

	Params::AMailbox_01b_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_01b.Mailbox_01b_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void AMailbox_01b_C::OnLoot()
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "OnLoot");

	Params::AMailbox_01b_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_01b.Mailbox_01b_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void AMailbox_01b_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "OnBeginSearch");

	Params::AMailbox_01b_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_01b.Mailbox_01b_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMailbox_01b_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "ReceiveBeginPlay");

	Params::AMailbox_01b_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_01b.Mailbox_01b_C.ExecuteUbergraph_Mailbox_01b
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterForMissionEvents_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMailbox_01b_C::ExecuteUbergraph_Mailbox_01b(int32 EntryPoint, bool CallFunc_RegisterForMissionEvents_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Mailbox_01b_C", "ExecuteUbergraph_Mailbox_01b");

	Params::AMailbox_01b_C_ExecuteUbergraph_Mailbox_01b_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterForMissionEvents_ReturnValue = CallFunc_RegisterForMissionEvents_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
