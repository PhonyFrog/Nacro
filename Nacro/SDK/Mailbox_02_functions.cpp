#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Mailbox_02.Mailbox_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMailbox_02_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Mailbox_02_C", "UserConstructionScript");

	Params::AMailbox_02_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_02.Mailbox_02_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void AMailbox_02_C::OnLoot()
{
	static auto Func = Class->GetFunction("Mailbox_02_C", "OnLoot");

	Params::AMailbox_02_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_02.Mailbox_02_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void AMailbox_02_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Mailbox_02_C", "OnLootRepeat");

	Params::AMailbox_02_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mailbox_02.Mailbox_02_C.ExecuteUbergraph_Mailbox_02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMailbox_02_C::ExecuteUbergraph_Mailbox_02(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Mailbox_02_C", "ExecuteUbergraph_Mailbox_02");

	Params::AMailbox_02_C_ExecuteUbergraph_Mailbox_02_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
