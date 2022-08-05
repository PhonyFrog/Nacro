#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Haystack_Prop.Haystack_Prop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHaystack_Prop_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Haystack_Prop_C", "UserConstructionScript");

	Params::AHaystack_Prop_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Haystack_Prop.Haystack_Prop_C.OnLootRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHaystack_Prop_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Haystack_Prop_C", "OnLootRepeat");

	Params::AHaystack_Prop_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Haystack_Prop.Haystack_Prop_C.OnBeginSearch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHaystack_Prop_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("Haystack_Prop_C", "OnBeginSearch");

	Params::AHaystack_Prop_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Haystack_Prop.Haystack_Prop_C.OnLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHaystack_Prop_C::OnLoot()
{
	static auto Func = Class->GetFunction("Haystack_Prop_C", "OnLoot");

	Params::AHaystack_Prop_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Haystack_Prop.Haystack_Prop_C.ExecuteUbergraph_Haystack_Prop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHaystack_Prop_C::ExecuteUbergraph_Haystack_Prop(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("Haystack_Prop_C", "ExecuteUbergraph_Haystack_Prop");

	Params::AHaystack_Prop_C_ExecuteUbergraph_Haystack_Prop_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
