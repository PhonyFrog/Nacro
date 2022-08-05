#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Plant_Shrub_02.Plant_Shrub_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlant_Shrub_02_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Plant_Shrub_02_C", "UserConstructionScript");

	Params::APlant_Shrub_02_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_Shrub_02.Plant_Shrub_02_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void APlant_Shrub_02_C::OnLoot()
{
	static auto Func = Class->GetFunction("Plant_Shrub_02_C", "OnLoot");

	Params::APlant_Shrub_02_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_Shrub_02.Plant_Shrub_02_C.ExecuteUbergraph_Plant_Shrub_02
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlant_Shrub_02_C::ExecuteUbergraph_Plant_Shrub_02(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Plant_Shrub_02_C", "ExecuteUbergraph_Plant_Shrub_02");

	Params::APlant_Shrub_02_C_ExecuteUbergraph_Plant_Shrub_02_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
