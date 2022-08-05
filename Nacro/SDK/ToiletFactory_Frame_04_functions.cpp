#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ToiletFactory_Frame_04.ToiletFactory_Frame_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AToiletFactory_Frame_04_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("ToiletFactory_Frame_04_C", "UserConstructionScript");

	Params::AToiletFactory_Frame_04_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ToiletFactory_Frame_04.ToiletFactory_Frame_04_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void AToiletFactory_Frame_04_C::OnLoot()
{
	static auto Func = Class->GetFunction("ToiletFactory_Frame_04_C", "OnLoot");

	Params::AToiletFactory_Frame_04_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ToiletFactory_Frame_04.ToiletFactory_Frame_04_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void AToiletFactory_Frame_04_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("ToiletFactory_Frame_04_C", "OnLootRepeat");

	Params::AToiletFactory_Frame_04_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ToiletFactory_Frame_04.ToiletFactory_Frame_04_C.OnBeginSearch
// (Event, Public, BlueprintEvent)
// Parameters:

void AToiletFactory_Frame_04_C::OnBeginSearch()
{
	static auto Func = Class->GetFunction("ToiletFactory_Frame_04_C", "OnBeginSearch");

	Params::AToiletFactory_Frame_04_C_OnBeginSearch_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ToiletFactory_Frame_04.ToiletFactory_Frame_04_C.ExecuteUbergraph_ToiletFactory_Frame_04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToiletFactory_Frame_04_C::ExecuteUbergraph_ToiletFactory_Frame_04(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("ToiletFactory_Frame_04_C", "ExecuteUbergraph_ToiletFactory_Frame_04");

	Params::AToiletFactory_Frame_04_C_ExecuteUbergraph_ToiletFactory_Frame_04_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
