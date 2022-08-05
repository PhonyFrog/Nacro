#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Plant_Shrub_04.Plant_Shrub_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlant_Shrub_04_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Plant_Shrub_04_C", "UserConstructionScript");

	Params::APlant_Shrub_04_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
