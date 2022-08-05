#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProp_Newspaper_Rack_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Prop_Newspaper_Rack_01_C", "UserConstructionScript");

	Params::AProp_Newspaper_Rack_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void AProp_Newspaper_Rack_01_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("Prop_Newspaper_Rack_01_C", "OnBeginSearch");

	Params::AProp_Newspaper_Rack_01_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void AProp_Newspaper_Rack_01_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Prop_Newspaper_Rack_01_C", "OnLootRepeat");

	Params::AProp_Newspaper_Rack_01_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.ExecuteUbergraph_Prop_Newspaper_Rack_01
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_Newspaper_Rack_01_C::ExecuteUbergraph_Prop_Newspaper_Rack_01(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Prop_Newspaper_Rack_01_C", "ExecuteUbergraph_Prop_Newspaper_Rack_01");

	Params::AProp_Newspaper_Rack_01_C_ExecuteUbergraph_Prop_Newspaper_Rack_01_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
