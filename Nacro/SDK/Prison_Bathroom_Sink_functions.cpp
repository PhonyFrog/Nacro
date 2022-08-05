#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrison_Bathroom_Sink_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Prison_Bathroom_Sink_C", "UserConstructionScript");

	Params::APrison_Bathroom_Sink_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void APrison_Bathroom_Sink_C::OnLoot()
{
	static auto Func = Class->GetFunction("Prison_Bathroom_Sink_C", "OnLoot");

	Params::APrison_Bathroom_Sink_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void APrison_Bathroom_Sink_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Prison_Bathroom_Sink_C", "OnLootRepeat");

	Params::APrison_Bathroom_Sink_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prison_Bathroom_Sink.Prison_Bathroom_Sink_C.ExecuteUbergraph_Prison_Bathroom_Sink
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrison_Bathroom_Sink_C::ExecuteUbergraph_Prison_Bathroom_Sink(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Prison_Bathroom_Sink_C", "ExecuteUbergraph_Prison_Bathroom_Sink");

	Params::APrison_Bathroom_Sink_C_ExecuteUbergraph_Prison_Bathroom_Sink_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
