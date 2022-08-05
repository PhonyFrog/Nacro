#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABedroom_Dresser_02_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Bedroom_Dresser_02_C", "UserConstructionScript");

	Params::ABedroom_Dresser_02_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void ABedroom_Dresser_02_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Bedroom_Dresser_02_C", "OnLootRepeat");

	Params::ABedroom_Dresser_02_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void ABedroom_Dresser_02_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("Bedroom_Dresser_02_C", "OnBeginSearch");

	Params::ABedroom_Dresser_02_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.ExecuteUbergraph_Bedroom_Dresser_02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABedroom_Dresser_02_C::ExecuteUbergraph_Bedroom_Dresser_02(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Bedroom_Dresser_02_C", "ExecuteUbergraph_Bedroom_Dresser_02");

	Params::ABedroom_Dresser_02_C_ExecuteUbergraph_Bedroom_Dresser_02_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
