#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_TRV_SWA_Boat_01.BP_TRV_SWA_Boat_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TRV_SWA_Boat_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_TRV_SWA_Boat_01_C", "UserConstructionScript");

	Params::ABP_TRV_SWA_Boat_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
