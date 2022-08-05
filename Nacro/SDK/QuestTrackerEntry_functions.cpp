#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function QuestTrackerEntry.QuestTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTrackerEntry_C::Construct()
{
	static auto Func = Class->GetFunction("QuestTrackerEntry_C", "Construct");

	Params::UQuestTrackerEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function QuestTrackerEntry.QuestTrackerEntry_C.OnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestTrackerEntry_C::OnSetup()
{
	static auto Func = Class->GetFunction("QuestTrackerEntry_C", "OnSetup");

	Params::UQuestTrackerEntry_C_OnSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTrackerEntry_C::ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("QuestTrackerEntry_C", "ExecuteUbergraph_QuestTrackerEntry");

	Params::UQuestTrackerEntry_C_ExecuteUbergraph_QuestTrackerEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
