#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Plant_PalmBush1.Plant_PalmBush1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlant_PalmBush1_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Plant_PalmBush1_C", "UserConstructionScript");

	Params::APlant_PalmBush1_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_PalmBush1.Plant_PalmBush1_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void APlant_PalmBush1_C::OnLoot()
{
	static auto Func = Class->GetFunction("Plant_PalmBush1_C", "OnLoot");

	Params::APlant_PalmBush1_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_PalmBush1.Plant_PalmBush1_C.ExecuteUbergraph_Plant_PalmBush1
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlant_PalmBush1_C::ExecuteUbergraph_Plant_PalmBush1(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Plant_PalmBush1_C", "ExecuteUbergraph_Plant_PalmBush1");

	Params::APlant_PalmBush1_C_ExecuteUbergraph_Plant_PalmBush1_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
