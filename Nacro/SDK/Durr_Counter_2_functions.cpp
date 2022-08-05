#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Durr_Counter_2.Durr_Counter_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADurr_Counter_2_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Durr_Counter_2_C", "UserConstructionScript");

	Params::ADurr_Counter_2_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Durr_Counter_2.Durr_Counter_2_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void ADurr_Counter_2_C::OnLoot()
{
	static auto Func = Class->GetFunction("Durr_Counter_2_C", "OnLoot");

	Params::ADurr_Counter_2_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Durr_Counter_2.Durr_Counter_2_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void ADurr_Counter_2_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Durr_Counter_2_C", "OnLootRepeat");

	Params::ADurr_Counter_2_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Durr_Counter_2.Durr_Counter_2_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void ADurr_Counter_2_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("Durr_Counter_2_C", "OnBeginSearch");

	Params::ADurr_Counter_2_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Durr_Counter_2.Durr_Counter_2_C.ExecuteUbergraph_Durr_Counter_2
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADurr_Counter_2_C::ExecuteUbergraph_Durr_Counter_2(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Durr_Counter_2_C", "ExecuteUbergraph_Durr_Counter_2");

	Params::ADurr_Counter_2_C_ExecuteUbergraph_Durr_Counter_2_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
